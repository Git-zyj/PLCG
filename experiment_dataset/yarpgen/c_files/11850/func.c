/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11850
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)44)) ? (16424166894463349408ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) | (((/* implicit */unsigned long long int) (~(var_0))))));
        var_12 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (548810206U))), (((/* implicit */unsigned int) (unsigned char)233))))) ? (min((((/* implicit */unsigned long long int) var_0)), (((unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) (-(max((var_8), (((/* implicit */long long int) var_7)))))))));
    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) -1672271160))));
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        for (int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            {
                arr_7 [i_1] [i_2] [i_2] = ((/* implicit */signed char) var_11);
                arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(var_1)))) ? (arr_4 [i_2]) : (((/* implicit */long long int) arr_1 [i_1])))) + (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_1] [i_1] [i_1])))) % ((+(var_9))))))));
            }
        } 
    } 
}
