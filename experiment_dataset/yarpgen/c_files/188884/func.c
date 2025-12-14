/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188884
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
    var_19 = ((/* implicit */short) var_16);
    var_20 = var_18;
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 4; i_2 < 13; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        arr_12 [i_3] |= ((/* implicit */short) ((((/* implicit */int) ((_Bool) ((signed char) arr_0 [2] [2])))) + (((/* implicit */int) arr_9 [4U] [i_1] [i_1]))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) (unsigned short)63187)))), (((/* implicit */int) var_17))));
                            var_22 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)32767)) ? (268292172U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)2350)) <= (((/* implicit */int) (short)-32759))))))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) (unsigned short)18597)))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_5 [i_1 + 2] [i_1 - 2])), (arr_9 [i_0] [(short)3] [i_2])))) : (((((/* implicit */_Bool) arr_3 [i_1 + 3] [i_2])) ? (((/* implicit */int) arr_5 [i_2 - 2] [14])) : (((/* implicit */int) arr_5 [i_2 + 1] [i_1 + 3]))))));
                            var_24 = min((((/* implicit */unsigned long long int) arr_17 [i_0])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -517971491)) ? (((/* implicit */int) arr_16 [i_0] [i_0] [(short)14] [(unsigned short)14] [(unsigned short)1] [i_2] [i_0])) : (((/* implicit */int) (signed char)112))))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_3 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) + (((/* implicit */int) (signed char)33))))))));
                            var_25 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_13 [i_0] [i_2])))) ? (((((/* implicit */_Bool) arr_13 [2ULL] [i_2])) ? (((/* implicit */int) arr_8 [(unsigned char)0] [i_1] [i_2] [i_1 - 2])) : (((/* implicit */int) arr_13 [i_0] [i_2])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_2])) || (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_1 - 2])))))));
                        }
                    }
                } 
            } 
            arr_18 [i_0] [i_0] = ((/* implicit */unsigned short) arr_9 [10U] [(_Bool)1] [i_0]);
            var_26 = ((/* implicit */signed char) (((~(((/* implicit */int) ((signed char) var_3))))) * (((/* implicit */int) min((arr_10 [i_0] [i_0] [i_0] [i_1 - 1]), (((/* implicit */signed char) arr_16 [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_0] [i_1 - 1])))))));
        }
        arr_19 [i_0] = ((/* implicit */signed char) ((int) (~(((/* implicit */int) (unsigned char)232)))));
    }
}
