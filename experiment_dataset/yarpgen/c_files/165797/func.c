/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165797
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
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [4] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_1])))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 13; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_3 [i_0] [2] [i_2 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [(short)0])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (min((((/* implicit */int) arr_1 [i_3])), (arr_2 [i_0])))))));
                            var_19 &= ((/* implicit */unsigned short) arr_1 [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_13))));
    var_21 |= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_10)))))) >= (var_8))))) | (var_11)));
}
