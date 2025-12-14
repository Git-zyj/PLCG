/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138711
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
    var_16 = ((/* implicit */long long int) var_5);
    var_17 |= ((/* implicit */unsigned int) var_0);
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) & ((+(((/* implicit */int) var_11))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_9 [11LL] [i_1] [i_2 - 2] = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) (unsigned char)37)) >> (((((/* implicit */int) var_5)) + (120))))) ^ (-528156997))) / ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) && (((/* implicit */_Bool) var_7)))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        arr_12 [i_3] = ((/* implicit */unsigned short) ((arr_0 [i_2 - 1] [i_3]) < (arr_0 [i_2 - 2] [i_3])));
                        arr_13 [i_3] [i_3] = ((/* implicit */unsigned long long int) var_15);
                        arr_14 [i_0] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)88)) ? (-1492234529656486895LL) : (((/* implicit */long long int) 1668119226U))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_17 [4] [2] [i_1] [i_2] [i_4] = ((/* implicit */unsigned int) arr_15 [(short)2]);
                        arr_18 [i_0] [(unsigned char)6] [i_0] [(unsigned char)6] [i_4] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2 + 1]))) < (((((/* implicit */_Bool) 234415625U)) ? (-1731129940597100080LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248))))))))));
                        arr_19 [i_0] [i_0] [i_2] [(unsigned short)7] [(unsigned short)7] = ((/* implicit */_Bool) (~((~(arr_5 [i_0 - 3] [i_0 + 1])))));
                    }
                }
            } 
        } 
    } 
    var_19 = ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((signed char) 3934359113U))) : (-2111378987))) == (((/* implicit */int) ((((/* implicit */int) ((unsigned char) (unsigned char)180))) <= (((/* implicit */int) var_6))))));
}
