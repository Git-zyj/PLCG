/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146489
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) && (arr_0 [i_0])))), (var_7)))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_10 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (arr_1 [i_2])))))) ? (var_0) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) var_4))))))))));
                                arr_13 [i_4] [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) var_1)) < (((((/* implicit */_Bool) var_2)) ? (arr_1 [i_4]) : (((/* implicit */int) arr_2 [i_2])))))))));
                            }
                        } 
                    } 
                    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)127)), ((unsigned char)16))))))), ((unsigned char)240))))));
                    arr_14 [i_0] [i_1] = ((/* implicit */long long int) (((+(((/* implicit */int) arr_9 [i_1] [i_1])))) <= (((/* implicit */int) min((arr_9 [i_2] [i_0]), (arr_9 [i_0] [i_0]))))));
                }
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_0), (var_8)))) ? (((/* implicit */unsigned int) var_0)) : (max((var_2), (((/* implicit */unsigned int) var_0))))))), (var_6)));
}
