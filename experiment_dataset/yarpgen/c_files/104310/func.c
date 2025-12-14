/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104310
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
    var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) var_15))));
    var_17 &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_9)), (18323370234647078659ULL)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1 + 1] [(signed char)5] [i_3] [i_3] [i_4] [(short)8] = ((/* implicit */unsigned short) ((long long int) ((int) 1899611866U)));
                                arr_13 [i_0] [i_1] [(unsigned short)5] [i_1] [i_4 + 2] [i_3] [i_3] = ((/* implicit */unsigned int) arr_6 [i_0] [5ULL] [i_2 - 2] [(short)7]);
                                arr_14 [i_1] [i_1 + 1] [i_2] [2ULL] [i_3] [12ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_1] [i_0]))) - (18323370234647078659ULL))), (((/* implicit */unsigned long long int) var_6)))) : (max(((((_Bool)1) ? (9193868406907624674ULL) : (12198132274303737806ULL))), (18323370234647078659ULL)))));
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (signed char)38))) == (((/* implicit */int) min((var_6), (((/* implicit */short) (!((_Bool)1)))))))));
                                arr_15 [i_3] = arr_9 [i_0] [i_0] [4] [i_3] [i_3] [i_3];
                            }
                        } 
                    } 
                } 
                var_19 = ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) var_6)) ? (arr_4 [i_0] [i_1] [i_1 + 1]) : (arr_4 [i_1] [i_1] [i_1 + 1]))));
                arr_16 [(short)7] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (589659837U)));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_11) : (((/* implicit */unsigned int) (+(arr_1 [i_1 + 1]))))));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    for (unsigned short i_6 = 1; i_6 < 12; i_6 += 2) 
                    {
                        {
                            var_21 -= ((/* implicit */_Bool) arr_7 [i_5] [i_6 + 1] [i_6] [i_6] [i_6]);
                            arr_22 [i_0] [i_6] [i_5] [9ULL] [i_5] = ((short) 429221059U);
                        }
                    } 
                } 
            }
        } 
    } 
}
