/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158193
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_10 = ((/* implicit */long long int) (+(18446744073709551607ULL)));
                                var_11 = ((/* implicit */signed char) max(((+(((/* implicit */int) (!(((/* implicit */_Bool) 9802135528141879253ULL))))))), (((/* implicit */int) ((((/* implicit */int) max((arr_6 [5] [i_1]), (((/* implicit */short) var_8))))) < (((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))))))));
                                var_12 ^= ((/* implicit */signed char) max((var_3), (((/* implicit */short) ((signed char) var_7)))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */short) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)52378))))) <= (((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))))))));
                    var_14 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_13 [i_0] [i_2 - 1] [i_2 - 3] [(signed char)8] [i_1 + 1] [i_0] [i_2 - 1])) ? (arr_13 [i_2 - 3] [i_2 - 1] [i_2] [i_0] [i_1 + 2] [i_0] [i_2 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (max((arr_13 [i_0] [i_2 - 2] [i_1] [i_2 - 2] [i_1 - 1] [i_2 - 2] [i_2]), (arr_13 [i_0] [i_2 - 1] [i_2 - 3] [(unsigned short)3] [i_1 + 2] [i_2] [i_2])))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) var_3);
                                var_16 += ((/* implicit */unsigned int) var_0);
                                var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) var_6))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_20 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_9 [i_1 + 2] [i_1 + 2] [i_2 + 2] [i_2 + 1] [i_2 - 2]) == (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 2] [i_2 + 2]))))))) : (min((min((var_7), (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) (~(max(((((_Bool)1) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) ((unsigned short) var_8)))))));
    var_20 = ((/* implicit */short) (((+(((/* implicit */int) var_6)))) > (((/* implicit */int) var_5))));
}
