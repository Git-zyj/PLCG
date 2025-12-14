/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144051
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
    var_16 = ((/* implicit */signed char) var_0);
    var_17 = ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_3)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((unsigned int) 3689089254U))) / ((-(10562990330423175443ULL)))))) ? (max((((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_14))), (((/* implicit */unsigned long long int) max((arr_9 [i_1]), (((/* implicit */int) arr_2 [i_3]))))))) : (((/* implicit */unsigned long long int) (+(var_11))))));
                            var_19 -= ((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned short) arr_2 [i_3])), (arr_10 [i_1 + 2] [i_1 - 1] [i_1] [i_1 + 2] [1U] [2U]))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) 415437901071104792ULL))));
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_5 [(short)0]))));
                arr_11 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 542779675U)) ? (arr_8 [i_0] [i_0] [i_1 - 1] [i_1]) : ((~(max((((/* implicit */unsigned long long int) var_13)), (var_0)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) ((unsigned long long int) max((var_8), (((var_0) & (((/* implicit */unsigned long long int) var_1)))))));
}
