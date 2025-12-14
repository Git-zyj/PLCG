/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150968
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
    var_12 += ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))));
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */int) ((arr_3 [i_0] [i_1]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))))) * (((/* implicit */int) (short)0))))));
                var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(arr_2 [i_1])))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_15 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551613ULL)) ? (4228579996U) : (((/* implicit */unsigned int) 2015422295))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) % ((-(arr_0 [i_4]))))) : ((-(var_1)))));
                                var_16 ^= (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2 + 2] [i_4 + 1] [i_4 + 4]))))));
                                var_17 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_13 [i_0])) ? (((/* implicit */int) ((16962459472547796782ULL) > (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))))) : (((/* implicit */int) (short)25053))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */_Bool) min((arr_8 [i_1]), (min((((/* implicit */int) (_Bool)0)), (((((/* implicit */_Bool) arr_5 [i_1])) ? (1627441263) : (((/* implicit */int) arr_9 [i_0] [(short)14] [i_1] [i_0]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        for (short i_9 = 2; i_9 < 14; i_9 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) (~((((_Bool)1) ? (arr_22 [i_9 + 3] [i_9 + 3] [i_9 - 1]) : (((/* implicit */long long int) ((8U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [14] [i_6] [i_6] [i_6]))))))))));
                                arr_31 [i_8] [i_6] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) (_Bool)0);
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 16U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3879315979U)) ? (((/* implicit */int) arr_13 [i_5])) : (((/* implicit */int) (short)0))))) : (0ULL)));
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_9] [i_9 + 3] [i_7] [i_9]))))), (var_4))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 1; i_10 < 15; i_10 += 2) 
                    {
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_10] [i_10 - 1] [i_10] [i_10 + 1])) & (arr_12 [i_5] [i_10 + 2] [i_5] [i_10] [i_5])))) ? (((/* implicit */long long int) (~(var_3)))) : ((~(var_4)))));
                        var_23 -= ((/* implicit */int) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */unsigned long long int) var_9)) * (((arr_25 [2U] [2U] [2U] [i_7]) + (((/* implicit */unsigned long long int) -8360758695187737734LL))))))));
                    }
                    /* vectorizable */
                    for (short i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        var_24 *= ((/* implicit */short) (~(arr_36 [i_5] [i_6] [i_7] [i_11])));
                        var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_5])))))));
                    }
                }
            } 
        } 
    } 
}
