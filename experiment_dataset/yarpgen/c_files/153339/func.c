/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153339
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
    var_18 = ((/* implicit */unsigned long long int) (-(-1)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0 - 1] = ((/* implicit */unsigned char) (+((+((-(arr_0 [i_0 - 1])))))));
        arr_5 [i_0] &= ((/* implicit */unsigned long long int) (!((!((!(((/* implicit */_Bool) var_13))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_17)))))));
            arr_11 [i_1] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) var_14))))));
            arr_12 [i_1 - 3] = (!(((/* implicit */_Bool) (~(0U)))));
            arr_13 [i_0] [i_1 + 1] [i_1 + 1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))));
        }
    }
    var_19 = ((/* implicit */unsigned char) (+((-((+(var_16)))))));
}
