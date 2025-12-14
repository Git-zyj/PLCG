/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151531
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) min(((-(((/* implicit */int) ((short) (unsigned char)49))))), (((/* implicit */int) (!(((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_12)))))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_3] [i_4 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-13653)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)79))) : (0U)));
                            arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_4);
                            arr_16 [i_0] = ((/* implicit */long long int) arr_5 [i_3] [i_0] [i_0]);
                        }
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            arr_21 [i_0] [i_1] [i_0] [(_Bool)1] [i_5 - 1] = (+((+((~(0U))))));
                            var_13 = ((/* implicit */signed char) var_3);
                        }
                        for (unsigned char i_6 = 3; i_6 < 9; i_6 += 4) 
                        {
                            var_14 = ((/* implicit */unsigned int) (short)13653);
                            arr_25 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned char)226)), (6078030904363174377ULL)));
                            arr_26 [i_0] [i_3] [i_1] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) arr_10 [i_0] [i_1] [i_1] [i_2] [i_3] [i_0]);
                            var_15 = ((/* implicit */signed char) ((unsigned char) (~(arr_8 [(signed char)2] [0ULL] [i_6]))));
                        }
                        arr_27 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) min(((-(((/* implicit */int) max(((short)-8450), ((short)32767)))))), ((-(((/* implicit */int) ((var_6) != (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0]))))))))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned char) var_4);
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-8450)) ? (((/* implicit */int) (short)-13653)) : (((/* implicit */int) (unsigned short)32704))));
        arr_28 [i_0] = ((/* implicit */unsigned short) min(((short)21519), (((/* implicit */short) var_10))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_8 = 3; i_8 < 14; i_8 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_9 = 4; i_9 < 14; i_9 += 3) 
            {
                arr_39 [i_7] [i_8 + 1] [(unsigned char)8] = ((/* implicit */long long int) (((+(((/* implicit */int) arr_32 [i_9])))) + (((((/* implicit */_Bool) arr_38 [5U] [i_7])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))));
                /* LoopSeq 3 */
                for (unsigned int i_10 = 3; i_10 < 14; i_10 += 4) 
                {
                    arr_43 [i_10] [i_9] [i_9] [i_8 - 1] [i_7] [i_7] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (short)13653)) > (((/* implicit */int) var_2)))))));
                    arr_44 [i_7] [i_8] [i_7] [(unsigned char)9] [i_10 - 3] [(unsigned short)1] = ((/* implicit */signed char) var_6);
                }
                for (unsigned int i_11 = 3; i_11 < 12; i_11 += 2) 
                {
                    arr_48 [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_40 [i_7] [i_7] [i_7] [(unsigned short)0] [(unsigned char)0] [i_7])) ^ (((/* implicit */int) arr_29 [i_9])))))));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)8450))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)167))))) : (((arr_45 [i_7] [(unsigned short)8] [i_8 + 1] [i_9 - 1] [i_11]) / (var_4)))));
                }
                for (long long int i_12 = 3; i_12 < 14; i_12 += 2) 
                {
                    arr_51 [i_7] [i_8] [i_8] [7U] = ((/* implicit */unsigned char) (!(arr_40 [i_9] [i_9] [i_9 + 1] [i_9] [i_12 - 3] [i_9])));
                    var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)7))));
                    arr_52 [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)65524))));
                    var_20 = ((unsigned short) (-(((/* implicit */int) (_Bool)0))));
                }
                var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)7))));
                var_22 = ((/* implicit */unsigned short) arr_49 [i_7] [i_7] [i_9 + 1]);
            }
            for (unsigned short i_13 = 0; i_13 < 15; i_13 += 4) 
            {
                var_23 = ((/* implicit */unsigned short) 10LL);
                arr_57 [(short)12] [i_8 - 3] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)121))));
                arr_58 [i_7] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((var_11) ? (arr_45 [i_7] [i_7] [i_7] [i_7] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) min(((short)-13632), (((/* implicit */short) (_Bool)0))))) : (((/* implicit */int) arr_32 [i_13]))))));
                arr_59 [i_7] [i_7] [i_7] = ((/* implicit */_Bool) (short)8449);
            }
            var_24 = ((/* implicit */long long int) min((((/* implicit */int) max((var_10), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)1792)))))))), ((~(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535))))))));
            arr_60 [(unsigned char)4] [i_8] = ((/* implicit */short) arr_34 [3U] [i_8]);
        }
        for (unsigned char i_14 = 0; i_14 < 15; i_14 += 3) 
        {
            arr_64 [i_14] = ((/* implicit */unsigned char) max(((signed char)2), (((/* implicit */signed char) (_Bool)1))));
            var_25 = ((/* implicit */_Bool) max(((unsigned short)53855), (((/* implicit */unsigned short) (unsigned char)19))));
            /* LoopSeq 1 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                arr_67 [i_7] [i_14] = ((/* implicit */short) (-((+((-(((/* implicit */int) var_5))))))));
                arr_68 [(unsigned short)4] [i_7] [(unsigned short)4] [i_14] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((min((arr_42 [i_7] [i_7] [i_7] [i_14] [i_15]), (((/* implicit */long long int) arr_38 [i_14] [i_15])))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)115)), (arr_62 [i_15])))))))));
                var_26 = ((/* implicit */signed char) (~(((/* implicit */int) arr_29 [i_7]))));
                /* LoopSeq 1 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_17 = 3; i_17 < 14; i_17 += 3) 
                    {
                        arr_75 [i_14] [i_15] [i_14] [i_14] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((unsigned char) arr_56 [i_17] [i_7] [i_7] [i_7]))) ? (((/* implicit */int) arr_61 [(short)13] [(short)13])) : (((/* implicit */int) (unsigned char)236)))), (((/* implicit */int) var_11))));
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (signed char)2))));
                        var_28 = ((/* implicit */_Bool) max((((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned char)127)) && (((/* implicit */_Bool) arr_65 [2LL] [2LL] [i_15] [i_14]))))))), (min((((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) var_11)))), (((/* implicit */int) (_Bool)1))))));
                    }
                    for (unsigned char i_18 = 0; i_18 < 15; i_18 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned char) ((((long long int) min((arr_45 [i_7] [i_7] [i_7] [i_16] [i_14]), (arr_34 [0LL] [i_18])))) * (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_15])))));
                        arr_78 [(unsigned char)7] [i_16] [i_14] [(unsigned char)7] [(unsigned char)7] = ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned char)3)))) ^ (max((((/* implicit */int) arr_49 [i_14] [i_14] [i_14])), ((-(((/* implicit */int) (_Bool)1))))))));
                    }
                    var_30 = ((/* implicit */signed char) arr_62 [i_7]);
                    arr_79 [i_16] [i_14] [i_14] [i_7] = ((/* implicit */_Bool) ((unsigned char) (unsigned short)30862));
                }
            }
            arr_80 [i_7] [i_14] [i_14] = ((/* implicit */unsigned short) ((var_0) / (((/* implicit */long long int) arr_62 [i_7]))));
        }
        for (unsigned char i_19 = 0; i_19 < 15; i_19 += 2) 
        {
            arr_83 [i_7] [i_7] [(signed char)12] = ((/* implicit */unsigned char) (-((-((+(((/* implicit */int) arr_38 [(unsigned char)14] [i_19]))))))));
            var_31 = ((/* implicit */unsigned long long int) min((((_Bool) arr_65 [i_7] [i_19] [i_7] [i_7])), (arr_50 [i_7] [i_7] [i_19] [i_19])));
        }
        arr_84 [i_7] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((((/* implicit */int) arr_66 [i_7] [i_7] [i_7])) != (((/* implicit */int) arr_41 [i_7] [i_7] [i_7] [i_7])))))))) == ((~(arr_76 [i_7] [i_7] [6ULL] [i_7] [i_7] [i_7])))));
        arr_85 [i_7] = ((/* implicit */unsigned char) -6314258028527019835LL);
        var_32 *= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) == (arr_31 [i_7]))))));
    }
    var_33 = ((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_6))))), ((short)13653))))));
    /* LoopNest 2 */
    for (long long int i_20 = 4; i_20 < 17; i_20 += 1) 
    {
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            {
                arr_90 [(_Bool)1] [i_20] = ((/* implicit */unsigned char) var_9);
                var_34 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-13653))));
                var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_86 [i_20] [i_21]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)16383))))))))))))));
            }
        } 
    } 
}
