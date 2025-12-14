/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163421
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
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_2 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (arr_2 [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_2] [i_2]))))));
                    var_20 = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -5942818337073024322LL)) ? (((/* implicit */int) (unsigned short)24551)) : (((/* implicit */int) var_5))))))))) : ((~(10529382284578618116ULL))));
                }
                for (unsigned short i_3 = 2; i_3 < 21; i_3 += 4) 
                {
                    arr_11 [i_0] [i_1] [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0]);
                    /* LoopSeq 3 */
                    for (unsigned char i_4 = 2; i_4 < 21; i_4 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4 + 1] [i_3] [i_1] [i_0 - 2])) ? (((/* implicit */int) arr_5 [i_4] [i_1] [i_1] [i_0])) : (var_2)))) ? (var_10) : (((((/* implicit */long long int) ((/* implicit */int) var_6))) | (var_7)))));
                        arr_14 [i_0 - 1] = ((/* implicit */int) (!(((/* implicit */_Bool) 2129160160))));
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 1154655488U)) ? (((/* implicit */int) (unsigned short)65528)) : (-1761434318)));
                        var_23 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)112)) ? (min((-1), (((/* implicit */int) (unsigned short)65534)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)30677)) || (((/* implicit */_Bool) (unsigned short)27094))))))), (((/* implicit */int) var_5))));
                    }
                    for (unsigned char i_5 = 2; i_5 < 21; i_5 += 4) /* same iter space */
                    {
                        arr_18 [i_0 - 2] = ((/* implicit */short) var_11);
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
                        {
                            arr_21 [i_6] [i_1] [i_3 - 1] [i_5] [i_6] = ((/* implicit */int) (signed char)-32);
                            arr_22 [i_3] [i_0 - 2] [i_3] [i_1] [i_0 - 2] = ((/* implicit */_Bool) (~((~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_3] [i_6]))) > (1098437885952LL))))))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (549755813760ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_12))))))) : (var_16)));
                            var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_16)) & (var_19)));
                        }
                        var_26 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)42))));
                    }
                    for (int i_8 = 2; i_8 < 19; i_8 += 4) 
                    {
                        var_27 = ((12503636898345024603ULL) ^ (((/* implicit */unsigned long long int) 2616992963U)));
                        var_28 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (unsigned short)0))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_9 = 1; i_9 < 20; i_9 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (signed char i_10 = 0; i_10 < 22; i_10 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))), (var_11)))) ? (var_9) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_2)))) : (var_14)))));
                            var_30 *= ((/* implicit */_Bool) arr_19 [i_9] [i_1] [i_3 - 2] [i_0 - 2]);
                            arr_36 [i_0] [i_1] [i_3 - 2] [i_9 + 1] [i_10] = ((/* implicit */unsigned long long int) var_12);
                            var_31 = ((/* implicit */unsigned long long int) (short)19022);
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 4) 
                        {
                            arr_39 [i_11] [i_9 - 1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 8494362167789476593ULL))));
                            var_32 = ((/* implicit */int) var_3);
                            arr_40 [i_11] [i_9 + 2] [i_9] [i_3 + 1] [i_3] [i_1] [i_0] = (+(((((/* implicit */_Bool) 1184584072)) ? (234881024U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))));
                            arr_41 [i_0 + 1] [i_9 - 1] [i_3] [i_9] [13] [13] &= ((/* implicit */long long int) var_5);
                        }
                        for (short i_12 = 0; i_12 < 22; i_12 += 4) /* same iter space */
                        {
                            var_33 = ((/* implicit */long long int) (((+(var_3))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
                            var_34 += ((/* implicit */long long int) ((short) 0ULL));
                            arr_44 [i_0] [6U] [i_3] [i_9 + 1] [6U] = ((/* implicit */int) max(((unsigned short)39064), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_9)))))))));
                        }
                        for (short i_13 = 0; i_13 < 22; i_13 += 4) /* same iter space */
                        {
                            var_35 = ((/* implicit */long long int) max((var_35), (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)127)), (arr_10 [i_0 + 1] [i_1] [i_0 + 1]))))) | (min((min((-7573920320119277015LL), (-5790013724842030767LL))), (((/* implicit */long long int) ((((var_12) + (2147483647))) << (((((/* implicit */int) (unsigned short)56987)) - (56987))))))))))));
                            arr_49 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
                            var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-32760)) / (var_2)))), (arr_30 [i_0 - 2] [i_1] [i_3] [i_13])))) ? (arr_0 [i_9 + 2]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (arr_35 [i_0 + 2] [i_9 - 1]))))));
                        }
                        arr_50 [i_1] [i_3] [i_9 + 1] = ((/* implicit */unsigned long long int) min((max((((-7813862085385846741LL) / (((/* implicit */long long int) 1744241416)))), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) arr_32 [i_9] [i_0 - 1] [i_3 - 2] [i_1] [i_0 - 1] [i_0 - 1]))));
                    }
                    for (int i_14 = 0; i_14 < 22; i_14 += 4) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned short) (+(4445310046631187641LL)));
                        arr_54 [i_0 + 2] [i_1] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) -16571895852149077LL);
                        var_38 = ((/* implicit */short) (+((-(((/* implicit */int) arr_23 [i_0] [i_0] [i_1] [i_3] [10U]))))));
                        /* LoopSeq 3 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            arr_57 [i_15] = ((/* implicit */unsigned char) (+(arr_0 [i_15])));
                            var_39 = ((/* implicit */long long int) (+(((/* implicit */int) var_4))));
                            arr_58 [i_3 + 1] [i_15] [i_3] [i_14] = ((/* implicit */unsigned short) (-(var_8)));
                        }
                        for (long long int i_16 = 0; i_16 < 22; i_16 += 4) 
                        {
                            var_40 = ((/* implicit */short) var_10);
                            arr_62 [(unsigned char)12] = ((/* implicit */long long int) (unsigned short)64390);
                        }
                        for (unsigned long long int i_17 = 2; i_17 < 21; i_17 += 4) 
                        {
                            arr_65 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_0 + 2] [i_3] [i_3] [i_14] [i_17] [i_3]))));
                            var_41 = ((/* implicit */unsigned char) var_4);
                            arr_66 [i_0] [5] [i_3] [6] [(_Bool)1] = ((/* implicit */unsigned char) (signed char)115);
                            arr_67 [i_0] [i_1] [i_3 - 2] [i_14] [i_17 - 2] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (arr_0 [i_17])));
                        }
                    }
                    for (int i_18 = 0; i_18 < 22; i_18 += 4) /* same iter space */
                    {
                        var_42 = ((/* implicit */long long int) ((short) (+(((/* implicit */int) arr_16 [i_3 - 1] [i_3 - 2] [i_0 - 1] [i_0 - 2])))));
                        var_43 |= (short)0;
                    }
                    var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) var_18))));
                }
                arr_70 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (short)-23943);
            }
        } 
    } 
    var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1902255182)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)12288))));
    var_46 = ((/* implicit */short) var_12);
    var_47 = var_12;
    var_48 = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (199638685) : (var_18)))), (max((var_10), (((/* implicit */long long int) var_15)))))), (min((((/* implicit */long long int) var_6)), (var_16)))));
}
