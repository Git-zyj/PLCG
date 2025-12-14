/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16971
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~((+(((/* implicit */int) var_0))))))) * (((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */unsigned int) var_11))))));
    var_14 = var_8;
    var_15 = (~(((((/* implicit */_Bool) var_1)) ? ((-(2147483638))) : ((-(((/* implicit */int) var_9)))))));
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_2 [i_0]))) ? ((-(((/* implicit */int) (unsigned short)1049)))) : (((2147483638) & (((/* implicit */int) (short)-32232))))))), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-62)) | (((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) -1541483286)) ? (((/* implicit */unsigned long long int) -447972852)) : (18446744073709551610ULL)))))));
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-1268633410)))) ? (((((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_0])), (-2147483638)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_2 [i_0]) : (((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) (+(var_10)))) ? (2147483637) : (((/* implicit */int) ((signed char) arr_0 [i_0]))))))))));
    }
    for (short i_1 = 1; i_1 < 16; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) var_5);
        var_17 = var_12;
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            arr_10 [(unsigned short)10] [i_1] = min((((unsigned int) (short)-17662)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-18905))))));
            arr_11 [i_1] = ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_6)) ? (-447972844) : (((/* implicit */int) var_8)))))) : (((/* implicit */int) (unsigned short)16116)));
            /* LoopNest 3 */
            for (unsigned int i_3 = 2; i_3 < 16; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    for (int i_5 = 3; i_5 < 15; i_5 += 2) 
                    {
                        {
                            arr_19 [i_3] [i_2] [i_3] [(short)2] [i_3] &= ((/* implicit */signed char) min((((((/* implicit */_Bool) 2U)) ? (arr_12 [i_5] [i_1 + 1] [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-17668))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [(signed char)10] [i_2] [i_3])))))));
                            var_18 = ((/* implicit */unsigned long long int) 156953098);
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 15193166145867710635ULL)) ? (arr_5 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))))))));
            arr_20 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_3);
        }
        for (int i_6 = 1; i_6 < 16; i_6 += 4) 
        {
            arr_23 [i_1] [i_1] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_18 [i_6 - 1] [i_6 - 1] [i_1] [i_1] [i_1 - 1]))))));
            arr_24 [i_1] = (short)-17658;
        }
    }
    /* vectorizable */
    for (short i_7 = 2; i_7 < 17; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            for (unsigned int i_9 = 2; i_9 < 17; i_9 += 3) 
            {
                {
                    arr_35 [i_7] [i_7] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483637)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_33 [i_9] [i_9])) : (((/* implicit */int) var_6)))) : (var_4)));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_29 [i_9 - 1])))))));
                    arr_36 [i_7] [i_8] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1541483271)) ? (4294967290U) : (((/* implicit */unsigned int) 2063656970))));
                    var_21 &= arr_26 [i_9 - 1] [i_8];
                }
            } 
        } 
        arr_37 [i_7] = ((/* implicit */short) var_6);
        arr_38 [i_7 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967272U)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)18363)) != (-447972840)))) : (((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_29 [i_7]))))));
    }
}
