/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188656
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
    for (short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_11 [i_3] [i_1] [i_1] [(unsigned char)14] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_2 + 1] [i_0 + 3])), (var_11)))) && (((/* implicit */_Bool) var_0))));
                            var_13 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))));
                            var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)144))));
                            var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)32760))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */int) 3444692123786965228LL);
            }
        } 
    } 
    var_17 *= ((/* implicit */signed char) (((~(((((/* implicit */_Bool) var_11)) ? (var_8) : (var_12))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
    var_18 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((1912106563) | (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-119)), ((unsigned char)108))))) : (var_1)))));
}
