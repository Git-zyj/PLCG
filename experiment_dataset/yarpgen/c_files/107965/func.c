/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107965
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
    var_13 = (~((~((~(((/* implicit */int) var_6)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] [5LL] = (-(((/* implicit */int) ((((/* implicit */_Bool) (-(1528876221U)))) || (((/* implicit */_Bool) arr_0 [i_0]))))));
        var_14 += ((/* implicit */short) ((((/* implicit */long long int) (((((-(((/* implicit */int) arr_0 [i_0])))) + (2147483647))) << (((/* implicit */int) (!(arr_2 [11]))))))) ^ ((-((~(arr_1 [i_0] [i_0])))))));
    }
}
