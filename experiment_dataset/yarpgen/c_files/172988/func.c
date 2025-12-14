/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172988
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [(signed char)7] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((unsigned long long int) var_19))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_18) : (var_0)))))));
                    arr_12 [i_0] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (var_17))) : (var_16)))) ? (((((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_12))) ^ (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_16) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned short) var_15);
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                arr_19 [2ULL] &= ((/* implicit */int) ((long long int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) ((var_3) > (((/* implicit */unsigned int) var_5))))))));
                arr_20 [i_4] [i_4] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) var_15))));
            }
        } 
    } 
    var_21 |= ((/* implicit */unsigned short) ((long long int) ((_Bool) var_16)));
}
