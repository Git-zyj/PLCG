/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189051
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
    var_17 = ((/* implicit */signed char) max((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (((short) -1LL))))), ((~(((/* implicit */int) var_9))))));
    var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_1))));
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 6; i_0 += 4) 
    {
        var_19 = ((/* implicit */_Bool) (~((((~(((/* implicit */int) var_7)))) ^ (((/* implicit */int) var_14))))));
        arr_3 [i_0] = ((/* implicit */int) (unsigned char)119);
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = var_14;
        arr_8 [i_1] [i_1] = -566329482;
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) (((~(((/* implicit */int) (short)32766)))) >= (min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((var_14), (arr_5 [i_1]))))))));
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned short) 1589510665);
        arr_11 [i_1] [(signed char)3] = ((/* implicit */unsigned char) (+(max((((((/* implicit */int) arr_4 [i_1])) ^ (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_15))))));
    }
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
    {
        var_20 = var_3;
        arr_14 [i_2] [i_2] = ((/* implicit */unsigned short) arr_6 [i_2] [i_2]);
    }
    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        var_21 = max(((-(((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) (unsigned short)6161)) ? (((((/* implicit */int) var_7)) * (((/* implicit */int) (_Bool)1)))) : (min((var_12), (-1536768316))))));
        arr_19 [i_3] = ((/* implicit */_Bool) (~(min((arr_18 [i_3]), (((/* implicit */unsigned int) var_9))))));
    }
    var_22 = ((/* implicit */signed char) (-2147483647 - 1));
}
