/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145891
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
    var_19 = (unsigned char)81;
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            arr_4 [i_1] = ((/* implicit */signed char) arr_0 [i_1] [(unsigned char)22]);
            /* LoopSeq 4 */
            for (signed char i_2 = 1; i_2 < 24; i_2 += 3) 
            {
                var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)12)) && (((/* implicit */_Bool) 2873370216746171939ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2]))) : (arr_0 [i_2] [i_1]))))));
                arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1] = ((/* implicit */signed char) ((short) arr_6 [i_1 - 1]));
                /* LoopSeq 3 */
                for (int i_3 = 3; i_3 < 24; i_3 += 3) 
                {
                    var_21 = ((/* implicit */unsigned short) -251397645);
                    arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) == ((+(var_2)))));
                }
                for (unsigned int i_4 = 1; i_4 < 24; i_4 += 4) /* same iter space */
                {
                    arr_17 [i_0] [i_0] [i_2 - 1] [i_4] [i_4] [i_1 - 1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) 8388607)) > (((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 1] [i_0] [i_0])))))));
                    arr_18 [19U] [i_2] [i_1 + 1] [i_0] = ((/* implicit */unsigned int) ((long long int) var_10));
                    var_22 -= var_12;
                }
                for (unsigned int i_5 = 1; i_5 < 24; i_5 += 4) /* same iter space */
                {
                    arr_21 [i_5] [i_1] = ((/* implicit */unsigned long long int) ((long long int) var_3));
                    var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_5])))))) : (var_2)));
                }
            }
            for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                arr_25 [i_0] [i_1] [i_1] [i_0 + 1] = ((/* implicit */_Bool) (~(var_14)));
                arr_26 [i_0] [i_0] = ((/* implicit */unsigned short) var_15);
                var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) arr_24 [i_6] [i_0] [i_0])))));
                /* LoopSeq 3 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_7 - 1] [i_6] [i_0] [i_0])) * (((/* implicit */int) arr_9 [i_0] [i_1] [i_6] [i_7]))));
                    arr_29 [i_0] [i_0] [i_6] [6LL] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_6] [(unsigned short)23])) ? (arr_2 [i_1 - 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                    /* LoopSeq 3 */
                    for (long long int i_8 = 2; i_8 < 23; i_8 += 3) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) == (arr_2 [i_0 - 2] [i_1 - 1])));
                        arr_32 [i_6] [i_7] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_20 [i_1 + 1] [i_1 + 1] [i_6]))));
                    }
                    for (long long int i_9 = 2; i_9 < 23; i_9 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)81))));
                        var_28 += ((/* implicit */signed char) arr_10 [i_0 - 2] [i_0 - 1] [i_0] [i_0] [(signed char)8]);
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)78)) == (((/* implicit */int) (signed char)10)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0]))) ^ (15313505428018387381ULL)))));
                    }
                    for (long long int i_10 = 2; i_10 < 23; i_10 += 3) /* same iter space */
                    {
                        var_30 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? ((-(15313505428018387381ULL))) : (((/* implicit */unsigned long long int) var_18))));
                        arr_37 [i_0 - 3] [i_0 - 3] [i_7] [i_0] [i_0] = (~(((/* implicit */int) (signed char)-2)));
                    }
                }
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    arr_40 [i_0] [i_1] [i_1] [i_11] [i_6] [i_1] = ((/* implicit */int) ((unsigned int) var_7));
                    arr_41 [i_11] [i_6] [i_1] [i_0 - 2] |= ((/* implicit */unsigned long long int) ((short) arr_30 [i_11 - 1] [i_11 - 1] [i_11] [i_11] [i_11] [i_11]));
                }
                for (unsigned int i_12 = 0; i_12 < 25; i_12 += 2) 
                {
                    var_31 += ((/* implicit */unsigned short) var_13);
                    /* LoopSeq 3 */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        arr_47 [i_13] [i_12] [i_6] [i_1 - 1] [i_0] = ((/* implicit */short) var_5);
                        arr_48 [i_13] [(signed char)24] [i_12] [i_6] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_12] [i_1] [10U] [i_12] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_3)))) ? ((+(var_18))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_12] [i_13 - 1] [i_1 - 1])))));
                        var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0] [i_6] [(signed char)6] [i_12] [i_6])) << (((/* implicit */int) (short)0)))))));
                    }
                    for (long long int i_14 = 0; i_14 < 25; i_14 += 4) /* same iter space */
                    {
                        var_33 &= ((/* implicit */int) ((_Bool) var_12));
                        arr_53 [i_6] [i_1] [i_6] [19U] [19ULL] [i_6] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)0))));
                    }
                    for (long long int i_15 = 0; i_15 < 25; i_15 += 4) /* same iter space */
                    {
                        var_34 = var_4;
                        var_35 = ((/* implicit */_Bool) (~(arr_54 [i_0 - 3])));
                    }
                    arr_57 [i_0] [i_0] = ((/* implicit */unsigned char) arr_28 [i_0] [i_0] [i_12] [i_0] [i_0]);
                    var_36 = ((/* implicit */unsigned char) arr_1 [i_0]);
                    var_37 += ((/* implicit */unsigned int) (-(arr_52 [i_1 - 1] [i_1 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 2])));
                }
            }
            for (short i_16 = 4; i_16 < 22; i_16 += 4) 
            {
                var_38 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_28 [i_1] [i_0 + 1] [i_16] [i_16 - 2] [i_1 + 1]))));
                var_39 = arr_50 [i_0 - 3] [i_0 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_16 - 1];
                var_40 = ((/* implicit */short) ((((/* implicit */_Bool) 6782498221455733693LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0] [i_1] [i_16 + 3] [i_0] [24]))) : (1274004418U)));
            }
            for (signed char i_17 = 0; i_17 < 25; i_17 += 3) 
            {
                var_41 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_0] [i_0] [(short)16] [i_0 + 1] [i_0] [16ULL]))));
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 25; i_18 += 3) 
                {
                    for (long long int i_19 = 1; i_19 < 24; i_19 += 4) 
                    {
                        {
                            arr_69 [i_0] [i_1] [i_1] [i_18] = ((unsigned int) (signed char)37);
                            var_42 = ((/* implicit */signed char) ((_Bool) ((arr_62 [i_0] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_11))));
                            arr_70 [i_19 - 1] [i_19] [i_18] [i_17] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (~((+(((/* implicit */int) (unsigned short)65528))))));
                            var_43 = ((/* implicit */signed char) arr_64 [i_19] [i_1 - 1]);
                        }
                    } 
                } 
            }
        }
        var_44 *= ((/* implicit */signed char) (~(((/* implicit */int) arr_65 [i_0 - 3]))));
        arr_71 [(unsigned char)7] = ((/* implicit */unsigned char) ((4294967295U) < (arr_50 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0])));
        arr_72 [i_0 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)1))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_20 = 0; i_20 < 11; i_20 += 4) 
    {
        var_45 += ((/* implicit */signed char) var_11);
        var_46 = ((/* implicit */unsigned int) var_17);
    }
}
