/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184514
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
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    var_17 = ((/* implicit */_Bool) min((var_17), (((_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) arr_3 [i_1] [(short)4] [i_2])))))));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_4 [i_2] [i_1]) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) arr_4 [i_1] [i_2]))))) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (short)32752))));
                }
                for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    arr_12 [i_0] = ((/* implicit */int) var_13);
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            {
                                arr_18 [i_0] [(short)7] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_17 [i_0 + 3] [i_1] [i_3] [(unsigned char)5] [i_5]);
                                arr_19 [i_0] = ((/* implicit */unsigned char) (short)16383);
                                var_19 ^= ((/* implicit */short) var_16);
                                var_20 += ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (((/* implicit */int) arr_5 [i_0 - 2])) : (((/* implicit */int) arr_5 [i_0 - 2]))))));
                            }
                        } 
                    } 
                }
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((min((arr_16 [i_1] [i_1] [i_1] [i_0] [i_1] [i_0]), (var_3))) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 3])))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((var_8) != (((((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */int) var_2)))) & (((/* implicit */int) max((((/* implicit */short) (unsigned char)170)), ((short)0))))))));
    var_23 |= ((/* implicit */signed char) var_13);
}
