/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10560
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
    var_15 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (var_12))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max(((unsigned short)48510), (((/* implicit */unsigned short) arr_4 [i_0]))))) ? (((((/* implicit */_Bool) var_8)) ? (202393231062708553ULL) : (((/* implicit */unsigned long long int) arr_6 [i_0 - 3] [i_0 - 3] [i_0 - 3] [(unsigned short)11])))) : (((/* implicit */unsigned long long int) (-(var_8)))))), (((/* implicit */unsigned long long int) arr_12 [i_0 - 3] [i_0 - 3] [i_2] [i_3] [(unsigned char)11]))));
                                arr_14 [(unsigned short)0] [i_1] [i_2] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -4390807742198435756LL)) ? (((/* implicit */int) (unsigned char)134)) : (var_2))))));
                                arr_15 [i_2] = ((/* implicit */int) ((min((((/* implicit */long long int) arr_4 [i_0 + 2])), (var_8))) + (((/* implicit */long long int) var_2))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_13))))) <= (arr_0 [i_0] [i_0 + 2]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) -654497910)), (arr_12 [i_0] [i_0] [(signed char)7] [(_Bool)1] [i_0]))))))) : (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))) && (((/* implicit */_Bool) var_6)))))));
                }
                arr_17 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 654497921)), (((unsigned long long int) (_Bool)1))))) ? (min((((/* implicit */long long int) var_13)), (-8848361136892058316LL))) : (var_11)));
    var_17 = ((/* implicit */_Bool) var_5);
}
