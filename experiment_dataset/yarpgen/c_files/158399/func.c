/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158399
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
    var_13 = ((/* implicit */short) (+(var_5)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 255))));
        arr_4 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(1598866850241927122ULL)))) ? (arr_1 [i_0 - 3] [i_0 - 3]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)55183))))))))), (4855290501425997888ULL)));
    }
    for (unsigned short i_1 = 4; i_1 < 21; i_1 += 2) /* same iter space */
    {
        var_14 += ((/* implicit */unsigned long long int) (+(arr_2 [i_1 + 2])));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)10341)))))));
            var_16 = ((/* implicit */unsigned short) (signed char)101);
        }
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (int i_4 = 3; i_4 < 23; i_4 += 3) 
            {
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-31520)), (max((arr_0 [i_1 - 3] [i_4 + 1]), (((/* implicit */unsigned long long int) (+(0U)))))))))));
                var_18 = ((/* implicit */unsigned long long int) var_11);
                arr_13 [8ULL] [i_3] [i_1] &= ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)55194))))), (max((687851052U), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)144)))))))));
                var_19 += ((/* implicit */signed char) var_11);
                /* LoopSeq 3 */
                for (unsigned int i_5 = 2; i_5 < 22; i_5 += 4) 
                {
                    arr_17 [i_5] |= ((/* implicit */unsigned short) arr_6 [i_3]);
                    arr_18 [i_4] [i_3] [(unsigned short)11] [i_5] [i_5] = ((/* implicit */unsigned short) (+((-(var_10)))));
                    var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(18446744073709551611ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4]))) : (var_10)))), (((((/* implicit */_Bool) arr_15 [i_1] [i_3] [i_4 - 1] [1])) ? (arr_15 [i_1 - 4] [i_3] [i_4] [i_5]) : (arr_15 [i_1 - 1] [i_1 - 1] [i_4] [4ULL])))));
                }
                /* vectorizable */
                for (unsigned int i_6 = 4; i_6 < 23; i_6 += 3) 
                {
                    arr_21 [i_3] [i_3] [i_4] [i_4] [i_3] [i_6] = ((/* implicit */unsigned int) arr_11 [i_4]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 3; i_7 < 22; i_7 += 1) 
                    {
                        var_21 = ((/* implicit */short) 17960021335100596906ULL);
                        var_22 = (-(14435857982537223659ULL));
                    }
                    var_23 = (signed char)31;
                }
                for (long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) arr_8 [i_3] [i_4]))));
                    arr_28 [(short)10] [i_4] [i_1] [i_3] [i_1] |= ((/* implicit */unsigned short) 2851853357U);
                    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_10 [i_1 - 4] [i_3]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1 - 3] [i_3]))))) : (max((var_6), (var_11))))))));
                    var_26 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55183)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) (unsigned short)55194)))))));
                }
            }
            /* vectorizable */
            for (unsigned long long int i_9 = 3; i_9 < 21; i_9 += 1) 
            {
                arr_32 [i_9 - 3] [i_1] [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_1] [i_1] [(short)6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_24 [i_1] [i_1] [i_1] [i_1 - 1] [i_1])))));
                /* LoopSeq 1 */
                for (unsigned char i_10 = 0; i_10 < 24; i_10 += 3) 
                {
                    arr_37 [i_3] [i_3] [i_9] [i_10] &= ((/* implicit */signed char) (-(arr_8 [i_9 - 2] [i_10])));
                    var_27 = ((/* implicit */unsigned char) 4ULL);
                }
                var_28 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_1 - 4]))));
                arr_38 [i_9] [i_9] [i_1] [i_1] = ((/* implicit */long long int) var_5);
                var_29 = ((/* implicit */signed char) (+(((/* implicit */int) arr_31 [i_1 - 4] [i_9 - 2]))));
            }
            var_30 += ((/* implicit */unsigned short) max(((~(max((4294967295U), (((/* implicit */unsigned int) (short)-8129)))))), (((/* implicit */unsigned int) max(((~(-2108666549))), (max((-547904042), (arr_2 [i_1]))))))));
            /* LoopSeq 2 */
            for (unsigned int i_11 = 3; i_11 < 23; i_11 += 2) /* same iter space */
            {
                var_31 -= ((/* implicit */long long int) var_7);
                var_32 *= ((/* implicit */short) (-(((/* implicit */int) (short)-8129))));
                var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_30 [16U] [i_3] [i_3]), (((/* implicit */unsigned short) (_Bool)1)))))))), (max((max((13018253502030326838ULL), (((/* implicit */unsigned long long int) arr_40 [i_1] [i_3] [i_1])))), (((/* implicit */unsigned long long int) (unsigned short)65535)))))))));
                var_34 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((16322622440559669367ULL), (((/* implicit */unsigned long long int) var_12)))))))), (((((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) (signed char)31))))) ? (max((((/* implicit */unsigned int) (_Bool)0)), (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-101), (((/* implicit */signed char) (_Bool)1))))))))));
            }
            for (unsigned int i_12 = 3; i_12 < 23; i_12 += 2) /* same iter space */
            {
                arr_44 [i_12] [i_3] [i_1] [i_1 + 3] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-101))));
                var_35 = ((/* implicit */unsigned short) (-((+((-(arr_36 [i_1] [i_1] [i_3] [i_3] [i_1] [i_12])))))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 3; i_13 < 23; i_13 += 2) 
            {
                for (short i_14 = 2; i_14 < 23; i_14 += 3) 
                {
                    {
                        var_36 = ((/* implicit */unsigned short) max((max((var_2), (-733305458))), (((/* implicit */int) (_Bool)1))));
                        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) max(((signed char)0), ((signed char)10))))));
                    }
                } 
            } 
            var_38 = ((/* implicit */int) var_3);
        }
        var_39 = ((/* implicit */unsigned short) (~(max((2980972783U), (((/* implicit */unsigned int) var_9))))));
        /* LoopNest 3 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (unsigned int i_16 = 1; i_16 < 20; i_16 += 1) 
            {
                for (unsigned short i_17 = 4; i_17 < 23; i_17 += 2) 
                {
                    {
                        var_40 -= ((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) (signed char)-23)), (18446744073709551615ULL)))));
                        var_41 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_1] [i_1] [i_1]))))), (max((((/* implicit */long long int) (unsigned char)3)), (4714876426680249727LL)))))) ? (((/* implicit */int) max(((_Bool)1), ((!(((/* implicit */_Bool) arr_34 [i_17] [i_15] [i_16] [i_17]))))))) : (arr_22 [i_17] [(short)12] [i_16] [i_17] [i_17])));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_18 = 1; i_18 < 21; i_18 += 3) 
                        {
                            var_42 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (signed char)-54))))));
                            var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) var_9))));
                        }
                        for (unsigned long long int i_19 = 3; i_19 < 22; i_19 += 1) 
                        {
                            var_44 = ((/* implicit */long long int) 12491825360672535554ULL);
                            var_45 += ((/* implicit */short) max((max((4714876426680249727LL), (((/* implicit */long long int) arr_55 [i_17 - 2] [i_17] [i_17 - 2])))), (((/* implicit */long long int) (short)3371))));
                        }
                    }
                } 
            } 
        } 
    }
    var_46 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((((/* implicit */int) var_3)), (var_2)))), (var_10)));
}
