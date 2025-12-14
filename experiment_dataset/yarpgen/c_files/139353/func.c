/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139353
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
    for (unsigned short i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 16; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32766))) == (4863524566570804393ULL)));
                    var_21 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_6 [(unsigned short)2] [(unsigned short)14] [(unsigned short)14] [(unsigned short)2])), (min((((/* implicit */unsigned short) var_19)), (arr_3 [i_1] [i_1] [i_0])))))), (max((((/* implicit */unsigned long long int) arr_3 [i_0 + 3] [i_0 + 3] [i_0 - 3])), (var_11)))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) var_4);
    /* LoopNest 2 */
    for (unsigned short i_3 = 3; i_3 < 21; i_3 += 2) 
    {
        for (unsigned short i_4 = 1; i_4 < 21; i_4 += 1) 
        {
            {
                arr_14 [i_3] [i_4] [i_4] = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) arr_10 [i_3])), ((+(var_14))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13)))))));
                var_23 &= ((/* implicit */short) max(((-((~(var_16))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [i_3 - 1] [i_3 - 2] [i_3 - 3])))))));
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4]))) | (arr_13 [i_3] [i_3 - 3]))))) : (((/* implicit */int) ((unsigned short) ((var_16) % (arr_8 [i_3])))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_6 = 2; i_6 < 14; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (short i_7 = 3; i_7 < 15; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 2; i_8 < 15; i_8 += 3) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) ((short) arr_5 [i_6] [i_6 + 2] [i_7 - 3] [i_6]));
                        var_26 = ((unsigned long long int) 4863524566570804381ULL);
                        var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_12 [i_6 + 3] [i_7 + 1] [i_8 - 1]))));
                        var_28 = (((!(((/* implicit */_Bool) arr_13 [6ULL] [8ULL])))) ? (17927141351472402985ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 12672924458676375557ULL)))))));
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)50329))));
        }
        for (short i_9 = 0; i_9 < 18; i_9 += 3) 
        {
            arr_29 [i_5] |= ((/* implicit */unsigned long long int) arr_10 [i_9]);
            var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) (short)17307)))));
        }
        for (unsigned long long int i_10 = 2; i_10 < 16; i_10 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_11 = 2; i_11 < 17; i_11 += 3) 
            {
                for (short i_12 = 0; i_12 < 18; i_12 += 3) 
                {
                    for (short i_13 = 0; i_13 < 18; i_13 += 1) 
                    {
                        {
                            arr_38 [i_10] [i_10] [i_10] = ((((/* implicit */_Bool) (-(var_1)))) ? (arr_17 [i_10] [i_10 - 2] [i_11 - 2]) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5] [(unsigned short)1] [i_5]))) : (6ULL))));
                            var_31 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) 17112760320ULL)))));
                            var_32 &= ((((/* implicit */_Bool) 5773819615033176039ULL)) ? (12672924458676375546ULL) : (16030975072276488411ULL));
                        }
                    } 
                } 
            } 
            arr_39 [i_10] = arr_7 [i_10];
        }
        var_33 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)55845))));
        /* LoopNest 2 */
        for (short i_14 = 0; i_14 < 18; i_14 += 2) 
        {
            for (short i_15 = 0; i_15 < 18; i_15 += 3) 
            {
                {
                    var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) (-(4863524566570804387ULL))))));
                    var_35 *= ((((/* implicit */_Bool) arr_21 [i_5] [i_5] [i_5] [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_5] [i_5] [i_15]))) : (arr_21 [i_15] [i_15] [(short)5] [i_5]));
                    arr_44 [i_5] [i_5] |= var_11;
                    var_36 = var_16;
                }
            } 
        } 
        arr_45 [6ULL] = ((unsigned long long int) arr_21 [i_5] [i_5] [i_5] [i_5]);
    }
}
