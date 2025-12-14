/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136357
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((var_1) / (var_1))) * (((/* implicit */int) var_8))))) ? (((((((/* implicit */int) var_18)) | (((/* implicit */int) (unsigned char)255)))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (65536ULL))) - (18446744073709473110ULL))))) : (((/* implicit */int) var_8))));
    var_20 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 7; i_0 += 2) 
    {
        arr_4 [i_0 - 2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 2129954536)) ? (660652542) : (((/* implicit */int) (_Bool)1)))) - (-660652542)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((unsigned int) var_11))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) -660652542)), (var_0)))) ? (((/* implicit */int) arr_6 [i_0] [i_1 + 2])) : (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || ((_Bool)1))))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) ((_Bool) var_14))) * (((/* implicit */int) arr_2 [i_0]))))));
                /* LoopSeq 3 */
                for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    arr_13 [i_0 - 4] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) 12675447053734613364ULL)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))), (((arr_5 [i_1] [i_2]) / (((/* implicit */long long int) var_16))))));
                    arr_14 [i_1] = ((/* implicit */short) var_15);
                    arr_15 [i_3] [i_1] [i_1] [i_0 + 3] = ((/* implicit */signed char) ((((max((var_6), (((/* implicit */long long int) var_16)))) + (((/* implicit */long long int) ((int) (_Bool)0))))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 15U))))))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (765482670)))) || ((_Bool)1)));
                }
                for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    arr_18 [i_1] [i_1] = ((((/* implicit */_Bool) arr_7 [i_0 + 3] [i_1 - 2] [i_2] [i_1 - 2])) || (((/* implicit */_Bool) -660652560)));
                    /* LoopSeq 4 */
                    for (int i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) min((((unsigned short) (_Bool)1)), (((/* implicit */unsigned short) var_8))));
                        arr_21 [i_0 - 4] [i_0 - 4] [i_2] [i_4] [i_1] = ((/* implicit */long long int) var_17);
                    }
                    for (unsigned short i_6 = 4; i_6 < 9; i_6 += 1) /* same iter space */
                    {
                        arr_25 [i_0] [i_1] [1U] [i_6 - 3] [i_6 - 3] [i_6 - 2] [i_6 - 3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_23 [i_6 - 4] [i_4] [i_2] [i_1 - 2] [i_1 - 2])), (var_0))))));
                        arr_26 [i_0 - 2] [i_1] [i_1] [i_4] [i_6 - 1] [i_6] [i_6 - 3] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) -660652542))) / (((((/* implicit */_Bool) ((int) -206549928))) ? (((int) (unsigned char)198)) : (((/* implicit */int) ((var_16) == (((/* implicit */int) var_5)))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 4; i_7 < 9; i_7 += 1) /* same iter space */
                    {
                        arr_30 [i_0] [i_0] [i_1] [i_0 - 4] [4LL] = ((/* implicit */int) ((short) arr_8 [i_1] [i_1] [i_1 + 3] [i_7 - 1]));
                        arr_31 [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_0 + 2] = ((((/* implicit */int) arr_28 [i_0] [i_0 - 3] [i_1 + 3] [(signed char)4] [i_7 + 1] [(signed char)4])) * (((/* implicit */int) arr_10 [i_0] [i_0 + 1] [i_1 + 1] [i_4] [i_7 - 1] [i_1 - 1])));
                    }
                    for (unsigned short i_8 = 4; i_8 < 9; i_8 += 1) /* same iter space */
                    {
                        arr_34 [i_0 - 1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (_Bool)1);
                        arr_35 [i_0 + 1] [(signed char)2] [i_1] [i_4] [i_8 + 1] [i_0 + 1] [i_1] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 206549936)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0 - 4] [6LL] [i_1 + 3] [i_1 + 3] [i_4] [(short)2]))) : (((arr_10 [i_4] [i_8] [i_8] [i_8 - 4] [i_8] [i_8 - 3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10728730114346090812ULL)))));
                        arr_36 [i_1] = ((/* implicit */unsigned short) ((unsigned int) var_18));
                        arr_37 [i_0] [i_1] [i_2] [i_1] [i_8 - 4] = ((/* implicit */signed char) (+((~(((/* implicit */int) arr_7 [i_8 + 1] [i_8 - 3] [i_4] [i_2]))))));
                    }
                    arr_38 [i_0] [i_0] [i_1] [i_4] = ((/* implicit */_Bool) arr_16 [5LL] [i_1]);
                    arr_39 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_0 [i_0 - 3]), (-206549928))))));
                }
                for (long long int i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    arr_43 [i_0 + 1] [i_1] [i_2] [i_9] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) ((short) (unsigned char)92))) != (((var_15) ? (((/* implicit */int) (short)18630)) : (((/* implicit */int) (unsigned char)74))))))), (var_0)));
                    arr_44 [i_9] [0] [i_1] [i_1] [i_1 + 2] [0] = ((/* implicit */unsigned char) arr_20 [i_1] [i_1]);
                }
                arr_45 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((206549928), (206549926))))))) % (((/* implicit */int) arr_6 [0U] [0U]))));
                arr_46 [i_1] [i_1] = ((/* implicit */signed char) 660652542);
                arr_47 [i_1] = ((/* implicit */unsigned long long int) (~(((int) (signed char)-93))));
            }
            for (unsigned int i_10 = 0; i_10 < 10; i_10 += 1) 
            {
                arr_51 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((((/* implicit */long long int) -998589100)) & (var_6))) ^ ((~(arr_5 [i_1] [i_1]))))) : (((/* implicit */long long int) max((var_17), (((((/* implicit */_Bool) arr_28 [i_10] [i_10] [i_10] [i_1 - 2] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_48 [i_1] [i_1])) : (459327907))))))));
                /* LoopSeq 1 */
                for (signed char i_11 = 2; i_11 < 7; i_11 += 1) 
                {
                    arr_55 [i_1 - 2] [i_1] [i_10] [i_1] = ((/* implicit */unsigned int) arr_1 [i_0] [i_11]);
                    var_24 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (unsigned char)74)), (min((((/* implicit */long long int) -206549928)), (arr_5 [i_1] [i_1 + 1])))));
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) min((((unsigned char) 660652532)), ((unsigned char)74)))) && ((!(((/* implicit */_Bool) var_16))))));
                }
                var_26 = ((/* implicit */signed char) max((max((arr_11 [i_0] [i_1 - 2] [i_10] [i_0] [i_10]), (((/* implicit */unsigned long long int) (short)20249)))), (((/* implicit */unsigned long long int) ((int) arr_22 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_1] [i_1 - 1])))));
            }
            var_27 = ((/* implicit */short) ((_Bool) ((signed char) min((((/* implicit */unsigned long long int) var_6)), (12985505683519949892ULL)))));
        }
    }
    for (short i_12 = 2; i_12 < 16; i_12 += 4) 
    {
        arr_59 [i_12 - 2] [i_12 - 2] = ((/* implicit */_Bool) (+(((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) var_7))))));
        arr_60 [i_12] = ((/* implicit */int) (signed char)-84);
        /* LoopSeq 2 */
        for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 4) 
        {
            var_28 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))), (min((arr_56 [i_12 - 2] [i_12 + 1]), (arr_56 [i_12 + 1] [i_12 - 2])))));
            arr_63 [i_12 - 2] = ((/* implicit */unsigned int) min((max((-660652564), (-1813589564))), (((/* implicit */int) ((((/* implicit */_Bool) 3741734399U)) || (((/* implicit */_Bool) (short)-846)))))));
            arr_64 [i_13] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-410341137), (-20)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_56 [i_12] [i_12 - 1]))))) : (min((var_2), (var_16)))));
        }
        for (signed char i_14 = 0; i_14 < 17; i_14 += 4) 
        {
            arr_68 [(unsigned char)7] = (+(var_6));
            arr_69 [i_14] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_57 [i_12] [i_12])) == (((/* implicit */int) ((((/* implicit */int) arr_67 [i_12] [i_12 - 2])) == (((/* implicit */int) (unsigned char)166)))))));
            arr_70 [i_14] = ((/* implicit */_Bool) max(((~(206549927))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)101)))))));
            arr_71 [i_14] [i_12 - 2] = ((/* implicit */long long int) max((((/* implicit */int) ((signed char) 16775168U))), (max((((/* implicit */int) (_Bool)1)), (2060696329)))));
            var_29 = ((/* implicit */short) 3301867809U);
        }
        arr_72 [i_12] = ((/* implicit */int) arr_62 [i_12 - 1]);
    }
}
