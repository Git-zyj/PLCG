/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122804
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
    var_17 = ((/* implicit */unsigned int) (short)32767);
    /* LoopSeq 4 */
    for (long long int i_0 = 3; i_0 < 9; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (unsigned char)235))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (signed char)-1);
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((0U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34928))))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)34928)) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 2])))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 9; i_1 += 1) /* same iter space */
    {
        var_20 &= ((/* implicit */unsigned int) (-(((/* implicit */int) var_3))));
        arr_6 [i_1] = ((/* implicit */unsigned char) (unsigned short)30592);
    }
    for (long long int i_2 = 3; i_2 < 9; i_2 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (-(((/* implicit */int) arr_5 [i_2 + 1])))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_22 += ((/* implicit */short) max((max((max((arr_12 [i_2]), (((/* implicit */unsigned long long int) (short)-32758)))), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)30592)) >= (((/* implicit */int) var_7))))) & (arr_1 [i_2 + 2]))))));
                    arr_15 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) max(((+(((/* implicit */int) arr_3 [i_2])))), (((/* implicit */int) ((signed char) max(((unsigned short)34928), (((/* implicit */unsigned short) arr_13 [i_2]))))))));
                }
            } 
        } 
    }
    for (long long int i_5 = 3; i_5 < 9; i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] = ((/* implicit */unsigned char) (short)-20087);
        arr_19 [i_5] = ((/* implicit */int) max((var_12), (max((((/* implicit */long long int) (unsigned short)30607)), (var_14)))));
    }
}
