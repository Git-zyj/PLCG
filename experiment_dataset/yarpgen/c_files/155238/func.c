/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155238
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
    var_12 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9207387346742596710LL)) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) (signed char)0))))) ? (max((1152921504602652672ULL), (((/* implicit */unsigned long long int) 0LL)))) : (((/* implicit */unsigned long long int) var_8))))) ? (min((((/* implicit */unsigned long long int) 2052020818U)), (min((((/* implicit */unsigned long long int) (signed char)55)), (17293822569106898944ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-61)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 6; i_1 += 2) 
        {
            for (signed char i_2 = 4; i_2 < 9; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
                    {
                        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (4) : (((/* implicit */int) arr_10 [i_2 - 2] [i_0] [i_0] [i_1 + 1]))));
                        var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-28))));
                    }
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
                    {
                        arr_14 [i_4] [i_0] [i_1 + 4] = ((/* implicit */_Bool) arr_4 [i_0]);
                        var_15 = ((/* implicit */_Bool) (~(17293822569106898954ULL)));
                        var_16 = ((/* implicit */int) ((unsigned char) (signed char)-46));
                    }
                    for (signed char i_5 = 3; i_5 < 9; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */signed char) ((13LL) % (((/* implicit */long long int) ((unsigned int) (signed char)52)))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 3; i_6 < 9; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (1975074142U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_5 - 2] [i_5 - 2] [i_0] [i_6 - 2]))))))));
                            var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-51))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_6 - 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_6 - 1]))) : (-3852287652792567207LL)));
                            var_20 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-56))));
                        }
                        var_21 = ((/* implicit */_Bool) ((unsigned long long int) (_Bool)1));
                        arr_19 [i_0] [i_0] = ((/* implicit */long long int) ((short) ((unsigned char) var_1)));
                        var_22 = (((~(((/* implicit */int) var_0)))) + (((/* implicit */int) (unsigned short)43672)));
                    }
                    for (unsigned long long int i_7 = 2; i_7 < 6; i_7 += 3) 
                    {
                        arr_23 [i_1 + 2] [i_0] [i_1 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9381))) : (var_4)));
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((106453658) << (((-106453649) + (106453652))))))));
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) 15977732698586171199ULL))));
                        arr_24 [i_0] [i_0] = ((/* implicit */long long int) (signed char)-50);
                    }
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)70)) % (((/* implicit */int) var_6))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (_Bool)0))));
    }
    /* LoopSeq 4 */
    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
    {
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(max((22LL), (((/* implicit */long long int) (signed char)45))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-55)) ? (9LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) != (arr_28 [i_8]))))) : (((long long int) (((_Bool)1) ? (((/* implicit */int) var_9)) : (106453665))))));
        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 27)) ? (32) : (((/* implicit */int) (signed char)10))))) == (min((((/* implicit */unsigned int) (signed char)-46)), (var_1)))))), (var_9))))));
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (signed char i_10 = 0; i_10 < 11; i_10 += 1) 
            {
                {
                    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) > (((16429698063013187227ULL) << (((((/* implicit */int) (unsigned short)23552)) - (23518)))))));
                    var_30 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_8])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_27 [i_9]))))), (var_4))) << (((((/* implicit */int) arr_33 [i_10] [i_10] [i_9] [i_8])) - (6245)))));
                }
            } 
        } 
    }
    for (unsigned long long int i_11 = 1; i_11 < 17; i_11 += 1) 
    {
        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)169))) : (arr_36 [i_11 - 1] [i_11 + 2])))) ? (-7) : (((/* implicit */int) min((((/* implicit */unsigned char) ((_Bool) (short)32767))), ((unsigned char)84))))));
        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (unsigned char)236))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_12 = 0; i_12 < 19; i_12 += 1) 
        {
            var_33 = ((/* implicit */unsigned short) 15LL);
            /* LoopSeq 3 */
            for (short i_13 = 2; i_13 < 18; i_13 += 3) 
            {
                var_34 = ((/* implicit */unsigned short) 70808953);
                var_35 = ((/* implicit */unsigned int) ((short) 5212417560228132345LL));
                /* LoopSeq 2 */
                for (unsigned short i_14 = 4; i_14 < 18; i_14 += 1) 
                {
                    var_36 = ((((/* implicit */_Bool) ((long long int) (short)32764))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_13 - 2] [i_13 - 1] [i_13 - 1]))) : (((unsigned long long int) 4062275433U)));
                    var_37 = ((/* implicit */int) max((var_37), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 34LL)) ? (2ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16281)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)245))))));
                }
                for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 1) 
                {
                    var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_11 + 2] [i_13 + 1])) && (((/* implicit */_Bool) arr_44 [i_11 + 2] [i_13 - 2]))));
                    var_39 = ((/* implicit */int) (unsigned short)49256);
                }
            }
            for (unsigned short i_16 = 0; i_16 < 19; i_16 += 4) 
            {
                arr_50 [i_11 + 2] = ((/* implicit */unsigned int) var_3);
                var_40 &= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)65024)))));
                arr_51 [i_11 + 2] [i_11 + 2] [i_16] = ((/* implicit */unsigned int) ((unsigned char) (unsigned short)65006));
                var_41 &= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (signed char)-90)) == (((/* implicit */int) arr_40 [i_11 + 2] [i_12]))))) == (arr_43 [i_16] [i_11 + 1] [i_11 - 1] [i_11 + 2] [i_11 + 2] [i_11 + 2])));
            }
            for (long long int i_17 = 0; i_17 < 19; i_17 += 1) 
            {
                var_42 = ((/* implicit */long long int) arr_39 [i_11 + 1] [i_11 + 2] [i_11 + 2]);
                /* LoopSeq 1 */
                for (long long int i_18 = 3; i_18 < 17; i_18 += 3) 
                {
                    var_43 = ((((/* implicit */_Bool) ((unsigned short) (unsigned char)197))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)505))))) : (((1043658437U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))));
                    var_44 = ((/* implicit */unsigned long long int) (+(((unsigned int) arr_35 [i_17] [i_11 + 1]))));
                }
                var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) var_11))));
                arr_58 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 782330592U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
            }
            arr_59 [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_8))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4062275433U)));
        }
        for (signed char i_19 = 0; i_19 < 19; i_19 += 4) 
        {
            arr_62 [i_11 + 1] [i_11 + 1] [i_11 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_11] [i_19] [i_19])) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-1)) % (((/* implicit */int) var_0))))) : (var_1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_19]))))) : (((((/* implicit */int) (signed char)-121)) ^ (((/* implicit */int) (unsigned short)529))))));
            var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 232691849U)) && (((/* implicit */_Bool) arr_60 [i_11] [i_19]))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_20 = 2; i_20 < 18; i_20 += 3) 
            {
                var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)128)))))));
                var_48 = ((/* implicit */unsigned char) arr_54 [i_20 - 1] [i_20 - 2] [i_20 + 1] [i_20 - 2]);
            }
        }
        var_49 = ((/* implicit */int) arr_39 [i_11 - 1] [i_11 - 1] [i_11 - 1]);
        var_50 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) ((short) (signed char)-121))) : ((~(((/* implicit */int) (signed char)111))))));
    }
    for (unsigned int i_21 = 3; i_21 < 21; i_21 += 3) 
    {
        var_51 = ((/* implicit */unsigned char) max((var_51), (((/* implicit */unsigned char) ((short) (signed char)117)))));
        var_52 = ((/* implicit */int) max((var_52), (((/* implicit */int) max((((/* implicit */unsigned int) 1908603660)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) : (arr_67 [i_21 - 3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((4062275461U) << (((/* implicit */int) arr_68 [i_21] [i_21 - 2])))))))))));
    }
    for (unsigned short i_22 = 2; i_22 < 23; i_22 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_23 = 4; i_23 < 22; i_23 += 4) 
        {
            for (signed char i_24 = 4; i_24 < 22; i_24 += 1) 
            {
                {
                    var_53 ^= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((((/* implicit */int) (unsigned char)173)) << (((((((/* implicit */int) (signed char)(-127 - 1))) + (156))) - (22))))) : (((int) (signed char)-30)))));
                    /* LoopNest 2 */
                    for (short i_25 = 3; i_25 < 23; i_25 += 4) 
                    {
                        for (int i_26 = 0; i_26 < 24; i_26 += 3) 
                        {
                            {
                                var_54 -= ((/* implicit */unsigned int) min((((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) == (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-33))) == (arr_73 [i_24] [i_24])))))), (((((/* implicit */_Bool) min((arr_77 [i_22 + 1] [i_23 + 1] [i_24 - 3] [i_23] [i_23 + 1]), (((/* implicit */unsigned short) (signed char)-121))))) && (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (arr_75 [i_22 - 1] [i_23 - 2])))))));
                                var_55 |= ((/* implicit */_Bool) (short)-22296);
                                var_56 = ((/* implicit */short) arr_80 [i_22 - 1] [i_26] [i_24 - 3] [i_26] [i_24] [i_24]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_27 = 3; i_27 < 22; i_27 += 4) 
                    {
                        var_57 = ((/* implicit */_Bool) (signed char)121);
                        var_58 = ((/* implicit */signed char) min((var_58), (((/* implicit */signed char) ((((/* implicit */int) ((_Bool) (signed char)60))) == (((((/* implicit */int) (_Bool)1)) ^ (((((/* implicit */_Bool) arr_73 [i_24 + 2] [i_27 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11)))))))))));
                    }
                    /* vectorizable */
                    for (int i_28 = 4; i_28 < 20; i_28 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_29 = 3; i_29 < 22; i_29 += 4) 
                        {
                            var_59 = ((/* implicit */_Bool) max((var_59), (((/* implicit */_Bool) (signed char)-10))));
                            var_60 *= ((/* implicit */short) (signed char)40);
                        }
                        var_61 -= (-(((/* implicit */int) (signed char)-22)));
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_30 = 0; i_30 < 24; i_30 += 4) 
        {
            var_62 = ((/* implicit */int) min((var_62), (((/* implicit */int) 1738667097908957581ULL))));
            var_63 = ((/* implicit */_Bool) max((var_63), (((/* implicit */_Bool) (-(((/* implicit */int) var_2)))))));
            var_64 = ((/* implicit */unsigned short) (signed char)-109);
            var_65 = ((/* implicit */unsigned short) (signed char)14);
        }
        for (int i_31 = 0; i_31 < 24; i_31 += 1) 
        {
            var_66 -= ((/* implicit */signed char) ((_Bool) (!(((((/* implicit */int) (signed char)14)) == (((/* implicit */int) (_Bool)1)))))));
            var_67 &= ((/* implicit */unsigned long long int) arr_83 [i_22]);
            var_68 |= ((/* implicit */unsigned char) min((((((long long int) (_Bool)1)) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-101))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)31223)) : (((/* implicit */int) (signed char)(-127 - 1))))))));
        }
        var_69 = ((/* implicit */long long int) var_5);
    }
}
