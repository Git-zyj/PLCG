/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139970
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
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) var_1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_13 *= ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))))), (min((((/* implicit */unsigned short) (signed char)46)), ((unsigned short)42606))))), (((/* implicit */unsigned short) var_11))));
                            var_14 = ((/* implicit */unsigned int) max((var_14), (max((((/* implicit */unsigned int) ((unsigned short) ((short) var_11)))), (((arr_9 [i_0] [i_3]) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_8 [i_3] [(unsigned short)20] [i_3])) : (((/* implicit */int) (unsigned short)22930)))))))))));
                            var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((unsigned long long int) (signed char)-116)) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_1 [i_0])), (var_9)))))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned short)22940)) ? (((/* implicit */int) (short)812)) : (((/* implicit */int) (unsigned char)80)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))))) : ((~(arr_4 [i_3] [1U] [i_0])))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */signed char) (((-(((((/* implicit */_Bool) arr_4 [4U] [i_1] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)-117)))))) - ((((+(((/* implicit */int) (signed char)-16)))) + (((arr_7 [i_1] [i_0] [i_0] [i_1]) - (((/* implicit */int) var_9))))))));
                var_17 -= ((/* implicit */short) min(((-((-(144114088564228096LL))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)22940)))))) ^ (arr_9 [i_0] [i_1]))))));
            }
        } 
    } 
}
