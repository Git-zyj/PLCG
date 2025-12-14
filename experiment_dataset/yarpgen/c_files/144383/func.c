/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144383
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */int) ((((((/* implicit */int) ((unsigned short) var_11))) == (((var_1) ? (((/* implicit */int) var_7)) : (var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3]))) < (arr_3 [i_0] [i_2 - 2] [i_3 + 3]))))) : (max(((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (4833497921230379589ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23957))) == (arr_3 [i_0] [i_2 - 2] [i_0]))))))));
                        arr_11 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) min(((-(arr_2 [i_0]))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) : (((/* implicit */int) var_7))))))) + ((~(((arr_3 [3] [i_2 + 1] [i_1]) - (((/* implicit */unsigned int) arr_2 [i_3]))))))));
                        arr_12 [i_2] [i_2] [i_2 + 1] [i_3] = ((/* implicit */signed char) -2041304840);
                    }
                    for (signed char i_4 = 3; i_4 < 16; i_4 += 2) 
                    {
                        var_16 = (!(var_9));
                        var_17 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_2])))))) & (var_0)));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_6 [i_2 - 2] [i_2]), (arr_6 [i_2 + 1] [i_2])))) ? (var_13) : (((/* implicit */unsigned long long int) ((unsigned int) arr_3 [i_2 - 2] [(unsigned short)14] [i_2 - 3])))));
                    }
                    var_19 = ((/* implicit */unsigned short) (+(arr_14 [i_0] [i_0] [i_2 + 1] [i_2 - 3] [i_2 - 3] [i_2])));
                }
            } 
        } 
        var_20 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) arr_4 [i_0])), (arr_6 [i_0] [i_0])))), (4833497921230379571ULL)));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_21 = ((/* implicit */short) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_1))));
        var_22 = ((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned short) arr_15 [i_5]))))) ? (max((var_8), (((/* implicit */unsigned long long int) arr_16 [i_5])))) : (((/* implicit */unsigned long long int) (-(var_0)))));
        var_23 = ((/* implicit */unsigned int) var_10);
    }
    /* LoopNest 3 */
    for (unsigned char i_6 = 3; i_6 < 19; i_6 += 3) 
    {
        for (int i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            for (int i_8 = 2; i_8 < 19; i_8 += 2) 
            {
                {
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_24 [i_7]), (((/* implicit */unsigned int) arr_21 [i_6 - 1] [i_6 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_23 [i_8] [i_8 + 1] [i_8])), ((unsigned char)141))))) : (var_10)));
                    var_25 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_6 - 1])) ? (arr_24 [i_6 - 1]) : (((((/* implicit */_Bool) arr_24 [i_6 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_24 [i_6 + 3])))));
                }
            } 
        } 
    } 
}
