/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187800
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_14);
                /* LoopSeq 2 */
                for (signed char i_2 = 4; i_2 < 19; i_2 += 2) /* same iter space */
                {
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) var_2))));
                    var_16 = max(((+(var_3))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)54674))))));
                    var_17 |= ((/* implicit */long long int) ((565879863176916214ULL) | (5581470923044535405ULL)));
                }
                for (signed char i_3 = 4; i_3 < 19; i_3 += 2) /* same iter space */
                {
                    var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10343111910819421501ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_9 [i_3 - 3]))))) || ((!(((/* implicit */_Bool) var_3))))));
                    var_19 = ((/* implicit */signed char) max((14101202273206519430ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_14)), (var_2)))) && (((/* implicit */_Bool) var_13)))))));
                    var_20 = ((/* implicit */signed char) 14101202273206519430ULL);
                }
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_14))));
}
