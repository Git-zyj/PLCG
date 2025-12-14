/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117937
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
    var_10 = ((/* implicit */int) max(((-(min((((/* implicit */unsigned long long int) var_3)), (11209443326948167032ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */short) max((((/* implicit */unsigned char) (signed char)123)), (var_1)))), (var_8))))));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        var_11 = ((/* implicit */_Bool) max(((+(((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 3])))), (((/* implicit */int) arr_1 [(unsigned char)17] [i_0 + 1]))));
        arr_2 [16U] = ((/* implicit */int) (-(((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_1 [i_0] [(_Bool)1])), (2458223298704576633LL)))) & (arr_0 [(signed char)2] [i_0])))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_12 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) 2458223298704576633LL)) - (arr_4 [i_1]))), (((/* implicit */unsigned long long int) arr_1 [i_1] [i_1]))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            for (long long int i_3 = 2; i_3 < 9; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */short) max((var_13), (arr_16 [i_2] [11] [i_3 - 1] [i_5] [i_3 - 1] [i_3] [i_3 - 2])));
                                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) var_1))));
                                arr_18 [i_5 + 2] [i_4] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) arr_14 [i_1] [i_1] [i_1] [i_1] [i_2] [i_1]);
                                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((4461817881491925774ULL) >= (((/* implicit */unsigned long long int) -2458223298704576633LL)))))));
                                arr_19 [i_1] [i_1] [i_5] [i_4] [i_2] = ((/* implicit */short) arr_10 [i_4] [i_4]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_6 = 2; i_6 < 12; i_6 += 2) 
                    {
                        for (int i_7 = 1; i_7 < 11; i_7 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) (short)3260);
                                arr_25 [i_1] [i_2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) max((11034151797191011910ULL), (((/* implicit */unsigned long long int) arr_14 [i_1] [i_2] [i_3 + 2] [i_3] [i_2] [i_7 + 2]))))))));
                                arr_26 [i_2] [i_2] [i_3 + 2] = ((/* implicit */short) ((unsigned long long int) max(((~(((/* implicit */int) arr_12 [4LL] [i_2] [i_6])))), (((/* implicit */int) (short)3260)))));
                                var_17 = ((/* implicit */long long int) arr_24 [i_1] [i_1]);
                                arr_27 [i_1] [i_2] [i_2] [i_7] [(short)3] = ((/* implicit */signed char) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_18 = ((((/* implicit */_Bool) 13888027354233007185ULL)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)111))) != (18215941143487898547ULL)))) : (((/* implicit */int) arr_17 [6LL] [(short)8] [i_1] [i_1] [i_1] [i_1])));
    }
}
