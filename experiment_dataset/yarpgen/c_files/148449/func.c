/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148449
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
    var_19 = ((/* implicit */int) var_18);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))), (((unsigned long long int) var_3))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) 635799654202653164LL))));
        var_20 *= ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] [(unsigned char)16] = ((/* implicit */unsigned int) arr_1 [i_1] [i_1]);
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) arr_0 [i_1] [i_1]);
    }
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
    {
        var_21 = (+(((((/* implicit */_Bool) -1207308364826104926LL)) ? (max((-635799654202653162LL), (((/* implicit */long long int) arr_1 [i_2] [i_2])))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))));
        arr_10 [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (~((~(((/* implicit */int) var_7))))))), (var_16)));
    }
    var_22 = ((/* implicit */unsigned int) (unsigned char)255);
}
