/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160466
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) + (var_15)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)161))) : (max((((/* implicit */long long int) ((unsigned short) var_9))), (((((/* implicit */_Bool) var_10)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
    var_19 = ((/* implicit */long long int) (unsigned char)0);
    var_20 = ((/* implicit */unsigned char) (((-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) var_17)))))) < (((/* implicit */int) ((signed char) (~(58720256U)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_12))));
        var_22 = ((/* implicit */unsigned int) ((signed char) min((((((/* implicit */int) var_9)) - (((/* implicit */int) arr_0 [i_0] [(short)10])))), (((/* implicit */int) ((unsigned short) var_2))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_23 += ((/* implicit */_Bool) min((max(((-(((/* implicit */int) (unsigned short)58797)))), (((/* implicit */int) ((((/* implicit */int) (short)32767)) <= (((/* implicit */int) (signed char)-125))))))), (((/* implicit */int) arr_3 [i_0] [i_0]))));
            var_24 = ((/* implicit */unsigned char) arr_2 [i_0]);
            var_25 += (unsigned short)6738;
        }
    }
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        var_26 ^= ((/* implicit */unsigned char) (+((+(max((arr_5 [i_2]), (((/* implicit */unsigned int) (unsigned char)255))))))));
        arr_6 [i_2] = ((/* implicit */short) ((unsigned char) var_1));
        arr_7 [i_2] [i_2] = ((/* implicit */unsigned int) var_12);
    }
}
