/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153864
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
    var_13 = ((/* implicit */unsigned short) (_Bool)1);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                for (unsigned short i_3 = 4; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_14 = ((unsigned long long int) max((arr_8 [i_3 - 2] [i_3 - 2] [(unsigned short)7] [(unsigned short)21] [i_3] [i_3 - 4]), (((/* implicit */unsigned short) (_Bool)0))));
                        var_15 = ((/* implicit */short) (_Bool)1);
                        var_16 = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1] [i_1] [i_1])) / (((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
        } 
        arr_9 [(unsigned short)17] = ((/* implicit */int) (_Bool)1);
    }
    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_6 [i_4] [i_4])) ? (((/* implicit */int) arr_12 [9ULL] [i_4])) : (((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_4])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4747487556018230396ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10129001240019059221ULL)))) ? (((/* implicit */int) (_Bool)1)) : ((~(arr_11 [i_4] [i_4]))))))))));
        arr_14 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_6 [i_4] [i_4])))) ? ((~(((/* implicit */int) arr_12 [i_4] [i_4])))) : (((/* implicit */int) (_Bool)1))));
        arr_15 [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)12512))));
    }
    for (unsigned long long int i_5 = 4; i_5 < 18; i_5 += 2) 
    {
        var_18 &= ((/* implicit */_Bool) var_9);
        /* LoopNest 2 */
        for (unsigned short i_6 = 1; i_6 < 19; i_6 += 2) 
        {
            for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 16; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            {
                                var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_23 [i_8] [i_8 - 4] [i_8 + 2] [i_8] [i_8 - 3])))) ? ((-(arr_23 [i_8] [i_8 + 3] [i_8 + 2] [i_8] [i_8 - 3]))) : (min((arr_23 [i_8 - 2] [i_8 - 4] [i_8 - 1] [i_8] [i_8 + 3]), (((/* implicit */unsigned long long int) (_Bool)1))))));
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)54744)) & (((/* implicit */int) (short)-30146))));
                                arr_30 [i_5] [i_6] [i_7] [i_6] [i_9] = ((/* implicit */_Bool) (short)-12525);
                                var_21 = ((/* implicit */_Bool) max(((unsigned short)62375), (arr_26 [(unsigned short)16] [i_6])));
                                var_22 = ((/* implicit */unsigned int) ((unsigned short) min((arr_28 [7U] [i_8] [i_7] [i_5 - 3] [i_5 - 3]), (arr_28 [i_5 + 1] [i_5 + 1] [i_7] [i_7] [i_7]))));
                            }
                        } 
                    } 
                    arr_31 [i_7] [(_Bool)1] = ((/* implicit */unsigned int) (_Bool)1);
                    arr_32 [i_5 - 1] [i_5] [i_5 + 2] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9652)) ? (arr_6 [i_6 + 1] [i_6]) : (arr_6 [i_6] [i_6 - 1])))) ? (max((((/* implicit */unsigned long long int) (unsigned short)8)), (arr_6 [i_6] [i_6 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_5 - 3] [i_5 - 3] [i_6] [i_5 - 3] [i_6 - 1])))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */short) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_7))))))), ((short)18842)));
    /* LoopSeq 1 */
    for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 2) 
        {
            for (int i_12 = 1; i_12 < 15; i_12 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 4) 
                    {
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [16U] [16U])) ? (((/* implicit */int) (unsigned short)51603)) : (((((/* implicit */int) arr_36 [0ULL] [0ULL])) | (((/* implicit */int) arr_40 [i_10] [(unsigned short)6] [i_10] [i_10]))))));
                        arr_45 [i_11] = ((/* implicit */_Bool) (-(((/* implicit */int) var_12))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_14 = 1; i_14 < 17; i_14 += 2) 
                        {
                            var_25 = ((/* implicit */int) (_Bool)1);
                            arr_49 [i_10] [i_11] [i_13] [i_11] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((12831782308075367642ULL) >> (0U)))));
                        }
                        for (unsigned short i_15 = 0; i_15 < 19; i_15 += 4) 
                        {
                            arr_53 [i_10] [i_10] [i_12] = ((/* implicit */unsigned short) var_12);
                            arr_54 [i_10] [i_11] [i_10] [(unsigned short)9] [i_15] = ((/* implicit */unsigned long long int) var_1);
                            arr_55 [i_12 + 4] [i_11] [i_12 + 4] [(unsigned short)13] [i_15] [i_12 + 4] = ((/* implicit */_Bool) var_11);
                        }
                        for (unsigned short i_16 = 0; i_16 < 19; i_16 += 2) 
                        {
                            arr_60 [i_10] [i_10] [i_10] [i_10] [i_10] = (_Bool)1;
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (arr_38 [i_10])));
                        }
                        var_27 = ((/* implicit */_Bool) ((arr_5 [0] [i_12 + 3] [i_12 + 3]) ? (((/* implicit */int) arr_5 [i_10] [i_11] [i_12 + 3])) : (((/* implicit */int) arr_5 [i_10] [i_10] [i_10]))));
                        var_28 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 8088214450291298694ULL)))) < ((+(0U)))));
                    }
                    for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                    {
                        arr_64 [i_10] = ((/* implicit */unsigned long long int) arr_50 [i_10] [i_10] [i_12 + 3] [i_17 + 1] [10ULL]);
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) - (((/* implicit */int) (_Bool)1))));
                        var_30 = ((/* implicit */unsigned int) (unsigned short)5463);
                    }
                    var_31 -= ((/* implicit */_Bool) min((max(((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (453902615))), (((((/* implicit */int) var_2)) + (((/* implicit */int) (unsigned short)26031)))))), (((/* implicit */int) var_6))));
                    arr_65 [i_12] [i_10] [i_12 + 1] = ((/* implicit */unsigned long long int) max((min((((/* implicit */int) (_Bool)1)), (var_9))), (((/* implicit */int) var_6))));
                    var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) 12831782308075367642ULL))));
                    var_33 = ((/* implicit */_Bool) ((unsigned short) min((((((/* implicit */int) var_1)) >> (((732926082743842624ULL) - (732926082743842607ULL))))), (((/* implicit */int) (short)-15191)))));
                }
            } 
        } 
        arr_66 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) (unsigned short)51648))))) >= (max((((/* implicit */unsigned long long int) -1626160514)), (2863088779417570017ULL)))))) > (((((/* implicit */_Bool) arr_18 [i_10] [(short)3])) ? (((((/* implicit */_Bool) arr_22 [i_10] [i_10] [i_10])) ? (var_9) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) max((arr_24 [i_10] [i_10] [i_10] [(unsigned short)6]), (((/* implicit */unsigned short) (short)4)))))))));
    }
}
