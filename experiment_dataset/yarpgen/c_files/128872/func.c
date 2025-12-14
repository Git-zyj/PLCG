/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128872
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
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
                arr_7 [i_0] = ((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_4 [i_0 + 3]) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) <= (((/* implicit */int) arr_1 [i_0] [i_1])))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [0U])) : (((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 2] [i_0]))))) ? (3354719854U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [(unsigned char)9])) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))));
            }
        } 
    } 
    var_17 |= ((/* implicit */unsigned short) min((((((var_2) + (9223372036854775807LL))) >> (((((/* implicit */int) var_9)) >> (((var_3) - (1956272668U))))))), (((/* implicit */long long int) (-(((/* implicit */int) min((var_11), (((/* implicit */short) var_16))))))))));
}
