/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136243
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
    var_12 = ((/* implicit */signed char) var_8);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_13 = ((/* implicit */int) var_3);
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_0)))) ? (((unsigned long long int) (+(arr_7 [(unsigned short)8] [i_1] [i_2] [i_3])))) : (((/* implicit */unsigned long long int) ((long long int) var_2))))))));
                        var_15 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51852))))));
                        var_16 -= ((/* implicit */_Bool) var_1);
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1 + 2])) ? (arr_7 [i_1 - 2] [i_1 + 3] [i_1 + 3] [i_1 + 1]) : (arr_7 [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_1 + 4])))) ? (((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 3])) ? (arr_7 [i_1 - 2] [i_1] [i_1 + 4] [i_1 + 4]) : (arr_7 [i_1 + 2] [(short)4] [i_1 + 1] [i_1 - 1]))) : (((((/* implicit */_Bool) arr_7 [i_1 + 1] [(signed char)4] [i_1 - 2] [i_1 - 2])) ? (arr_7 [i_1 - 2] [(signed char)2] [i_1 + 2] [i_1 + 2]) : (arr_7 [i_1 - 1] [i_1] [i_1 - 2] [i_1 + 2]))))))));
                        var_18 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 2] [i_0] [3U]))) & (arr_2 [i_1 + 3] [i_1 + 1] [i_1 + 2]))), (((unsigned int) (_Bool)1))));
                    }
                } 
            } 
        } 
    }
    for (int i_4 = 3; i_4 < 12; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                {
                    arr_18 [i_4] [i_6] [i_6] = ((/* implicit */unsigned short) var_8);
                    var_19 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_12 [i_5] [i_4])), (var_10)))) ? (((/* implicit */int) min((var_2), (arr_11 [(unsigned short)3])))) : (((/* implicit */int) ((((/* implicit */int) arr_14 [i_5] [(short)7])) <= (((/* implicit */int) (unsigned char)42)))))))));
                    var_20 = ((/* implicit */_Bool) var_1);
                    /* LoopNest 2 */
                    for (short i_7 = 4; i_7 < 13; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) 
                        {
                            {
                                var_21 -= ((/* implicit */int) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) (short)3082)), (7658956340323602197LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */int) arr_11 [i_4])) : (((/* implicit */int) (unsigned char)42)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_8] [i_4]))) : (arr_20 [(unsigned short)6] [i_5] [i_8])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_8])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))) : ((-(63U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((arr_23 [(short)5] [i_5] [i_6] [i_7 - 1] [i_8]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45786))))))))));
                                arr_25 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (min((((/* implicit */unsigned int) var_1)), (3556595336U)))))) ? (var_11) : (((/* implicit */int) max((var_5), (((/* implicit */short) arr_17 [i_6])))))));
                                var_22 = min((((/* implicit */int) arr_11 [i_4 - 1])), ((((((_Bool)1) ? (((/* implicit */int) (unsigned short)51852)) : (((/* implicit */int) var_5)))) & (((/* implicit */int) max(((unsigned short)16150), (((/* implicit */unsigned short) arr_12 [i_6] [i_4]))))))));
                                var_23 = ((unsigned short) ((((/* implicit */_Bool) ((long long int) arr_24 [i_5] [i_6]))) ? (((((/* implicit */_Bool) arr_20 [i_5] [i_6] [i_6])) ? (237094349) : (((/* implicit */int) (signed char)45)))) : (((((/* implicit */_Bool) (unsigned short)30015)) ? (((/* implicit */int) var_10)) : (var_9)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            arr_30 [i_9] [i_9] = ((/* implicit */unsigned short) min((((((/* implicit */int) arr_12 [i_4 + 1] [(unsigned char)9])) / (((/* implicit */int) arr_12 [i_4 - 3] [i_9])))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_12 [i_4 + 2] [i_9])) : (var_9)))));
            arr_31 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) var_0)) ? (arr_19 [i_4 - 1] [i_9] [i_4 - 1]) : (arr_19 [i_9] [i_9] [i_9]))) : (((((/* implicit */_Bool) var_8)) ? (arr_19 [i_9] [i_9] [i_9]) : (arr_19 [i_4] [i_9] [i_9])))));
            var_24 = ((/* implicit */unsigned int) arr_22 [i_9] [i_9] [i_9] [i_9] [i_9]);
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_11 = 0; i_11 < 14; i_11 += 1) 
            {
                for (signed char i_12 = 0; i_12 < 14; i_12 += 2) 
                {
                    {
                        var_25 = ((/* implicit */long long int) arr_26 [i_10]);
                        var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) min(((unsigned char)214), (var_1)))))));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [i_4] [(signed char)7] [i_12])) ? ((~(((/* implicit */int) var_4)))) : (var_9)));
                    }
                } 
            } 
            var_28 = ((/* implicit */signed char) var_8);
        }
        arr_41 [i_4] [i_4] = ((/* implicit */int) var_1);
    }
    /* vectorizable */
    for (unsigned short i_13 = 3; i_13 < 10; i_13 += 1) 
    {
        var_29 += ((/* implicit */_Bool) ((short) var_0));
        var_30 &= ((/* implicit */short) (unsigned short)58885);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_14 = 0; i_14 < 17; i_14 += 2) 
    {
        for (long long int i_15 = 0; i_15 < 17; i_15 += 4) 
        {
            {
                var_31 = ((/* implicit */unsigned int) (-(arr_46 [i_14])));
                var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) (short)512))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_14]))) : (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_15] [i_15]))) : (arr_46 [i_15])));
                arr_53 [i_14] [i_15] = (short)-521;
            }
        } 
    } 
}
