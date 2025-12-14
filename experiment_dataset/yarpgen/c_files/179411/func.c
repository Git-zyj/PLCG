/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179411
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))), (max(((-(((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) max((arr_0 [i_0] [i_0]), (((/* implicit */signed char) arr_1 [(_Bool)1])))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) max((max(((+(((/* implicit */int) arr_0 [i_0] [(signed char)1])))), (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) max((((/* implicit */short) arr_0 [i_0] [i_0])), (((short) 3573454384U)))))));
    }
    var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((var_3) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (!(var_8)))))))))));
}
