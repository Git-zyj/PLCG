/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164185
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
    var_18 = ((/* implicit */short) ((((/* implicit */int) (signed char)-54)) <= (((/* implicit */int) (unsigned short)27348))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0 + 3] [i_1] = ((/* implicit */_Bool) 2147483584);
                arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 3] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)91)) != (((/* implicit */int) max(((_Bool)1), (arr_3 [i_0] [i_0] [i_0]))))))) ^ ((~(((/* implicit */int) ((var_4) != (var_4))))))));
                arr_7 [i_0 + 2] [i_1] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (18809505U) : (((/* implicit */unsigned int) 805306368))));
                var_19 = ((/* implicit */short) var_15);
                var_20 = ((/* implicit */long long int) arr_2 [i_0 - 1] [i_0 - 1]);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_9))));
    var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */long long int) 1971834559U)) : (3574084241887492807LL)))) + (max((((/* implicit */unsigned long long int) ((int) (unsigned short)22167))), (((unsigned long long int) 733205032U))))));
}
