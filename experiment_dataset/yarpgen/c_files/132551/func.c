/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132551
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
    var_11 |= ((((/* implicit */_Bool) (~(min((((/* implicit */long long int) var_8)), (var_1)))))) ? ((+((+(var_8))))) : (var_3));
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_13 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)144)))))) ? (min((((/* implicit */int) (_Bool)1)), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)164)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1073741312U)))))));
        var_14 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) <= (var_8))))) ^ (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (1073741320U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))) ? (((/* implicit */unsigned long long int) arr_3 [(_Bool)1])) : (18446744073709551604ULL)));
        var_15 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)0))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (min((((var_3) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))), (((/* implicit */unsigned int) (short)-6599))))));
        var_16 = ((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0]))));
        var_17 &= ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)18)), (max(((+(-1))), (((/* implicit */int) var_4))))));
    }
    /* LoopSeq 4 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) 1073741312U);
        var_19 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1296167701U)) ? (((((/* implicit */_Bool) 18446744073709551604ULL)) ? (12ULL) : (((/* implicit */unsigned long long int) arr_5 [6] [6])))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46719))) : (var_8))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) arr_4 [6])) + (((/* implicit */int) (unsigned char)255)))) != (((/* implicit */int) ((((/* implicit */_Bool) 441401634U)) || (((/* implicit */_Bool) -12))))))))) : (((arr_4 [(unsigned short)12]) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        var_20 = ((/* implicit */unsigned int) arr_5 [i_1] [i_1]);
        var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_4 [i_1])), (4255253656U)));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_3 = 1; i_3 < 14; i_3 += 4) 
        {
            var_22 = ((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned char)91)) ? (3475029274865307391ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))));
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((((((/* implicit */_Bool) (short)3701)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63))))) << (((min((((/* implicit */unsigned long long int) (unsigned short)47525)), (var_10))) - (47495ULL))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_3 - 1] [i_3] [i_3 - 1])) || (((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_3 - 1]))))))));
        }
        var_24 *= (unsigned char)92;
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (arr_12 [i_4])))) ? (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */unsigned int) (unsigned char)254))))) : (18446744073709551615ULL))), (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */unsigned long long int) 2355811486U)) ^ (var_10))) : (((/* implicit */unsigned long long int) var_7))))));
        var_26 += ((/* implicit */unsigned int) ((long long int) ((((arr_12 [i_4]) >> (((/* implicit */int) (_Bool)0)))) << (((var_7) - (808426489U))))));
        var_27 |= min((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)96)), ((~(((/* implicit */int) (unsigned short)38433))))))), (((((/* implicit */_Bool) min((arr_10 [i_4]), (4115964097U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)122))) : (min((((/* implicit */unsigned int) -1)), (var_8))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_6 = 0; i_6 < 23; i_6 += 4) /* same iter space */
        {
            var_28 = ((/* implicit */int) min((((/* implicit */unsigned short) arr_17 [i_5] [i_5] [i_6])), ((unsigned short)6685)));
            var_29 = 1579197022464150651ULL;
            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (9769356063346600360ULL) : (((/* implicit */unsigned long long int) arr_16 [i_5] [i_6]))))) ? (min((arr_16 [i_5] [i_6]), (((/* implicit */unsigned int) var_5)))) : (((var_3) << (((((/* implicit */int) (unsigned short)57253)) - (57235))))))))));
            var_31 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) max((arr_17 [i_5] [i_6] [i_6]), (((/* implicit */short) (unsigned char)20))))), (var_7)));
        }
        for (int i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) (unsigned char)164))))));
            var_33 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_14 [i_5] [i_7])) : (((/* implicit */int) arr_17 [i_5] [i_7] [i_7]))))));
            var_34 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 9769356063346600362ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5] [i_5] [i_7]))) : (arr_19 [i_5] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9769356063346600360ULL))))))));
            var_35 |= ((/* implicit */int) arr_18 [i_5] [i_5] [i_5]);
            var_36 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_21 [i_5] [i_7])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) var_1)) : (14385264545210417485ULL)))) ? (((((/* implicit */_Bool) 2147483626)) ? (var_10) : (((/* implicit */unsigned long long int) arr_20 [i_5] [i_5])))) : (((/* implicit */unsigned long long int) 1774468322U)))) : (min((((/* implicit */unsigned long long int) (~(arr_20 [i_5] [i_7])))), (14385264545210417485ULL)))));
        }
        for (short i_8 = 1; i_8 < 20; i_8 += 2) 
        {
            var_37 = ((/* implicit */unsigned long long int) ((((14385264545210417485ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) 58137566001615132ULL)) || (((/* implicit */_Bool) 1086472679U))))), ((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))))) : ((+((+(var_8)))))));
            /* LoopSeq 4 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_38 = min((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_5] [i_9])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_26 [i_5] [i_8] [i_5]))))) : ((((_Bool)1) ? (arr_21 [(unsigned char)9] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)106)))))))), (((((/* implicit */_Bool) ((19U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_5] [i_8] [i_8])))))) ? (18388606507707936505ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)1053), (((/* implicit */short) arr_22 [i_5] [i_8] [i_8])))))))));
                var_39 ^= ((/* implicit */long long int) (_Bool)1);
            }
            for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 4) 
            {
                var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((1350578181733793560ULL), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */int) arr_28 [i_5] [i_5] [4ULL])) : (((/* implicit */int) (short)-14531))));
                var_41 -= ((/* implicit */unsigned char) 4294967279U);
                var_42 = ((/* implicit */unsigned char) (-((-(((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */int) var_4))))))));
                var_43 = ((/* implicit */unsigned int) min((var_43), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5] [i_8 + 1])) ? (arr_16 [i_5] [i_8 - 1]) : (2355811457U)))) ? (((/* implicit */unsigned int) ((int) var_5))) : (max((((/* implicit */unsigned int) (_Bool)1)), (arr_16 [i_5] [i_8 - 1])))))));
                var_44 = ((/* implicit */unsigned char) ((_Bool) min((((/* implicit */int) arr_14 [i_8 + 2] [i_8])), (((var_4) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)12)))))));
            }
            for (unsigned char i_11 = 0; i_11 < 23; i_11 += 4) 
            {
                var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)98)) ? ((-(min((-22LL), (var_1))))) : (((/* implicit */long long int) var_3))));
                var_46 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) var_2)))))))));
                var_47 = ((/* implicit */unsigned long long int) ((var_8) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
            }
            for (unsigned int i_12 = 0; i_12 < 23; i_12 += 2) 
            {
                var_48 = ((/* implicit */int) ((((/* implicit */_Bool) min((-8999394432785049643LL), (((/* implicit */long long int) arr_30 [i_12]))))) ? ((-(((11200521103285434170ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_8 + 2] [i_12]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)9840)) << (((((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_14 [i_5] [i_8])))) - (36816))))))));
                var_49 = ((/* implicit */unsigned short) (unsigned char)7);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_13 = 0; i_13 < 23; i_13 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_14 = 4; i_14 < 20; i_14 += 2) /* same iter space */
                    {
                        var_50 = (unsigned short)9842;
                        var_51 += ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)55694))));
                    }
                    for (unsigned long long int i_15 = 4; i_15 < 20; i_15 += 2) /* same iter space */
                    {
                        var_52 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)132))));
                        var_53 = var_8;
                        var_54 = ((/* implicit */unsigned int) (unsigned char)126);
                        var_55 &= ((/* implicit */_Bool) (-(arr_21 [13U] [i_8 - 1])));
                    }
                    for (unsigned long long int i_16 = 4; i_16 < 20; i_16 += 2) /* same iter space */
                    {
                        var_56 = ((/* implicit */unsigned char) (unsigned short)54021);
                        var_57 = ((/* implicit */unsigned int) (-((-(arr_29 [i_5] [i_8 - 1] [i_8] [i_8 - 1])))));
                        var_58 = ((/* implicit */unsigned char) (~((~(var_1)))));
                        var_59 = ((/* implicit */short) ((((/* implicit */unsigned int) 1629952466)) + (var_7)));
                    }
                    var_60 = ((/* implicit */short) ((arr_32 [i_8] [i_8] [i_8 + 1]) || (((/* implicit */_Bool) (unsigned char)62))));
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_61 = ((/* implicit */short) var_7);
                    var_62 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (_Bool)1))))));
                }
            }
        }
        /* vectorizable */
        for (unsigned char i_18 = 0; i_18 < 23; i_18 += 4) 
        {
            var_63 |= ((/* implicit */short) (unsigned char)126);
            var_64 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((1453053154U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)167))) : (var_7)));
            var_65 -= ((/* implicit */unsigned int) (unsigned short)11514);
        }
        var_66 = ((/* implicit */unsigned long long int) max((var_66), (((/* implicit */unsigned long long int) arr_23 [i_5] [i_5] [12LL]))));
    }
    var_67 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 6824055771768063137ULL)) ? ((+(383352498U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (var_6)));
}
