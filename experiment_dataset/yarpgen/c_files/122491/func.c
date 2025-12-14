/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122491
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 8; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 7; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [(unsigned char)6] [i_1] [3LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (signed char)-115)))))) : ((~(((/* implicit */int) (short)32767))))));
                            var_12 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) var_8))))), ((short)32766)))) ? (((/* implicit */int) arr_2 [(signed char)5])) : (((/* implicit */int) min((var_4), (((/* implicit */signed char) (_Bool)1)))))));
                            var_13 &= ((/* implicit */signed char) arr_5 [i_0] [i_0]);
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) var_6))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 4; i_4 < 6; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)98))) : (-2185521667045520070LL)));
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((_Bool) (signed char)-33)))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (long long int i_6 = 3; i_6 < 8; i_6 += 1) 
                            {
                                arr_20 [i_5] [i_1] [i_5] [i_1] [(unsigned short)7] [i_5] = ((/* implicit */unsigned int) arr_16 [i_4 - 4] [i_0]);
                                var_17 -= ((/* implicit */unsigned char) (((_Bool)0) ? (((int) arr_4 [i_0])) : (((((/* implicit */_Bool) arr_17 [i_0] [i_1] [(signed char)0] [i_4] [i_1] [(signed char)0])) ? (arr_14 [i_4] [i_1] [i_4]) : (((/* implicit */int) var_4))))));
                                var_18 -= ((/* implicit */unsigned short) arr_1 [i_0]);
                            }
                            for (int i_7 = 0; i_7 < 10; i_7 += 4) 
                            {
                                var_19 = ((/* implicit */_Bool) (unsigned short)248);
                                arr_23 [i_0] [i_0] [i_4] [i_4] [i_5] [i_7] &= ((/* implicit */long long int) (_Bool)0);
                                var_20 = max((((/* implicit */long long int) var_11)), (min((((long long int) arr_2 [i_4])), (((/* implicit */long long int) arr_16 [i_0] [i_1])))));
                                var_21 += ((/* implicit */long long int) max(((+(((/* implicit */int) var_2)))), (((/* implicit */int) max((((/* implicit */short) (signed char)55)), ((short)32767))))));
                            }
                            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                            {
                                var_22 -= ((/* implicit */long long int) (signed char)-24);
                                arr_26 [(unsigned short)0] [i_1] [(unsigned short)0] [i_5] [i_5] [i_1] [(unsigned short)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (min((-2038312612), (((/* implicit */int) arr_13 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8])))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((unsigned short) arr_3 [i_1] [i_1])))))));
                                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) var_1))));
                            }
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_9 = 4; i_9 < 9; i_9 += 4) 
                            {
                                var_24 = ((/* implicit */unsigned short) ((arr_14 [i_1] [i_4 + 3] [0ULL]) + (((/* implicit */int) arr_8 [i_1 + 2] [i_4 + 1] [i_1] [i_9 - 4]))));
                                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)3)) ^ (((/* implicit */int) var_9))));
                                arr_29 [i_4] [i_1] [(signed char)6] [i_4] [(signed char)7] [i_4 - 4] = (!(var_0));
                                arr_30 [i_5] [i_5] [i_1] [i_5] = ((/* implicit */unsigned char) (_Bool)1);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)65530)) ? (var_5) : (((/* implicit */unsigned long long int) 2185521667045520058LL)))), (((/* implicit */unsigned long long int) 0LL))))) ? (((/* implicit */int) ((unsigned short) ((var_6) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))))) : ((+(((/* implicit */int) var_1)))))))));
}
