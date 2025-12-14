/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13752
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
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = (((+(((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1])))) / (((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                                arr_20 [i_0] [i_2] = ((/* implicit */unsigned long long int) ((2186682107U) <= (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) + (14))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        arr_24 [i_0] [i_1] [i_0] [i_5] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (short)8191)) || (((/* implicit */_Bool) 4294967295U))));
                        arr_25 [i_0] = ((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_22 [i_0 + 1] [i_0 + 1] [i_0])))), (((/* implicit */int) arr_22 [i_0 + 1] [i_0 + 1] [i_0]))));
                        arr_26 [i_0] = ((/* implicit */_Bool) (+((-(1066974041)))));
                        arr_27 [(short)2] [i_0 + 1] [(signed char)4] [i_1] [i_0] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_5] [2LL] [i_1] [i_0])))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 1066974031)) && (((/* implicit */_Bool) var_3))))) <= (((/* implicit */int) arr_15 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 1])))))));
                    }
                    for (short i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        var_15 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) == (2585278440309088361LL)))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_0 - 1]))) < (((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_1]))))))))));
                        var_16 = ((/* implicit */short) ((((/* implicit */int) ((-1066974042) < (min((1066974030), (((/* implicit */int) (signed char)(-127 - 1)))))))) + ((-(((/* implicit */int) (!(((/* implicit */_Bool) -1066974042)))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 18; i_7 += 3) 
    {
        arr_32 [i_7] [i_7] = ((/* implicit */_Bool) (~(((((/* implicit */int) var_7)) | (((/* implicit */int) arr_7 [i_7] [i_7] [i_7] [i_7]))))));
        /* LoopNest 2 */
        for (unsigned short i_8 = 1; i_8 < 15; i_8 += 2) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 1; i_10 < 15; i_10 += 1) /* same iter space */
                    {
                        arr_42 [i_8 + 1] [i_7] [i_8] [i_8 + 3] [i_8 - 1] = ((/* implicit */short) (-((+(((/* implicit */int) var_10))))));
                        arr_43 [i_7] [i_7] [i_7] [i_10] [(signed char)17] = ((/* implicit */short) arr_6 [i_7] [i_8 + 3] [i_9]);
                        var_17 = ((/* implicit */signed char) arr_1 [i_7] [i_7]);
                    }
                    for (unsigned short i_11 = 1; i_11 < 15; i_11 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (-((~(4343684053263963708LL))))))));
                        arr_47 [i_7] [(short)5] [i_9] [i_7] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_34 [i_7])) ? (((/* implicit */int) arr_16 [i_7])) : (((/* implicit */int) (short)-25406))))));
                    }
                    arr_48 [i_7] [i_8] [i_7] = arr_22 [i_7] [i_8] [i_7];
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)10)))))));
                }
            } 
        } 
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (short)-25426))));
        arr_49 [i_7] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) -1066974050))))));
    }
    var_21 = ((/* implicit */unsigned long long int) min(((short)-25406), (max(((short)-1), (((/* implicit */short) (!(((/* implicit */_Bool) 3512111934U)))))))));
}
