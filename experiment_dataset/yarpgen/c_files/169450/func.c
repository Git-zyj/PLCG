/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169450
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
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            {
                arr_4 [14] [i_0] = ((/* implicit */short) var_2);
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0 + 1] [i_4] [i_4 - 2] = ((/* implicit */short) (~((-(arr_6 [i_2 - 1])))));
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1])) ? (arr_2 [i_0 - 1] [i_4 - 2]) : (arr_2 [i_0 - 1] [i_3 - 1])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_5 = 3; i_5 < 13; i_5 += 2) 
    {
        for (int i_6 = 3; i_6 < 13; i_6 += 1) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_22 [i_7] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_12))) ? ((-(((((/* implicit */_Bool) 2097151U)) ? (arr_16 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (short)4064))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4292870161U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42866))) : (var_11)))) ? (max((((/* implicit */unsigned int) arr_8 [i_7])), (2097151U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_7 - 1] [i_6] [i_6]))))))));
                    var_20 &= ((/* implicit */int) (+(4292870145U)));
                    arr_23 [i_7] [i_5] [i_7] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) 2097162U)) ? (((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) (_Bool)1))))) ? (arr_21 [i_7]) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_14 [i_6] [(unsigned short)1])), (arr_2 [i_5] [i_6 - 1])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))));
                    /* LoopNest 2 */
                    for (short i_8 = 2; i_8 < 12; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 1; i_9 < 13; i_9 += 1) 
                        {
                            {
                                var_21 *= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_9 [i_5] [i_5 - 2] [i_5 - 2] [i_5 - 1]))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_16 [(unsigned short)13])))), (((((/* implicit */_Bool) ((int) arr_21 [12]))) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_0 [i_5 - 3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_7 [i_8 - 1] [i_8 + 2] [12LL]))))))))));
                                var_22 -= ((/* implicit */unsigned long long int) max(((((-(((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_5] [i_6 + 1] [i_8 - 1] [i_6 + 1]))))))), (((/* implicit */int) min(((!(((/* implicit */_Bool) var_11)))), ((!(((/* implicit */_Bool) (unsigned short)44885)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
