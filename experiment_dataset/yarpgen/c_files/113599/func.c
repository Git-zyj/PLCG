/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113599
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
    var_19 += ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            {
                var_20 ^= ((/* implicit */signed char) var_5);
                var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) var_0))))) ? (var_3) : (((/* implicit */unsigned long long int) ((int) (unsigned short)0)))))) ? (max((var_2), (var_4))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) != (((/* implicit */int) arr_3 [i_1 - 1]))))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    var_22 ^= max((((/* implicit */unsigned long long int) arr_1 [i_1])), (((((/* implicit */_Bool) arr_1 [i_1 + 3])) ? (((/* implicit */unsigned long long int) -442994580339076301LL)) : (var_7))));
                    arr_6 [i_0] [i_2] [(unsigned char)5] = ((/* implicit */unsigned char) (-((~(var_16)))));
                    arr_7 [i_2] = ((/* implicit */signed char) arr_0 [i_2]);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 1; i_3 < 13; i_3 += 1) 
    {
        for (long long int i_4 = 3; i_4 < 12; i_4 += 1) 
        {
            {
                var_23 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_12 [i_3 - 1] [i_3])), (((var_2) + (((/* implicit */long long int) ((/* implicit */int) var_6)))))))), (var_7)));
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    arr_16 [(signed char)4] [i_4 + 2] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((arr_11 [i_3] [i_5]), (((/* implicit */long long int) arr_14 [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1]))))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_3]))))), (((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), (var_1))))));
                    var_24 = ((/* implicit */signed char) 442994580339076301LL);
                    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((int) arr_12 [i_3 + 1] [i_3 + 1])) < (((/* implicit */int) max((arr_9 [i_3 + 1] [i_4 + 1]), (((/* implicit */unsigned short) var_5))))))))));
                    arr_17 [i_5] = ((/* implicit */signed char) arr_8 [i_4]);
                }
                arr_18 [i_3] [i_4] = ((short) var_11);
                arr_19 [i_4] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_3 + 1] [i_4 - 1]))))), (7660497664741061903LL)));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) var_0)), (max((var_11), (((/* implicit */unsigned long long int) var_17)))))), (var_3)));
}
