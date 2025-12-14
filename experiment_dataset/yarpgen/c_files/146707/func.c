/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146707
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
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_10))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) 18446744073709551609ULL);
                var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 26ULL))));
                arr_6 [i_0] [i_0] [i_1] &= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) max((arr_1 [(signed char)11]), (((/* implicit */unsigned long long int) arr_4 [i_0]))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_0 [2U])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_4 = 4; i_4 < 19; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_15)), (18446744073709551609ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 0ULL)))) : (arr_15 [i_3] [i_3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_3] [i_5])) ? (max((((/* implicit */long long int) (short)20)), (arr_12 [i_2] [i_2] [i_2]))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */_Bool) max((2147483647), (((/* implicit */int) var_2))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [18LL]))) & (15021594847164324791ULL))) : (((/* implicit */unsigned long long int) (-(3924636521728021865LL))))))));
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_20 [i_2] [i_3] [(unsigned short)17] [i_3] [i_6] [i_4] [i_2])) : (((/* implicit */int) (unsigned short)33543))))), (max((((/* implicit */unsigned long long int) arr_19 [i_4])), (var_11))))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) ((int) (short)43)))))))));
                }
                arr_21 [i_2] = ((/* implicit */unsigned short) (+(max(((~(0ULL))), (((((/* implicit */_Bool) arr_20 [i_3] [i_3] [i_3] [(unsigned short)7] [i_3] [(unsigned short)9] [(signed char)12])) ? (arr_9 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (_Bool)0))));
            }
        } 
    } 
    var_22 += ((/* implicit */unsigned short) var_8);
    var_23 = ((/* implicit */long long int) var_6);
}
