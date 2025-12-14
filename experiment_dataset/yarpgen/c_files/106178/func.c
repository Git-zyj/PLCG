/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106178
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
    var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4393))) + (min((((/* implicit */unsigned long long int) (-(var_11)))), ((-(18259990105692513061ULL)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                var_17 ^= ((/* implicit */unsigned char) arr_2 [i_0]);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (-9223372036854775807LL - 1LL)))));
                            var_19 = ((/* implicit */unsigned int) max(((~(min((((/* implicit */long long int) (signed char)-2)), (var_5))))), (((((/* implicit */_Bool) arr_5 [i_0] [(signed char)10] [i_1] [11])) ? (((/* implicit */long long int) arr_5 [i_0] [i_1 - 2] [i_1] [i_1 - 2])) : ((-9223372036854775807LL - 1LL))))));
                            var_20 = ((/* implicit */long long int) max(((-(var_10))), (((/* implicit */int) ((signed char) arr_4 [i_1])))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) max(((~(((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_0])))))))));
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)31888)) ? (((/* implicit */int) var_3)) : (arr_7 [i_0] [i_0])))))) ? ((~((+(arr_6 [i_0] [(unsigned char)1] [i_0] [(unsigned char)1]))))) : ((-(((long long int) arr_5 [i_0 + 3] [0LL] [i_0] [i_0 + 2])))))))));
            }
        } 
    } 
}
