/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110590
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
    var_20 = ((/* implicit */short) var_4);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((2500404507U) + (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))), (arr_0 [i_0] [i_0])));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) max(((+(((((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) + (((/* implicit */int) arr_3 [i_0] [i_1])))))), (max(((-(((/* implicit */int) var_4)))), (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (0) : (((/* implicit */int) var_12))))))));
            arr_5 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) arr_1 [i_0] [(unsigned char)23])))));
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((((int) var_11)) + (2147483647))) << (((1794562788U) - (1794562788U))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_1] [i_1] [5U] [i_3] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0] [i_1] [(signed char)12]))));
                            var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)27))));
                            arr_13 [i_0] [5U] [i_2] [(unsigned char)4] [(unsigned char)4] [i_4] = ((/* implicit */signed char) max((((/* implicit */short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [(unsigned short)14] [i_0] [i_0]))))), (var_1)));
                            var_24 += ((/* implicit */unsigned short) max(((~(((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [(unsigned short)4] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_5)))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (2500404507U)))))))));
                            var_25 += ((/* implicit */int) arr_3 [i_2] [(unsigned short)17]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        {
                            arr_21 [i_0] [i_0] [i_1] [i_2] [i_5] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) var_16)) != (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(var_11)))) != (arr_17 [(short)18] [i_1] [i_0] [i_5]))))));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-22)) ? (((/* implicit */int) ((unsigned char) 1794562773U))) : (((((/* implicit */int) var_15)) | (((/* implicit */int) (short)-23349))))))) ^ (var_19)));
                            var_27 = ((/* implicit */signed char) ((unsigned char) ((((int) (unsigned short)11661)) >= (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_15 [i_0] [i_0])))))));
                            var_28 = ((/* implicit */unsigned char) ((_Bool) max((arr_9 [i_5] [i_5]), (((/* implicit */unsigned int) var_8)))));
                            var_29 = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */short) arr_16 [i_0] [18ULL] [i_2] [i_5])), ((short)32767)))) / ((+(((/* implicit */int) (unsigned char)33))))));
                        }
                    } 
                } 
                arr_22 [i_0] [i_1] [i_2] [8ULL] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_18))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_17), (((/* implicit */unsigned char) arr_14 [i_0] [i_1] [i_2] [i_2])))))) : (((((/* implicit */_Bool) arr_18 [i_0])) ? (1794562789U) : (((/* implicit */unsigned int) var_11))))))) < (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)229)), (arr_17 [i_0] [i_2] [i_1] [i_0])))) ? (((((/* implicit */_Bool) 1794562788U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)223))) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_2]))))))))));
                arr_23 [6LL] [i_1] [i_2] [i_2] = ((/* implicit */long long int) -1941322963);
                arr_24 [i_1] [(unsigned char)15] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) 2500404507U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-12))) : (2500404507U))));
            }
        }
        arr_25 [i_0] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) min((((/* implicit */short) arr_10 [i_0] [i_0] [i_0] [i_0] [(short)20] [(short)20] [(short)20])), (var_2))))));
    }
    for (signed char i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */int) (short)-20534)) : (((/* implicit */int) var_15)))))));
        var_31 = ((/* implicit */long long int) arr_18 [i_7]);
    }
    for (signed char i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [16LL] [i_8])) ? (((/* implicit */int) arr_6 [i_8] [i_8])) : (((/* implicit */int) arr_6 [i_8] [i_8]))))), ((((!(((/* implicit */_Bool) arr_0 [i_8] [i_8])))) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_18), (arr_20 [i_8] [7ULL] [16LL] [i_8] [i_8])))))))));
        var_33 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1442507443)) || (((/* implicit */_Bool) min((arr_26 [i_8]), (((/* implicit */long long int) var_14))))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)-18)))), ((+(((/* implicit */int) var_4))))))) : (max((((/* implicit */long long int) var_11)), (min((var_5), (((/* implicit */long long int) var_4))))))));
        /* LoopNest 3 */
        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 2) 
        {
            for (short i_10 = 2; i_10 < 23; i_10 += 2) 
            {
                for (short i_11 = 0; i_11 < 24; i_11 += 2) 
                {
                    {
                        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) max((var_19), (((/* implicit */unsigned int) var_17)))))) | (((((((/* implicit */int) var_1)) + (2147483647))) >> (((((/* implicit */int) (signed char)116)) - (86))))))))));
                        arr_41 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) var_2);
                    }
                } 
            } 
        } 
        arr_42 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_1)) + (2147483647))) << (((((((/* implicit */int) arr_39 [(signed char)13] [(signed char)13] [i_8] [i_8] [i_8] [i_8])) + (100))) - (17)))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_39 [i_8] [i_8] [i_8] [i_8] [i_8] [15ULL])) : (((/* implicit */int) arr_39 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))) : (((/* implicit */int) min((arr_39 [i_8] [13ULL] [(unsigned char)3] [i_8] [i_8] [13ULL]), (arr_39 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))))));
    }
    var_35 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (var_19)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_16)), (1939508044U)))) : (var_3))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (var_3)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)123)), (var_4)))) : (((/* implicit */int) min((var_17), (((/* implicit */unsigned char) (signed char)116))))))))));
    var_36 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_1)) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) var_2))));
}
