/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140886
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
    var_11 = ((/* implicit */unsigned long long int) (+(((int) (+(1722862104))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_7 [22U] [i_1] [6ULL] = ((/* implicit */int) max((((/* implicit */unsigned int) min((((/* implicit */int) arr_5 [i_1] [8LL] [i_0] [i_1])), (arr_2 [18] [(_Bool)1] [i_2])))), (((unsigned int) arr_5 [i_1] [i_1] [i_2] [i_2]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_15 [i_1] [i_1] [16] [i_4] = ((/* implicit */signed char) (~(((unsigned long long int) arr_0 [i_0] [i_0]))));
                                var_12 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) var_9)) - (max((((/* implicit */long long int) ((int) arr_10 [i_0] [19] [5LL] [(unsigned short)11]))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_14 [(unsigned char)12] [21U] [9ULL] [i_3] [(unsigned char)10] [i_3])) : (arr_4 [5ULL] [17] [(_Bool)1])))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */_Bool) (~(var_8)));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((((/* implicit */unsigned long long int) (((~(-1291753018))) | ((~(((/* implicit */int) var_5))))))) | (min((var_8), (((unsigned long long int) var_0))))))));
}
