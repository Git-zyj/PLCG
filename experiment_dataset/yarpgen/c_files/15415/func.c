/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15415
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
    var_17 = ((/* implicit */signed char) max(((-(((/* implicit */int) var_3)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
            {
                var_18 -= ((/* implicit */signed char) ((arr_7 [i_1 - 2] [i_1] [i_2] [13ULL]) - (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                arr_10 [i_0] [15LL] [i_2] [i_0] = ((/* implicit */long long int) (~(234881024U)));
            }
            for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
            {
                var_19 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1 - 1] [i_1]))) / (9223372036854775807LL)));
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_1 + 4] [i_0])) - (((/* implicit */int) (unsigned char)40))));
            }
            for (unsigned char i_4 = 2; i_4 < 17; i_4 += 3) 
            {
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    for (int i_6 = 1; i_6 < 15; i_6 += 4) 
                    {
                        {
                            arr_21 [i_0] [17U] [i_5] [7LL] [i_6] [17U] = ((/* implicit */long long int) arr_8 [i_4 + 1] [i_6 + 2] [i_1 - 3] [i_1 - 3]);
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) arr_14 [i_1 - 2] [i_1 - 1] [i_1] [i_1 - 2]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        {
                            arr_26 [i_0] [i_1] [i_4] [i_4] [i_7] = ((/* implicit */int) arr_22 [i_0] [i_1] [i_4] [(unsigned char)0] [i_8]);
                            arr_27 [i_7] [i_8] = ((/* implicit */long long int) (signed char)42);
                            var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)57826)) ? (((/* implicit */int) (short)30656)) : (((/* implicit */int) var_7)))) & (((/* implicit */int) arr_12 [i_4 - 2] [i_1 + 3]))));
                            arr_28 [i_0] [(unsigned short)5] [i_7] [i_0] [13ULL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-1))));
                            arr_29 [i_7] [2U] [2U] [i_0] |= ((/* implicit */unsigned short) (~(var_13)));
                        }
                    } 
                } 
            }
            var_23 = ((/* implicit */short) (_Bool)1);
            arr_30 [(signed char)0] [i_1 + 4] [i_1 + 4] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-29))) * (arr_24 [4ULL] [i_1 - 3] [i_1] [i_1 + 1] [i_1 + 2] [4ULL])));
            arr_31 [i_0] &= ((/* implicit */unsigned char) 6118894844399287196LL);
        }
        var_24 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) arr_13 [i_0] [i_0])), (((((/* implicit */_Bool) arr_12 [i_0] [i_0])) ? (arr_23 [2ULL]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])) >= (((/* implicit */int) var_12))))) < (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)57830)) : (((/* implicit */int) arr_15 [i_0] [9ULL]))))))))));
    }
    for (int i_9 = 0; i_9 < 12; i_9 += 1) 
    {
        arr_35 [i_9] = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) arr_23 [i_9])) | (arr_8 [(unsigned short)9] [i_9] [i_9] [i_9]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_9] [(unsigned short)16] [i_9] [i_9])) ? (arr_23 [i_9]) : (arr_23 [i_9]))))));
        var_25 = ((/* implicit */unsigned long long int) ((max(((-(((/* implicit */int) arr_20 [i_9] [i_9] [i_9] [i_9] [i_9])))), (((((/* implicit */int) arr_19 [(unsigned short)8] [i_9] [i_9] [(_Bool)1] [i_9])) + (((/* implicit */int) (unsigned char)129)))))) - (((/* implicit */int) min((arr_11 [7ULL]), (((/* implicit */unsigned short) max(((unsigned char)31), (((/* implicit */unsigned char) var_12))))))))));
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) var_1))));
        arr_36 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (short)22251))) ? (((/* implicit */int) var_15)) : ((+(((/* implicit */int) arr_33 [i_9]))))));
    }
    var_27 = ((/* implicit */long long int) var_5);
    var_28 = ((/* implicit */unsigned long long int) var_2);
}
