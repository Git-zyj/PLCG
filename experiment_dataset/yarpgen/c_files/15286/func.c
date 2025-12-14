/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15286
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (short)13240)))))))));
        var_15 = ((/* implicit */short) min((max((max((var_7), (((/* implicit */long long int) 1192931239)))), (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0]))))))), (((/* implicit */long long int) arr_1 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (((+(((/* implicit */int) (short)-13240)))) >= (((/* implicit */int) arr_1 [(short)10]))));
        var_16 += ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    var_17 = ((/* implicit */long long int) (+(var_1)));
    var_18 = ((/* implicit */long long int) var_13);
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) (unsigned short)0))))) + (((/* implicit */int) var_3))));
}
