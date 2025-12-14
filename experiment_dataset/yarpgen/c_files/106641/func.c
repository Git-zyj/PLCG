/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106641
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
    var_12 = ((/* implicit */_Bool) (-((+((-(((/* implicit */int) var_0))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) var_1))));
        var_14 = ((/* implicit */unsigned int) arr_0 [i_0 + 2] [i_0]);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3212783209U))));
            arr_6 [i_0] = ((/* implicit */unsigned char) max((arr_1 [i_0]), ((-(arr_3 [i_0 + 1] [18LL])))));
        }
        var_16 = ((/* implicit */unsigned short) arr_5 [i_0] [i_0]);
    }
    var_17 &= ((/* implicit */long long int) (((~(((/* implicit */int) var_4)))) > (((/* implicit */int) ((unsigned short) var_7)))));
}
