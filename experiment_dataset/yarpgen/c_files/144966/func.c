/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144966
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
    var_10 = ((/* implicit */short) var_7);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)18723)) : (((/* implicit */int) var_6))))) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) < (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) var_0)) ? (15419884147559058659ULL) : (15419884147559058663ULL)))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((_Bool) 15419884147559058640ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned short)12] [i_0]))) : (2575849268472806621ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [5ULL] [5ULL])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((-326646549) == (((/* implicit */int) arr_0 [i_0] [i_0])))))))) : (((3026859926150492966ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) 178716189)) && (((/* implicit */_Bool) (signed char)0))))), (min((((((/* implicit */_Bool) 3026859926150492952ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) (signed char)-9))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) var_0))));
                    arr_11 [i_2] = ((/* implicit */int) arr_10 [12] [i_2] [i_3] [i_3]);
                    arr_12 [i_2] = ((/* implicit */long long int) ((unsigned int) arr_9 [i_2] [7U] [i_2]));
                    arr_13 [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) (signed char)-1);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_4 = 3; i_4 < 14; i_4 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    for (long long int i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        {
                            arr_27 [i_4] [i_6] [(unsigned char)11] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((short) ((int) (signed char)-26)));
                            arr_28 [i_1] [i_4] [i_4] [i_6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_6] [i_4 - 2])) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (unsigned short)13))));
                            var_13 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) 1082370974U))) ? (arr_18 [i_4] [i_1] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_8 = 2; i_8 < 14; i_8 += 2) 
            {
                for (unsigned char i_9 = 0; i_9 < 15; i_9 += 3) 
                {
                    for (unsigned int i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [i_4 + 1] [i_4] [i_4] [i_4 + 1] [i_8 + 1])) ? (((/* implicit */int) (unsigned char)93)) : (((((/* implicit */_Bool) arr_21 [i_4 - 1] [i_8])) ? (((/* implicit */int) (unsigned short)65519)) : (arr_32 [i_10] [i_10] [(unsigned short)2] [i_10])))));
                            arr_36 [(unsigned char)2] [i_4] [i_8 - 1] [i_9] [i_10] = ((/* implicit */long long int) 511);
                        }
                    } 
                } 
            } 
            var_15 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (arr_2 [i_4 - 3] [i_4]));
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 2) 
            {
                var_16 = ((/* implicit */short) arr_22 [i_4] [i_4]);
                var_17 = ((((/* implicit */_Bool) var_5)) ? (1658021062U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4 - 2] [i_4 + 1]))));
            }
        }
    }
    var_18 = ((/* implicit */signed char) ((unsigned char) min((((/* implicit */unsigned int) (signed char)-17)), (var_0))));
}
