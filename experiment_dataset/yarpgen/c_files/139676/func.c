/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139676
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
    var_20 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_21 *= ((/* implicit */long long int) (-((+(((/* implicit */int) arr_2 [i_1 + 3]))))));
                arr_5 [i_1] = ((/* implicit */unsigned char) var_17);
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((var_6) ^ (((/* implicit */int) max(((!((_Bool)0))), (arr_3 [i_1 - 2] [i_1 - 2])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 15; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    for (int i_5 = 4; i_5 < 12; i_5 += 1) 
                    {
                        {
                            arr_18 [i_2] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) var_18);
                            /* LoopSeq 2 */
                            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                            {
                                var_23 = (~(((((/* implicit */_Bool) max((arr_14 [i_3] [i_3]), (((/* implicit */unsigned int) arr_16 [i_6] [i_5] [i_4] [i_2]))))) ? (((int) 1188855252)) : (((/* implicit */int) max(((short)-32742), (((/* implicit */short) arr_12 [i_2] [i_2]))))))));
                                var_24 = (-2147483647 - 1);
                            }
                            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                            {
                                var_25 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_15 [i_2 - 1] [i_2 - 1] [i_5 - 2] [i_5 - 2])) ? (((/* implicit */int) arr_12 [i_2 + 1] [i_2 - 1])) : (arr_15 [i_2 - 1] [i_2 - 1] [i_5 - 2] [i_5 - 1])))));
                                arr_23 [i_2] [i_3] [i_4] [i_5] [i_7] [(unsigned char)12] [i_5] = ((/* implicit */int) max((((/* implicit */unsigned int) ((short) arr_17 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]))), (max((arr_17 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]), (arr_17 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1])))));
                            }
                            /* LoopSeq 2 */
                            for (long long int i_8 = 0; i_8 < 16; i_8 += 1) /* same iter space */
                            {
                                var_26 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1450575562U)) ? (((/* implicit */int) (short)-17881)) : (((/* implicit */int) (unsigned short)31)))) - (((/* implicit */int) (!((_Bool)0))))))) + (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (arr_17 [i_2] [i_8] [i_4] [i_5] [i_8])))));
                                arr_28 [i_8] [2] = ((/* implicit */signed char) -1118692130);
                            }
                            for (long long int i_9 = 0; i_9 < 16; i_9 += 1) /* same iter space */
                            {
                                arr_31 [i_2] [i_2] [i_4] [i_5] [i_9] [i_2] [i_4] = ((unsigned char) ((((/* implicit */_Bool) -6650989596803042090LL)) || (((/* implicit */_Bool) arr_26 [i_2] [i_2] [i_3] [i_4] [i_5 - 1] [i_5] [i_9]))));
                                arr_32 [i_2] [i_3] [i_5] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_5 + 4])) ? (((/* implicit */int) (short)5706)) : (((/* implicit */int) arr_12 [i_2 + 1] [i_5 + 4]))))) ? (((/* implicit */int) (short)-21104)) : (((/* implicit */int) ((short) (~(((/* implicit */int) arr_19 [i_9]))))))));
                                var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((((/* implicit */long long int) (+(((/* implicit */int) var_1))))) <= (((arr_24 [i_9] [(short)2] [i_4] [12LL] [(_Bool)1]) + (((/* implicit */long long int) ((/* implicit */int) (short)-32742))))))) ? (((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned char)49)) + (((/* implicit */int) arr_19 [i_2]))))))) : (var_12))))));
                                var_28 = ((/* implicit */unsigned short) arr_15 [i_2] [i_2] [i_3] [i_5]);
                            }
                            arr_33 [i_2] [i_3] [i_4] [9U] = ((/* implicit */int) ((long long int) -485411450));
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
                            {
                                arr_37 [i_10] [i_4] [i_4] [i_3] [i_2] = ((/* implicit */unsigned char) arr_6 [i_3]);
                                var_29 = ((/* implicit */unsigned char) arr_7 [i_4]);
                            }
                            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
                            {
                                var_30 = ((/* implicit */short) (+((-(9223372036854775807LL)))));
                                var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [8] [i_11])) ? (((/* implicit */int) arr_34 [i_2 - 1] [i_2 + 1] [i_5 + 3] [i_5 + 1] [i_11 - 1] [i_11 - 1] [i_11 - 1])) : (((((/* implicit */_Bool) max((-1), (((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_39 [i_11 - 1] [i_3] [i_5 + 4] [i_5] [i_2 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
                                var_32 = ((/* implicit */unsigned short) max(((((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_35 [i_2] [i_3] [i_3] [(unsigned short)2] [i_2] [i_11] [i_3])) ^ (-471397714)))) : (arr_25 [i_11 - 1] [i_3] [i_4] [i_5 + 3] [i_2 - 1]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_2 - 1] [i_11 - 1])))))));
                                var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_15 [i_2] [i_3] [i_3] [i_3]) : (((/* implicit */int) var_8))))), ((~(arr_27 [i_2] [(_Bool)1] [i_4] [i_11]))))))))));
                            }
                            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
                            {
                                arr_43 [i_2] [i_3] [i_4] [i_5] [i_12] = ((/* implicit */signed char) arr_12 [i_12] [i_12]);
                                arr_44 [i_2] [i_2] [i_5] [i_12] = ((/* implicit */unsigned char) ((short) max(((-(((/* implicit */int) arr_35 [(_Bool)1] [i_3] [i_3] [i_4] [i_12] [i_4] [i_4])))), (((/* implicit */int) var_14)))));
                            }
                            for (unsigned char i_13 = 0; i_13 < 16; i_13 += 3) 
                            {
                                var_34 = ((/* implicit */int) max((9223372036854775807LL), (-4696913965147498500LL)));
                                var_35 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [i_2] [12LL]))));
                            }
                        }
                    } 
                } 
                var_36 = ((/* implicit */int) (_Bool)1);
            }
        } 
    } 
}
