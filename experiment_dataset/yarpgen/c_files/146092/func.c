/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146092
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
    var_18 = ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)21312))) / (arr_4 [i_1] [i_1]))), (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0]))))))) * (((min((((/* implicit */long long int) arr_2 [(unsigned short)18] [i_0] [i_0])), (var_14))) / (((/* implicit */long long int) var_11)))));
                arr_6 [i_0] [i_0] [18LL] |= (-(268435455LL));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_19 *= ((/* implicit */signed char) arr_1 [i_0 - 2]);
                            var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */int) arr_10 [i_1] [i_1] [i_0])) - (((((/* implicit */int) (signed char)57)) << (((((/* implicit */int) arr_0 [2LL])) + (8910)))))))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3])))))))) <= (var_14))))));
                            arr_13 [18] [i_1] [i_2] [18] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_3 [i_0])) << (((((/* implicit */int) var_15)) - (30573))))), (((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_3 [i_0]))))));
                        }
                    } 
                } 
                var_22 &= ((/* implicit */signed char) ((int) (-(((/* implicit */int) (short)(-32767 - 1))))));
            }
        } 
    } 
}
