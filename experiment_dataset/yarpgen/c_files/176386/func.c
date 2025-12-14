/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176386
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
    var_12 -= ((/* implicit */unsigned int) ((long long int) min((var_10), (var_2))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551586ULL)) ? (-1244190091780936970LL) : (0LL)))) ? (((1244190091780936948LL) / (arr_6 [i_0] [(unsigned short)1]))) : ((~(var_11))))) > (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                                var_14 = ((min((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_3] [i_2] [i_1])) << (((((/* implicit */int) var_3)) + (1220)))))), (((((/* implicit */_Bool) arr_5 [i_0] [i_4 - 1] [20])) ? (((/* implicit */long long int) ((/* implicit */int) (short)10421))) : (-27LL))))) >> (((((unsigned int) max((((/* implicit */int) var_6)), (var_2)))) - (416133245U))));
                            }
                        } 
                    } 
                    var_15 = (+(((unsigned long long int) max((var_10), (((/* implicit */int) (unsigned char)11))))));
                }
            } 
        } 
    } 
}
