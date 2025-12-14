/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160468
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) arr_3 [i_0] [i_1] [i_2]);
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) arr_1 [i_2] [i_3]))));
                        /* LoopSeq 4 */
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)308)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22511))) : (7583779269927557191ULL)));
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_4])) >> (((7583779269927557184ULL) - (7583779269927557182ULL))))))));
                            var_21 = ((/* implicit */int) 7583779269927557212ULL);
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_2 [i_2] [i_2]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14))))) ? ((~(((/* implicit */int) (unsigned short)43688)))) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2 + 1] [i_2 + 2] [i_2 - 1] [i_5]))));
                            var_23 = ((/* implicit */unsigned short) arr_10 [i_5] [i_3] [i_2] [i_1] [i_0] [i_0]);
                        }
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            arr_16 [i_6] [i_1] [i_1] [i_3] [i_6] = ((/* implicit */_Bool) (-(3268301652U)));
                            arr_17 [i_6] [i_6] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) var_0)) / (((/* implicit */int) (unsigned short)62552)))));
                            var_24 = ((/* implicit */unsigned short) ((int) var_0));
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [15] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_11 [5] [i_1] [(short)8] [i_1] [i_1])))) ? (3396094417937894279ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        }
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            arr_21 [i_7] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)3004)) & (((/* implicit */int) (((+(((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) var_13)))))));
                            var_26 = ((((/* implicit */_Bool) 10862964803781994403ULL)) ? (10862964803781994432ULL) : (((unsigned long long int) 7583779269927557191ULL)));
                            arr_22 [i_7] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_2] [i_7]))))) ? (((((/* implicit */_Bool) 14146636397671976740ULL)) ? (((/* implicit */unsigned int) 952084673)) : (var_5))) : (((/* implicit */unsigned int) min((((/* implicit */int) (short)22505)), (1846334087)))))));
                        }
                    }
                    arr_23 [i_0] [i_0] [i_0] [11ULL] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_7 [i_2] [i_2] [i_1] [i_1] [i_0] [i_0]), (((/* implicit */signed char) arr_9 [i_0] [i_0] [i_0] [i_1] [i_0]))))) - (((/* implicit */int) arr_10 [i_2] [i_2] [i_2 - 3] [i_2 - 1] [i_2] [i_2]))))), (((((/* implicit */_Bool) arr_13 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0]))) : (((unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
    {
        arr_26 [6ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) 5963007032560040553ULL))) ? (((/* implicit */int) arr_8 [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) ((unsigned short) var_9)))))) : (min((((/* implicit */unsigned long long int) arr_14 [i_8])), (arr_5 [i_8] [i_8] [i_8] [i_8])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_9 = 1; i_9 < 10; i_9 += 1) 
        {
            var_27 = ((/* implicit */signed char) arr_12 [i_9 - 1]);
            var_28 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_9 + 2] [i_9 - 1] [i_9 - 1] [i_9 - 1])) > (((/* implicit */int) arr_8 [i_9 + 2] [i_9 - 1] [i_9 - 1] [i_9 - 1]))));
            arr_30 [i_9] = ((/* implicit */short) ((15050649655771657329ULL) << (((((/* implicit */int) (unsigned short)64301)) - (64247)))));
        }
    }
    for (unsigned int i_10 = 0; i_10 < 24; i_10 += 1) 
    {
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5963007032560040549ULL)) ? (-1492163454) : (((/* implicit */int) ((unsigned short) arr_33 [i_10] [i_10])))));
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 24; i_11 += 1) 
        {
            for (unsigned long long int i_12 = 3; i_12 < 23; i_12 += 1) 
            {
                {
                    var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_12 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (15050649655771657320ULL)))) ? (((((/* implicit */_Bool) arr_35 [i_12 + 1])) ? (arr_35 [i_12 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (arr_35 [i_12 - 2]))))));
                    arr_40 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_39 [i_12 - 1] [i_12 + 1] [i_12 - 1] [i_12 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12 - 3]))))));
                    var_31 -= ((((/* implicit */_Bool) (short)-29340)) ? (((/* implicit */unsigned long long int) -2143626062)) : (5223653230274717652ULL));
                    var_32 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_10] [i_11] [i_12] [i_11])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_34 [i_11]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_12 - 3] [i_12] [i_12] [i_12 - 3]))) : (10862964803781994404ULL))), (((/* implicit */unsigned long long int) max((-1082465319), (((/* implicit */int) arr_31 [i_12 - 3])))))));
                    var_33 -= ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_12 + 1]))) / (((unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) >> (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    }
}
