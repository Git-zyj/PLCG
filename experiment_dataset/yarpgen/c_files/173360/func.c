/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173360
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_13), (max((var_13), (((/* implicit */unsigned short) var_1))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (signed char i_3 = 4; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_9 [9] [13LL] [i_1] [i_2] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_3 - 1])) ? (((/* implicit */int) arr_8 [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 1] [i_3 - 4])) : (-522992386)))));
                            arr_10 [i_1] [i_2] [i_3] = (((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) > (var_2)))));
                            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) max(((+((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)126)))))))) ? (((min((11ULL), (((/* implicit */unsigned long long int) var_5)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) == (((/* implicit */int) var_9)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))));
                        }
                    } 
                } 
                arr_11 [i_1] = ((/* implicit */int) min((((/* implicit */long long int) max((var_10), (var_8)))), (min((((/* implicit */long long int) arr_6 [i_0 + 2] [i_1] [i_0 + 1] [i_0] [i_0] [i_1])), (0LL)))));
            }
        } 
    } 
}
