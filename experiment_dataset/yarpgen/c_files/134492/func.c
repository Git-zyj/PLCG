/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134492
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [(_Bool)1]) : (((/* implicit */int) (unsigned char)125))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [(unsigned short)18])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-108)))))))) ? (((/* implicit */int) arr_0 [(unsigned char)21] [i_0])) : (((/* implicit */int) (unsigned char)179))));
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            var_11 = ((short) (~(((var_10) ^ (((/* implicit */int) arr_0 [i_0] [i_1]))))));
            /* LoopSeq 4 */
            for (int i_2 = 2; i_2 < 24; i_2 += 2) /* same iter space */
            {
                arr_11 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) ((((var_8) > (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2 - 1] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */int) ((signed char) (+(var_8))))) : (arr_10 [i_2] [i_2 - 2] [i_1] [12])));
                var_12 += (short)4;
                var_13 = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) -1752373220)))) ? (arr_1 [i_1 + 2]) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (signed char)121))));
                arr_12 [i_1] = ((/* implicit */_Bool) ((((((/* implicit */int) ((signed char) arr_5 [i_2 + 1]))) + (2147483647))) >> (((min((arr_5 [i_2 - 2]), (arr_5 [i_2 - 1]))) - (1825049765041820324ULL)))));
            }
            for (int i_3 = 2; i_3 < 24; i_3 += 2) /* same iter space */
            {
                var_14 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_7)) % (507904ULL))) >> (((/* implicit */int) ((507907ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15478))))))));
                arr_16 [i_1] = ((/* implicit */int) max((arr_5 [i_1 - 2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) || (((/* implicit */_Bool) min((((/* implicit */unsigned char) var_1)), (arr_2 [i_3 - 1] [22ULL])))))))));
                var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((arr_7 [i_1] [i_1 + 2]), (((/* implicit */signed char) (_Bool)1))))), (var_4)));
                var_16 += ((/* implicit */signed char) (((-(((/* implicit */int) ((unsigned short) arr_10 [i_0] [i_0] [(short)13] [i_3]))))) == (((/* implicit */int) (!(((/* implicit */_Bool) ((var_4) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))))))));
                var_17 *= ((/* implicit */signed char) (+((-(((/* implicit */int) arr_15 [i_0] [i_3 + 1]))))));
            }
            for (int i_4 = 2; i_4 < 24; i_4 += 2) /* same iter space */
            {
                var_18 = ((/* implicit */signed char) var_1);
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((arr_13 [i_1 - 1] [i_4 + 1] [i_4 + 1]) - (arr_13 [i_1 - 1] [i_4 + 1] [i_4 - 1]))) : (arr_13 [i_1 + 2] [i_4 - 1] [i_4 - 1])));
                var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (arr_4 [i_4] [i_1] [i_0])))) ? (arr_5 [i_0]) : (((/* implicit */unsigned long long int) ((int) var_10)))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_4])) ? (arr_4 [i_0] [i_1] [i_4 - 1]) : (arr_9 [i_0]))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) (unsigned char)128)))) : (((/* implicit */int) (short)31693)))));
            }
            for (int i_5 = 2; i_5 < 24; i_5 += 2) /* same iter space */
            {
                arr_23 [2] [i_1] [(unsigned char)15] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_22 [(_Bool)1] [i_1])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_6))))))) ? (((((/* implicit */_Bool) min(((unsigned char)146), ((unsigned char)192)))) ? ((+(arr_17 [i_0] [i_0] [i_5 - 1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_5] [(signed char)1])))))))) : (((/* implicit */unsigned long long int) ((arr_14 [i_0] [i_5 + 1] [i_5 - 1] [i_5 - 2]) / (var_7))))));
                var_21 = ((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) (_Bool)0)))));
            }
            var_22 = ((/* implicit */signed char) ((arr_1 [i_1 + 1]) - (max(((+(((/* implicit */int) var_3)))), (((/* implicit */int) (_Bool)1))))));
            arr_24 [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) min((14759917080955511618ULL), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_22 [(unsigned char)8] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_4))) : (((((/* implicit */_Bool) arr_8 [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) -1752373230)) : (507900ULL)))))));
        }
        var_23 = ((/* implicit */int) (unsigned char)255);
    }
    for (unsigned short i_6 = 2; i_6 < 9; i_6 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_7 = 1; i_7 < 6; i_7 += 2) 
        {
            var_24 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_21 [i_6] [(unsigned char)5] [(unsigned char)5] [i_7]))))));
            /* LoopSeq 4 */
            for (unsigned long long int i_8 = 2; i_8 < 8; i_8 += 1) 
            {
                arr_32 [i_6] [2LL] [i_7] [i_8] = ((/* implicit */int) (short)-28263);
                /* LoopSeq 2 */
                for (short i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    arr_35 [i_7] [i_7] [i_7] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (short)-1)) : (arr_4 [i_7 + 1] [i_7] [(unsigned short)7])));
                    arr_36 [i_6 - 1] [i_7] [i_6 - 1] [i_9] = ((/* implicit */unsigned char) (((_Bool)1) ? (((var_7) | (((/* implicit */int) arr_2 [i_8] [i_7])))) : (((arr_6 [i_9] [i_7]) * (((/* implicit */int) (_Bool)1))))));
                }
                for (signed char i_10 = 0; i_10 < 10; i_10 += 1) 
                {
                    var_25 *= ((/* implicit */unsigned long long int) ((long long int) arr_29 [1] [i_6 - 1]));
                    /* LoopSeq 1 */
                    for (signed char i_11 = 0; i_11 < 10; i_11 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((arr_4 [i_8] [i_8 - 1] [i_8]) / (((/* implicit */int) (unsigned char)17)))))));
                        arr_42 [i_6] [(short)7] [i_8 + 1] [i_10] [i_7] = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-83)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))) > (((((/* implicit */int) (unsigned char)48)) - (var_7)))));
                        arr_43 [i_6] [i_7] [i_8] [i_10] |= ((/* implicit */signed char) ((var_4) & (((/* implicit */unsigned long long int) var_8))));
                    }
                    var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_21 [i_6] [(unsigned short)5] [(short)2] [i_6])) : (877708947)))) ? (arr_31 [i_10] [i_8] [5]) : (((/* implicit */unsigned long long int) ((var_8) ^ (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                }
            }
            for (unsigned short i_12 = 0; i_12 < 10; i_12 += 2) 
            {
                var_28 = ((/* implicit */signed char) (!(arr_21 [i_6 + 1] [i_6 - 2] [i_6 - 2] [i_7 + 3])));
                arr_46 [i_7] = ((/* implicit */unsigned char) (short)-10);
            }
            for (int i_13 = 0; i_13 < 10; i_13 += 2) 
            {
                var_29 = (+(((/* implicit */int) ((((/* implicit */int) (short)17401)) == (((/* implicit */int) (unsigned char)255))))));
                arr_50 [i_6] [i_7] [5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_7 + 3] [i_6 - 1] [i_13])) ? (((/* implicit */unsigned long long int) var_10)) : (arr_31 [i_7 + 3] [i_6 - 1] [i_13])));
                arr_51 [i_6] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((arr_17 [i_6] [i_6] [3] [i_6]) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65535)))))));
            }
            for (signed char i_14 = 3; i_14 < 9; i_14 += 2) 
            {
                arr_56 [i_6] [i_7] [i_7] [i_7 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? ((~(((/* implicit */int) (unsigned char)253)))) : (((/* implicit */int) (_Bool)1))));
                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */int) ((_Bool) var_0))) : (((/* implicit */int) (_Bool)1))));
                arr_57 [i_7] [i_7] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
            }
            var_31 = ((/* implicit */unsigned char) ((int) ((arr_9 [i_6]) / (((/* implicit */int) var_6)))));
        }
        for (long long int i_15 = 1; i_15 < 9; i_15 += 2) 
        {
            var_32 = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned short) arr_9 [i_15]))), (((min((((/* implicit */int) (unsigned char)1)), (arr_6 [i_15] [i_6]))) % (((((/* implicit */_Bool) -1490627746)) ? (var_10) : (((/* implicit */int) var_3))))))));
            var_33 = ((/* implicit */unsigned short) (+((-(var_4)))));
            arr_60 [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) (_Bool)1))) & (min((((arr_39 [i_15 + 1]) ? (((/* implicit */int) var_2)) : (arr_6 [i_6] [i_6]))), (((/* implicit */int) arr_15 [i_6] [i_6]))))));
        }
        /* vectorizable */
        for (short i_16 = 0; i_16 < 10; i_16 += 2) 
        {
            arr_64 [8] [i_16] &= ((/* implicit */signed char) var_10);
            arr_65 [i_6] [i_6] [i_6 - 2] |= ((/* implicit */int) arr_19 [i_6] [i_16] [(signed char)8] [i_16]);
            var_34 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) var_10)) ^ (var_9))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (877708947) : (((/* implicit */int) arr_45 [(signed char)7] [i_6] [i_6] [i_16])))))));
        }
        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_38 [i_6 - 2]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_44 [i_6] [i_6 - 2] [i_6] [i_6 - 2]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (-877708948) : (((/* implicit */int) (unsigned char)157))))) : (var_8))))));
    }
    /* vectorizable */
    for (signed char i_17 = 0; i_17 < 10; i_17 += 1) 
    {
        arr_69 [(unsigned char)0] [i_17] = ((/* implicit */unsigned char) var_5);
        arr_70 [i_17] = ((/* implicit */unsigned char) ((int) (unsigned char)62));
        var_36 = ((/* implicit */signed char) (+(arr_14 [i_17] [i_17] [i_17] [11ULL])));
    }
    var_37 = (signed char)47;
}
