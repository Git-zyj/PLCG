/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12136
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_5))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            var_14 += ((/* implicit */unsigned long long int) (unsigned short)0);
            var_15 -= ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
        }
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            var_16 += ((/* implicit */long long int) arr_8 [i_2]);
            var_17 = (-(arr_4 [i_0]));
            arr_11 [i_2] = ((/* implicit */short) (-((~(((/* implicit */int) (unsigned char)0))))));
            var_18 = ((/* implicit */short) ((unsigned char) (unsigned char)0));
            arr_12 [i_2] [i_2] = ((/* implicit */short) (_Bool)1);
        }
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_0])))))));
    }
    var_20 = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
    var_21 = ((/* implicit */int) (~(var_3)));
    var_22 = ((/* implicit */unsigned long long int) (~(1084937864U)));
    var_23 = ((/* implicit */_Bool) max((min((((/* implicit */long long int) var_8)), (var_12))), (((/* implicit */long long int) var_6))));
}
