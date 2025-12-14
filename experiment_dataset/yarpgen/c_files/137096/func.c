/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137096
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
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_14))));
    var_19 = var_15;
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((var_4) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-68))))) : (((/* implicit */int) ((unsigned short) arr_0 [i_0]))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((8295634122574617514LL) | (((/* implicit */long long int) var_7)))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) || (((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [(unsigned short)3]))))))))));
        var_21 = ((/* implicit */unsigned char) ((((_Bool) (!(((/* implicit */_Bool) arr_1 [i_0]))))) || ((!(((_Bool) arr_1 [i_0]))))));
        var_22 = ((/* implicit */int) ((signed char) (_Bool)1));
    }
    var_23 = var_15;
}
