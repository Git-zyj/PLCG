/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180315
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
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        var_14 = ((((/* implicit */_Bool) 2250468333U)) ? (((int) (short)0)) : (234881024));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            var_15 = ((/* implicit */int) (-(var_2)));
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */int) (unsigned short)40474)) : (((/* implicit */int) (unsigned short)25061)))))));
        }
        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)40474)) : (arr_0 [i_0]))))))));
        var_18 -= ((/* implicit */unsigned short) arr_6 [i_0]);
        var_19 = ((/* implicit */int) min((var_19), ((~(((((/* implicit */_Bool) (unsigned short)25057)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (signed char)-34))))))));
    }
    var_20 = ((/* implicit */unsigned short) 1073741792U);
}
