/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189566
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
    var_13 = ((/* implicit */unsigned long long int) 0U);
    var_14 = ((/* implicit */int) ((unsigned char) var_4));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) min((((signed char) (-(((/* implicit */int) arr_2 [i_1]))))), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))))));
                arr_6 [i_1] = ((/* implicit */signed char) (+(2147483647)));
            }
        } 
    } 
    var_16 ^= ((unsigned int) var_5);
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        for (unsigned char i_3 = 1; i_3 < 19; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                {
                    arr_16 [i_4] [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_8 [i_4] [i_3]);
                    arr_17 [i_3] [i_4] = var_0;
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)96)) >> (max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)97))))), (min((var_3), (((/* implicit */long long int) (_Bool)0))))))));
                                var_18 *= min((var_3), (((/* implicit */long long int) 3256761742U)));
                                var_19 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                                arr_25 [i_2] [i_3 + 1] [i_3 - 1] [i_5] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_21 [i_2])) ? (arr_14 [i_3] [i_3 + 1] [i_3] [i_3]) : (((/* implicit */long long int) var_0)))) | (((/* implicit */long long int) ((((unsigned int) var_11)) & ((-(607684394U))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 3; i_7 < 18; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_27 [5LL] [8] [8] [i_7]))))), (((unsigned int) arr_30 [i_3 + 1] [i_4])))))));
                                var_21 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)2)) << (((var_11) - (4090319867U))))) & (((/* implicit */int) arr_26 [i_2] [(signed char)4] [i_2] [i_2] [i_2] [i_2]))));
                                var_22 = ((/* implicit */long long int) ((signed char) (signed char)112));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
