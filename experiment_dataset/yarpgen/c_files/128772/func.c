/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128772
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
    for (short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_8 [16ULL] [(short)14] [i_0 + 4] &= ((/* implicit */short) var_2);
                    arr_9 [i_0] [i_0] = ((short) arr_3 [(short)19] [i_2]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 2; i_3 < 9; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            {
                arr_16 [i_3] [i_3] = ((/* implicit */short) ((min(((+(var_10))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))))) / (((/* implicit */unsigned long long int) max(((~(1161662792U))), (var_11))))));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned int i_7 = 0; i_7 < 10; i_7 += 2) 
                            {
                                var_13 = ((/* implicit */short) ((unsigned long long int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))) | (var_10))))));
                                var_14 *= (~((~((~(arr_23 [i_7] [i_6] [i_4] [i_4] [i_3]))))));
                                arr_24 [i_7] [i_6] [i_3] [i_3] [i_4] [i_3 + 1] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2847437044U)) ? (((/* implicit */int) arr_21 [i_3])) : (((/* implicit */int) arr_5 [i_3] [i_3] [i_3 - 1]))))), (((((/* implicit */_Bool) arr_5 [i_3 - 2] [i_3] [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3]))) : (arr_14 [i_3 + 1] [i_3] [i_3 - 2])))));
                            }
                            arr_25 [i_6] [i_6] [i_6] [(short)4] [i_3] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_23 [i_3] [i_4] [i_5] [i_6] [i_6])) ? (((/* implicit */int) arr_15 [i_3] [i_5])) : (((/* implicit */int) arr_13 [i_3])))) + (((/* implicit */int) arr_6 [i_5]))))) ? (2847437044U) : (var_2));
                        }
                    } 
                } 
                var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(2847437044U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_1 [(short)4])));
                arr_26 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_2 [i_3])))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_3]))))) && (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_3 - 1] [i_3] [(short)16])) || (((/* implicit */_Bool) arr_1 [i_3]))))))))));
                /* LoopSeq 1 */
                for (unsigned int i_8 = 1; i_8 < 9; i_8 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_9 = 1; i_9 < 8; i_9 += 2) 
                    {
                        arr_31 [i_9] [i_3] [i_8] [i_4] [i_3] [5ULL] = ((/* implicit */unsigned long long int) 1447530258U);
                        arr_32 [i_3] [i_8] [i_8] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                        var_16 = ((/* implicit */short) (-(((/* implicit */int) var_9))));
                        var_17 -= arr_13 [2U];
                    }
                    for (unsigned int i_10 = 3; i_10 < 8; i_10 += 1) 
                    {
                        var_18 *= ((/* implicit */unsigned long long int) (~((-(1447530254U)))));
                        arr_35 [i_3] [i_4] [i_3] = ((/* implicit */short) ((var_3) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2847437044U)) && (((/* implicit */_Bool) arr_27 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_10 - 2]))))))));
                    }
                    for (short i_11 = 0; i_11 < 10; i_11 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_12 = 0; i_12 < 10; i_12 += 1) 
                        {
                            var_19 += ((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) ((short) var_4))), ((-(1447530246U)))))));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 216451506U)) ? (988012186U) : (((((/* implicit */_Bool) 6057781730409883931ULL)) ? (324187293U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)8388)))))))) && (((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_3 + 1]))) != ((+(var_11)))))));
                            var_21 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3] [i_3 - 1]))) | (max(((~(arr_2 [10ULL]))), (var_3)))));
                        }
                        for (short i_13 = 2; i_13 < 8; i_13 += 2) 
                        {
                            var_22 += max((max((((arr_4 [i_13] [i_8 + 1] [3ULL]) + (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) arr_36 [i_3] [i_3] [i_3] [i_3 + 1] [i_8 + 1] [i_3])))), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (short)-8388)) && (((/* implicit */_Bool) arr_30 [i_13 - 1] [i_11] [i_11] [4U] [i_4] [i_3])))))));
                            var_23 = 1447530251U;
                            var_24 -= ((/* implicit */short) var_2);
                            arr_43 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) ((unsigned int) ((short) 1447530232U)));
                        }
                        var_25 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_4] [i_4] [i_4] [(short)0])) ? (((/* implicit */unsigned long long int) (-(var_11)))) : (max((((/* implicit */unsigned long long int) max((var_9), ((short)-8389)))), (min((var_12), (((/* implicit */unsigned long long int) arr_42 [i_11] [(short)8] [(short)8] [i_4] [i_3]))))))));
                    }
                    for (short i_14 = 0; i_14 < 10; i_14 += 2) 
                    {
                        var_26 = ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_5 [i_14] [i_3] [i_4])) % (((/* implicit */int) arr_6 [i_8]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_3])))))) : (max((((unsigned int) arr_36 [8U] [i_14] [i_8] [i_8] [i_4] [i_3])), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_0))))))));
                        arr_46 [i_3 - 1] [i_4] [i_8] [i_3 - 1] [i_3 - 1] [i_3] = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_4] [i_4] [i_8])))))))))));
                    }
                    arr_47 [i_8 - 1] [i_3] [i_3] [i_3] = ((/* implicit */short) (((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (var_12))))) >= (((/* implicit */unsigned long long int) min((((/* implicit */int) ((arr_4 [(short)23] [6ULL] [i_3 - 2]) >= (((/* implicit */unsigned long long int) var_2))))), (((((/* implicit */int) arr_3 [i_4] [i_8])) - (((/* implicit */int) (short)-8389)))))))));
                }
            }
        } 
    } 
}
