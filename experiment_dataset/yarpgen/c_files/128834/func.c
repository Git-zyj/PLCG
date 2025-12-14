/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128834
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
    var_15 |= ((/* implicit */signed char) var_13);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        var_16 = ((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 1]);
        var_17 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)204))));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_18 -= ((((long long int) ((((/* implicit */int) arr_3 [i_1] [i_1])) < (((/* implicit */int) arr_4 [i_1]))))) >= (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1] [i_1])) * (((/* implicit */int) arr_1 [i_1] [i_1]))))));
        var_19 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1])))))));
        var_20 -= ((/* implicit */_Bool) (((((~(((((arr_2 [i_1]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_1 [i_1] [i_1])) - (32530))))))) + (9223372036854775807LL))) << ((((~((~(arr_0 [i_1]))))) - (2909746434U)))));
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((2026962164) - (2026962156))))))));
        var_22 += ((((((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (signed char)70)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)49))) != (1698558519U))))) : (((3767879681U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-9341))))))) + (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 16400931965767380222ULL)))))))));
    }
    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) var_3))));
}
