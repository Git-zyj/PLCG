/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111399
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
    var_19 = ((/* implicit */signed char) ((int) max((((/* implicit */unsigned int) var_10)), (872787879U))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_5 [5] [i_1]))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (long long int i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_0])) % (-1307007919)));
                            arr_12 [i_0] [11LL] = arr_1 [i_2] [i_3];
                            var_21 = ((/* implicit */int) min((((/* implicit */unsigned int) arr_5 [i_3 - 1] [i_1])), (((((/* implicit */_Bool) var_16)) ? (((((/* implicit */unsigned int) 1307007914)) * (arr_8 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
                            var_22 = ((/* implicit */int) max((var_22), (-1108376362)));
                        }
                    } 
                } 
            }
        } 
    } 
}
