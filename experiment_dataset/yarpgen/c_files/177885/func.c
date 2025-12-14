/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177885
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
    var_18 = ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_3)));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                var_19 = max((((short) arr_1 [i_0])), (((/* implicit */short) arr_2 [i_0])));
                var_20 ^= ((/* implicit */unsigned long long int) var_7);
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    var_21 = ((/* implicit */int) max((var_21), (min((((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 1] [i_0] [i_0 - 1])) || (((/* implicit */_Bool) arr_2 [i_0]))))) % (((/* implicit */int) ((short) arr_5 [i_0] [(unsigned char)10] [i_2]))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) && (((/* implicit */_Bool) max((var_4), (var_16)))))))))));
                    var_22 = ((/* implicit */unsigned short) arr_1 [i_0]);
                    arr_6 [i_0] [i_2] [(unsigned short)22] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_15) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1])))))) ? ((~(4692741920803159497LL))) : (((/* implicit */long long int) ((1749213147U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1]))))))));
                    arr_7 [i_2] [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */short) min(((-(((((/* implicit */_Bool) arr_4 [i_0 - 1] [2] [i_0 - 1] [i_2])) ? (arr_4 [i_1 + 2] [i_1] [i_1] [i_1]) : (var_13))))), (((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) arr_5 [(short)21] [i_2] [i_0 + 1])), (var_10)))))));
                }
                arr_8 [i_0 - 1] = ((/* implicit */unsigned char) ((unsigned int) (~(((/* implicit */int) arr_1 [i_0 + 1])))));
                arr_9 [i_1] = ((/* implicit */long long int) arr_1 [(_Bool)1]);
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((long long int) (-(max((((/* implicit */int) (short)-32755)), (-1))))));
}
