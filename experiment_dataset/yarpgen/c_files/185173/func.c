/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185173
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
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(var_3))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1 + 1] [i_2] = ((/* implicit */long long int) arr_6 [i_0 - 2] [i_0] [i_1 - 1] [i_2 - 2]);
                    arr_9 [i_2] [1LL] [i_0] [i_0] = ((/* implicit */long long int) (_Bool)1);
                    arr_10 [i_0] [i_1] = var_1;
                    arr_11 [i_0] [i_0] = min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) | (arr_4 [i_0 - 1] [i_1 + 2] [i_2 + 1]))), (((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_2 - 4] [i_1 + 1] [i_1] [16U]))))));
                    arr_12 [i_0] [17ULL] [i_2] = (+(((/* implicit */int) var_6)));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (signed char i_3 = 3; i_3 < 21; i_3 += 2) 
    {
        arr_16 [i_3] = ((signed char) (!(((/* implicit */_Bool) var_2))));
        arr_17 [i_3] [i_3] &= ((/* implicit */unsigned short) ((unsigned char) (_Bool)0));
        var_20 = max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_3] [i_3] [i_3])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_13))))) : (((/* implicit */int) (short)15))))), (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_8))));
        arr_18 [i_3] [i_3] = ((/* implicit */int) arr_2 [20ULL] [i_3 + 2]);
    }
    for (short i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        var_21 &= (~((-(var_0))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (min((((/* implicit */unsigned long long int) -5057211250121455701LL)), (0ULL)))));
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                for (short i_7 = 2; i_7 < 14; i_7 += 3) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (max((((/* implicit */long long int) var_13)), (var_7))))))));
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? ((~(min((arr_22 [i_4]), (((/* implicit */long long int) var_4)))))) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
                        arr_27 [i_4] [i_4] [i_7] = ((/* implicit */unsigned long long int) arr_4 [i_7] [i_5] [i_7]);
                        /* LoopSeq 2 */
                        for (int i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            arr_30 [i_4] [i_4] [9ULL] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_4]))) / ((((_Bool)0) ? (arr_20 [i_4] [i_7 - 1]) : (arr_1 [i_7 - 2])))));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_3 [i_7 - 1]))) ? (((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)(-32767 - 1))))) - (((/* implicit */int) ((short) arr_29 [i_4]))))) : ((+(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_4))))))));
                            arr_31 [(signed char)3] [i_4] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_7 - 1] [i_4])))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_9 = 2; i_9 < 13; i_9 += 3) 
                        {
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_16))));
                            var_27 = ((/* implicit */unsigned short) ((signed char) (unsigned char)250));
                            var_28 = ((/* implicit */_Bool) (signed char)38);
                            var_29 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)126)) < (((/* implicit */int) (short)-14983)))) ? (var_14) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (var_18) : (((/* implicit */long long int) 1118143466))))));
                        }
                        var_30 = ((/* implicit */int) ((unsigned char) 9223372036854775807LL));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_10 = 0; i_10 < 16; i_10 += 1) 
    {
        arr_37 [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((18446744073709551602ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_10])))))))) ? (((int) arr_35 [14])) : ((-(((/* implicit */int) (unsigned short)45849))))));
        arr_38 [i_10] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_14)) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (1315259868U)))))), (((/* implicit */unsigned long long int) (~(var_1))))));
        arr_39 [i_10] = ((/* implicit */_Bool) ((arr_1 [i_10]) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [i_10]))))));
    }
    for (int i_11 = 0; i_11 < 18; i_11 += 2) 
    {
        var_31 = ((/* implicit */unsigned long long int) arr_14 [i_11] [i_11]);
        var_32 = ((/* implicit */int) arr_5 [i_11] [i_11]);
        arr_42 [i_11] = ((/* implicit */unsigned long long int) (unsigned short)35971);
    }
    /* LoopSeq 1 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_33 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_43 [19LL])) ? (arr_5 [i_12] [i_12]) : (((/* implicit */long long int) var_0))))))) ^ (min((max((18446744073709551601ULL), (((/* implicit */unsigned long long int) (signed char)-103)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_12] [i_12])))))))));
        arr_45 [i_12] [i_12] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_15 [i_12])) ? (((/* implicit */long long int) ((((/* implicit */int) var_15)) ^ (((/* implicit */int) var_13))))) : (arr_5 [(signed char)22] [i_12]))));
        arr_46 [19ULL] = ((/* implicit */unsigned int) max((arr_2 [i_12] [i_12]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_8) / (((/* implicit */long long int) ((/* implicit */int) var_16)))))) || ((!(((/* implicit */_Bool) arr_0 [i_12])))))))));
    }
    var_34 = ((/* implicit */int) ((((/* implicit */_Bool) (+(var_9)))) ? (var_5) : ((+(var_3)))));
}
