/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129144
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) (short)-32594)) / (((/* implicit */int) (unsigned short)701))))) ? (((/* implicit */long long int) min((((/* implicit */int) (short)-23470)), (var_14)))) : (((long long int) (unsigned short)693)))), (((/* implicit */long long int) (short)8238))));
                                var_18 = ((/* implicit */unsigned long long int) arr_8 [(short)9] [i_3] [i_2] [(short)9] [i_2] [i_2]);
                                var_19 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-8257))) / (2241548305U)));
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((((((/* implicit */_Bool) (short)-11824)) ? (((/* implicit */int) arr_12 [i_1] [i_4])) : (((/* implicit */int) arr_0 [i_1] [i_4])))), (((((/* implicit */int) (unsigned short)64831)) - (361473217))))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) var_14)) * (arr_10 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1]))), (((arr_10 [i_0] [i_1] [5U] [5U] [i_1] [i_1]) / (arr_10 [i_0] [i_0] [5] [i_0] [i_0] [i_1])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            for (unsigned short i_7 = 3; i_7 < 11; i_7 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned short)64830)) ? (((/* implicit */int) arr_21 [i_7 + 1] [i_7 - 3])) : (((/* implicit */int) arr_21 [i_7 - 1] [i_7 - 2]))))));
                    var_23 = min((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)701)) * (((/* implicit */int) (unsigned short)713))))) ? (((unsigned long long int) (short)8236)) : (((/* implicit */unsigned long long int) ((2094288286U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49207)))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)64843))))) ? (10575882315413830905ULL) : (((/* implicit */unsigned long long int) ((-1319276267427085551LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15223)))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        for (int i_9 = 0; i_9 < 13; i_9 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) (~(min(((+(2041980332U))), (((/* implicit */unsigned int) 657509571))))));
                                var_25 = ((/* implicit */unsigned int) arr_24 [i_5] [i_7] [i_5] [i_5] [i_5]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 10; i_10 += 4) 
                    {
                        for (short i_11 = 0; i_11 < 13; i_11 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_0 [i_5] [i_5])))) | (((/* implicit */int) arr_9 [i_7 + 2]))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_5] [i_5])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-32741))))) / (((((/* implicit */_Bool) (short)8256)) ? (((/* implicit */unsigned long long int) arr_15 [i_10])) : (18446744073709551615ULL)))))));
                                var_27 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_7] [i_7 - 3] [i_10 + 3] [i_7]))))) < (((/* implicit */int) ((arr_28 [i_10] [i_10] [i_10] [i_7] [i_10 + 2] [i_10]) == (((/* implicit */long long int) arr_6 [i_6] [i_6] [1ULL] [i_10])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
