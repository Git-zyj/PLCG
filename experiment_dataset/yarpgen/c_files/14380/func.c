/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14380
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
    var_13 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))), (((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned long long int) 2707937893U)))))) - ((((!(((/* implicit */_Bool) -28)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) << (((((/* implicit */int) var_1)) - (83)))))) : ((+(var_8)))))));
    var_14 = ((/* implicit */unsigned long long int) ((var_2) < (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) var_2);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    var_16 = 18023645687995128343ULL;
                    var_17 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) - (var_0))));
                }
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (((((/* implicit */_Bool) (signed char)119)) ? (var_7) : (-3687005215877677636LL))) : (((/* implicit */long long int) (+(2707937904U))))))) ? ((+(2361053124955970723ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_0])), (arr_0 [10ULL])))) ? (((/* implicit */int) arr_3 [i_1 - 3])) : (((/* implicit */int) arr_3 [6ULL])))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 16085690948753580893ULL))));
    var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) + (min((((/* implicit */unsigned long long int) ((_Bool) var_5))), (max((var_4), (((/* implicit */unsigned long long int) var_0))))))));
}
