/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111449
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 19; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (-(((int) 5375603951985783380ULL)))))));
                            arr_13 [i_0] [i_1 - 1] [i_1] [i_1] [i_2] [(unsigned char)7] = ((/* implicit */long long int) arr_3 [14]);
                        }
                    } 
                } 
                var_14 = arr_6 [i_1];
                var_15 = ((/* implicit */unsigned int) arr_1 [i_0 - 1]);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (var_11)));
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (min((((/* implicit */unsigned long long int) var_1)), (max((((/* implicit */unsigned long long int) var_8)), (var_2)))))));
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) min((-5694693038708738891LL), (((((/* implicit */_Bool) (short)16384)) ? (((/* implicit */long long int) ((/* implicit */int) (short)16384))) : (3448051591032908094LL)))))) ? (((/* implicit */int) (short)-16399)) : (((/* implicit */int) (unsigned char)91)))))));
}
