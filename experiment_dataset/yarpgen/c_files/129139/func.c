/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129139
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */long long int) ((((max((arr_4 [i_0]), (arr_8 [i_0] [i_0] [i_2]))) <= (((long long int) arr_0 [i_0])))) || (((/* implicit */_Bool) var_5))));
                    var_16 |= ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)110)), (arr_0 [i_0])))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_4] [i_2] [i_1] [i_4] [(unsigned short)4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned int) arr_3 [i_2] [i_1] [i_0])) | (var_2)))))) ? (((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_7 [i_0]) : (arr_7 [i_0]))) : (((/* implicit */int) (_Bool)1))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_11 [i_2])), ((~(((/* implicit */int) var_0))))))) || (((((long long int) arr_12 [i_0])) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_5 = 1; i_5 < 14; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (short i_6 = 4; i_6 < 16; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) (+((~(var_5)))));
                    arr_21 [i_5] [i_5] [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                    arr_22 [i_5] [i_5 + 3] [i_5 + 3] [i_5] = ((/* implicit */int) var_1);
                    arr_23 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) (_Bool)1);
                }
            } 
        } 
        arr_24 [i_5] = ((/* implicit */unsigned int) arr_18 [i_5] [i_5] [i_5]);
        arr_25 [i_5] = ((((/* implicit */_Bool) -9223372036854775802LL)) ? ((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)2047)) >= (((/* implicit */int) (_Bool)1))))));
        var_18 -= ((/* implicit */long long int) (~(var_1)));
    }
    for (short i_8 = 1; i_8 < 18; i_8 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) min((((/* implicit */int) var_4)), (((((/* implicit */int) ((_Bool) -1827799605))) * (((/* implicit */int) var_9))))));
        /* LoopNest 3 */
        for (int i_9 = 2; i_9 < 18; i_9 += 3) 
        {
            for (unsigned char i_10 = 0; i_10 < 19; i_10 += 1) 
            {
                for (int i_11 = 0; i_11 < 19; i_11 += 3) 
                {
                    {
                        var_20 *= ((/* implicit */signed char) (((~((~(((/* implicit */int) var_9)))))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)15)))))));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned short) var_0))))), (max((arr_0 [i_8 - 1]), (arr_0 [i_8 + 1]))))))));
                        var_23 = ((/* implicit */unsigned char) ((((((var_11) != (var_3))) ? (var_11) : (arr_34 [i_9 - 1] [i_9 + 1] [i_9]))) != (((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_0)) ? (arr_31 [i_8] [i_8] [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_8] [i_11]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_5 [i_8])))))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned int) min((var_24), (max((((unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) var_10))))));
    }
    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (-(var_14))))));
    var_26 = ((unsigned int) (unsigned short)63485);
    var_27 = ((/* implicit */int) var_9);
}
