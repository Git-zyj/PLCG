/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176842
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                arr_7 [i_1] = ((/* implicit */long long int) var_6);
                var_14 = ((/* implicit */unsigned char) max((min((max((var_10), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) arr_2 [i_1 + 2])))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_2), (var_2))))) < (arr_5 [i_1 + 2] [i_1 + 2]))))));
            }
        } 
    } 
    var_15 *= ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        for (unsigned int i_3 = 1; i_3 < 10; i_3 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [0ULL] [i_3 + 2] [i_3 + 2]))) <= (min((((/* implicit */long long int) var_13)), (var_10)))))), (((((/* implicit */_Bool) arr_4 [i_3 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_3 [i_3]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_3] [i_2]))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (var_6)))))));
                arr_13 [i_2] [(signed char)0] [i_2] = ((/* implicit */unsigned short) ((unsigned long long int) var_6));
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 11; i_6 += 4) 
                        {
                            {
                                arr_21 [(signed char)6] [i_3] [i_4] [i_2] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_4)) - (((/* implicit */int) arr_11 [i_2] [i_3 + 2] [i_4])))) + ((~(((/* implicit */int) arr_15 [i_3 + 2] [i_4 - 1] [i_5]))))));
                                arr_22 [i_6] [i_2] [0LL] [i_2] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) min((arr_15 [i_2] [i_2] [i_3]), (((/* implicit */short) ((arr_12 [i_3 - 1] [i_3 - 1]) != (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))))))))));
                arr_23 [i_2] [i_3 + 2] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)75))))) * (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((((/* implicit */int) (signed char)60)) >= (((/* implicit */int) var_0)))))))));
}
