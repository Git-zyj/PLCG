/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122341
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
    var_12 = ((/* implicit */signed char) var_0);
    var_13 = ((/* implicit */long long int) (((+(((/* implicit */int) var_4)))) - (((/* implicit */int) var_8))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0]))));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483629)) && (((/* implicit */_Bool) 130048U))));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_16 += ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) arr_7 [i_1] [i_1]))))));
        arr_8 [i_1] = ((/* implicit */short) 2147483617);
    }
    for (int i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) arr_9 [i_2] [i_2]);
        var_18 |= ((/* implicit */_Bool) (((+(((/* implicit */int) arr_5 [i_2] [i_2])))) ^ ((-(((/* implicit */int) arr_5 [i_2] [i_2]))))));
    }
    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) arr_13 [i_3]);
        var_20 = ((/* implicit */signed char) ((-2147483629) % (arr_13 [i_3])));
    }
    var_21 = ((/* implicit */long long int) var_11);
}
