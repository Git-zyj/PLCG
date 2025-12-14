/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136427
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
    var_13 = ((/* implicit */signed char) var_9);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) ((4026068429339118879LL) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_14 = (~((((!(((/* implicit */_Bool) -4026068429339118880LL)))) ? (4026068429339118879LL) : (((((/* implicit */_Bool) -4026068429339118880LL)) ? (-4026068429339118880LL) : (-4026068429339118895LL))))));
                                var_15 = ((/* implicit */signed char) ((long long int) arr_1 [i_1]));
                                var_16 = ((/* implicit */signed char) max((var_16), (((signed char) -4026068429339118894LL))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 1; i_5 < 13; i_5 += 4) 
                {
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        {
                            arr_20 [i_0] [i_1] [i_0] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) & (((/* implicit */int) (signed char)0)))))));
                            arr_21 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_5 + 2] [i_0 - 2] [i_0 + 2] [i_0 - 1])))))));
                            var_17 = ((/* implicit */long long int) ((signed char) min((arr_9 [i_0] [i_0] [i_6] [i_0 + 2]), (((((/* implicit */_Bool) -4026068429339118896LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)122))) : (-4026068429339118880LL))))));
                            arr_22 [i_0] [i_0] [i_5 - 1] [(signed char)5] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((long long int) -4297928987311686478LL))))) / (((-4026068429339118893LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-58)))))));
                        }
                    } 
                } 
                var_18 ^= ((/* implicit */long long int) ((signed char) ((long long int) 16LL)));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) min((((/* implicit */int) ((signed char) (~(((/* implicit */int) (signed char)4)))))), (((((/* implicit */_Bool) (+(4026068429339118895LL)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-42))))));
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_5)))))));
}
