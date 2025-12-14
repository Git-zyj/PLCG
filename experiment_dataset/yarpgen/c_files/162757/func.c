/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162757
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
    var_16 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * ((-(90767326U)))))), (-4542482536729554484LL)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (~(max((((/* implicit */long long int) 2078427657)), (4542482536729554483LL)))));
        arr_4 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        var_17 = ((/* implicit */unsigned short) -4542482536729554500LL);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) -2078427651);
        var_18 = ((/* implicit */short) (-((-(-4542482536729554483LL)))));
    }
    var_19 = ((/* implicit */_Bool) var_8);
    var_20 = ((((((/* implicit */int) var_9)) == (-111559778))) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) ((unsigned char) var_11))));
    var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((var_1) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
}
