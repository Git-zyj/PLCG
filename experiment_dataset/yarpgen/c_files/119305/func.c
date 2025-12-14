/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119305
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_18 = ((/* implicit */int) max((var_18), (min((((((/* implicit */_Bool) (~(433250310)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_11)))), ((~((~(-433250305)))))))));
        var_19 = ((/* implicit */unsigned char) min(((+(var_17))), (((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */long long int) -433250305)), (-8670583594913629912LL)))))));
    }
    var_20 = ((/* implicit */short) var_13);
    var_21 |= ((/* implicit */int) (!(((((/* implicit */_Bool) var_4)) || (((((/* implicit */_Bool) 4096)) && (var_10)))))));
}
