/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110839
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
    var_20 = ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) 123145302310912ULL)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [8U] [8U] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1 - 1])) ? (var_12) : ((-2147483647 - 1))))) || (((/* implicit */_Bool) arr_2 [i_0] [i_1 + 1])))))) + (arr_0 [(short)12] [i_1])));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (!(((((517836652711513658LL) % (arr_10 [i_0] [i_0] [i_2] [i_3] [i_0]))) > (((/* implicit */long long int) ((((/* implicit */_Bool) 3720975472U)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) : (((/* implicit */int) (_Bool)1))))))))))));
                                var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((((/* implicit */int) var_11)) - (((/* implicit */int) var_5)))) != (((/* implicit */int) arr_1 [i_0])))))));
                                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (((+(arr_2 [i_4 + 1] [i_1 + 1]))) / (arr_2 [i_4 + 1] [i_1 + 1]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))) < (var_16))))));
}
