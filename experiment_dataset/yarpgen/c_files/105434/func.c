/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105434
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
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_3))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) var_13);
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) var_6);
    }
    for (unsigned int i_1 = 2; i_1 < 19; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 3] [i_1 + 3]))) < (((((/* implicit */_Bool) var_10)) ? (-2380015832971690546LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (~((+(var_11))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (arr_7 [0LL] [i_2]) : (arr_7 [i_2] [i_2])));
        arr_10 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((short) (short)-28205))) : (((/* implicit */int) arr_0 [i_2] [i_2]))));
        arr_11 [i_2] = ((/* implicit */unsigned short) var_8);
    }
}
