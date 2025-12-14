/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140600
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
    var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(2147483647))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = (~((~(((/* implicit */int) (signed char)30)))));
                var_13 -= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((-1141490916) > (((/* implicit */int) var_11)))))) != (((long long int) var_7))));
                arr_8 [i_0] = ((((/* implicit */_Bool) -1)) ? (((((/* implicit */_Bool) var_4)) ? ((-2147483647 - 1)) : (((var_6) << (((((/* implicit */int) (signed char)30)) - (30))))))) : (0));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        for (int i_3 = 4; i_3 < 19; i_3 += 1) 
        {
            {
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) var_9))));
                arr_14 [19] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_6 [i_3 + 1] [14] [14]) << (((arr_6 [i_3 - 1] [2] [2]) - (1869077990217079074LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : ((+(arr_6 [i_3 - 1] [i_2] [i_2])))));
                var_15 = ((/* implicit */int) ((-1082478366) != (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */int) var_11)) : (arr_12 [i_2])))))))));
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        {
                            arr_20 [18LL] [i_4] [i_3] [i_4] [i_2] = ((/* implicit */long long int) arr_15 [i_2] [i_2] [i_2]);
                            var_16 = ((/* implicit */int) (-(((long long int) ((arr_9 [i_3]) != (((/* implicit */int) var_1)))))));
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((9223372036854775807LL), (-2824498927850772600LL)))) ? (((/* implicit */long long int) min((((/* implicit */int) (signed char)-119)), (-76618310)))) : ((+(5213788902213415947LL)))))) ? (7671606199823415351LL) : (((/* implicit */long long int) max((1762577633), ((-2147483647 - 1)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
