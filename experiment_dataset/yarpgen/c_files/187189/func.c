/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187189
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
    var_19 = ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) arr_2 [i_1] [i_0]))));
                arr_4 [i_0] = ((/* implicit */short) 2146435072);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_2])) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) (signed char)104)))) >= (((((/* implicit */int) var_7)) / (((/* implicit */int) (_Bool)1))))))) & (((((/* implicit */_Bool) ((short) arr_6 [i_0 - 2] [i_2] [i_3]))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3]))))));
                            var_22 = ((/* implicit */short) (+((+(2146435073)))));
                            arr_10 [i_2] [i_0 - 2] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_1]);
                            arr_11 [i_0] [i_0] [i_1] [i_1] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_6)))))) / ((-(arr_3 [i_0 - 3] [i_0 - 3])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 *= ((/* implicit */unsigned int) (+(((/* implicit */int) var_12))));
    var_24 = ((/* implicit */short) (-(-2146435072)));
}
