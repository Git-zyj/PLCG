/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18364
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) ((8103962128188009970ULL) == ((~(16499713584018731800ULL)))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_0 [0ULL] [i_0]), (arr_0 [i_0] [i_0])))) && (((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            {
                                arr_19 [i_5] [i_2] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1840336446U)), (arr_16 [5U] [i_3] [i_4] [i_5])))) ? (((((/* implicit */_Bool) arr_16 [i_5] [i_4] [i_1] [i_1])) ? (arr_16 [i_5] [i_4] [i_3] [i_2]) : (13112290870073033698ULL))) : (((((/* implicit */_Bool) 206427535U)) ? (((/* implicit */unsigned long long int) 0U)) : (1947030489690819816ULL)))));
                                var_18 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_8 [i_5]) * (((4879191927728511812ULL) * (((/* implicit */unsigned long long int) 2272555485U))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8782735751925799443ULL)) ? (arr_12 [i_1] [i_1] [i_1]) : (var_16)))) : (((unsigned long long int) ((unsigned int) var_9)))));
                                var_19 = max((var_11), (max(((+(arr_6 [i_2] [i_2]))), (max((var_8), (((/* implicit */unsigned long long int) arr_4 [3ULL])))))));
                                var_20 = 13178738713275066207ULL;
                                var_21 = ((/* implicit */unsigned int) ((unsigned long long int) 10U));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 3; i_6 < 24; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) arr_14 [i_3] [i_2]);
                                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((unsigned long long int) var_0)) > (((8796092956672ULL) << (((var_10) - (560034606U))))))))));
                            }
                        } 
                    } 
                    arr_26 [i_1] [i_2] [i_3] |= ((/* implicit */unsigned long long int) ((var_2) ^ (((unsigned int) 2137291501134953679ULL))));
                    var_24 = ((/* implicit */unsigned int) ((max((14391423918577308016ULL), (((/* implicit */unsigned long long int) ((unsigned int) 2316785865612756145ULL))))) << (((((((/* implicit */_Bool) var_0)) ? (562945658454016ULL) : (((/* implicit */unsigned long long int) 206427535U)))) - (562945658453967ULL)))));
                }
            } 
        } 
        var_25 = ((unsigned long long int) (+(var_16)));
    }
    var_26 = 2515616338938557442ULL;
    var_27 ^= ((/* implicit */unsigned long long int) 2799936005U);
}
