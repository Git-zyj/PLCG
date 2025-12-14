/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123457
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) var_9);
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_0 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? ((+(9974999834102942256ULL))) : (0ULL)));
        arr_4 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) ^ ((~(18446744073709551615ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)15151)) * (((/* implicit */int) (_Bool)1)))))));
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) % (arr_0 [i_0]))), (max((min((17557826306048ULL), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4487412842993287617LL)))))))));
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        arr_9 [i_1] [(short)18] = ((/* implicit */unsigned int) (((+(arr_8 [i_1]))) > (((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_1])))))));
        arr_10 [i_1] = ((short) 2820306891U);
        var_20 = ((/* implicit */unsigned int) (_Bool)1);
    }
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        var_21 = ((/* implicit */short) (+((+(((/* implicit */int) (_Bool)1))))));
        arr_13 [(short)15] |= var_18;
    }
    for (unsigned int i_3 = 3; i_3 < 9; i_3 += 1) 
    {
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((_Bool) 1474660404U)) ? (((/* implicit */unsigned long long int) (-(arr_8 [i_3 + 1])))) : (arr_0 [i_3 + 3]))))));
        /* LoopSeq 1 */
        for (short i_4 = 3; i_4 < 12; i_4 += 2) 
        {
            var_23 = (short)15151;
            arr_18 [i_3] [i_4] [i_4 - 3] = (short)14988;
            var_24 = ((/* implicit */unsigned long long int) arr_17 [i_3]);
        }
        var_25 |= ((/* implicit */unsigned long long int) var_11);
        /* LoopSeq 4 */
        for (short i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                var_26 *= ((/* implicit */short) ((long long int) (~(((/* implicit */int) (short)0)))));
                arr_23 [i_3 - 2] [i_5] [i_3] [i_3] = ((/* implicit */_Bool) arr_21 [i_6] [i_3] [i_3] [7LL]);
            }
            for (short i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                arr_26 [i_3] = ((/* implicit */unsigned long long int) arr_11 [i_3]);
                var_27 *= ((/* implicit */short) ((min((((/* implicit */int) arr_11 [i_3 - 3])), (((((/* implicit */int) (short)-2)) * (((/* implicit */int) (short)-8173)))))) > ((+(((/* implicit */int) ((short) arr_12 [i_3 - 3] [i_7])))))));
            }
            for (unsigned short i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                var_28 = ((/* implicit */unsigned int) (unsigned char)255);
                /* LoopSeq 2 */
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    var_29 += ((/* implicit */short) min(((~(((/* implicit */int) var_7)))), ((~(((/* implicit */int) var_18))))));
                    arr_31 [i_3] [i_8] [i_9 + 1] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) arr_15 [i_9 + 1] [i_3])) > (((/* implicit */int) arr_25 [i_9 + 1] [i_9] [i_9 + 1])))));
                    var_30 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_3] [i_3]))))) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)125)), ((short)(-32767 - 1))))))) % (((/* implicit */int) var_16))));
                }
                /* vectorizable */
                for (short i_10 = 0; i_10 < 13; i_10 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_11 = 0; i_11 < 13; i_11 += 2) 
                    {
                        arr_36 [(short)11] [i_3] [i_8] [(short)8] [(short)8] = ((/* implicit */_Bool) ((short) arr_19 [i_3] [i_3 - 2] [i_3 - 3]));
                        var_31 += ((/* implicit */unsigned int) ((short) (short)15151));
                        arr_37 [i_3] [i_3] [i_8] [i_3] [i_3] = ((/* implicit */unsigned int) 0ULL);
                    }
                    for (unsigned int i_12 = 2; i_12 < 10; i_12 += 1) 
                    {
                        arr_40 [i_3] [i_3] [i_5] [i_8] [i_3] [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_3 - 3] [i_5] [i_5] [i_12 + 1] [i_12] [i_12])) && (((/* implicit */_Bool) arr_24 [i_3 - 1] [i_12 + 1] [i_12 - 2] [i_12 + 2]))));
                        var_32 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((arr_39 [(_Bool)1] [i_3] [i_10] [i_8] [i_3] [i_3]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))))));
                        var_33 = ((/* implicit */int) min((var_33), (((int) var_14))));
                        arr_41 [i_3] [i_3] [i_10] [i_10] [i_10] = ((/* implicit */short) var_4);
                    }
                    for (signed char i_13 = 0; i_13 < 13; i_13 += 1) 
                    {
                        arr_45 [i_3 + 1] [i_5] [i_3] [i_10] [i_13] [i_3 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_3 - 3] [i_3 - 3] [i_3] [i_3 + 1])) ? (0ULL) : (18446744073709551615ULL)));
                        var_34 += ((/* implicit */short) ((((/* implicit */int) arr_27 [i_3 - 1] [i_3 - 2] [i_3 - 2])) + (((/* implicit */int) arr_27 [i_3 + 2] [i_3 + 3] [i_3]))));
                    }
                    var_35 = ((((/* implicit */_Bool) 4487412842993287617LL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_21 [i_3 - 2] [i_3 - 2] [i_3] [i_10])));
                    var_36 -= ((/* implicit */short) (-(arr_6 [i_3 + 1])));
                }
                var_37 = ((/* implicit */unsigned int) (short)4999);
            }
            arr_46 [i_3] [i_5] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_22 [i_5] [i_3] [i_5] [i_3 + 1]), (((/* implicit */unsigned short) var_15)))))) : (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))), (612100746169116001ULL)))));
            arr_47 [i_3] [i_3] = ((/* implicit */short) (~((+(10149997812700200941ULL)))));
        }
        /* vectorizable */
        for (short i_14 = 3; i_14 < 12; i_14 += 2) /* same iter space */
        {
            arr_52 [i_3] = ((/* implicit */unsigned long long int) ((short) arr_32 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_14 + 1]));
            var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) arr_8 [i_3 + 4]))));
            arr_53 [i_3] [5ULL] [i_14] = ((/* implicit */long long int) (short)16203);
            arr_54 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_34 [i_3 - 1] [i_14 - 3] [i_3 + 1] [i_14 - 1] [i_14 + 1] [i_3 + 4])) ? (((/* implicit */int) arr_34 [i_14 - 2] [i_14 - 2] [i_14 + 1] [i_3 + 1] [i_3 + 2] [i_3 - 3])) : (((/* implicit */int) arr_34 [i_3 + 3] [i_3 - 1] [i_3 + 1] [i_3 - 2] [i_3 + 2] [i_3 - 1]))));
        }
        for (short i_15 = 3; i_15 < 12; i_15 += 2) /* same iter space */
        {
            var_39 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
            var_40 = ((/* implicit */short) ((unsigned short) (~(((/* implicit */int) var_4)))));
            var_41 = ((/* implicit */unsigned short) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_3 + 1]))) - (var_19))));
            var_42 = ((/* implicit */short) (+(((arr_42 [i_15 - 1] [i_15 - 2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
        }
        for (short i_16 = 3; i_16 < 12; i_16 += 2) /* same iter space */
        {
            var_43 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 1474660404U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (var_19))), ((+(((unsigned int) -1035438898314081277LL))))));
            arr_59 [i_3 + 3] [i_3] [i_3] = ((/* implicit */int) max((((short) (!(((/* implicit */_Bool) arr_43 [i_16] [11ULL] [i_16 - 1] [i_3] [i_3]))))), (((/* implicit */short) ((var_19) < (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_16 - 1]))))))));
            arr_60 [i_3] [i_3] [i_3] = ((/* implicit */short) 18446744073709551615ULL);
        }
    }
}
