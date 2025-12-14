/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104845
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_3 [0U] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
        arr_4 [i_0] = (signed char)59;
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            arr_8 [i_0] [i_1] = ((/* implicit */_Bool) ((((1444590030) << (((((/* implicit */int) arr_5 [i_1] [i_1] [(_Bool)1])) - (61))))) >> (((((/* implicit */long long int) arr_1 [i_0])) / (2941317227267757905LL)))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                /* LoopSeq 2 */
                for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    arr_15 [4LL] [i_1] [i_0] [i_3] = ((/* implicit */short) arr_13 [i_0] [i_0] [i_0] [i_0]);
                    /* LoopSeq 1 */
                    for (int i_4 = 1; i_4 < 10; i_4 += 3) 
                    {
                        arr_18 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_18);
                        var_19 = ((/* implicit */int) (short)19822);
                        arr_19 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) arr_17 [i_1] [i_4 - 1] [i_4] [i_4] [i_4] [i_4]);
                    }
                    var_20 = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
                }
                for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    arr_22 [(_Bool)1] [i_1] [i_2] [i_0] [i_5] [i_2] = ((/* implicit */long long int) ((arr_0 [i_0] [i_0]) > (((/* implicit */long long int) arr_1 [i_0]))));
                    arr_23 [i_0] [i_2] [i_1] [i_0] = ((((/* implicit */int) var_3)) % (((/* implicit */int) arr_16 [3LL] [i_2] [i_1] [i_0])));
                    arr_24 [(_Bool)1] [i_0] [i_0] [8LL] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)60))));
                    var_21 -= ((/* implicit */unsigned long long int) arr_1 [i_1]);
                    arr_25 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (_Bool)1);
                }
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2] [i_1])) << (((((/* implicit */int) arr_20 [i_0] [i_2] [i_2] [i_6] [i_7])) - (20877))))))));
                            var_23 = ((/* implicit */int) ((((/* implicit */long long int) -1444590037)) - (2914002713874799430LL)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_24 -= var_7;
                            arr_38 [i_0] [i_8] [i_8] [i_1] [i_1] [i_0] = ((/* implicit */signed char) var_15);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    var_25 ^= -1080148003;
                    arr_43 [i_0] [i_2] [i_2] [i_1] [(signed char)4] [i_0] = ((/* implicit */_Bool) arr_37 [i_0] [i_1] [i_10] [i_10] [i_0]);
                    var_26 += ((/* implicit */long long int) arr_10 [i_2]);
                }
            }
            for (int i_11 = 0; i_11 < 12; i_11 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    for (long long int i_13 = 1; i_13 < 9; i_13 += 2) 
                    {
                        {
                            arr_52 [i_1] [i_12] &= ((/* implicit */signed char) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-56)), (var_13))))));
                            arr_53 [i_0] [i_0] = (+(((((/* implicit */int) arr_12 [i_13 + 3] [i_0] [(_Bool)1] [i_13] [i_13])) % (((/* implicit */int) arr_12 [i_13 + 1] [i_0] [i_13] [i_13 - 1] [i_13])))));
                        }
                    } 
                } 
                arr_54 [i_0] = ((/* implicit */unsigned char) (~(((-1355580114) & (((/* implicit */int) max((arr_21 [i_0] [i_1] [(short)9] [i_0] [(short)10] [i_0]), (arr_42 [i_0] [i_0] [i_0] [(signed char)1]))))))));
            }
            /* LoopNest 3 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (unsigned short i_15 = 0; i_15 < 12; i_15 += 4) 
                {
                    for (unsigned short i_16 = 2; i_16 < 11; i_16 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) max((((/* implicit */int) min((arr_30 [i_0] [i_1] [i_14] [i_15] [i_16 + 1]), (arr_30 [i_0] [i_0] [i_0] [i_0] [i_16 - 2])))), (-702503922)));
                            arr_63 [i_0] [i_0] [i_0] [i_0] [i_16] |= ((/* implicit */signed char) (-(((/* implicit */int) var_18))));
                            var_28 *= ((/* implicit */unsigned char) (signed char)55);
                            var_29 -= ((/* implicit */int) min(((_Bool)1), (((var_17) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_51 [10ULL] [i_15] [i_14] [i_1] [i_0])) && (((/* implicit */_Bool) 16ULL))))))))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_18 = 0; i_18 < 12; i_18 += 4) 
            {
                var_30 += ((/* implicit */unsigned char) (-(arr_39 [i_17])));
                arr_69 [8] [i_0] = ((/* implicit */int) ((arr_27 [i_0] [i_18]) % (((/* implicit */long long int) ((/* implicit */int) (signed char)60)))));
                /* LoopSeq 2 */
                for (signed char i_19 = 0; i_19 < 12; i_19 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_20 = 0; i_20 < 12; i_20 += 3) 
                    {
                        var_31 += ((/* implicit */unsigned char) (((+(-1080148003))) * (((/* implicit */int) (!(((/* implicit */_Bool) 4414625483765249708ULL)))))));
                        var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) (~(arr_65 [i_0] [i_18] [i_18]))))));
                    }
                    for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
                    {
                        var_33 += ((/* implicit */short) (+(arr_33 [i_18] [i_19] [i_21 + 1] [i_21 + 1])));
                        var_34 -= ((/* implicit */long long int) (+(((/* implicit */int) arr_60 [i_17] [i_18] [i_18]))));
                    }
                    var_35 += ((/* implicit */short) (signed char)-60);
                    arr_76 [i_0] [i_17] [i_18] [i_19] = ((/* implicit */unsigned char) (signed char)85);
                    var_36 = ((/* implicit */int) var_3);
                }
                for (int i_22 = 1; i_22 < 11; i_22 += 1) 
                {
                    arr_81 [i_0] [i_22] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) (_Bool)1)))))));
                    var_37 = ((/* implicit */_Bool) (unsigned char)62);
                    arr_82 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) -1080148008);
                    var_38 = ((/* implicit */long long int) arr_73 [i_22] [i_22] [i_18] [i_17] [i_0]);
                }
                arr_83 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-93)) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_60 [i_0] [i_0] [i_17])))))));
            }
            for (unsigned short i_23 = 0; i_23 < 12; i_23 += 2) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_24 = 0; i_24 < 12; i_24 += 2) 
                {
                    var_39 = ((/* implicit */short) ((((/* implicit */int) arr_29 [i_17] [i_17] [i_0] [i_17] [i_24])) % (((/* implicit */int) var_16))));
                    arr_89 [i_0] [(short)0] [i_23] [i_23] [i_23] [i_23] |= (!(((/* implicit */_Bool) arr_88 [i_0] [i_17] [i_23] [i_17] [i_24] [i_23])));
                    arr_90 [i_0] [i_0] [i_17] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_42 [i_0] [i_0] [i_23] [i_24]))));
                    /* LoopSeq 1 */
                    for (long long int i_25 = 0; i_25 < 12; i_25 += 2) 
                    {
                        arr_93 [i_0] [i_17] [(_Bool)1] [i_0] [i_23] [i_25] = ((/* implicit */_Bool) arr_72 [i_25] [i_23] [i_17]);
                        arr_94 [i_25] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_0] [i_0] [(unsigned char)4] [i_0] [i_0] [i_0])) * ((~(((/* implicit */int) arr_86 [i_0]))))));
                    }
                }
                arr_95 [i_0] = ((/* implicit */int) max(((short)-29939), (var_3)));
                arr_96 [i_0] = 719280375;
                var_40 -= ((/* implicit */unsigned int) ((9756202840474908026ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)11)))));
                /* LoopSeq 2 */
                for (long long int i_26 = 0; i_26 < 12; i_26 += 2) 
                {
                    arr_100 [i_0] [i_17] [i_0] [i_23] [i_26] = ((/* implicit */short) (unsigned short)34393);
                    arr_101 [(signed char)0] [i_17] [i_0] [i_26] = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
                }
                for (unsigned char i_27 = 2; i_27 < 9; i_27 += 4) 
                {
                    var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)0)) << (((min((((/* implicit */unsigned long long int) var_3)), (arr_80 [i_0] [i_17] [i_17] [i_27] [i_23]))) - (18183748927956432643ULL))))) > (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_85 [i_27] [(unsigned char)8])))))))));
                    arr_104 [(unsigned char)3] [i_17] [(unsigned char)3] [i_23] [i_0] = ((/* implicit */unsigned char) var_15);
                    arr_105 [i_0] [i_17] [i_23] [i_27] = ((/* implicit */int) var_18);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_28 = 0; i_28 < 12; i_28 += 2) 
                    {
                        var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_74 [i_23] [i_17] [i_27])))))))));
                        arr_108 [i_0] [i_28] = ((/* implicit */unsigned short) ((arr_35 [i_27 + 1] [i_27 - 2] [i_27 + 2] [(short)2] [i_28] [i_28]) & (7972578572499681035LL)));
                    }
                }
            }
            arr_109 [i_0] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_84 [i_0] [i_17] [i_17]))) > (max((-9223372036854775798LL), (((/* implicit */long long int) (unsigned char)12))))));
        }
    }
    var_43 &= (unsigned char)101;
}
