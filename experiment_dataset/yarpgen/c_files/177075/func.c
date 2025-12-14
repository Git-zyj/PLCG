/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177075
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
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((signed char) (_Bool)1)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)62486))))) / (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_8)) : (var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
    var_20 = var_9;
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (max((3065846760U), (((/* implicit */unsigned int) (signed char)29)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 4) /* same iter space */
    {
        var_22 &= ((/* implicit */signed char) (-(((/* implicit */int) min((min((arr_0 [(short)9]), (var_12))), (var_1))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                var_23 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? ((~(((/* implicit */int) arr_3 [i_0 - 1])))) : (((/* implicit */int) var_4))));
                arr_6 [(_Bool)1] [i_1] [(_Bool)1] [i_2] = ((/* implicit */_Bool) 1229120536U);
            }
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3065846760U)) ? ((+(((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) arr_4 [7] [7] [i_0])) : (((/* implicit */int) var_1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_12 [i_4] [i_3 - 1] [i_0] [i_0] = ((/* implicit */unsigned short) var_4);
                    var_25 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                    var_26 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-16855)) ? (((/* implicit */int) arr_10 [i_0 + 1] [(unsigned char)0] [i_3 - 1] [2ULL] [i_4])) : (((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1] [i_3 - 1] [i_3] [i_3])))) / ((+(max((var_8), (((/* implicit */int) arr_5 [i_0 + 3] [(short)4] [i_3]))))))));
                }
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    arr_15 [i_0] [i_1] [i_3] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_16))) / ((-(((/* implicit */int) (signed char)26))))))) ? (((/* implicit */unsigned int) var_11)) : ((~(1229120523U)))));
                    var_27 = ((/* implicit */short) min((((/* implicit */unsigned short) ((_Bool) var_8))), (((unsigned short) ((unsigned short) (_Bool)1)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned char) var_15);
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [(unsigned short)9] [i_5] [(unsigned char)11])) - (arr_1 [i_1] [(short)11])))), (min((3065846773U), (((/* implicit */unsigned int) arr_3 [(_Bool)1])))))))))));
                    }
                    var_30 = ((/* implicit */signed char) ((((((/* implicit */int) var_12)) >= (((((/* implicit */_Bool) arr_8 [(unsigned char)1] [(unsigned char)1])) ? (((/* implicit */int) var_17)) : (var_15))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (short)23127)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-31311))) : (1229120522U))) > (((/* implicit */unsigned int) ((/* implicit */int) ((3065846786U) > (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))))) : ((-(((/* implicit */int) arr_17 [(_Bool)1] [i_3 - 1] [i_3 - 1] [(unsigned char)5] [i_5] [i_0 + 1]))))));
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
                    {
                        var_31 = ((/* implicit */long long int) ((_Bool) ((((((((/* implicit */int) var_17)) + (2147483647))) << (((/* implicit */int) arr_18 [i_0] [i_1] [i_3] [i_3] [i_5] [i_5] [(_Bool)0])))) ^ (((/* implicit */int) arr_4 [i_0 + 3] [i_0 + 2] [i_0 - 1])))));
                        var_32 = var_5;
                        arr_22 [i_7] [i_5] [i_3 - 1] [(unsigned short)4] [10ULL] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_3)))) - (((unsigned long long int) arr_11 [i_0 + 3]))));
                    }
                    for (short i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
                    {
                        var_33 = ((/* implicit */signed char) var_17);
                        arr_26 [i_0] [i_1] [i_1] = ((/* implicit */short) var_15);
                        arr_27 [i_0] [i_1] [i_1] [i_1] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((((/* implicit */int) var_16)) + (((/* implicit */int) var_3)))) : (arr_1 [i_3 - 1] [i_0 + 1])));
                    }
                }
            }
            for (unsigned short i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    var_34 = ((/* implicit */unsigned char) 2537608118846541061LL);
                    /* LoopSeq 1 */
                    for (short i_11 = 2; i_11 < 10; i_11 += 3) 
                    {
                        var_35 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) (signed char)24)))));
                        var_36 = ((/* implicit */int) min((var_36), ((~(((/* implicit */int) var_1))))));
                    }
                }
                arr_35 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (3065846773U) : (1229120520U)))))))));
                arr_36 [i_0] [i_1] [(signed char)9] [i_9] = ((/* implicit */short) var_12);
            }
            /* vectorizable */
            for (short i_12 = 2; i_12 < 10; i_12 += 1) 
            {
                var_37 = ((/* implicit */signed char) (~(1229120523U)));
                var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_1 [i_0 + 3] [i_0 + 3])))))));
            }
            var_39 = ((/* implicit */_Bool) ((max((((/* implicit */int) arr_17 [(short)8] [i_1] [3U] [i_0 + 3] [i_0] [3U])), ((+(var_8))))) << ((((((~(((/* implicit */int) arr_23 [i_0] [i_0 + 1] [i_0 + 3] [i_0 + 3] [i_0 + 3])))) + (103))) - (29)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_40 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_0 - 1] [i_1] [i_13] [i_0] [i_1] [i_13])) || (((/* implicit */_Bool) arr_14 [i_0 + 1] [i_0 + 2]))));
                arr_42 [i_0] [i_1] [i_1] [i_13] = ((/* implicit */_Bool) ((var_4) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))) : (var_10)));
                var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_18)))) : (((long long int) var_14)))))));
            }
            arr_43 [(unsigned char)1] = ((/* implicit */unsigned short) arr_31 [i_0 + 1] [i_0] [i_1] [i_1]);
        }
        arr_44 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_18))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_29 [(unsigned short)3] [i_0] [i_0] [i_0 + 1])) : (((/* implicit */int) arr_32 [i_0] [i_0 + 1] [i_0] [i_0] [(short)2])))) : (min((arr_24 [i_0] [(_Bool)1] [i_0] [(_Bool)1] [(_Bool)1]), (((/* implicit */int) var_17)))))))));
    }
    for (unsigned short i_14 = 1; i_14 < 9; i_14 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_15 = 0; i_15 < 12; i_15 += 1) 
        {
            arr_50 [(unsigned short)8] [(unsigned short)8] = ((/* implicit */short) ((var_8) > (((((((/* implicit */_Bool) arr_34 [i_14 + 2] [i_14 + 2] [i_14 + 2] [i_15] [2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_32 [i_14] [i_14 + 3] [(unsigned short)3] [(signed char)11] [i_15])))) / (((/* implicit */int) var_7))))));
            /* LoopSeq 1 */
            for (unsigned char i_16 = 0; i_16 < 12; i_16 += 1) 
            {
                var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_14 + 2] [i_14 + 1] [i_14] [i_14 + 3] [(unsigned char)9] [i_14] [i_14 + 2]))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (var_0)))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_19 [i_14] [i_14 - 1] [i_14] [i_14] [i_14] [i_14] [i_14]))))));
                var_43 = ((/* implicit */_Bool) 1229120523U);
                arr_54 [i_14] [i_14] [i_16] [6U] = arr_13 [i_16] [i_14 + 3] [i_15] [i_16];
            }
        }
        for (short i_17 = 0; i_17 < 12; i_17 += 4) 
        {
            var_44 = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-10541))) : (712317926U)));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_18 = 0; i_18 < 12; i_18 += 1) 
            {
                arr_61 [i_14] [i_18] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)101))));
                var_45 = ((/* implicit */_Bool) ((((/* implicit */int) arr_32 [3U] [3U] [i_18] [3U] [i_14 + 3])) | (((/* implicit */int) arr_33 [i_14]))));
                var_46 ^= ((/* implicit */_Bool) (+(var_0)));
            }
            for (long long int i_19 = 0; i_19 < 12; i_19 += 4) 
            {
                var_47 = ((/* implicit */_Bool) ((((min(((~(((/* implicit */int) arr_38 [i_14] [i_14])))), (((/* implicit */int) ((short) arr_16 [4ULL] [i_14] [i_14] [i_14] [i_14]))))) + (2147483647))) << ((((((-(((/* implicit */int) arr_38 [i_14 - 1] [i_17])))) + (28108))) - (28)))));
                var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) max(((~(((/* implicit */int) (_Bool)1)))), (var_11)))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_17))))) ? (((/* implicit */unsigned int) max((var_11), (((/* implicit */int) (unsigned short)3))))) : ((+(arr_62 [(unsigned short)6] [i_17] [(unsigned short)6] [i_14 - 1])))))));
                var_49 = ((/* implicit */unsigned short) ((_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)106))) - (arr_13 [i_14] [i_14] [(unsigned short)5] [(unsigned short)5]))))));
                var_50 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) arr_58 [i_14 + 3] [i_14 + 1] [i_14 - 1])), (arr_25 [i_14] [i_14 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) & (((/* implicit */int) arr_47 [i_14 - 1] [i_17])))))));
            }
            for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
            {
                arr_67 [i_14] = ((/* implicit */int) ((short) (unsigned char)154));
                /* LoopSeq 3 */
                for (int i_21 = 2; i_21 < 11; i_21 += 3) 
                {
                    var_51 = ((/* implicit */long long int) min((var_51), (((/* implicit */long long int) ((unsigned short) (+(arr_51 [i_14] [i_14] [i_14 - 1] [i_14 + 1])))))));
                    arr_70 [i_14 + 3] [i_17] [i_20] [i_21] [i_21] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (unsigned short)65427)) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (unsigned short)65024)))))));
                    var_52 *= ((/* implicit */_Bool) ((((/* implicit */int) max((arr_38 [i_14 + 3] [i_20 - 1]), (arr_38 [i_14 + 2] [i_20 - 1])))) / (((/* implicit */int) arr_38 [i_14 + 1] [i_20 - 1]))));
                }
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    var_53 = ((short) (~(((/* implicit */int) var_17))));
                    arr_74 [i_20] [i_20] = ((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_71 [i_22] [i_20 - 1] [i_14] [i_14] [i_14] [i_14])))), (((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) var_8)), (var_10)))))));
                    arr_75 [i_14] [i_17] [i_20 - 1] [i_17] = ((/* implicit */unsigned short) max((var_2), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8608357814741660075ULL)) ? (((/* implicit */int) arr_52 [(short)3] [i_20] [i_17] [i_14])) : (((/* implicit */int) var_2))))) || (((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_64 [(_Bool)1] [(_Bool)1] [i_14])))))))));
                    /* LoopSeq 1 */
                    for (int i_23 = 2; i_23 < 8; i_23 += 1) 
                    {
                        var_54 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_9))))));
                        arr_78 [i_14] [2ULL] [i_20] [(unsigned short)2] [i_23] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28290)) ? (max((1229120510U), (((/* implicit */unsigned int) (short)-31311)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 417899250U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)53))))))))));
                        var_55 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6649369872739350459ULL)) ? (((/* implicit */int) (unsigned short)30019)) : (((/* implicit */int) (unsigned char)247)))))));
                        arr_79 [i_14] [i_17] [i_14] [i_20] [i_22] [(short)4] = ((/* implicit */signed char) (-((-(((long long int) arr_37 [i_22] [i_17] [i_20]))))));
                        var_56 *= ((/* implicit */unsigned short) ((var_0) << (((arr_13 [i_14] [i_20 - 1] [i_22] [i_23]) - (18350293083020822096ULL)))));
                    }
                    arr_80 [i_14] [i_20 - 1] [i_20 - 1] = ((/* implicit */long long int) min((((/* implicit */int) arr_73 [i_14])), (((max((((/* implicit */int) var_1)), (var_15))) + (((/* implicit */int) var_18))))));
                }
                /* vectorizable */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    var_57 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_58 [i_14 + 2] [i_14 - 1] [i_20 - 1]))));
                    /* LoopSeq 3 */
                    for (unsigned short i_25 = 3; i_25 < 11; i_25 += 1) 
                    {
                        var_58 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) var_4)) << (((((/* implicit */int) var_6)) + (10791))))));
                        arr_85 [i_17] [i_20] = ((/* implicit */_Bool) var_15);
                    }
                    for (int i_26 = 0; i_26 < 12; i_26 += 1) /* same iter space */
                    {
                        arr_88 [7ULL] [i_17] [i_20] [i_24] [11ULL] = ((((/* implicit */_Bool) arr_72 [i_20 - 1] [i_20 - 1] [i_20] [i_20 - 1] [i_14 - 1])) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_20 [i_14] [i_17] [i_14] [i_24] [i_24])) : (((/* implicit */int) arr_10 [i_14 - 1] [i_17] [i_20 - 1] [i_17] [i_26])))) : (((/* implicit */int) var_16)));
                        var_59 = ((/* implicit */unsigned char) max((var_59), (((/* implicit */unsigned char) ((6649369872739350459ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_14 + 1] [(signed char)0] [(signed char)0] [(signed char)0]))))))));
                        var_60 = ((/* implicit */_Bool) max((var_60), (((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_14] [i_17] [i_20]))))))))));
                        arr_89 [11] [i_17] [i_20 - 1] [i_24] [(short)8] [i_26] = ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */int) arr_39 [i_14] [i_14] [i_20])) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) arr_73 [i_26])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
                        arr_90 [i_14] [i_17] [i_20 - 1] [i_14] [i_26] = ((/* implicit */short) var_10);
                    }
                    for (int i_27 = 0; i_27 < 12; i_27 += 1) /* same iter space */
                    {
                        arr_95 [i_14] [i_14 + 2] [i_14] [i_20] [i_14] [i_14 + 2] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */int) arr_73 [i_14 + 1])) : (((/* implicit */int) var_9))));
                        var_61 += ((((/* implicit */_Bool) ((unsigned char) (_Bool)0))) ? (((/* implicit */int) arr_47 [i_20 - 1] [i_14 - 1])) : (((/* implicit */int) var_17)));
                    }
                }
            }
        }
        var_62 = ((/* implicit */short) arr_82 [i_14 + 1] [(unsigned short)6] [i_14 + 1] [(unsigned char)0]);
        var_63 = ((/* implicit */int) (!((!(((/* implicit */_Bool) 3877068044U))))));
        arr_96 [i_14] [i_14 + 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 10548617150294614044ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-8704))));
    }
    for (unsigned short i_28 = 1; i_28 < 9; i_28 += 4) /* same iter space */
    {
        var_64 = ((/* implicit */short) (-(max((min((arr_72 [i_28] [i_28] [i_28] [i_28 + 2] [(short)7]), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_28 [i_28] [4])))))))));
        var_65 *= ((/* implicit */short) (((_Bool)1) ? (-355219409) : (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned int i_29 = 0; i_29 < 15; i_29 += 1) 
    {
        arr_101 [i_29] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)236))));
        /* LoopSeq 1 */
        for (short i_30 = 0; i_30 < 15; i_30 += 2) 
        {
            var_66 = ((/* implicit */int) min((var_0), (((/* implicit */unsigned long long int) min((arr_103 [(_Bool)1] [i_30]), (((/* implicit */long long int) (~(((/* implicit */int) var_2))))))))));
            arr_104 [i_30] [i_29] [i_29] = ((/* implicit */unsigned int) var_10);
            var_67 = ((/* implicit */long long int) ((((/* implicit */_Bool) 8608357814741660062ULL)) ? (8608357814741660082ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25798)))));
        }
        var_68 = ((/* implicit */signed char) ((unsigned long long int) ((arr_102 [i_29] [i_29]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
        var_69 = ((/* implicit */_Bool) (((_Bool)1) ? (-1550722642) : (((/* implicit */int) (signed char)0))));
        var_70 = ((/* implicit */unsigned long long int) min((var_70), (((/* implicit */unsigned long long int) (+(arr_100 [i_29]))))));
    }
    var_71 = ((/* implicit */signed char) min((var_71), (((/* implicit */signed char) var_15))));
}
