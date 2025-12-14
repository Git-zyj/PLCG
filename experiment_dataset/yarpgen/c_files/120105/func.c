/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120105
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */unsigned long long int) (+(var_5)))) : ((~(arr_0 [i_0 - 1]))))))));
            var_15 = ((/* implicit */unsigned int) ((signed char) arr_2 [i_0 - 1] [i_0 - 1]));
        }
        for (unsigned char i_2 = 1; i_2 < 17; i_2 += 1) 
        {
            var_16 = ((/* implicit */long long int) var_8);
            var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (18446744073709551605ULL)));
        }
        arr_6 [(unsigned char)14] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_5 [i_0 - 1]), (((/* implicit */unsigned int) var_2))))) && (((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) 168234919U))))));
    }
    var_18 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((unsigned int) ((var_1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)173)))))) >= (var_4)));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (var_3)))))) && ((!(((/* implicit */_Bool) var_5))))));
}
