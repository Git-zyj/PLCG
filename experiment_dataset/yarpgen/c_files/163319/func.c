/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163319
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
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_18))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) min((var_21), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [15ULL]))))) || (((/* implicit */_Bool) max((((/* implicit */int) min(((signed char)-26), ((signed char)-26)))), (min((((/* implicit */int) (signed char)-39)), (arr_5 [i_0]))))))))));
                                var_22 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) (unsigned short)30410))))) ? (((/* implicit */unsigned long long int) arr_10 [i_1] [i_1] [6LL] [i_1] [i_1] [i_0])) : (((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) (signed char)20))))));
                            }
                        } 
                    } 
                    arr_14 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned short)127), (((/* implicit */unsigned short) (signed char)-36))))) ? (arr_4 [i_2] [i_1] [i_0]) : (min((((((/* implicit */int) var_8)) + (((/* implicit */int) (signed char)-26)))), (((var_12) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) var_10))))))));
                    var_23 = ((/* implicit */unsigned long long int) arr_2 [i_2]);
                }
            } 
        } 
    } 
    var_24 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) | (min((((/* implicit */unsigned long long int) ((unsigned short) var_8))), (min((var_1), (((/* implicit */unsigned long long int) (unsigned short)65515))))))));
}
