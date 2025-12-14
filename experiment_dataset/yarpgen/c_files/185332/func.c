/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185332
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
    var_18 = ((/* implicit */long long int) var_12);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) arr_0 [i_1]))))) ? (((((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)93))) : (arr_3 [i_0]))) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-124))))) : (((long long int) var_17)))))));
                var_20 ^= var_10;
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            {
                var_21 = ((/* implicit */int) min((var_21), ((-(((/* implicit */int) var_7))))));
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    var_22 = (i_3 % 2 == 0) ? (min((((((var_5) + (9223372036854775807LL))) << (((((arr_11 [i_3] [i_3] [i_2] [i_3]) + (392209221))) - (33))))), (((/* implicit */long long int) var_7)))) : (min((((((var_5) + (9223372036854775807LL))) << (((((((arr_11 [i_3] [i_3] [i_2] [i_3]) + (392209221))) - (33))) - (791306177))))), (((/* implicit */long long int) var_7))));
                    arr_12 [i_2] [i_3] [i_4] = ((/* implicit */signed char) max((((_Bool) arr_1 [i_2])), (((arr_8 [i_4]) <= (((/* implicit */int) var_17))))));
                    var_23 |= ((/* implicit */_Bool) var_6);
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_20 [i_2] [i_6] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_3] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (arr_14 [i_6 - 1] [i_3] [i_4] [i_6 - 1] [i_4]) : (var_11)))) + (arr_18 [i_3] [i_5 + 1] [i_3] [i_5 + 1] [i_6 - 1])))) ? (((int) var_7)) : (((-1) + (arr_11 [i_3] [i_3] [i_3] [(_Bool)1])))));
                                arr_21 [i_3] [i_3] [i_3] [16] = ((/* implicit */int) min(((-(arr_18 [i_6 - 1] [i_5 + 1] [i_3] [i_6 - 1] [i_5 + 1]))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-124)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_7 = 4; i_7 < 16; i_7 += 3) 
                    {
                        var_24 = ((/* implicit */signed char) ((int) ((((/* implicit */int) arr_19 [i_7 + 3] [i_7 + 3] [i_7 + 3] [i_3] [i_7 + 3])) & (((/* implicit */int) arr_19 [i_7 - 2] [i_7 - 2] [i_7 - 4] [i_3] [i_7 - 4])))));
                        arr_24 [i_2] [i_3] [i_2] [i_2] [i_4] [3LL] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 1)) && (((/* implicit */_Bool) -1669704797))))), (max((((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_3]))) ^ (var_8))), (((((/* implicit */_Bool) var_16)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))))));
                    }
                }
            }
        } 
    } 
}
