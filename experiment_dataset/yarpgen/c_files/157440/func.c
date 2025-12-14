/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157440
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
    var_13 = ((/* implicit */short) max(((~(var_5))), (((/* implicit */long long int) max((var_2), (((/* implicit */short) var_0)))))));
    var_14 = var_12;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) arr_3 [i_0]);
                /* LoopSeq 1 */
                for (short i_2 = 3; i_2 < 19; i_2 += 1) 
                {
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (~(((arr_3 [i_0]) / (arr_1 [i_0]))))))));
                    arr_9 [i_2 - 2] [i_2] [(signed char)4] = ((short) arr_4 [(short)10]);
                    arr_10 [i_2] = ((/* implicit */short) ((((long long int) arr_4 [i_1])) == ((+(arr_2 [i_0] [i_0] [i_0])))));
                }
                var_16 = (~(((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_3 [i_1])))) ^ (min((((/* implicit */long long int) arr_0 [i_0])), (arr_1 [(signed char)3]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) max(((short)-13862), (var_11)));
}
