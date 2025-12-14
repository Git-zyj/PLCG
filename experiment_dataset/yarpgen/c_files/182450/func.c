/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182450
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
    var_15 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))), (max((((/* implicit */unsigned long long int) 1489562252)), (2431767333526781657ULL)))));
    var_16 = ((/* implicit */unsigned char) (unsigned short)4095);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) min((arr_6 [i_2] [i_2]), (((/* implicit */unsigned int) ((((/* implicit */int) min((var_10), (((/* implicit */short) arr_2 [i_0] [i_0]))))) / (((/* implicit */int) var_6)))))));
                            /* LoopSeq 2 */
                            for (long long int i_4 = 3; i_4 < 19; i_4 += 3) 
                            {
                                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_2]))) != (15844982807986099953ULL)))), (max((arr_5 [i_0] [0] [i_0]), (((/* implicit */short) arr_1 [i_0]))))))) ? (((arr_12 [i_4 - 3] [i_0] [i_2] [i_0 + 2] [i_4]) << (((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0 + 1] [(unsigned char)17])))))));
                                var_19 -= var_6;
                            }
                            /* vectorizable */
                            for (unsigned char i_5 = 3; i_5 < 18; i_5 += 3) 
                            {
                                arr_15 [i_5] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 + 1] [i_3] [i_0] [i_3])) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) arr_10 [i_1] [i_3] [i_3] [i_0] [i_5]))));
                                arr_16 [i_0 + 1] [i_1] [i_2] [i_0] [4ULL] = ((/* implicit */short) (+(((/* implicit */int) var_8))));
                                arr_17 [i_0] [0LL] [0LL] [i_5] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) arr_6 [i_0 - 1] [i_0 - 1])) : (var_4)));
                                var_20 = ((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_0] [i_0 + 2] [i_0 + 2]))));
                                arr_18 [i_0] [12] [16ULL] [i_0] [(unsigned char)9] = ((/* implicit */unsigned char) (~(arr_6 [i_0 + 2] [i_5 + 3])));
                            }
                            /* LoopSeq 1 */
                            for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                            {
                                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) max((var_4), (((((((/* implicit */_Bool) var_4)) ? (9104783733062480713ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [(short)10] [(short)10] [i_1] [(unsigned short)16] [i_2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_14)))))))))));
                                var_22 = ((/* implicit */short) ((unsigned char) ((16014976740182769959ULL) < (((/* implicit */unsigned long long int) (~(arr_21 [i_2] [8ULL] [i_2] [i_2] [i_0])))))));
                                var_23 |= (~(max(((+(((/* implicit */int) var_6)))), ((+(((/* implicit */int) var_12)))))));
                            }
                            var_24 = ((/* implicit */unsigned char) ((signed char) ((arr_14 [i_0 - 1] [i_0] [i_0] [i_2] [i_3]) ? (arr_4 [i_0 + 2] [i_0]) : (arr_4 [i_1] [i_0]))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned char) min(((((!(((/* implicit */_Bool) (unsigned char)199)))) ? (((/* implicit */unsigned long long int) 677832829)) : (arr_22 [i_0 - 1] [(short)4] [(unsigned char)19] [i_0] [18]))), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_1]))) < (arr_19 [i_0] [i_0 + 1] [1] [(signed char)18] [i_1] [i_1])))), (((((/* implicit */int) var_10)) / (((/* implicit */int) arr_8 [9U] [16] [i_0])))))))));
                arr_23 [14U] [14U] [14U] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 255)) ? (((/* implicit */int) (unsigned char)37)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) (unsigned char)49)) : (((/* implicit */int) var_1))));
                /* LoopSeq 3 */
                for (short i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (+(((((/* implicit */_Bool) var_2)) ? (arr_24 [18] [18] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_7] [i_7] [i_0 - 1]))))))))));
                    arr_27 [i_0] [i_0] = ((/* implicit */unsigned char) ((-2409169240972138107LL) - (((/* implicit */long long int) -97271814))));
                    arr_28 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned int) 2147483647)) : (arr_7 [i_0] [i_0]))))));
                }
                for (long long int i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    var_27 = ((/* implicit */long long int) var_2);
                    var_28 = ((/* implicit */signed char) arr_21 [i_0] [i_1] [i_1] [i_0] [i_0]);
                    var_29 *= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */int) var_9)) : (max((13029651), (((/* implicit */int) var_2)))))), (((/* implicit */int) arr_2 [i_0] [i_1]))));
                }
                /* vectorizable */
                for (unsigned int i_9 = 0; i_9 < 21; i_9 += 1) 
                {
                    var_30 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))) & (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (arr_12 [i_0] [i_0] [i_1] [i_9] [i_9]) : (((/* implicit */unsigned long long int) arr_6 [i_1] [16ULL])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 3; i_10 < 18; i_10 += 3) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */long long int) ((int) -97271825));
                                var_32 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) -2147483647)) ^ (arr_9 [i_0] [i_1] [i_0] [i_0] [i_11]))) & (((/* implicit */long long int) arr_21 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_10 - 2] [i_0]))));
                            }
                        } 
                    } 
                }
                var_33 = ((/* implicit */unsigned char) max((max((arr_19 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 2] [i_1]), (arr_19 [20LL] [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)206)) && (((/* implicit */_Bool) (unsigned char)73)))))));
            }
        } 
    } 
}
