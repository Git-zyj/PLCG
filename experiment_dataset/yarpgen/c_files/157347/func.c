/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157347
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
    for (long long int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_19 += ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0 - 1])) ? ((-(((/* implicit */int) (signed char)60)))) : ((~(16711680))))) & ((~(arr_4 [i_1] [i_0 + 1])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((arr_10 [i_0] [i_1] [i_2] [i_1]), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) -3849195728095189961LL)))))))))))));
                                var_21 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_2 [i_0 - 2] [i_3])), ((-((-(2251799796908032ULL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        arr_19 [i_5] [i_5] = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)45)), (arr_9 [i_5])))) && (((/* implicit */_Bool) min((arr_0 [i_5] [i_5]), (arr_13 [i_5] [i_5] [i_5] [i_5] [i_5])))))) ? (max((arr_1 [i_5] [i_5]), (((/* implicit */unsigned long long int) arr_9 [i_5])))) : (((/* implicit */unsigned long long int) max((((1243669010) / (((/* implicit */int) arr_2 [i_5] [i_5])))), (((/* implicit */int) (unsigned char)2)))))));
        /* LoopSeq 1 */
        for (signed char i_6 = 2; i_6 < 19; i_6 += 4) 
        {
            var_22 = (+(((((/* implicit */_Bool) arr_0 [i_5] [i_6 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5] [i_6 - 1]))) : (18444492273912643584ULL))));
            var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) min((1243669019), (((/* implicit */int) (unsigned char)2)))))));
        }
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 15; i_7 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_9 = 3; i_9 < 12; i_9 += 3) 
            {
                var_24 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_13 [i_7] [i_8] [i_7] [i_8] [i_9]))))));
                /* LoopNest 2 */
                for (long long int i_10 = 2; i_10 < 13; i_10 += 4) 
                {
                    for (unsigned short i_11 = 3; i_11 < 12; i_11 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) 153998U)) ^ (arr_13 [i_7] [i_8] [i_9 - 3] [i_10 + 2] [i_11])))) ? (((((/* implicit */_Bool) arr_28 [i_8] [i_9] [i_8])) ? (arr_33 [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31324))))) : (((/* implicit */unsigned long long int) ((arr_14 [i_8] [i_8] [i_8]) << (((((/* implicit */int) (unsigned short)45644)) - (45619))))))));
                            arr_36 [i_8] [i_8] [i_8] = ((/* implicit */short) (+(((/* implicit */int) (signed char)-52))));
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) arr_35 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) ? (((((/* implicit */_Bool) arr_27 [i_7] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45644))) : (arr_33 [i_7] [i_7] [i_7] [i_7]))) : (((/* implicit */unsigned long long int) arr_14 [i_10] [i_10 + 1] [i_10])))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 4) 
            {
                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) arr_21 [i_12] [i_8]))));
                var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_7] [i_12])) ? (arr_10 [i_7] [i_8] [i_12] [i_8]) : (1327008621U))))));
                arr_40 [i_7] [i_8] [i_7] [i_7] = ((/* implicit */_Bool) arr_29 [i_7] [i_7] [i_8] [i_12]);
            }
            arr_41 [i_7] [i_8] [i_7] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_39 [i_7] [5LL] [i_8]))));
        }
        for (unsigned char i_13 = 0; i_13 < 15; i_13 += 1) 
        {
            var_29 ^= ((/* implicit */signed char) (short)29462);
            /* LoopNest 2 */
            for (long long int i_14 = 1; i_14 < 12; i_14 += 4) 
            {
                for (short i_15 = 3; i_15 < 12; i_15 += 2) 
                {
                    {
                        var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_34 [i_15] [i_15] [i_15] [i_15 - 2] [i_15 - 2] [i_15 - 2] [i_15 - 2]))));
                        /* LoopSeq 3 */
                        for (unsigned int i_16 = 1; i_16 < 11; i_16 += 1) 
                        {
                            arr_53 [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -3849195728095189942LL))));
                            arr_54 [i_13] [i_15 - 1] [(short)4] [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_7] [i_15 + 1] [i_16 + 1])) || (((/* implicit */_Bool) arr_30 [i_16 + 4] [i_16 + 2] [i_16 + 1] [i_16 + 3]))));
                        }
                        for (unsigned char i_17 = 0; i_17 < 15; i_17 += 4) 
                        {
                            arr_57 [i_17] |= ((/* implicit */long long int) (+(arr_4 [i_7] [i_13])));
                            var_31 &= ((/* implicit */signed char) (~(((/* implicit */int) arr_34 [i_14 + 3] [i_14 + 1] [i_15 - 2] [i_17] [(unsigned char)1] [i_15 - 2] [i_17]))));
                        }
                        for (signed char i_18 = 0; i_18 < 15; i_18 += 4) 
                        {
                            var_32 += ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)114))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)64820))))) : ((~(6853922999960919086LL))));
                            var_33 = ((/* implicit */short) (~(((/* implicit */int) arr_43 [i_15 - 3]))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_19 = 0; i_19 < 15; i_19 += 3) 
                        {
                            var_34 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_50 [i_7] [i_7] [i_7] [i_14 + 1]))));
                            arr_65 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)45635)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_7] [i_7] [i_7]))) : (((((/* implicit */_Bool) arr_47 [i_13] [i_14] [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_13] [i_13] [i_13]))) : (arr_21 [i_13] [i_13])))));
                            var_35 -= (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_7] [i_13] [i_7] [i_13] [i_13] [i_13] [i_13]))))));
                        }
                        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (~(arr_28 [i_7] [i_7] [i_7]))))));
                    }
                } 
            } 
        }
        var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_7]))) + (3524198694U))))));
        var_38 = ((/* implicit */unsigned char) arr_20 [i_7] [i_7] [i_7]);
    }
}
