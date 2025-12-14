/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174255
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
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_2 [i_0] [i_0] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))) : ((((-(9449367048833439467ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_14))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_11 [i_2] [i_4] [(unsigned char)0] [(_Bool)1] [i_4])) ? (arr_1 [i_0 + 1] [i_2]) : (((/* implicit */long long int) var_2)))) >> (((((/* implicit */int) arr_6 [i_2] [i_0 + 1] [i_0 + 2])) - (20791)))))) != (min((arr_2 [i_2] [i_3] [i_4]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0 + 2] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_1] [i_4] [i_4]))))))))))));
                                arr_13 [i_0] [i_1] = ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) arr_3 [i_0] [i_0] [i_0 + 1])))) : (((((/* implicit */int) arr_3 [i_0] [i_0] [i_0 - 1])) * (((/* implicit */int) arr_3 [i_0 + 1] [i_0] [i_0 - 1])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 *= ((/* implicit */signed char) min((((/* implicit */long long int) var_8)), (max((((((/* implicit */long long int) ((/* implicit */int) var_10))) + (var_1))), (((/* implicit */long long int) var_3))))));
    var_20 = ((/* implicit */short) min(((-(((/* implicit */int) var_11)))), (var_12)));
}
