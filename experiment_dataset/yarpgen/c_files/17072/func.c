/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17072
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
    var_17 = (-(var_7));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            arr_5 [i_0] [i_1] [i_0] &= ((/* implicit */_Bool) (((+(2052947863))) | (((/* implicit */int) var_9))));
            arr_6 [i_0] [i_1] = ((/* implicit */short) var_13);
            var_18 = (!(((/* implicit */_Bool) -896583252)));
        }
        arr_7 [i_0] [i_0] = ((/* implicit */long long int) arr_4 [i_0 + 2] [i_0 + 2] [i_0]);
    }
    for (signed char i_2 = 1; i_2 < 19; i_2 += 3) 
    {
        var_19 -= ((/* implicit */unsigned int) ((unsigned char) 7555209202467041438LL));
        arr_11 [2LL] &= ((/* implicit */_Bool) (-((+(((/* implicit */int) (_Bool)1))))));
    }
    var_20 = ((/* implicit */int) var_13);
}
