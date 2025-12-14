/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121714
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_12 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) (((~(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (1773030689428976655LL))))) == (((long long int) arr_0 [i_0]))));
        var_14 = var_2;
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 15; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (((~(var_11))) | (((/* implicit */long long int) (~(((/* implicit */int) min((var_2), (((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_3]))))))))));
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)224)) < (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) 952095492)) : (var_9))), (((/* implicit */long long int) ((unsigned char) var_11)))))) ? (max(((((_Bool)0) ? (2128314007U) : (var_3))), (((/* implicit */unsigned int) max((var_2), ((unsigned short)65308)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_4])) ? (((/* implicit */int) arr_8 [(_Bool)0])) : (((/* implicit */int) (signed char)2)))))));
        var_17 += (signed char)31;
        /* LoopNest 2 */
        for (unsigned short i_5 = 1; i_5 < 15; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 3; i_8 < 14; i_8 += 4) 
                        {
                            {
                                var_18 += ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_21 [i_5] [12] [(signed char)0] [i_5] [i_5 - 1]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_6 + 1] [i_5 - 1] [i_6]))))))) % (max((arr_21 [i_5] [i_5 - 1] [(signed char)12] [(signed char)12] [i_5 - 1]), (((/* implicit */unsigned int) (signed char)-96))))));
                                arr_26 [12LL] [i_5] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)209)) : (((/* implicit */int) (_Bool)1))))), (max((var_11), (((/* implicit */long long int) (unsigned short)65322))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_4]), (arr_0 [i_4]))))) : ((+(arr_11 [i_4] [i_4] [(_Bool)1] [i_4])))));
                                arr_27 [i_7] [i_5] = ((/* implicit */unsigned int) var_9);
                            }
                        } 
                    } 
                    arr_28 [i_5] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_24 [i_4] [i_4] [i_6] [7LL] [i_5]))) & (((/* implicit */int) (unsigned short)53690))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)53690)) : (((/* implicit */int) (signed char)115)))))) : (min(((~(((/* implicit */int) arr_1 [i_5])))), (((/* implicit */int) min(((unsigned short)11846), (arr_7 [i_4] [(signed char)7] [i_5] [i_6]))))))));
                    arr_29 [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)65340)), (2373875452U)))) ? (((/* implicit */int) ((unsigned short) arr_22 [i_6 + 1] [i_5] [i_6 + 1] [i_6 + 1]))) : ((~((~(((/* implicit */int) (unsigned short)43681))))))));
                    arr_30 [i_4] [i_5] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)4)) >> (((((/* implicit */int) (unsigned short)213)) - (188)))));
                }
            } 
        } 
    }
}
