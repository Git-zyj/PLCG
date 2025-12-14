/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132263
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
    var_16 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 13; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) ((long long int) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_1 + 2] [i_2 - 1] [i_2])))));
                                arr_13 [i_1] [i_1] [7] = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)255));
                                arr_14 [i_1] = ((/* implicit */int) var_5);
                            }
                        } 
                    } 
                    arr_15 [(short)12] [i_1] [i_1] [(unsigned char)13] = ((/* implicit */unsigned int) var_3);
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_5 [i_1 + 3] [i_2 + 2])), (var_8)))) ? (((/* implicit */int) min((arr_5 [i_1 - 1] [i_2 + 1]), (arr_5 [i_1 + 3] [i_2 + 1])))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1 + 2])) == (1766832135)))))))));
                }
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (-((+(min((1473876086), (((/* implicit */int) var_11)))))))))));
                arr_16 [i_0] [i_1] [i_1] = (!((!(((/* implicit */_Bool) 933936040U)))));
            }
        } 
    } 
}
