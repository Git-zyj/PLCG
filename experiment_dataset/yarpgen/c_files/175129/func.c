/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175129
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
    var_12 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_11), (var_5))))))), (((((/* implicit */_Bool) ((unsigned short) (unsigned char)192))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192))) : (var_11)))));
    var_13 = ((/* implicit */_Bool) ((unsigned char) (_Bool)1));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_7 [(short)9] [(short)9] [(short)9] = ((/* implicit */_Bool) -1531594293);
                var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_3))) >= (max((-921819157), (((/* implicit */int) var_2)))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (-(arr_1 [i_1]))))));
                            arr_12 [i_0] [i_1] [i_2 - 1] [i_1] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1]))))) <= (((/* implicit */int) (!(((((/* implicit */_Bool) arr_2 [i_0])) && (arr_9 [i_1] [(short)7] [i_1])))))));
                            arr_13 [i_1] [(short)10] [10] &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(unsigned char)1] [(signed char)3] [(short)0]))) < (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)21216)) && (((/* implicit */_Bool) var_2))))), (((unsigned long long int) -1098680446))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 *= ((/* implicit */_Bool) ((unsigned int) 519127974));
    var_17 ^= max((((/* implicit */int) max((var_1), (((/* implicit */unsigned char) ((var_7) <= (((/* implicit */int) (unsigned char)0)))))))), (var_6));
}
