/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12692
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
    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((1028402058U) == (541366907U)))))))));
    var_21 = ((/* implicit */unsigned long long int) (signed char)119);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] = (+(((/* implicit */int) var_15)));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) var_14))));
        arr_4 [(unsigned char)9] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_15)), (var_3)))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)107))) : (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))));
    }
    var_22 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((1028402083U) < (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : ((+(((/* implicit */int) (short)13082))))))), ((((!(((/* implicit */_Bool) var_15)))) ? ((-(var_5))) : (((/* implicit */long long int) ((3266565237U) & (((/* implicit */unsigned int) 599334496)))))))));
}
