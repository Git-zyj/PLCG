/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104928
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
    var_19 = ((/* implicit */_Bool) var_10);
    var_20 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) var_12)) << (((var_1) - (10440073968469049570ULL))))));
    var_21 = ((/* implicit */signed char) var_17);
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        var_22 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (_Bool)1))) << (((var_8) + (1679098103)))));
        var_23 = ((/* implicit */signed char) var_4);
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_24 = ((/* implicit */int) ((short) ((-390760333) + (((/* implicit */int) (_Bool)1)))));
        var_25 = ((/* implicit */_Bool) arr_4 [i_1]);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_2 = 1; i_2 < 12; i_2 += 3) 
    {
        arr_8 [i_2] = ((/* implicit */signed char) arr_0 [i_2 + 1]);
        var_26 += ((/* implicit */unsigned long long int) arr_7 [i_2]);
        var_27 ^= ((((/* implicit */int) ((unsigned short) 390760329))) << (((((/* implicit */int) ((unsigned short) var_17))) - (40158))));
    }
}
