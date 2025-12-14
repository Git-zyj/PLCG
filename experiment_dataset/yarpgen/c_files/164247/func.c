/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164247
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] [i_0 - 2] = ((/* implicit */_Bool) min((max((max((((/* implicit */unsigned int) 120222863)), (arr_0 [i_0]))), (((/* implicit */unsigned int) ((1716830470) >> (((arr_0 [i_0]) - (3900081914U)))))))), (((/* implicit */unsigned int) ((max((arr_1 [10ULL]), (arr_1 [i_0]))) > (4294967295U))))));
        var_12 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_0 [i_0 - 4])))) > (max((4446659117403326975LL), (((/* implicit */long long int) arr_0 [i_0 - 4]))))));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 3; i_2 < 15; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        arr_15 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 4446659117403326975LL)) ? (min((967759496894718857ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)32767))) > (7268384397515384953LL))))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) 0U))) ? (((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_2])) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)896))))) : (((/* implicit */unsigned int) min((arr_8 [i_2] [14U]), (((/* implicit */int) arr_14 [i_3] [i_2] [i_3]))))))))));
                        var_13 = ((/* implicit */unsigned short) ((((unsigned int) ((((/* implicit */_Bool) arr_12 [14] [i_2] [(signed char)9] [(signed char)9])) ? (((/* implicit */int) arr_14 [i_1] [i_1] [i_3])) : (((/* implicit */int) arr_3 [i_1] [(short)9]))))) >> (((/* implicit */int) arr_4 [i_2 - 2]))));
                        var_14 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)99)) ? (3) : (((/* implicit */int) (_Bool)1)))) << (((max((arr_9 [i_2 + 1] [i_2] [i_2 + 1]), (arr_12 [i_3] [i_2] [i_2 - 1] [(unsigned short)13]))) - (1913410021U)))));
                    }
                    arr_16 [(_Bool)1] [i_2] [i_3] [i_2] = ((/* implicit */short) ((((4446659117403326975LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-100))))) - (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2 + 2] [i_2 + 2] [i_2 - 1])))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)57093))))) & (((((/* implicit */_Bool) ((arr_4 [(unsigned short)13]) ? (((/* implicit */int) arr_6 [i_1] [i_6] [i_1])) : (((/* implicit */int) (signed char)112))))) ? (((unsigned int) (short)32767)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_1] [i_3] [i_3] [i_6] [(signed char)3] [i_1] [i_2])) ? (((/* implicit */int) (_Bool)0)) : (arr_8 [i_1] [i_1]))))))));
                                var_16 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_0 [i_2 - 1])) || (((/* implicit */_Bool) arr_0 [i_2 - 1])))));
                                var_17 = ((/* implicit */unsigned int) min((arr_19 [i_6] [i_5] [i_3] [i_5] [11ULL]), (((/* implicit */int) ((arr_13 [14LL] [14LL] [i_2 - 3] [14LL] [i_6]) < (arr_13 [i_6] [(_Bool)1] [i_2 + 2] [i_5] [i_6]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_23 [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [1U] [i_1]))) != (-6355654302557401866LL)))))) != (((max((((/* implicit */unsigned int) (signed char)-112)), (arr_13 [(signed char)8] [i_1] [i_1] [i_1] [i_1]))) - (((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [4U] [i_1] [i_1] [(short)6] [(short)6])) / (((/* implicit */int) (unsigned short)14225))))))));
    }
    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            for (unsigned int i_9 = 0; i_9 < 17; i_9 += 1) 
            {
                for (unsigned short i_10 = 1; i_10 < 15; i_10 += 4) 
                {
                    {
                        arr_37 [i_10 - 1] [i_9] [i_8] [(unsigned short)16] = arr_12 [i_7] [i_8] [i_7] [i_10];
                        arr_38 [i_7] [i_7] [i_9] [i_10] = ((/* implicit */long long int) ((arr_9 [i_8] [i_9] [i_10]) >> (((((/* implicit */int) (short)-5607)) + (5607)))));
                        var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) 6626848109686380259LL)) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32752)))));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)54896)) + (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) ((((/* implicit */_Bool) (short)-12574)) && (((/* implicit */_Bool) -120222857)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))) : (((6241948017572367199ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)32752)))) > (18446744073709551604ULL)));
    }
    var_21 = ((/* implicit */short) var_10);
}
