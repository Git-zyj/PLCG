/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104190
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
    for (long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    var_15 = max((-92687262971268665LL), (-3462399155586409019LL));
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_6 [i_0 - 2] [i_0 - 2] [i_1 + 1]))) || (((/* implicit */_Bool) arr_9 [i_0 + 2]))));
                    var_17 = arr_1 [i_1];
                    var_18 = ((long long int) var_12);
                }
                for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    var_19 = arr_8 [i_3] [i_3] [i_3] [i_3];
                    arr_12 [i_0] [i_1] [5LL] [i_3] = ((/* implicit */long long int) max(((!(((/* implicit */_Bool) arr_0 [i_0 + 1])))), (((18LL) != (var_13)))));
                    var_20 = ((long long int) arr_0 [i_0]);
                }
                arr_13 [i_0] [i_0] = arr_4 [i_1 + 1];
            }
        } 
    } 
    var_21 = ((((long long int) ((((/* implicit */_Bool) 9187343239835811840LL)) ? (var_5) : (var_10)))) + (var_14));
}
