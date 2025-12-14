/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123370
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (long long int i_4 = 2; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) var_1))));
                                var_18 |= ((/* implicit */_Bool) ((unsigned long long int) var_7));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) (-(((arr_7 [i_1] [i_1] [i_2]) & (arr_7 [i_1] [i_1] [i_2])))));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_6 [i_0] [i_1] [i_0] [i_1] [i_1] [(unsigned char)5]), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) && (((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_1] [i_1] [i_2])))))))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_7 [i_1] [i_1] [18U])) ? (arr_4 [i_0] [i_1] [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_2] [i_2] [i_1] [7U] [i_0]))))), (((/* implicit */unsigned int) ((signed char) 1745483836))))))));
                }
            } 
        } 
    } 
    var_21 -= var_11;
    /* LoopSeq 1 */
    for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [18LL] [i_5] [15U])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((arr_12 [i_5]), (((/* implicit */long long int) var_11))))) && (((/* implicit */_Bool) -1745483840))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((1745483850), (((/* implicit */int) (signed char)-120))))))))));
        var_23 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_9 [i_5] [12ULL] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1745483836)) ? (((/* implicit */unsigned int) -1911001368)) : (398748243U)))) : (((((/* implicit */long long int) ((/* implicit */int) arr_3 [(short)8] [21LL]))) / (arr_5 [i_5] [(signed char)19]))))));
    }
}
