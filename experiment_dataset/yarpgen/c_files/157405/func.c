/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157405
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
    var_19 = ((unsigned char) (!(((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_17))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_3 [i_0]), (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (3623777307U)))) ? (var_5) : (((((/* implicit */int) ((_Bool) arr_0 [i_1]))) - (max((arr_3 [i_0]), (((/* implicit */int) var_1))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 2; i_2 < 10; i_2 += 3) 
                {
                    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)6782))) - (var_2)));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (!(((var_9) <= (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))))));
                                arr_15 [i_4] [i_3] [i_2] [i_2] [i_1] [i_0] [i_4] = ((((/* implicit */_Bool) arr_12 [i_2 - 1] [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) var_1)));
                                arr_16 [i_0] [i_4] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_3] [i_4])) ? (arr_1 [i_2 - 1] [i_4 - 3]) : (671189989U)));
                                var_22 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_9)))) ? (((unsigned long long int) arr_13 [i_4] [i_3] [i_2] [i_1] [i_0])) : (arr_10 [i_2])));
                            }
                        } 
                    } 
                }
                var_23 = ((/* implicit */int) arr_5 [i_0] [i_1] [i_1]);
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (-((~(min((((/* implicit */int) var_17)), (-1260686222))))))))));
            }
        } 
    } 
    var_25 ^= ((/* implicit */unsigned short) (((~(((/* implicit */int) max((var_12), (((/* implicit */short) var_3))))))) << (((((/* implicit */int) var_16)) - (95)))));
    var_26 = (-(((int) max((((/* implicit */short) var_17)), (var_1)))));
}
