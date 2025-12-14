/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153143
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
    var_20 = ((/* implicit */long long int) ((unsigned int) var_1));
    var_21 = ((/* implicit */long long int) min((var_21), (var_4)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_4 [i_0] = ((long long int) arr_1 [i_0]);
        var_22 = ((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_2 [i_0]) : (((/* implicit */long long int) arr_3 [i_0] [i_0])))) & (var_4));
    }
    for (long long int i_1 = 2; i_1 < 12; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) ((562949919866880LL) <= (((/* implicit */long long int) ((/* implicit */int) ((arr_6 [i_1 + 1]) <= ((~(4294967283U)))))))));
        arr_8 [i_1] = ((/* implicit */unsigned int) max((max((3507818873782528367LL), (arr_5 [i_1 - 2]))), ((-(-3620119330962275437LL)))));
        var_23 -= 4294967295U;
    }
    var_24 = ((/* implicit */long long int) max((((unsigned int) max((var_12), (-3507818873782528367LL)))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967272U)))))) == (min((-5983716565733067995LL), (4881681554549273235LL))))))));
}
