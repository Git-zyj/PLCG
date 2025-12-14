/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179666
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((-(-3182196108417061673LL)))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)0)) ? (-8119155546939843494LL) : (((/* implicit */long long int) 0U)))), (((/* implicit */long long int) var_14))))) : (((min((var_10), (((/* implicit */unsigned long long int) var_15)))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (8119155546939843506LL) : (((/* implicit */long long int) var_2)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_0] [i_0] [i_1] = ((/* implicit */long long int) arr_2 [i_0]);
                    var_21 = min((5335055274892412350LL), (((/* implicit */long long int) (signed char)75)));
                    arr_9 [i_0 + 1] [(signed char)14] [i_2] &= ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -7953512538247573187LL)))))) < ((~(5335055274892412350LL))))) ? (-5335055274892412351LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [(unsigned char)2])) || (((/* implicit */_Bool) (short)22524))))) : (((/* implicit */int) (signed char)90)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        arr_13 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (-(7881071138075012631ULL)));
                        var_22 ^= ((/* implicit */unsigned long long int) arr_1 [i_1 + 1]);
                        arr_14 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 2087634362)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1361655872)))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (2922008576193304749ULL) : (((/* implicit */unsigned long long int) 8119155546939843491LL)))))) == (((/* implicit */unsigned long long int) arr_5 [i_1] [i_2] [i_1]))));
                    }
                    arr_15 [i_0 + 1] [i_0 + 1] [i_2 - 3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (var_2) : (((/* implicit */int) arr_1 [i_0 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_0 + 1]), (var_4))))) : (((((/* implicit */_Bool) (unsigned short)34354)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) : (var_1)))));
                }
            } 
        } 
    } 
}
