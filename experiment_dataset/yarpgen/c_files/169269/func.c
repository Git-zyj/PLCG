/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169269
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
    var_16 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)62115))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) arr_1 [i_0]))))) % (arr_0 [i_0] [i_0])));
        arr_4 [i_0] = ((/* implicit */_Bool) ((unsigned short) 230863420));
        arr_5 [i_0] = ((/* implicit */int) ((arr_0 [i_0] [i_0]) % (arr_0 [(short)13] [i_0])));
        arr_6 [i_0] = ((/* implicit */short) ((arr_0 [i_0] [i_0]) % (((16920853916152739665ULL) % (((/* implicit */unsigned long long int) 4218012710U))))));
    }
}
