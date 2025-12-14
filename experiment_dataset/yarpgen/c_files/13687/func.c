/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13687
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 3) /* same iter space */
                {
                    var_16 = ((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2]);
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)206)) * (((/* implicit */int) (unsigned char)6)))))));
                }
                for (int i_3 = 0; i_3 < 15; i_3 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) min(((unsigned char)159), ((unsigned char)234))))));
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((max((arr_0 [i_4] [i_0]), (((/* implicit */int) var_7)))) % (((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_4 [i_0] [i_1] [i_3] [i_4]))))))) ? ((~(((/* implicit */int) arr_5 [i_4] [(unsigned short)13] [i_1])))) : (((/* implicit */int) ((unsigned char) arr_3 [i_0])))));
                        var_20 = max((((((/* implicit */int) arr_7 [i_0] [i_1] [i_3] [i_4])) % (((/* implicit */int) arr_5 [i_1] [i_3] [i_4])))), (((/* implicit */int) ((unsigned char) arr_7 [i_0] [i_1] [i_3] [i_4]))));
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)-29084)))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) -200036650)) || (((/* implicit */_Bool) 2305807824841605120ULL))));
                        var_23 = ((/* implicit */unsigned int) ((unsigned char) min((arr_0 [(unsigned char)13] [i_5]), (arr_0 [i_3] [i_1]))));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(((/* implicit */int) arr_4 [i_0] [i_1] [i_0] [i_5])))) * (((/* implicit */int) arr_3 [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1] [i_3] [i_1])) + (((/* implicit */int) arr_9 [i_5] [6U] [i_0] [i_1] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_3] [i_5]))))) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_3]))))))))));
                    }
                    var_25 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_11 [i_0] [(unsigned short)0] [i_1] [i_1] [i_3] [i_3]))) ? (((((/* implicit */int) var_15)) << (((var_4) - (8794889584631956171ULL))))) : (((((/* implicit */int) arr_2 [i_0] [i_1] [i_0])) | (((/* implicit */int) arr_6 [i_0] [i_1] [i_3])))))));
                    var_26 = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_4 [i_3] [i_1] [i_1] [i_0])) * (((/* implicit */int) arr_4 [i_0] [i_1] [i_1] [i_3]))))));
                }
                var_27 = ((/* implicit */unsigned char) min((var_27), (arr_2 [(short)7] [i_1] [i_1])));
                var_28 = arr_4 [i_1] [i_1] [(unsigned char)3] [i_0];
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned char) var_10);
        var_30 = ((/* implicit */unsigned char) (((((+(((/* implicit */int) var_11)))) + (2147483647))) << (((((/* implicit */int) arr_3 [(short)1])) - (11855)))));
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 14; i_7 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_19 [i_8] [i_8] [(_Bool)1] = ((/* implicit */unsigned int) ((unsigned long long int) arr_15 [i_7] [i_8]));
            /* LoopNest 3 */
            for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
            {
                for (unsigned char i_10 = 0; i_10 < 14; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) arr_1 [i_9])))));
                            arr_26 [i_7] [5U] [i_9] [i_9] [i_10] [i_11] = ((/* implicit */int) arr_21 [i_10] [i_8] [i_9]);
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_12 = 3; i_12 < 10; i_12 += 4) 
        {
            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))));
            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) >> (((var_5) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [(_Bool)1]))))));
        }
        var_34 = ((/* implicit */_Bool) ((unsigned char) arr_8 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]));
        var_35 = ((/* implicit */unsigned short) ((unsigned long long int) arr_25 [i_7] [(_Bool)1] [(unsigned char)7] [i_7]));
    }
}
