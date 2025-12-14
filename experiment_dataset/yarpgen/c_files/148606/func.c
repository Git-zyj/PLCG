/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148606
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
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_4))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) != (var_9)));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        var_17 = ((/* implicit */int) 1613346900533062796LL);
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_18 = ((/* implicit */int) 3940239155U);
        var_19 = ((/* implicit */long long int) (unsigned char)247);
    }
    for (unsigned char i_2 = 1; i_2 < 18; i_2 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) 1613346900533062806LL)) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) ((unsigned short) (short)-12082))))), (((/* implicit */int) ((((/* implicit */int) (short)10245)) == (((((/* implicit */_Bool) arr_9 [i_2] [i_2 + 1])) ? (((/* implicit */int) arr_7 [i_2])) : (-872922662)))))))))));
        var_21 = ((/* implicit */unsigned long long int) ((unsigned int) ((((((/* implicit */int) arr_7 [i_2 - 1])) + (2147483647))) << (((((((/* implicit */int) arr_6 [i_2 + 1])) + (29067))) - (8))))));
        var_22 = ((/* implicit */unsigned char) min(((short)393), (((/* implicit */short) (unsigned char)251))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        var_23 = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_3] [i_3])) != (arr_10 [i_3] [i_3])));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1337600223U)) ? (724849791U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)232)))));
    }
    var_25 = ((/* implicit */int) max((2967477908485319556ULL), (((/* implicit */unsigned long long int) 2717434685U))));
    var_26 = (+(3897259504U));
}
