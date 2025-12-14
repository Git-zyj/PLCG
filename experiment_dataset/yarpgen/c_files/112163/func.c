/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112163
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 2])) : (arr_3 [i_1 - 2] [i_1 + 3]))))));
                var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                var_14 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 - 2])) && ((!(((/* implicit */_Bool) -359554504))))));
            }
        } 
    } 
    var_15 = var_8;
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) 1684508510)) : (var_0)));
    var_17 = ((/* implicit */int) (-(((long long int) 1684508510))));
}
