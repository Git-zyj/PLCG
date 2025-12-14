/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152939
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_1)))))))));
                arr_6 [i_1] = (-((+((~(18446744073709551605ULL))))));
                arr_7 [i_1] = ((/* implicit */int) var_3);
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        arr_11 [i_2] = ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_2] [i_2]))));
        arr_12 [i_2] = ((((/* implicit */int) ((var_8) >= (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) * (((/* implicit */int) arr_8 [i_2])));
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)23881)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12)))))));
    }
}
