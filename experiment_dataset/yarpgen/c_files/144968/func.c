/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144968
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((((/* implicit */_Bool) (short)-26579)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) var_7))))));
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            var_12 = ((/* implicit */_Bool) var_6);
            /* LoopSeq 2 */
            for (signed char i_2 = 1; i_2 < 10; i_2 += 1) /* same iter space */
            {
                var_13 = ((/* implicit */unsigned int) var_7);
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1] [i_1 - 3])) + (((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((-((+(343960641U)))))));
                /* LoopSeq 1 */
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    arr_14 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) ((_Bool) ((int) var_5)));
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)26585)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-26593))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3951006655U))))) : ((~(var_9)))))) ? (max((5777390558293619360LL), (((/* implicit */long long int) (short)-22208)))) : (((/* implicit */long long int) ((/* implicit */int) max((max((arr_15 [i_0] [i_2 + 1] [i_3] [i_4]), (((/* implicit */unsigned char) arr_0 [i_1 - 3] [i_0])))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)27)))))))))));
                        var_17 = ((/* implicit */short) ((6785902336268611282ULL) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
                        arr_17 [i_2] [i_1 - 3] [i_2] [i_1 - 3] [i_1 - 2] [i_0] [i_2] = ((/* implicit */int) ((_Bool) (~(((/* implicit */int) (short)26607)))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_21 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2 + 1] [i_1 + 1] [i_1 + 1] [i_0] [i_1 - 1] [i_0]))) > ((((_Bool)1) ? (1897150725U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                        arr_22 [i_2] = ((/* implicit */signed char) (~(9ULL)));
                        arr_23 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((!((_Bool)1))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_19 [i_0] [i_1 - 3] [i_2 + 1] [i_5] [i_5] [i_2])) : (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_16 [i_0] [i_1 - 3] [i_2 + 1]))));
                        arr_24 [i_0] [i_2] [i_1] [i_2] [i_0] [i_1] [i_5] = ((/* implicit */_Bool) ((signed char) arr_6 [i_5]));
                    }
                    arr_25 [i_0] [i_2] [i_0] [i_2] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1 - 2]))));
                    arr_26 [i_2] [i_2 + 1] = ((signed char) max((((/* implicit */int) min((var_3), ((_Bool)1)))), (((((/* implicit */int) var_7)) ^ (((/* implicit */int) (unsigned char)239))))));
                    arr_27 [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((unsigned long long int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) || (((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_0] [i_0])), (arr_12 [i_1 - 3] [i_3] [i_3] [i_3]))))));
                }
                var_18 = ((/* implicit */signed char) 11731701269590497937ULL);
                var_19 = ((/* implicit */unsigned long long int) max(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-26586)))), ((~(((/* implicit */int) (_Bool)1))))));
            }
            for (signed char i_6 = 1; i_6 < 10; i_6 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                arr_30 [i_0] [i_0] [i_1 + 1] [i_0] = ((/* implicit */_Bool) (+(((int) 7060982590200016480ULL))));
                var_21 = ((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                var_22 = (+(((/* implicit */int) ((signed char) 546000452))));
            }
        }
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21134)) ? (max((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (9325609581569885592ULL))), (((/* implicit */unsigned long long int) ((signed char) (short)-26579))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)26589)) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)18)))))))))));
    }
    for (unsigned long long int i_7 = 2; i_7 < 6; i_7 += 2) 
    {
        arr_35 [i_7 + 1] [i_7 + 1] = ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_7] [i_7 - 1])))));
        arr_36 [i_7 - 2] [i_7 - 2] = ((/* implicit */_Bool) var_0);
        arr_37 [i_7] = ((/* implicit */long long int) arr_32 [i_7] [i_7 + 2]);
    }
    /* vectorizable */
    for (unsigned int i_8 = 1; i_8 < 21; i_8 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_9 = 0; i_9 < 23; i_9 += 2) 
        {
            var_24 += (~((-(1897150725U))));
            arr_42 [i_8 + 2] [i_8 + 1] [i_8 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_8] [i_8 + 2] [i_8 + 2])) ? (((/* implicit */int) ((signed char) (signed char)0))) : (((/* implicit */int) arr_40 [i_8] [i_9] [i_9]))));
            arr_43 [i_8 - 1] [i_8 - 1] [i_8 + 2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
            /* LoopSeq 1 */
            for (long long int i_10 = 3; i_10 < 21; i_10 += 1) 
            {
                arr_47 [i_9] [i_10 - 2] [i_10 - 1] [i_9] = ((/* implicit */short) (-(((((/* implicit */int) var_2)) >> (((/* implicit */int) arr_38 [i_8]))))));
                arr_48 [i_10 - 1] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)246))));
                var_25 = ((/* implicit */unsigned char) arr_39 [i_8 + 1] [i_9]);
            }
            var_26 = ((_Bool) (_Bool)1);
        }
        for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 3) 
        {
            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)127)))))));
            /* LoopSeq 3 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                arr_56 [i_8] [i_8] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? ((+(-580101872))) : (((/* implicit */int) arr_45 [i_8] [i_8 + 2] [i_12]))));
                arr_57 [0LL] |= ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                var_28 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)153))) : (3429087357645584423ULL)));
            }
            for (unsigned char i_13 = 0; i_13 < 23; i_13 += 4) /* same iter space */
            {
                arr_62 [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)73))));
                var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (+(((/* implicit */int) (_Bool)1)))))));
                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (+(((/* implicit */int) arr_49 [i_8 + 1])))))));
            }
            for (unsigned char i_14 = 0; i_14 < 23; i_14 += 4) /* same iter space */
            {
                arr_65 [i_8 - 1] [i_11] [i_14] = ((/* implicit */unsigned long long int) ((_Bool) (short)-32147));
                arr_66 [i_11] [i_8] = ((/* implicit */signed char) (unsigned char)246);
            }
            arr_67 [i_8 - 1] [i_11] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(725989124)))) ? (-1590719558) : (((/* implicit */int) (unsigned char)73))));
        }
        arr_68 [i_8] = ((/* implicit */unsigned long long int) (short)-26607);
        arr_69 [i_8 + 1] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-88))));
    }
    var_31 = ((/* implicit */signed char) (+(var_1)));
    var_32 = ((/* implicit */signed char) (+(((/* implicit */int) min(((signed char)19), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))))))))));
    var_33 = ((/* implicit */_Bool) var_6);
    var_34 = ((/* implicit */unsigned char) var_3);
}
