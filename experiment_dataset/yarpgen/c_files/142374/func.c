/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142374
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
    var_10 = ((/* implicit */_Bool) max((((max((-609605432852822571LL), (var_8))) + (((/* implicit */long long int) max((((/* implicit */int) var_4)), (var_0)))))), (var_5)));
    var_11 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)9131))));
    var_12 = ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((unsigned char) arr_2 [i_0 - 1] [i_0 - 1]));
        arr_4 [i_0 + 2] = ((/* implicit */unsigned int) ((((min((((/* implicit */unsigned long long int) -258058059)), (0ULL))) * (((var_3) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))) ^ (min((18446744073709551615ULL), (((6016379263580787817ULL) ^ (((/* implicit */unsigned long long int) 2024985910))))))));
    }
}
