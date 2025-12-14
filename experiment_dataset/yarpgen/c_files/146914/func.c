/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146914
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
    var_10 = ((/* implicit */int) min((var_10), (((((/* implicit */int) var_4)) * (((/* implicit */int) var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3718288025U))));
                var_12 = (+(var_1));
                var_13 = ((/* implicit */unsigned int) ((int) ((arr_0 [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    var_14 = ((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_1 [i_0 + 1]), (((/* implicit */unsigned int) (unsigned char)198))))) ? ((~(((/* implicit */int) arr_4 [i_2] [i_1 + 3] [i_0 + 1] [i_0 + 4])))) : (max((((/* implicit */int) (unsigned char)213)), (var_8)))))) : (min((((/* implicit */unsigned int) var_8)), (((arr_1 [i_1 - 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)57))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) ((((((/* implicit */int) arr_13 [i_1 + 1] [i_1 + 2] [i_1 + 3] [i_1 + 1] [i_1 + 1])) ^ (((/* implicit */int) arr_13 [i_1 + 3] [i_1 + 1] [i_1 + 3] [i_1 - 1] [i_1 + 2])))) > (((/* implicit */int) min((arr_13 [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1]), (arr_13 [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_1 - 1]))))));
                                var_16 = ((/* implicit */long long int) 1248027100);
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((((/* implicit */int) max((arr_13 [i_0 + 3] [i_1 + 2] [i_2] [i_3 + 4] [i_4]), (((/* implicit */unsigned short) arr_5 [i_0 + 1] [i_1 + 1] [i_4]))))) + (var_1))) < (var_1))))));
                                var_18 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((long long int) min((arr_11 [i_0 + 4] [i_1 + 2] [i_2]), (var_5))))), ((+(arr_2 [i_1 - 1] [i_1 - 1] [i_2])))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
