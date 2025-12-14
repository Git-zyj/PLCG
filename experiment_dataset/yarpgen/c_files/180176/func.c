/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180176
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
    var_10 = ((/* implicit */long long int) (short)0);
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_0)))) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)2)) : (((/* implicit */int) (signed char)-18)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((var_7) / (((/* implicit */int) var_2))))) : (((long long int) (short)-25503))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 + 1] [i_1])) > (((/* implicit */int) arr_4 [i_1 - 2] [i_1]))))) : (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_1 - 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_0 - 1] [i_1 + 2]))))));
                var_13 = ((/* implicit */_Bool) ((unsigned char) (short)7));
                var_14 ^= ((/* implicit */int) ((((((/* implicit */_Bool) ((long long int) var_9))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) -478275645010785850LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [(short)9] [16ULL]))) : (478275645010785850LL))))) == (((/* implicit */long long int) ((/* implicit */int) (short)0)))));
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-82)) ? (((/* implicit */long long int) 2088960U)) : (478275645010785850LL)));
                var_16 = ((/* implicit */unsigned short) arr_0 [i_0] [i_1 - 1]);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_4);
}
