/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15434
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
    var_20 = ((/* implicit */unsigned char) var_15);
    var_21 = var_9;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_22 = ((/* implicit */unsigned int) (+(((((var_12) | (((/* implicit */long long int) ((/* implicit */int) var_1))))) & (((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(var_12))) ^ (((/* implicit */long long int) min((((/* implicit */unsigned int) var_11)), (var_4))))))) ? (((int) ((((/* implicit */_Bool) var_2)) ? (var_3) : (var_14)))) : (((/* implicit */int) ((((/* implicit */long long int) var_3)) < (var_2))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            for (unsigned short i_3 = 2; i_3 < 21; i_3 += 4) 
            {
                {
                    arr_11 [i_1] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max((((/* implicit */int) ((_Bool) -1422629778))), (arr_9 [(unsigned short)7] [i_2] [i_3 + 2] [i_3])))), (((((/* implicit */_Bool) (short)5506)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6074))) : (1574229006U)))));
                    arr_12 [i_1] [i_1] [i_3 + 1] [(short)14] = ((/* implicit */long long int) min((((arr_9 [i_3 + 2] [i_3 - 2] [i_3] [i_3 + 3]) | (var_8))), ((~(((/* implicit */int) var_16))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        arr_16 [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_1))))));
                        var_24 = ((/* implicit */int) ((unsigned char) arr_15 [i_1] [i_3 + 3] [i_3 - 2] [i_1]));
                        arr_17 [i_1] [i_1] = ((/* implicit */unsigned int) arr_4 [i_1]);
                    }
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        arr_21 [i_1] [i_1] [i_3] [i_5] = ((/* implicit */long long int) max((((arr_2 [i_1]) * (var_4))), ((~(arr_2 [i_1])))));
                        var_25 = ((/* implicit */unsigned int) min(((unsigned short)2), (((/* implicit */unsigned short) (short)23350))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            {
                                arr_29 [i_1] [15U] [i_2] [i_2] [(unsigned short)1] [i_1] [i_2] = ((/* implicit */unsigned char) arr_15 [i_1] [i_2] [22LL] [i_1]);
                                arr_30 [i_7] [i_1] [(short)1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_13 [i_1] [i_2] [21ULL] [i_6]);
                            }
                        } 
                    } 
                    arr_31 [i_2] [i_2] [i_1] [i_3] = max(((~(((((/* implicit */unsigned int) ((/* implicit */int) var_18))) + (var_15))))), (((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_27 [i_1] [i_1] [i_1] [i_3]))))))));
                }
            } 
        } 
        arr_32 [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1])) | (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1]))))));
        /* LoopNest 3 */
        for (short i_8 = 2; i_8 < 22; i_8 += 2) 
        {
            for (signed char i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                for (unsigned short i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    {
                        var_26 = ((/* implicit */unsigned char) (+(((((/* implicit */int) ((short) var_10))) >> (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))) - (21876)))))));
                        arr_41 [i_1] [(unsigned short)20] [i_1] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) var_19)) - ((-(((((/* implicit */int) arr_3 [i_9])) | (((/* implicit */int) var_13))))))));
                        arr_42 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((int) (~(((/* implicit */int) arr_34 [(unsigned char)7] [i_9] [(unsigned char)7]))))) * (((/* implicit */int) var_18))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_11 = 0; i_11 < 24; i_11 += 4) /* same iter space */
        {
            arr_46 [i_1] [(unsigned char)16] = ((/* implicit */unsigned int) var_11);
            arr_47 [i_1] [i_1] [i_11] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_6)))))))));
            arr_48 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_11] [i_11] [i_1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_36 [i_1] [i_1] [i_1] [i_11])))) | (((/* implicit */int) var_7))))) : (min((((/* implicit */long long int) var_3)), (arr_26 [i_11] [i_11] [i_11] [20LL] [i_1] [i_1])))));
            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (~((-(((/* implicit */int) var_18))))))) ? ((+(max((((/* implicit */unsigned int) var_8)), (var_15))))) : (((/* implicit */unsigned int) var_8))));
        }
        for (long long int i_12 = 0; i_12 < 24; i_12 += 4) /* same iter space */
        {
            arr_53 [i_1] = ((/* implicit */unsigned int) ((long long int) (short)4));
            arr_54 [i_1] = ((/* implicit */long long int) arr_10 [14LL]);
        }
        for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_14 = 0; i_14 < 24; i_14 += 2) 
            {
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_6 [i_1] [i_13] [(unsigned short)20])) < (arr_5 [i_1] [i_13]))) ? (((((/* implicit */_Bool) var_14)) ? (arr_24 [i_1] [i_13] [16U] [(unsigned char)22] [i_14] [i_13]) : (var_6))) : (min((((/* implicit */unsigned int) var_19)), (var_4)))))) ? (((((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_14)))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_13)), (var_15)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (arr_2 [(unsigned short)5]))))))));
                arr_60 [i_1] [i_1] [(unsigned short)18] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) (short)-5)))));
                arr_61 [i_1] [i_13] [i_1] [i_1] = ((/* implicit */_Bool) min((((long long int) var_18)), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_1] [i_1] [i_14] [i_14]))) - (var_0)))) ? (((unsigned int) arr_7 [i_1] [(signed char)6])) : (((/* implicit */unsigned int) ((/* implicit */int) var_19))))))));
                arr_62 [i_1] [i_1] = ((/* implicit */long long int) ((unsigned short) max((((/* implicit */unsigned short) arr_52 [i_1])), (var_9))));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 24; i_15 += 2) 
                {
                    for (unsigned int i_16 = 0; i_16 < 24; i_16 += 2) 
                    {
                        {
                            arr_69 [i_1] [i_1] [i_13] [i_14] [i_15] [i_16] = ((/* implicit */short) ((((((/* implicit */_Bool) min(((unsigned short)59447), (((/* implicit */unsigned short) (short)-19012))))) ? (((((/* implicit */_Bool) var_15)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_1]))))) < (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) ? (arr_35 [i_1] [i_1]) : (((/* implicit */int) var_11)))) | (((/* implicit */int) ((signed char) var_0))))))));
                            var_29 = ((/* implicit */long long int) var_4);
                            arr_70 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_20 [i_1] [(unsigned short)19])) >> (((var_5) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_0)))) : (max((var_2), (((/* implicit */long long int) arr_8 [i_14]))))))));
                        }
                    } 
                } 
            }
            arr_71 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_10 [i_1])), (var_1)))) ? (((var_6) / (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) arr_35 [i_1] [i_1]))))) ? (((/* implicit */long long int) ((var_3) / ((+(((/* implicit */int) var_11))))))) : (((long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (var_3))))));
            var_30 = ((/* implicit */signed char) ((3799042860U) | ((+(558456403U)))));
        }
        var_31 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? (((((/* implicit */int) arr_4 [i_1])) % (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) arr_58 [i_1] [i_1] [17])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_52 [i_1])))))) < ((+(((/* implicit */int) (unsigned short)0))))));
    }
}
