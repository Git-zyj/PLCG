/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165772
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_12 = ((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))));
                    arr_8 [i_1] |= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_3))))));
                }
                var_13 = ((/* implicit */unsigned char) var_8);
                arr_9 [10ULL] = ((/* implicit */unsigned long long int) max((var_0), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) != (((/* implicit */int) (unsigned char)63)))))));
                var_14 += ((/* implicit */_Bool) (~(((/* implicit */int) var_4))));
                var_15 *= min((min((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51357))))), (((/* implicit */unsigned long long int) (~(var_0)))))), (((/* implicit */unsigned long long int) var_4)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            {
                arr_16 [i_3] [i_3] [i_3 + 1] = ((/* implicit */short) (~(((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) == (3395982067U))) ? (((((/* implicit */_Bool) arr_15 [(_Bool)1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_8))))));
                arr_17 [i_3] [i_3] = ((/* implicit */short) ((signed char) (!(var_8))));
            }
        } 
    } 
}
