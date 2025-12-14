/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185360
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
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_18 ^= ((/* implicit */short) (~(((/* implicit */int) max(((!(((/* implicit */_Bool) (short)-11595)))), ((!(((/* implicit */_Bool) arr_2 [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */short) max((((((/* implicit */unsigned int) (((-2147483647 - 1)) / (((/* implicit */int) (signed char)118))))) * ((+(var_6))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */int) (short)-4324)) : (((/* implicit */int) (short)-11595)))))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (unsigned char)131))))), (max((var_6), (((/* implicit */unsigned int) -1058242482))))))) ? (max((((/* implicit */int) max(((short)11585), ((short)-4311)))), (((int) arr_1 [i_0])))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(short)0])))))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 2) 
    {
        arr_8 [i_1] [i_1 + 1] = ((/* implicit */_Bool) (-((-(((/* implicit */int) ((unsigned char) arr_6 [i_1 + 1] [i_1])))))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) max((arr_6 [i_1] [12U]), (arr_6 [i_1] [(short)10])))))))))));
        var_21 += ((/* implicit */short) (~((~(((unsigned long long int) (_Bool)0))))));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (+((-((+(-5235147714490750220LL))))))))));
    }
    for (long long int i_2 = 2; i_2 < 20; i_2 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_23 ^= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)63743))));
                arr_18 [i_3] [i_4] = ((((/* implicit */_Bool) ((4219341657U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)27808)))))) ? ((-(var_8))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [(_Bool)0]))))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) min((min(((-(-1058242482))), (((/* implicit */int) max((((/* implicit */short) var_12)), ((short)18291)))))), ((-((-(((/* implicit */int) var_12)))))))))));
                            arr_26 [i_3] [i_3] [i_5] [i_6] [i_6 + 1] [i_5] [(unsigned short)14] = ((/* implicit */short) (-(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -4279630900306922738LL)) ? (((/* implicit */int) (short)11605)) : (((/* implicit */int) (short)-29403))))))));
                        }
                    } 
                } 
                arr_27 [i_2] [i_5] [i_2] = ((/* implicit */signed char) (~((~(((unsigned long long int) var_3))))));
                var_25 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) (~(((/* implicit */int) (signed char)88))))))));
            }
            for (signed char i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0)))))));
                arr_31 [i_3] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)(-32767 - 1)))));
                var_27 = ((/* implicit */int) max((((/* implicit */long long int) 4294967286U)), (-1382503518564840754LL)));
                var_28 += ((/* implicit */_Bool) (-((+(((/* implicit */int) max(((short)-12559), (((/* implicit */short) (unsigned char)254)))))))));
            }
            /* LoopSeq 2 */
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                arr_34 [i_2] [i_3] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_9] [i_9 + 1] [i_9 + 1])) * (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) ? ((+(((/* implicit */int) var_9)))) : (((int) (~(((/* implicit */int) arr_32 [15U])))))));
                arr_35 [i_2 + 2] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((short)24497), (((/* implicit */short) (unsigned char)254)))))) < (((((/* implicit */_Bool) var_17)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_2] [i_2] [i_2]))))))))));
            }
            /* vectorizable */
            for (int i_10 = 3; i_10 < 21; i_10 += 1) 
            {
                var_29 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)59253))));
                var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) (+(((unsigned int) -1058242482)))))));
                arr_40 [i_2] [i_2] [i_10] &= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [i_10] [i_2] [i_10] [i_10]))));
            }
        }
        for (signed char i_11 = 0; i_11 < 22; i_11 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_12 = 1; i_12 < 21; i_12 += 3) 
            {
                var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (-(((((/* implicit */_Bool) min(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)131))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_22 [i_12 - 1] [i_2] [i_2] [i_2 + 2]), (((/* implicit */short) arr_15 [12] [i_12] [i_11] [(_Bool)0])))))) : (((unsigned int) arr_24 [i_11] [(unsigned char)13] [i_12])))))))));
                arr_46 [i_2] [i_11] [(short)5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((max((var_6), (((/* implicit */unsigned int) arr_11 [i_2 + 2] [i_12])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1058242469)) ? (((/* implicit */int) arr_22 [i_2] [18LL] [i_2] [i_12])) : (((/* implicit */int) (signed char)39))))))))));
                var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) arr_15 [i_2 + 1] [i_2 + 1] [i_11] [i_2 + 1])))))))));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_33 ^= ((/* implicit */short) (((!(((/* implicit */_Bool) (+(((/* implicit */int) var_10))))))) ? (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1974606772))))), ((~(var_15))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-125))))))))));
                var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) (+((~(753728878))))))));
                /* LoopSeq 2 */
                for (unsigned int i_14 = 0; i_14 < 22; i_14 += 4) 
                {
                    var_35 += (+((-((-(((/* implicit */int) var_4)))))));
                    /* LoopSeq 3 */
                    for (short i_15 = 1; i_15 < 19; i_15 += 1) 
                    {
                        arr_54 [i_15] [i_14] [i_11] [i_11] [i_11] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) -7934108710319259841LL))))))))));
                        arr_55 [i_2] [i_2] [i_13] [i_2] [i_2] [i_14] [i_2 - 2] = ((/* implicit */_Bool) ((int) (-((~(((/* implicit */int) (unsigned short)1792)))))));
                        arr_56 [i_13] [i_15] [i_11] [i_13] [i_11] [i_2] = ((/* implicit */unsigned char) (+(max((((((/* implicit */_Bool) -1058242482)) ? (((/* implicit */int) arr_52 [i_2] [i_2] [i_2] [i_2])) : (arr_13 [i_2] [i_2]))), (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
                    }
                    for (int i_16 = 3; i_16 < 21; i_16 += 1) 
                    {
                        arr_60 [(short)1] [(short)1] [i_13] [i_14] [i_16 - 3] &= (+(min(((-(((/* implicit */int) arr_30 [i_2] [i_11] [i_13])))), (((int) 6542866475132090710LL)))));
                        arr_61 [i_11] [i_11] [i_11] [i_14] [17] [i_14] = ((/* implicit */signed char) max((147069670U), (((/* implicit */unsigned int) 259185878))));
                        var_36 *= ((/* implicit */short) ((((/* implicit */_Bool) (-((-(arr_58 [i_2 - 2] [i_11] [i_2 - 2] [i_11] [(short)18])))))) ? (((/* implicit */int) ((signed char) (~(((/* implicit */int) (signed char)89)))))) : ((~(((/* implicit */int) arr_23 [i_2 + 1] [i_16 - 3]))))));
                        var_37 = ((/* implicit */long long int) max(((~(((unsigned int) (short)(-32767 - 1))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                    }
                    /* vectorizable */
                    for (long long int i_17 = 1; i_17 < 18; i_17 += 2) 
                    {
                        arr_65 [(short)14] [i_11] [3] [(short)2] [i_17 + 3] [(short)14] [i_13] |= ((/* implicit */unsigned long long int) (~((+(var_6)))));
                        arr_66 [(unsigned short)9] [i_11] [(unsigned short)9] [(unsigned short)9] = ((/* implicit */short) (+(((/* implicit */int) ((4006682787U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_13] [i_11]))))))));
                        var_38 = ((/* implicit */int) max((var_38), ((+(((((/* implicit */_Bool) arr_24 [i_2] [i_11] [i_13])) ? (884749724) : (((/* implicit */int) (short)32756))))))));
                    }
                }
                for (signed char i_18 = 0; i_18 < 22; i_18 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_19 = 0; i_19 < 22; i_19 += 2) 
                    {
                        var_39 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_18] [i_13] [i_2 + 2]))))))) : ((~((-(((/* implicit */int) var_4))))))));
                        arr_72 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] &= (!(((/* implicit */_Bool) (+(0ULL)))));
                        arr_73 [i_2] [15] [i_2] [i_18] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((+(var_2))) / (((/* implicit */long long int) arr_42 [i_2 + 2] [i_2 + 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 1389698987U)))))))) : ((+((+(5235147714490750219LL)))))));
                        var_40 |= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-10063)))))))) * (min(((~(arr_17 [i_13]))), ((~(((/* implicit */int) arr_44 [i_2] [i_19] [i_19] [i_2]))))))));
                    }
                    arr_74 [i_2] = ((/* implicit */_Bool) (~((-(((/* implicit */int) max((((/* implicit */short) var_4)), ((short)989))))))));
                    var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-11612))) + (arr_42 [i_2] [i_11]))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)25))))) ? (((((/* implicit */_Bool) var_17)) ? (var_6) : (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) var_9)), (arr_12 [i_11]))))))) : (((unsigned int) var_15))));
                }
                /* LoopNest 2 */
                for (unsigned char i_20 = 0; i_20 < 22; i_20 += 4) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 22; i_21 += 1) 
                    {
                        {
                            var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-26)), (arr_37 [i_13] [7LL])))), ((-(arr_36 [i_20] [i_20])))))) ? (((unsigned int) (-(arr_67 [i_2] [i_11])))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))))))));
                            arr_79 [i_2] [i_21] [i_13] [i_13] [i_20] [i_20] [i_21] = ((/* implicit */int) max((((unsigned long long int) ((var_13) ? (((/* implicit */int) (short)10064)) : (((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) ((signed char) ((var_9) ? (var_8) : (arr_13 [i_2] [i_11])))))));
                            arr_80 [i_2] [i_21] [i_13] [i_20] [i_21] = ((/* implicit */signed char) min((-3085493552262728147LL), (((/* implicit */long long int) (signed char)-25))));
                        }
                    } 
                } 
                arr_81 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-95)) ? (9240826737367285019ULL) : (((/* implicit */unsigned long long int) -1774985211))));
            }
            /* LoopSeq 2 */
            for (unsigned int i_22 = 0; i_22 < 22; i_22 += 1) 
            {
                var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) (((!((!(((/* implicit */_Bool) var_7)))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_0))))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) 1459585383U))))))))))));
                var_44 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */long long int) arr_13 [i_11] [i_22])) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_12)))))));
                arr_84 [i_2] [i_2] [i_2] [i_2 + 2] = ((/* implicit */_Bool) max((min((((/* implicit */int) var_14)), ((+(((/* implicit */int) arr_53 [i_11] [i_11] [i_11] [i_11])))))), ((-(((/* implicit */int) (!(arr_63 [i_2] [i_2] [i_22] [16U]))))))));
                arr_85 [i_2] [i_11] = ((/* implicit */short) (~((-(((-9223372036854775799LL) / (9223372036854775799LL)))))));
            }
            for (unsigned short i_23 = 1; i_23 < 21; i_23 += 2) 
            {
                var_45 *= ((/* implicit */signed char) (-((-((-(((/* implicit */int) var_12))))))));
                arr_88 [i_23] [i_23] [i_2] = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_19 [i_2 + 1] [i_2 + 1] [i_2 + 1]))))));
                var_46 = ((/* implicit */unsigned long long int) max(((-((-(((/* implicit */int) arr_45 [i_2] [i_2] [i_23] [i_23])))))), ((+((-(((/* implicit */int) (signed char)127))))))));
            }
            /* LoopSeq 2 */
            for (short i_24 = 0; i_24 < 22; i_24 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_25 = 1; i_25 < 19; i_25 += 4) 
                {
                    var_47 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */int) var_9)) * (var_11))))))));
                    arr_95 [i_2] [i_2 + 2] [i_2] [i_2 - 2] [i_24] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_49 [i_2] [i_2])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (short)26701)))))))) ? (((((/* implicit */_Bool) (-(arr_17 [6LL])))) ? ((-(arr_29 [i_24]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)11595))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_47 [i_11] [i_11] [i_24] [i_25])))))))));
                }
                var_48 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_12)), (var_10)))) : (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)211)), (var_16)))) ? ((-(((/* implicit */int) var_12)))) : ((+(((/* implicit */int) (short)117))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_26 = 0; i_26 < 22; i_26 += 2) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_27 = 0; i_27 < 22; i_27 += 3) 
                    {
                        arr_100 [i_2] [i_2] [i_24] [i_24] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_9 [i_11]))))));
                        arr_101 [i_2] [i_2] [(short)2] [i_2 + 2] [i_24] [i_2] [i_24] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_9)))))));
                    }
                    for (long long int i_28 = 1; i_28 < 20; i_28 += 4) 
                    {
                        var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2374030231U)))))));
                        var_50 = (((_Bool)1) ? (((/* implicit */int) (!((_Bool)1)))) : (((arr_99 [i_2] [i_11] [i_24] [i_26] [i_28 + 2] [3]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7)))));
                        var_51 = ((/* implicit */unsigned char) max((var_51), (((/* implicit */unsigned char) (((~(var_6))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 9240826737367285019ULL)))))))))));
                    }
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        var_52 += (+(((/* implicit */int) ((short) arr_42 [i_2] [i_11]))));
                        var_53 = ((/* implicit */unsigned char) ((((_Bool) arr_44 [i_26] [i_26] [i_26] [i_26])) ? ((+(((/* implicit */int) (short)11576)))) : (((/* implicit */int) (!(((/* implicit */_Bool) -4968922275096471269LL)))))));
                    }
                    var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_92 [i_26] [i_24])))) : ((~(0ULL)))));
                }
                for (long long int i_30 = 0; i_30 < 22; i_30 += 3) 
                {
                    var_55 *= ((/* implicit */unsigned char) max((((/* implicit */int) ((3085493552262728146LL) < (((/* implicit */long long int) 3694772886U))))), (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_57 [i_30] [i_30] [i_11] [i_11] [i_2]))))), ((+(((/* implicit */int) (short)0))))))));
                    var_56 = ((/* implicit */int) max(((+((+(var_2))))), (((/* implicit */long long int) (-((+(((/* implicit */int) arr_23 [1ULL] [1ULL])))))))));
                }
            }
            /* vectorizable */
            for (int i_31 = 2; i_31 < 18; i_31 += 2) 
            {
                arr_112 [i_2] = (-(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) arr_39 [i_2] [i_2] [(short)5] [i_2])))));
                var_57 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2164119268U)) * (9696718233733069883ULL))))));
                var_58 = ((/* implicit */long long int) (~((~(((/* implicit */int) (_Bool)1))))));
            }
            arr_113 [(signed char)17] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (((((-9223372036854775807LL - 1LL)) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) * (max((((/* implicit */long long int) (unsigned short)0)), (-4855927135768114614LL)))))) < (16756364165151452531ULL)));
            var_59 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_11]))) * (var_6))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (var_8) : (((/* implicit */int) arr_91 [i_2] [i_11]))))))))));
        }
        arr_114 [i_2] = ((/* implicit */long long int) (~((~((-(((/* implicit */int) (signed char)-27))))))));
        arr_115 [i_2] = ((/* implicit */signed char) (-(((long long int) max((var_11), (((/* implicit */int) var_12)))))));
        arr_116 [i_2] = ((/* implicit */long long int) ((unsigned char) (+(2133549220))));
    }
    var_60 = max((((/* implicit */unsigned int) max(((~(((/* implicit */int) var_7)))), ((~(((/* implicit */int) var_17))))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (3997183072U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)11576)) ? (((/* implicit */int) (unsigned short)14245)) : (((/* implicit */int) (short)1920))))) : (((unsigned int) var_4)))));
    var_61 ^= ((/* implicit */short) min((min(((~((-2147483647 - 1)))), ((+(((/* implicit */int) (_Bool)1)))))), ((+((~(((/* implicit */int) (signed char)23))))))));
    var_62 |= ((/* implicit */short) max((((/* implicit */int) ((_Bool) ((signed char) (unsigned short)14258)))), ((+((-(((/* implicit */int) var_3))))))));
}
