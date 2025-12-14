/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107750
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
    var_19 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_7))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        var_20 ^= ((/* implicit */unsigned int) (-((+(6917529027641081856LL)))));
        var_21 = ((/* implicit */unsigned long long int) ((((unsigned int) (-(((/* implicit */int) arr_1 [i_0]))))) % (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)50)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (((((~(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) var_12)))))) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0])) - (35468)))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) arr_0 [i_0 - 3] [i_0]))) ^ (((/* implicit */int) (signed char)102))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 4 */
        for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            var_22 = ((long long int) ((((/* implicit */_Bool) var_18)) ? (arr_2 [i_2] [i_1]) : (((/* implicit */long long int) -887562437))));
            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_2]))) : (var_6)))) ? (arr_0 [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))));
            arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15))));
        }
        for (unsigned char i_3 = 4; i_3 < 19; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 4) 
            {
                var_24 = ((/* implicit */long long int) ((_Bool) (~(var_16))));
                arr_17 [i_1] [i_1] [i_1] [i_4] = ((((/* implicit */_Bool) arr_1 [i_3 - 3])) ? (((/* implicit */long long int) (+(((/* implicit */int) var_1))))) : (((long long int) var_4)));
            }
            var_25 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_1] [i_3 - 3] [i_1])) ? (0) : (((int) var_13))));
            /* LoopSeq 2 */
            for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                var_26 |= ((/* implicit */int) ((signed char) arr_0 [i_3] [i_3 + 1]));
                var_27 = 2147483647;
                var_28 = ((/* implicit */unsigned short) var_4);
            }
            for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                /* LoopSeq 2 */
                for (signed char i_7 = 3; i_7 < 18; i_7 += 1) 
                {
                    var_29 = ((/* implicit */short) ((_Bool) arr_23 [i_7] [i_7] [i_1]));
                    var_30 = ((/* implicit */int) ((_Bool) arr_9 [i_3 - 2] [i_3]));
                    /* LoopSeq 3 */
                    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        var_31 = var_13;
                        arr_28 [i_1] [i_1] [i_3 - 1] [i_6] [i_1] [i_7] [i_8] = var_5;
                        var_32 = ((/* implicit */int) arr_27 [i_8] [i_7] [i_1] [i_1] [i_1]);
                    }
                    for (short i_9 = 1; i_9 < 19; i_9 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) (short)32766)) >= (((/* implicit */int) var_13)))));
                        arr_32 [i_1] [i_3] [i_3] [i_7] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_1] [i_1] [i_1])) & (((/* implicit */int) arr_9 [i_1] [i_9]))))) ? (((/* implicit */int) arr_1 [i_1])) : (((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) (short)-6869)) : (((/* implicit */int) var_12))))));
                    }
                    for (unsigned int i_10 = 3; i_10 < 18; i_10 += 3) 
                    {
                        var_34 += ((/* implicit */signed char) (-(arr_11 [i_10] [i_10] [(unsigned short)18])));
                        arr_37 [i_1] [(unsigned char)18] [i_6] [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) >= ((-(3694499282U)))));
                    }
                }
                for (unsigned long long int i_11 = 1; i_11 < 17; i_11 += 1) 
                {
                    arr_41 [i_1] [i_1] [i_6] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_3 - 4] [i_3 - 4])) ? (((/* implicit */int) arr_31 [i_1] [i_3 - 2] [i_11 - 1] [i_11] [i_11] [i_11 + 3] [i_11 + 2])) : (((/* implicit */int) arr_9 [12] [i_3 - 2]))));
                    /* LoopSeq 2 */
                    for (long long int i_12 = 2; i_12 < 18; i_12 += 4) 
                    {
                        var_35 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_12 - 2])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_12 + 2])))));
                        arr_44 [i_1] [8ULL] [i_1] [i_11] = ((/* implicit */_Bool) arr_29 [i_1] [i_1] [i_1] [i_1] [19]);
                        arr_45 [i_1] [i_3] [i_3 + 1] [i_6] [i_11 + 3] [i_12] [i_12 + 2] |= ((/* implicit */long long int) ((_Bool) (-(3866970114U))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        var_36 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) | (((((/* implicit */_Bool) (unsigned short)6492)) ? (0ULL) : (arr_7 [i_1])))));
                        var_37 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (signed char)-40)) ? (arr_11 [i_3] [i_3] [i_1]) : (((/* implicit */long long int) 7U)))));
                    }
                }
                var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (var_6) : (((/* implicit */unsigned long long int) (-(var_5))))));
                var_39 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) -887562459)))) ? (((/* implicit */long long int) (~(1406968755U)))) : (arr_46 [i_3] [i_3 - 4] [i_3 - 4] [i_3] [i_3])));
                var_40 = ((/* implicit */long long int) ((((_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_20 [i_3 - 1] [i_3 - 1] [i_3 - 2]))));
            }
            arr_49 [i_1] [0] [i_1] &= ((/* implicit */unsigned int) arr_2 [i_1] [i_3 - 3]);
            arr_50 [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2811656545U))));
        }
        for (unsigned int i_14 = 0; i_14 < 20; i_14 += 3) 
        {
            var_41 = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) arr_1 [i_1])) >= (((/* implicit */int) (short)27191)))));
            arr_54 [(unsigned short)8] [i_14] |= ((/* implicit */signed char) ((((/* implicit */_Bool) 7982719799995405729LL)) ? (((/* implicit */int) arr_1 [i_14])) : (((/* implicit */int) var_3))));
        }
        for (unsigned short i_15 = 0; i_15 < 20; i_15 += 2) 
        {
            var_42 = ((/* implicit */unsigned long long int) (_Bool)1);
            /* LoopSeq 1 */
            for (short i_16 = 1; i_16 < 18; i_16 += 2) 
            {
                var_43 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_5)) == (1304849214841690793ULL)));
                var_44 = ((/* implicit */_Bool) ((unsigned char) 19ULL));
                arr_60 [i_1] [i_1] = ((/* implicit */long long int) (-((-(((/* implicit */int) var_15))))));
            }
            var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_58 [i_1] [i_1]))));
            var_46 = ((/* implicit */short) ((int) arr_48 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]));
        }
        var_47 = ((/* implicit */_Bool) ((unsigned char) arr_8 [i_1]));
        arr_61 [14] |= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_43 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_1] [i_1] [10ULL]))) : (1153276781U))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(unsigned short)0])))));
    }
    for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 4) 
    {
        arr_65 [i_17] [i_17] = arr_2 [i_17] [i_17];
        var_48 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) var_1)))))))));
    }
    var_49 = ((/* implicit */short) var_0);
    var_50 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(9223372036854775807LL)))) ? (var_5) : (((((/* implicit */_Bool) var_8)) ? (-7982719799995405757LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) < (var_9)));
}
