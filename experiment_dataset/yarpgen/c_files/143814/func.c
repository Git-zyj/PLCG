/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143814
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
    var_18 = var_6;
    var_19 = ((/* implicit */_Bool) var_10);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) max((max((1280021885651694197ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 212974978)) ? (212974979) : (((/* implicit */int) arr_0 [6ULL])))))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
        var_21 ^= ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-16))))) ? (212974972) : (((/* implicit */int) arr_0 [i_0])))) < (((((/* implicit */_Bool) (short)-24266)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-102))))) : ((~(((/* implicit */int) arr_0 [i_0]))))))));
        arr_3 [i_0] = arr_1 [i_0];
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_22 = ((/* implicit */short) arr_4 [i_1]);
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)176)), (arr_0 [i_1])))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_4 [i_1])), (arr_0 [i_1])))))));
        var_23 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-24263)), (arr_1 [i_1])))), (((arr_4 [i_1]) ? ((-(18446744073709551604ULL))) : (((/* implicit */unsigned long long int) arr_1 [i_1]))))));
        arr_7 [i_1] = ((/* implicit */_Bool) min((min((((/* implicit */short) arr_4 [i_1])), (arr_0 [i_1]))), (((/* implicit */short) var_15))));
    }
}
