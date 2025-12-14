/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153100
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
    var_16 |= ((/* implicit */short) (+(((/* implicit */int) (((-(((/* implicit */int) var_9)))) <= (((/* implicit */int) var_14)))))));
    var_17 = ((/* implicit */long long int) var_10);
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (var_12))))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            arr_4 [i_0] [i_1] = ((/* implicit */long long int) ((arr_0 [i_0 - 1]) << (((arr_0 [i_0 - 1]) - (2184204230U)))));
            var_19 = ((/* implicit */signed char) ((1410343145) / (((/* implicit */int) var_4))));
            var_20 = ((/* implicit */unsigned long long int) ((long long int) var_13));
        }
        arr_5 [(_Bool)1] [i_0] = ((/* implicit */unsigned short) ((_Bool) arr_3 [i_0] [i_0] [i_0 + 1]));
        arr_6 [i_0 + 1] |= (~(((unsigned int) var_4)));
        arr_7 [19ULL] [6U] = ((/* implicit */short) (-(((((/* implicit */int) (signed char)1)) * (-1410343146)))));
    }
}
