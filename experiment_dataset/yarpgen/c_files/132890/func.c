/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132890
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
    var_15 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), ((((_Bool)1) ? (6919210571572881897ULL) : (((/* implicit */unsigned long long int) 2095104))))))) ? (((((/* implicit */_Bool) max((var_8), (((/* implicit */int) (short)14669))))) ? (min((((/* implicit */int) var_1)), (-2095114))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) max((var_12), (((/* implicit */unsigned short) (signed char)83))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 + 2] [i_2])) ? (arr_5 [i_0 - 1] [i_1 + 2]) : (arr_5 [i_0 + 2] [i_1 + 1])))))));
                    var_17 &= ((/* implicit */short) var_5);
                    arr_8 [i_1] = -1948998124;
                    var_18 = ((((unsigned long long int) arr_2 [i_2] [i_1 + 1])) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)30589)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3)))))))));
                    var_19 = ((/* implicit */unsigned short) min((var_19), (var_1)));
                }
            } 
        } 
    } 
}
