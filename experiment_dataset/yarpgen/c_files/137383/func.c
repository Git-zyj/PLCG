/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137383
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 7646094038069068676LL)) ? (-7646094038069068670LL) : (-7646094038069068670LL)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) -7646094038069068676LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (862823107U)))))), (((((-6812156331711984695LL) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_1 [i_0])) + (18008))))))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            arr_5 [i_0] [i_1 - 3] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_3 [i_0] [i_1]))), (((/* implicit */long long int) arr_0 [i_0]))));
            arr_6 [i_0] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) max((arr_4 [i_1 - 3]), (arr_4 [i_1 + 1]))))));
            arr_7 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (short)29191)) - (((/* implicit */int) (short)-6641))));
        }
        for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            var_19 = ((/* implicit */long long int) ((min((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (var_0)))), ((-(((/* implicit */int) arr_0 [i_2])))))) > ((+(((((/* implicit */int) arr_10 [i_2])) / (((/* implicit */int) arr_1 [i_0]))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_3 = 3; i_3 < 16; i_3 += 4) 
            {
                arr_13 [i_0] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_0])) ^ (((/* implicit */int) arr_10 [i_0]))));
                /* LoopSeq 3 */
                for (unsigned short i_4 = 2; i_4 < 17; i_4 += 4) 
                {
                    var_20 = var_2;
                    var_21 = ((((arr_15 [i_4] [i_3 - 1] [i_2] [i_2] [i_0] [i_0]) ? (6812156331711984706LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13067))))) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-70))));
                    arr_18 [i_2] [i_2] = ((/* implicit */_Bool) (-(6812156331711984694LL)));
                }
                for (signed char i_5 = 1; i_5 < 16; i_5 += 4) 
                {
                    var_22 = ((/* implicit */int) ((_Bool) ((((/* implicit */int) var_2)) * (((/* implicit */int) (_Bool)0)))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [i_5] [i_2] [i_3 - 2] [i_3 - 2] [i_0] [i_5 + 2])) >> (((((/* implicit */int) var_7)) - (24274)))));
                    var_24 -= ((/* implicit */short) ((((/* implicit */int) arr_22 [i_0] [i_2] [i_5 + 1] [i_0])) ^ (((/* implicit */int) arr_22 [i_2] [i_5] [i_5 + 2] [i_5]))));
                }
                for (short i_6 = 1; i_6 < 16; i_6 += 3) 
                {
                    arr_25 [i_0] [i_0] [i_3 - 1] [i_6 + 1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_6] [i_6 + 1] [i_6 + 2] [i_6] [i_6 - 1])) - (((/* implicit */int) arr_16 [i_6] [i_6] [i_6 + 2] [i_6 + 2] [i_6 - 1]))));
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_2 [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)24663))) : (((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                }
            }
            /* vectorizable */
            for (short i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                var_26 = ((/* implicit */long long int) arr_19 [i_0] [i_0] [i_0] [i_2] [i_7] [i_2]);
                /* LoopSeq 1 */
                for (long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    /* LoopSeq 2 */
                    for (int i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        arr_34 [i_0] [i_0] [i_7] [i_7] [i_7] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_26 [i_0] [i_0]))) ? (((/* implicit */int) arr_16 [i_0] [i_2] [i_7] [i_8] [i_9])) : ((-(((/* implicit */int) arr_32 [i_0] [i_2] [i_7] [i_8] [i_9]))))));
                        var_27 = ((/* implicit */unsigned short) arr_3 [i_0] [i_7]);
                    }
                    for (unsigned short i_10 = 3; i_10 < 17; i_10 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned char) (-(arr_3 [i_10 - 1] [i_10 - 1])));
                        var_29 = ((/* implicit */unsigned int) ((var_0) ? (((/* implicit */int) arr_30 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10] [i_10 - 3] [i_10 - 3])) : (((/* implicit */int) (_Bool)1))));
                        var_30 = ((/* implicit */short) var_6);
                        arr_38 [i_10] [i_10] [i_7] [i_10] [i_10] [i_0] = 8990370936359937827LL;
                    }
                    var_31 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) (short)-16938)) : (((/* implicit */int) (unsigned short)58782)))))));
                    arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_16 [i_0] [i_2] [i_7] [i_8] [i_8])) == (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)11221))))));
                }
                arr_40 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_7] [i_7] [i_7] [i_0] [i_2] [i_0])) ^ (((/* implicit */int) ((_Bool) (_Bool)1)))));
            }
            arr_41 [i_2] [i_0] = ((/* implicit */short) (((-(((/* implicit */int) arr_11 [i_0])))) > (((/* implicit */int) var_11))));
            /* LoopSeq 1 */
            for (unsigned int i_11 = 0; i_11 < 18; i_11 += 3) 
            {
                var_32 = ((/* implicit */short) ((unsigned short) (unsigned short)3202));
                arr_45 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((signed char) (signed char)35));
            }
            var_33 *= ((/* implicit */short) var_8);
        }
        for (long long int i_12 = 0; i_12 < 18; i_12 += 4) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [i_0] [i_12])) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) 3923900101819534583LL)) || ((_Bool)0))))));
                arr_52 [i_12] [i_12] [i_13] [i_13] = ((/* implicit */unsigned short) arr_26 [i_13] [i_12]);
                var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_23 [i_0] [i_12] [i_13])) : (((/* implicit */int) arr_21 [i_0] [i_12] [i_12] [i_12] [i_12] [i_13])))) : (((/* implicit */int) arr_11 [i_0]))));
                arr_53 [i_12] [i_13] [i_12] [i_12] = ((/* implicit */long long int) (unsigned short)10157);
            }
            for (short i_14 = 1; i_14 < 15; i_14 += 3) 
            {
                arr_57 [i_14] [i_14 + 1] = ((/* implicit */unsigned short) -6926348610782798234LL);
                arr_58 [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) arr_21 [i_14] [i_12] [i_12] [i_12] [i_0] [i_0]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_21 [i_12] [i_12] [i_0] [i_0] [i_12] [i_14 + 1]))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)79))) : (var_12)))));
                arr_59 [i_14] [i_12] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_14])) ? (((/* implicit */long long int) 33292288)) : (((((/* implicit */_Bool) arr_21 [i_0] [i_12] [i_12] [i_12] [i_12] [i_14 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))) : (-6812156331711984698LL)))));
            }
            for (long long int i_15 = 0; i_15 < 18; i_15 += 3) 
            {
                arr_62 [i_12] = ((/* implicit */_Bool) max((((long long int) min((arr_11 [i_0]), (((/* implicit */unsigned short) (short)-11235))))), (((/* implicit */long long int) (short)8127))));
                arr_63 [i_0] [i_0] [i_0] = (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)23))) : (-7646094038069068687LL));
            }
            var_36 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)12875)) ? (((/* implicit */int) ((short) arr_42 [i_0]))) : ((-(arr_42 [i_0])))));
            var_37 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) var_13))) >> (((((/* implicit */int) ((short) 7646094038069068676LL))) + (15485)))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_16 = 1; i_16 < 16; i_16 += 3) 
        {
            var_38 = arr_21 [i_0] [i_16] [i_0] [i_0] [i_16] [i_16];
            var_39 = ((/* implicit */unsigned int) var_4);
        }
        for (unsigned short i_17 = 0; i_17 < 18; i_17 += 4) 
        {
            var_40 = ((/* implicit */long long int) max((((/* implicit */unsigned short) ((signed char) (-(var_12))))), (arr_33 [i_0])));
            arr_71 [i_0] [i_0] [i_0] = arr_56 [i_0] [i_17];
        }
        var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) max((((/* implicit */unsigned int) max((((((/* implicit */_Bool) (short)24678)) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_1)))), ((((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))))))), (((arr_17 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_0)))))))))));
    }
    var_42 = ((/* implicit */long long int) ((short) (_Bool)1));
}
