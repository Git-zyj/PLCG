/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121986
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 24; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_3] = ((/* implicit */signed char) min(((~((~(0LL))))), (arr_8 [i_0] [i_1 - 4] [i_2] [i_3])));
                            arr_11 [i_0] [i_1] [i_2 - 1] [0U] = ((/* implicit */short) ((unsigned int) max((arr_2 [i_2 - 3]), (((/* implicit */unsigned int) arr_5 [i_0] [i_1 + 1] [i_2] [i_3])))));
                            var_15 += ((/* implicit */int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_0 + 1] [i_1] [i_1] [i_1 - 4]))))), (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_9 [i_0 + 1] [4] [i_2] [i_3])), (var_4)))), (((((/* implicit */_Bool) arr_6 [(unsigned short)14] [0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)99))) : (11110753143772922432ULL)))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] [i_0] = ((/* implicit */int) min(((!(((/* implicit */_Bool) arr_4 [i_1 - 1] [i_0] [i_0 + 1] [i_0])))), (((((/* implicit */_Bool) arr_4 [i_1 - 4] [i_0] [i_0 + 1] [i_0])) && (((/* implicit */_Bool) arr_4 [i_1 - 3] [i_0] [i_0 + 1] [i_0]))))));
            }
        } 
    } 
    var_16 = (~(var_11));
}
