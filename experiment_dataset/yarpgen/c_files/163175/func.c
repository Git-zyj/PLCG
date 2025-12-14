/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163175
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
    var_13 = ((/* implicit */unsigned short) var_5);
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (min((((/* implicit */unsigned long long int) (unsigned char)216)), (var_10))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)141)) ? (4294967295LL) : (-4294967296LL)))) ? (((/* implicit */unsigned long long int) 4294967301LL)) : (var_2)))));
    var_15 = ((/* implicit */int) var_8);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (unsigned char i_3 = 3; i_3 < 8; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) ((unsigned char) var_8));
                            arr_12 [i_4] = ((/* implicit */signed char) 4294967280LL);
                            var_17 = ((/* implicit */_Bool) arr_8 [i_3] [6] [i_3] [6]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    var_18 = ((/* implicit */int) ((signed char) max((var_3), ((unsigned char)191))));
                    arr_19 [i_6] [i_6] [i_1] [(unsigned short)7] = ((/* implicit */unsigned short) ((min((arr_15 [i_5] [i_1] [i_5]), (((/* implicit */unsigned int) var_7)))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))) == (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)169))) % (-5248711872082783545LL)))))))));
                    arr_20 [i_5] [(unsigned short)2] [i_5] [i_5] [i_0] [i_6] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((unsigned short) var_1))))) % (((max((((/* implicit */long long int) (unsigned char)0)), (8LL))) * (((/* implicit */long long int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned char) (_Bool)1))))))))));
                }
                arr_21 [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_5]);
            }
            for (unsigned int i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 2828959444914376114LL)) ? ((-(var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_12)))))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) 9223372036854775807LL))))))));
                arr_25 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_7]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1])))))) : ((-(var_12)))));
            }
            /* vectorizable */
            for (unsigned int i_8 = 0; i_8 < 10; i_8 += 3) /* same iter space */
            {
                var_20 -= ((unsigned char) ((((/* implicit */_Bool) -4294967301LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))));
                var_21 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
            }
        }
        /* vectorizable */
        for (signed char i_9 = 2; i_9 < 9; i_9 += 2) 
        {
            arr_31 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)97)) : (((/* implicit */int) (short)-1))))) ? (((/* implicit */int) arr_28 [i_0] [i_0] [i_0])) : ((~(((/* implicit */int) (signed char)-127))))));
            var_22 -= 2684159115163212843ULL;
            /* LoopNest 3 */
            for (unsigned short i_10 = 0; i_10 < 10; i_10 += 4) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    for (unsigned long long int i_12 = 2; i_12 < 9; i_12 += 3) 
                    {
                        {
                            var_23 += ((/* implicit */unsigned long long int) (short)-28919);
                            var_24 = ((/* implicit */signed char) 18446744073709551615ULL);
                            arr_38 [i_12] [(unsigned char)5] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(1775324316)));
                        }
                    } 
                } 
            } 
        }
        arr_39 [i_0] = ((/* implicit */unsigned char) (short)1);
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (signed char)-46))));
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((-4294967295LL) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)1))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0] [i_0])), (var_1)))))))))))));
        arr_40 [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) ((signed char) (signed char)-51)));
    }
    for (int i_13 = 0; i_13 < 10; i_13 += 2) /* same iter space */
    {
        arr_44 [i_13] = ((/* implicit */unsigned char) ((arr_16 [i_13] [i_13] [i_13]) + (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)167)))));
        var_27 = ((/* implicit */unsigned long long int) (short)1);
    }
    /* vectorizable */
    for (unsigned short i_14 = 0; i_14 < 24; i_14 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_15 = 1; i_15 < 21; i_15 += 2) 
        {
            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) ((unsigned short) -451470194))) : (((int) arr_46 [(unsigned short)10])))))));
            var_29 = ((((/* implicit */int) ((((/* implicit */_Bool) arr_47 [i_14] [i_14] [i_14])) || (((/* implicit */_Bool) (short)-1))))) == (((/* implicit */int) arr_46 [i_14])));
            var_30 = ((/* implicit */unsigned short) (~(33554431ULL)));
        }
        var_31 ^= ((/* implicit */unsigned short) ((unsigned long long int) arr_47 [i_14] [i_14] [i_14]));
        /* LoopSeq 3 */
        for (short i_16 = 0; i_16 < 24; i_16 += 1) 
        {
            arr_52 [i_14] [i_14] [i_16] = ((/* implicit */unsigned char) (~(8459357230312596890LL)));
            /* LoopSeq 1 */
            for (signed char i_17 = 0; i_17 < 24; i_17 += 3) 
            {
                var_32 = ((/* implicit */unsigned char) ((1414502287) == (((/* implicit */int) (!(((/* implicit */_Bool) 18082172717039138550ULL)))))));
                /* LoopSeq 1 */
                for (int i_18 = 0; i_18 < 24; i_18 += 1) 
                {
                    var_33 = ((/* implicit */int) ((((/* implicit */_Bool) arr_53 [i_14] [i_16])) ? (arr_53 [i_17] [i_18]) : (arr_53 [i_17] [i_14])));
                    var_34 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)114)) <= (-451470200))) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) (short)4))));
                }
                var_35 = ((/* implicit */unsigned long long int) ((_Bool) arr_55 [i_14] [i_16] [i_16] [i_14] [i_14]));
                /* LoopSeq 1 */
                for (int i_19 = 3; i_19 < 21; i_19 += 2) 
                {
                    arr_62 [i_17] [i_19] [i_17] [i_17] = ((/* implicit */short) ((int) arr_58 [i_19] [i_19]));
                    /* LoopSeq 3 */
                    for (unsigned int i_20 = 0; i_20 < 24; i_20 += 2) 
                    {
                        var_36 = ((signed char) arr_56 [i_19 + 1] [i_19] [i_19] [i_19 - 2]);
                        arr_67 [i_14] [i_14] [i_19] [i_19] [i_19] = ((/* implicit */unsigned long long int) (unsigned char)0);
                        var_37 = ((/* implicit */int) (-(((unsigned int) arr_61 [i_19] [i_17]))));
                    }
                    for (unsigned char i_21 = 2; i_21 < 23; i_21 += 3) 
                    {
                        arr_71 [i_17] [i_19] [i_17] [i_19] [i_17] = ((/* implicit */unsigned char) ((((arr_47 [11LL] [i_21] [i_21]) % (((/* implicit */int) var_11)))) == (((/* implicit */int) arr_70 [i_19] [i_19 - 3] [i_19 - 3] [i_19 - 3] [i_21 + 1] [i_19 - 3]))));
                        var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((short) (_Bool)1)))));
                    }
                    for (unsigned char i_22 = 0; i_22 < 24; i_22 += 4) 
                    {
                        arr_76 [i_19] = ((/* implicit */unsigned long long int) arr_56 [i_14] [i_17] [i_19] [i_17]);
                        var_39 = (((((_Bool)1) ? (arr_56 [i_14] [(short)19] [i_19] [i_22]) : (844424930131968LL))) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [i_19 - 1] [i_14] [i_14])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_58 [i_19] [i_19]))))));
                        var_40 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6458))) == (1048575ULL))) ? (arr_50 [i_14] [i_14]) : (((/* implicit */int) var_8))));
                        arr_77 [i_19] [i_17] [i_19] [i_17] [i_19] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_70 [i_19] [i_22] [i_19 - 3] [i_19 - 1] [i_19] [i_19]))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned char i_23 = 0; i_23 < 24; i_23 += 4) 
                {
                    for (short i_24 = 0; i_24 < 24; i_24 += 1) 
                    {
                        {
                            arr_84 [i_24] [i_23] [i_17] [i_14] [i_14] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-4508550995338568894LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -4508550995338568894LL))))) : (((/* implicit */int) ((var_12) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)191)))))));
                            arr_85 [i_14] [i_16] [i_17] [i_23] [i_17] [i_24] [i_17] = ((/* implicit */unsigned char) arr_45 [i_23]);
                            var_41 *= ((/* implicit */int) ((((/* implicit */_Bool) 212757852)) || (((/* implicit */_Bool) (short)-9811))));
                        }
                    } 
                } 
            }
            var_42 = ((/* implicit */unsigned char) ((int) arr_79 [i_14] [i_14] [i_14] [i_16] [2] [2]));
        }
        for (unsigned char i_25 = 0; i_25 < 24; i_25 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned char i_26 = 0; i_26 < 24; i_26 += 4) /* same iter space */
            {
                var_43 = (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_70 [i_25] [i_25] [i_14] [i_14] [i_14] [i_25]))))));
                var_44 = ((/* implicit */unsigned char) ((134217600LL) >> (((/* implicit */int) (_Bool)1))));
            }
            for (unsigned char i_27 = 0; i_27 < 24; i_27 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_28 = 2; i_28 < 23; i_28 += 4) 
                {
                    arr_95 [i_27] [i_25] = ((/* implicit */signed char) (~(((/* implicit */int) arr_78 [i_25] [i_25] [i_28] [i_28] [i_28 + 1] [i_28 - 2]))));
                    arr_96 [i_14] = ((/* implicit */signed char) arr_82 [i_28 - 2] [i_28 - 2] [i_28 - 2] [i_28 - 2] [i_28 - 2]);
                    var_45 = ((/* implicit */_Bool) var_6);
                    var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_82 [i_28] [i_28] [i_28] [(short)6] [i_28 - 1])) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) arr_65 [i_28] [i_28 - 2] [i_28 - 2] [i_28 + 1] [i_28] [i_28 - 1]))));
                }
                arr_97 [i_14] [i_14] [i_27] [i_14] = ((/* implicit */signed char) (+(((/* implicit */int) arr_48 [i_25]))));
            }
            for (unsigned char i_29 = 0; i_29 < 24; i_29 += 4) /* same iter space */
            {
                var_47 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)71))) * (-1LL)));
                var_48 = ((/* implicit */unsigned short) max((var_48), (((/* implicit */unsigned short) ((signed char) (((_Bool)1) ? (arr_50 [i_14] [i_14]) : (((/* implicit */int) (unsigned short)62439))))))));
                var_49 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)13))) & (4508550995338568894LL)));
            }
            arr_100 [(signed char)6] [22] = ((/* implicit */int) ((unsigned int) ((signed char) (_Bool)1)));
        }
        for (unsigned char i_30 = 0; i_30 < 24; i_30 += 4) /* same iter space */
        {
            var_50 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
            var_51 = ((/* implicit */short) min((var_51), (((/* implicit */short) ((((/* implicit */int) arr_74 [i_30] [i_30])) | (((/* implicit */int) arr_74 [i_30] [i_30])))))));
            arr_105 [i_14] [i_30] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned short)35425)) : (((/* implicit */int) arr_63 [i_14] [i_14])))));
        }
        arr_106 [i_14] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) 4508550995338568894LL))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)203))));
    }
}
