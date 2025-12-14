/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140013
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
    for (signed char i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        var_11 -= ((/* implicit */_Bool) (signed char)-56);
        var_12 = ((/* implicit */signed char) min((((/* implicit */int) (!(min(((_Bool)1), (var_10)))))), ((-(((/* implicit */int) arr_1 [i_0 - 1]))))));
    }
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (signed char)115)) : ((~(((/* implicit */int) var_6))))));
    var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) min(((signed char)17), ((signed char)50)))) > (((/* implicit */int) var_0)))))));
}
