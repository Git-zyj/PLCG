/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122111
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned long long int) min((var_11), (((((/* implicit */_Bool) ((arr_9 [4] [4] [i_0] [(_Bool)0]) * (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) min((arr_9 [i_0] [i_0] [i_0] [i_2]), (arr_9 [i_2] [(unsigned char)6] [i_0] [(unsigned char)6])))) : (8233288718448389163ULL)))));
                            var_12 -= ((/* implicit */unsigned int) arr_2 [9ULL]);
                            arr_12 [8U] [2U] [i_2] [7U] [(unsigned short)0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((10213455355261162469ULL), (2207077229310919582ULL)))) ? (((min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0])), (2207077229310919568ULL))) * (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_7 [i_0] [i_2] [i_3])), (arr_9 [i_1] [i_1] [i_1] [i_1])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
                arr_13 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (((-(arr_4 [i_0] [i_0] [2ULL]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_6 [2] [i_0] [i_1]), (arr_6 [i_0] [i_0] [i_1])))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) var_0);
    var_14 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((unsigned long long int) ((var_9) == (var_1)))) : (12630150922939744346ULL)));
}
