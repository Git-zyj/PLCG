/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141092
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_0] = min((((unsigned int) var_8)), (((/* implicit */unsigned int) (((~(((/* implicit */int) (unsigned short)44041)))) == (((/* implicit */int) ((((/* implicit */int) (unsigned short)9981)) < (((/* implicit */int) (unsigned short)44041)))))))));
                            var_12 = max((arr_9 [i_2]), (min((arr_5 [i_1] [i_0]), (((/* implicit */unsigned char) min((arr_2 [i_1] [i_1] [i_2]), (arr_2 [i_0] [1U] [i_3])))))));
                        }
                    } 
                } 
                var_13 &= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 2] [i_0])) + (((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1] [i_1 - 1])))));
                arr_11 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) max(((+(var_4))), (((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned long long int) arr_5 [i_1 - 2] [i_0])), (var_7)))))));
                var_14 &= ((max((4294967295U), (((/* implicit */unsigned int) (unsigned short)44022)))) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_9)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 3) 
        {
            for (unsigned short i_6 = 1; i_6 < 9; i_6 += 1) 
            {
                {
                    var_15 |= ((/* implicit */unsigned short) ((unsigned int) (~(var_4))));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_8 [i_6 + 1] [i_5] [i_5 - 1] [i_4]), (arr_9 [i_5 + 1])))) ? ((+(((/* implicit */int) arr_8 [i_4] [i_5] [i_5 - 1] [i_6 - 1])))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_8 [i_4] [i_4] [i_5] [i_6])) : (((/* implicit */int) arr_9 [i_4]))))));
                    arr_20 [i_5] [i_6] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 1178324310U)), (max((((/* implicit */unsigned long long int) (unsigned short)13724)), (((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) ^ (((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (var_4) : (max((var_10), (var_4)))))));
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
    {
        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            {
                arr_25 [i_7] [i_8] = ((/* implicit */unsigned short) max((((/* implicit */int) max((arr_21 [i_7] [i_8]), (arr_21 [i_7] [i_7])))), ((-(((/* implicit */int) (unsigned short)44036))))));
                arr_26 [(signed char)11] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_7] [i_7] [i_8])) % (((/* implicit */int) ((unsigned short) var_4)))))) - (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))))), (min((926888721U), (((/* implicit */unsigned int) arr_21 [i_7] [i_8]))))))));
                var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) 11157151284267509561ULL)) || (((/* implicit */_Bool) (unsigned short)27389)))))));
            }
        } 
    } 
}
