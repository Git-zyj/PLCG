/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135685
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
    var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((signed char)(-127 - 1)), ((signed char)-112)))) || (((/* implicit */_Bool) var_0))));
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) min((1416791220U), (((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((((/* implicit */int) arr_1 [i_0 + 2] [i_1 + 2])) >> (((/* implicit */int) arr_1 [i_0 - 3] [i_1 + 2])))) == (((int) (unsigned char)71)))))));
                arr_5 [4ULL] &= (~(((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 + 2] [(short)3] [i_0 + 1])) == (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) var_13))))))));
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)17787)) ? (((/* implicit */int) (signed char)-85)) : (((/* implicit */int) (unsigned char)10)))))));
                arr_6 [4U] [i_1] &= max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_15), (((/* implicit */int) var_3)))))))), ((unsigned char)21));
            }
        } 
    } 
}
