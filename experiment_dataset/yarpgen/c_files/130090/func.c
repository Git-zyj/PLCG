/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130090
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
    var_18 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) var_3)))), (((/* implicit */int) var_16))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)212))) * (var_13)))) ? (((/* implicit */long long int) max((arr_3 [i_1]), (((/* implicit */unsigned int) var_14))))) : (var_17))) * (((/* implicit */long long int) (+(397525222U))))));
                                arr_17 [i_2] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)54)))))));
                                arr_18 [i_2] [i_3 - 2] [i_3 - 2] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_6)))))) == (var_0))))));
                            }
                        } 
                    } 
                } 
                arr_19 [i_1] = ((/* implicit */unsigned short) arr_0 [i_0]);
                arr_20 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)44)) * (((/* implicit */int) (unsigned char)212))));
            }
        } 
    } 
}
