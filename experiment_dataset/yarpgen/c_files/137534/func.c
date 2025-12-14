/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137534
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((var_0) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned char)34)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)34))) : (max((((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))), (((unsigned int) var_4))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0 + 2] [i_1 + 2] [i_0 + 2] [i_2] [i_2] [i_1 + 2] [i_1] = ((/* implicit */_Bool) arr_8 [i_2] [i_2]);
                                arr_13 [i_0] [i_2] [i_0] [i_0] [i_3 - 1] [i_4] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) 343033849U)) ? (((/* implicit */int) (unsigned char)222)) : (((/* implicit */int) (unsigned char)212))))) / (6832075843930461416LL)));
                                arr_14 [i_2] [i_1] [i_1] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) arr_2 [i_0] [9] [i_2]);
                                arr_15 [2ULL] [i_2] [i_2] = ((/* implicit */long long int) var_6);
                                arr_16 [(short)12] [i_1] [i_2] [i_3 + 1] [10LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) arr_9 [i_4] [i_4] [i_4 + 2] [i_4 + 2] [i_4])) : (((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)(-32767 - 1)))))))) ? (max((((/* implicit */unsigned long long int) arr_10 [i_1 + 1] [i_3] [i_4] [i_1 + 1] [i_4] [i_3] [12LL])), (2408017003149422721ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3] [i_2] [i_1] [(signed char)7])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)16232))))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)16206))) & (arr_11 [i_1 - 2] [(unsigned char)12] [i_3] [i_4 - 2]))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        arr_19 [8LL] = ((/* implicit */unsigned long long int) (-(arr_11 [(unsigned short)8] [i_1 - 1] [i_2] [i_5])));
                        arr_20 [i_2] [i_2] [(unsigned char)15] [i_2] = ((((/* implicit */_Bool) arr_4 [i_0 + 3] [i_1] [i_1 + 2] [i_5])) ? (((/* implicit */int) (unsigned short)43203)) : (((/* implicit */int) var_0)));
                        arr_21 [(short)8] = ((/* implicit */long long int) ((unsigned char) ((unsigned int) var_9)));
                    }
                    arr_22 [i_2] [16] [i_2] = ((/* implicit */unsigned short) (~(((long long int) 1356001272))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_27 [(_Bool)1] = ((/* implicit */_Bool) (signed char)-118);
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            {
                                arr_33 [i_7] = ((/* implicit */short) (unsigned short)0);
                                arr_34 [i_0] [i_8] [i_6] [i_7] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (~(arr_5 [i_6] [i_8]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_5)))))) : ((~(((((/* implicit */_Bool) (unsigned short)11)) ? (((/* implicit */int) (short)-9878)) : (((/* implicit */int) (unsigned char)4))))))));
                                arr_35 [i_0 - 2] [i_1] [(unsigned char)2] [i_8] [3ULL] [8LL] = (short)16232;
                                arr_36 [i_0 - 2] [i_1] [i_1] [i_7] [i_7] [i_8] = max((((/* implicit */unsigned long long int) (-(arr_5 [i_0 + 2] [i_7])))), (max((((/* implicit */unsigned long long int) ((_Bool) arr_6 [i_1] [i_7] [i_7]))), (2408017003149422734ULL))));
                                arr_37 [i_1] [i_1] [i_6] [i_8] [(_Bool)1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [5LL] [i_1] [i_6] [i_8] [i_8] [(unsigned char)12])) >= (((((/* implicit */int) ((unsigned short) (unsigned char)197))) << (((arr_8 [i_1 - 1] [i_1 + 2]) - (8723517799781027175LL)))))));
                            }
                        } 
                    } 
                    arr_38 [i_0] [i_1] [i_6] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) (signed char)97)) < (1130835850))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 18; i_9 += 2) 
                    {
                        for (signed char i_10 = 1; i_10 < 17; i_10 += 2) 
                        {
                            {
                                arr_43 [i_10] [i_9] [i_6] [i_1] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (short)32754)) : (1812487129)))) ? (3647194428U) : (((/* implicit */unsigned int) 1812487115)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_0] [i_0 + 2] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (unsigned short)5)))))));
                                arr_44 [i_0] [i_1] [i_6] [i_6] [i_6] [i_9] [i_10] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (short)-16233)) : (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) (short)-24003)) == (597665179)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_10])) || (arr_9 [i_10] [1LL] [i_6] [1LL] [5LL]))))))));
                                arr_45 [15] [i_1] [15] [i_9] [i_1] = ((/* implicit */int) min((((arr_25 [(unsigned char)3]) << (((arr_25 [i_0 - 2]) - (14174795614227279088ULL))))), (((/* implicit */unsigned long long int) ((unsigned int) arr_42 [11U] [i_0] [i_1 - 2] [i_6] [i_9] [4])))));
                            }
                        } 
                    } 
                }
                arr_46 [i_1 + 2] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) arr_10 [i_0 + 2] [i_1 - 2] [i_1 - 2] [3] [i_1 - 1] [i_1 - 2] [i_1])) ? (((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (unsigned short)12141)) : (((/* implicit */int) (unsigned short)12139)))) : (((/* implicit */int) (short)32760))))));
            }
        } 
    } 
}
