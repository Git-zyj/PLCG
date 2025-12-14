/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181676
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
    var_10 = ((unsigned short) ((((/* implicit */_Bool) ((short) var_5))) ? (((/* implicit */long long int) min((var_9), (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_5)))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_11 -= ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_1 [i_0])))) <= (((/* implicit */int) ((unsigned short) arr_1 [i_0])))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                for (unsigned short i_3 = 2; i_3 < 20; i_3 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (short i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
                        {
                            var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3 - 1] [i_3] [i_3 + 4] [i_3] [i_3 + 3])) ? (((/* implicit */int) arr_9 [(unsigned char)18] [(short)23] [i_3 - 1] [i_3 + 4] [i_3 - 1])) : (((/* implicit */int) arr_9 [(signed char)15] [(signed char)16] [i_3 - 1] [(signed char)16] [i_3 - 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_2 - 1] [i_1] [i_4])) < (((/* implicit */int) arr_1 [i_3 + 1])))))) : (max((((/* implicit */unsigned long long int) (unsigned char)1)), (((((/* implicit */_Bool) arr_0 [i_3] [i_0])) ? (9223090561878065152ULL) : (((/* implicit */unsigned long long int) var_9))))))));
                            arr_11 [i_4] [i_1] [i_1] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) min((min((((/* implicit */long long int) (~(arr_2 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) arr_0 [i_1] [i_0])) : (arr_3 [i_0]))))), (((/* implicit */long long int) (unsigned char)228))));
                            var_13 = ((/* implicit */unsigned short) max((max((max((((/* implicit */int) (unsigned char)2)), (arr_2 [i_1] [i_4]))), (((((/* implicit */_Bool) arr_0 [i_3 - 2] [i_3 - 2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))))), ((~(((((/* implicit */_Bool) arr_6 [i_1] [i_0])) ? (((/* implicit */int) (unsigned short)55240)) : (((/* implicit */int) var_8))))))));
                            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_0)))), (((/* implicit */int) ((short) arr_10 [i_0] [i_1] [i_2] [i_3] [i_4])))))) ? (((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) * (((((/* implicit */_Bool) var_0)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(4294967295U)))) ? (arr_3 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_4))))))))))));
                        }
                        for (short i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_0] [i_1] [i_1] [(short)13] [i_1] [i_1] [4U] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) arr_12 [16] [i_0] [6ULL] [i_2 + 1] [(unsigned short)7] [i_5])) / (arr_10 [i_2 - 1] [i_2] [i_2 - 1] [i_3 + 2] [i_5]))));
                            arr_17 [(signed char)0] [i_1] [(signed char)0] [i_1] [i_0] = ((/* implicit */unsigned short) (+((~(arr_2 [i_3 + 1] [i_3 + 4])))));
                            arr_18 [i_1] [i_2 - 1] [(unsigned char)1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_1 [i_5]))))))), (((min((((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_1] [i_0])), (0U))) ^ (arr_7 [i_1] [(unsigned short)12] [i_0] [i_2 + 1])))));
                        }
                        for (signed char i_6 = 3; i_6 < 22; i_6 += 3) 
                        {
                            var_15 -= ((/* implicit */short) (-((~(((long long int) arr_1 [i_6]))))));
                            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_9 [i_3 - 1] [(unsigned short)18] [i_2 + 1] [i_2 + 1] [i_1])) ? (((/* implicit */int) arr_9 [i_3 - 1] [i_3 - 2] [i_3] [i_2 + 1] [i_0])) : (((/* implicit */int) arr_9 [i_3 - 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2])))) & (((/* implicit */int) min((arr_9 [i_3 - 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2]), (arr_9 [i_3 - 1] [i_3 - 2] [i_3 + 4] [i_2 + 1] [i_2])))))))));
                        }
                        for (short i_7 = 1; i_7 < 22; i_7 += 2) 
                        {
                            arr_26 [i_1] [(unsigned short)0] [i_2] [(unsigned short)8] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) (+(((/* implicit */int) arr_4 [i_0] [i_1]))))))) & (((long long int) arr_10 [(unsigned short)13] [i_3 + 2] [i_2 + 1] [i_2] [i_1]))));
                            arr_27 [(short)14] [(short)14] [i_2] [12ULL] [i_0] [(short)14] &= ((/* implicit */int) (-((-(arr_7 [(unsigned short)10] [i_2 + 1] [(unsigned short)10] [(unsigned short)10])))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((unsigned int) var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_2] [(unsigned short)23] [i_2] [i_2] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)146))) : (arr_3 [i_2])))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_1])) | (((/* implicit */int) var_6))))) ? ((+(8388607LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_25 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0]))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_15 [i_0] [i_2 - 1] [(short)4] [(short)4] [i_3 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_8] [14ULL] [14ULL] [i_1]))) : (2348320709777763007LL)))))));
                            var_19 = ((/* implicit */unsigned short) arr_19 [i_0] [i_1] [i_0] [i_3] [i_8]);
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_9 = 2; i_9 < 13; i_9 += 1) 
    {
        arr_34 [i_9] = ((/* implicit */unsigned int) min((arr_3 [i_9 + 2]), (((/* implicit */long long int) ((unsigned int) arr_3 [i_9])))));
        var_20 -= ((/* implicit */unsigned char) max((((int) ((1U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_9 + 2] [i_9] [(short)4] [i_9 + 2] [(unsigned char)9] [i_9])))))), ((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))))));
        /* LoopNest 3 */
        for (long long int i_10 = 0; i_10 < 15; i_10 += 3) 
        {
            for (unsigned short i_11 = 0; i_11 < 15; i_11 += 1) 
            {
                for (unsigned short i_12 = 0; i_12 < 15; i_12 += 1) 
                {
                    {
                        arr_44 [i_12] [i_9] [i_11] [i_9] [i_9 + 2] = arr_14 [i_9] [i_9] [(unsigned char)9] [(unsigned char)9];
                        arr_45 [i_9] [i_11] [(unsigned short)8] [i_9] = ((/* implicit */unsigned short) (~((~(((((/* implicit */_Bool) (unsigned char)125)) ? (-541977002) : (((/* implicit */int) var_6))))))));
                        var_21 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */int) arr_23 [i_9] [i_9] [i_10] [i_9]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_6))))) : (arr_35 [i_9 + 2] [i_9 + 2]))), (((/* implicit */long long int) (+(arr_39 [i_9 - 1] [i_9 - 2] [i_9 - 2] [i_9 - 2]))))));
                    }
                } 
            } 
        } 
    }
    for (short i_13 = 0; i_13 < 24; i_13 += 1) 
    {
        arr_48 [i_13] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_21 [i_13] [i_13] [i_13] [i_13])) ? (arr_21 [i_13] [i_13] [i_13] [i_13]) : (arr_21 [i_13] [i_13] [i_13] [i_13]))), ((-(arr_21 [i_13] [i_13] [i_13] [i_13])))));
        arr_49 [i_13] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_25 [i_13] [i_13] [(short)0] [i_13] [i_13] [i_13]))));
        var_22 = ((/* implicit */unsigned short) ((unsigned long long int) max((arr_20 [(short)0]), (arr_20 [16U]))));
        var_23 = ((/* implicit */signed char) max((((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) arr_46 [(unsigned short)11])))))), (arr_3 [i_13])));
    }
    for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 3) 
    {
        var_24 = ((/* implicit */unsigned short) min((((/* implicit */int) max((arr_25 [i_14] [i_14] [(unsigned short)6] [i_14] [i_14] [i_14]), (arr_25 [i_14] [i_14] [(unsigned short)0] [i_14] [i_14] [i_14])))), (((((/* implicit */_Bool) arr_25 [i_14] [i_14] [(signed char)10] [i_14] [i_14] [i_14])) ? (((/* implicit */int) arr_25 [6ULL] [i_14] [(unsigned short)2] [i_14] [i_14] [i_14])) : (((/* implicit */int) arr_25 [i_14] [i_14] [(unsigned short)12] [(unsigned short)12] [i_14] [i_14]))))));
        arr_53 [i_14] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_21 [i_14] [i_14] [i_14] [i_14])), (arr_32 [(unsigned char)12])))) ? (((((/* implicit */_Bool) var_9)) ? (arr_51 [i_14]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [14LL] [14LL]))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_22 [2]))))))));
    }
}
