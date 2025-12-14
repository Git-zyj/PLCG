/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1704
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
    var_10 = ((/* implicit */_Bool) (unsigned char)174);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_5)))))), (((((/* implicit */_Bool) (~(6340429620231036582ULL)))) ? (((/* implicit */int) (unsigned short)16260)) : (((((/* implicit */_Bool) (unsigned short)10182)) ? (var_4) : (((/* implicit */int) var_0))))))));
        var_11 = ((/* implicit */_Bool) var_4);
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) (unsigned short)65524);
        var_12 = ((/* implicit */unsigned char) max((min((((/* implicit */int) arr_4 [i_1])), (((int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (var_7)))) && (((/* implicit */_Bool) arr_4 [i_1])))))));
    }
    for (short i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
    {
        arr_8 [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) var_8))));
        var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_2]))));
    }
    for (short i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
    {
        arr_13 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) -2147483642)) ? (((/* implicit */int) var_9)) : (-563660807))))) ? ((-(((((/* implicit */_Bool) arr_7 [i_3])) ? (var_3) : (((/* implicit */long long int) var_4)))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) ^ (var_4)))) | (((unsigned int) (signed char)63)))))));
        arr_14 [i_3] = ((/* implicit */unsigned char) (((-(arr_10 [(unsigned short)9]))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
    }
}
