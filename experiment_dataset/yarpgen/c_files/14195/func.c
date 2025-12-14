/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14195
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
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [12U] [i_1] [(unsigned char)10] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0] [(unsigned char)11] [11LL] [i_0 + 1]))));
                    var_17 = (~(arr_7 [i_0] [i_0] [i_0 + 1] [i_0 + 1]));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) arr_6 [i_1]);
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 1462600806)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [(signed char)11] [i_3] [i_3]))) : (arr_3 [i_2] [i_3]))), (min((1544871314U), (2023785065U)))))) ? (1835691459U) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1])))))));
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) 1544871314U))));
                    }
                    arr_11 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [4U] [i_1] [9] [9]))) == (4294967267U)))));
                    var_21 &= ((/* implicit */int) arr_9 [i_0 + 1] [13LL] [i_0] [i_0] [i_0]);
                }
            } 
        } 
        var_22 = ((/* implicit */short) arr_3 [i_0] [i_0]);
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_4);
        arr_13 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)62706)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [8U] [i_0 - 1] [i_0 - 1] [i_0] [i_0]))) : (2468128515U))) > (((unsigned int) arr_6 [i_0])))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_17 [i_4] = var_3;
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((signed char) (~(((((/* implicit */_Bool) 4294967267U)) ? (((/* implicit */int) arr_10 [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_15 [i_4] [i_4]))))))))));
    }
    var_24 = ((/* implicit */signed char) ((short) var_0));
    var_25 |= ((/* implicit */unsigned short) var_13);
}
