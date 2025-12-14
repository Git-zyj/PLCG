/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178915
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
    var_15 = ((/* implicit */_Bool) 0LL);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_16 = (~(((/* implicit */int) (signed char)-32)));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    arr_7 [i_0] [i_2] [i_2] = ((/* implicit */int) arr_0 [i_1] [i_1]);
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-32)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_18 &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1])) + (((/* implicit */int) arr_9 [i_4] [i_2 + 1] [i_2 + 1]))));
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) arr_10 [i_0] [9] [i_2] [i_1] [(short)18] [i_3] [i_4]))));
                                var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_2] [i_2] [i_2] [i_2 + 1] [i_2]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_0 [(short)7] [6LL]))) | (arr_1 [(unsigned short)9])))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */_Bool) min((var_21), (arr_5 [i_0] [i_0] [i_0])));
                }
                for (int i_5 = 1; i_5 < 20; i_5 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 1; i_6 < 19; i_6 += 4) 
                    {
                        var_22 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : ((+(((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_5] [i_5] [i_0])) ? (arr_1 [6U]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                        arr_19 [i_0] [i_0] &= ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))), (-7392642709815279249LL)));
                        var_23 = ((/* implicit */long long int) arr_4 [i_1] [i_6]);
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 21; i_7 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((arr_5 [i_1] [i_5] [i_6]) && ((!(((/* implicit */_Bool) (unsigned short)6)))))))));
                            var_25 = ((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_0] [9ULL] [i_7]);
                            var_26 *= ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_12 [i_5 + 1] [i_6 + 2] [i_6 + 1] [i_6] [i_7] [i_7])), ((unsigned short)65507)))) | (((/* implicit */int) ((var_5) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6 - 1] [i_5 - 1] [(_Bool)1] [i_5 - 1] [i_0]))))))));
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) var_9))));
                        }
                    }
                    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) arr_17 [i_5] [i_5 + 1] [i_1] [i_1]))));
                    var_29 += ((/* implicit */unsigned int) arr_21 [(unsigned char)12] [i_5] [i_1] [i_0] [(short)16]);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        for (unsigned char i_9 = 1; i_9 < 12; i_9 += 3) 
        {
            {
                var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) (signed char)12)), (min((var_5), (6ULL))))), (((/* implicit */unsigned long long int) ((_Bool) (unsigned char)241))))))));
                var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [(unsigned char)15] [(unsigned char)15])), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_14 [i_8])) : (((/* implicit */int) var_12))))))) || (((/* implicit */_Bool) arr_13 [(unsigned short)16] [i_9] [i_8] [i_8] [(unsigned short)16])))))));
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) >> (((/* implicit */int) arr_12 [i_8 - 1] [i_9 + 2] [i_9 + 3] [i_9] [i_9] [i_9 + 1]))))) ? (((/* implicit */int) max((arr_12 [i_8 - 1] [i_9 + 3] [i_9 + 3] [(short)1] [(unsigned char)2] [i_9 + 3]), (arr_12 [i_8 - 1] [i_9 + 1] [i_9 + 3] [(_Bool)0] [i_9] [i_9 + 3])))) : (((((/* implicit */_Bool) (short)1023)) ? (((/* implicit */int) arr_12 [i_8 - 1] [i_9 + 2] [i_9 + 3] [i_9 + 3] [i_9] [i_9 + 2])) : (((/* implicit */int) arr_12 [i_8 - 1] [i_9 - 1] [i_9 + 3] [i_9 - 1] [i_9 + 3] [i_9 + 2]))))));
            }
        } 
    } 
    var_33 = ((/* implicit */_Bool) max((((/* implicit */int) var_13)), (max((((/* implicit */int) (_Bool)1)), ((((_Bool)0) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (_Bool)1))))))));
}
