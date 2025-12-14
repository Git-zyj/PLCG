/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150744
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_20 -= ((/* implicit */unsigned char) arr_2 [i_0]);
        arr_3 [(short)14] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)255))));
        var_21 = ((/* implicit */unsigned short) (short)-21838);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 22; i_1 += 4) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) ((short) (~(var_9))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            for (unsigned char i_3 = 1; i_3 < 22; i_3 += 1) 
            {
                {
                    var_22 = ((/* implicit */long long int) ((((((/* implicit */int) arr_2 [i_2])) + (2147483647))) << (((((((/* implicit */int) arr_2 [i_1 - 1])) + (5383))) - (17)))));
                    var_23 = ((/* implicit */int) 14463036864555533234ULL);
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        arr_17 [(unsigned short)6] = ((/* implicit */long long int) ((((/* implicit */int) ((short) 2609521035U))) << (((((var_9) << (((/* implicit */int) (_Bool)1)))) - (8408151209217600361ULL)))));
        var_24 = ((/* implicit */_Bool) max((var_24), (((((/* implicit */int) arr_10 [i_4] [i_4] [i_4])) >= (((/* implicit */int) arr_13 [i_4] [i_4] [i_4] [i_4]))))));
        var_25 &= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4] [i_4]))) : (var_13)))));
    }
    var_26 = ((/* implicit */long long int) ((unsigned long long int) var_15));
}
