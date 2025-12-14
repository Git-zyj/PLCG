/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118030
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        var_10 ^= ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_0 + 1]))));
        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((((((/* implicit */int) (short)16384)) <= (((/* implicit */int) var_1)))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) (_Bool)1)))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        var_12 ^= ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) arr_1 [i_1 + 1]))));
        /* LoopSeq 4 */
        for (unsigned short i_2 = 3; i_2 < 8; i_2 += 3) 
        {
            var_13 |= ((/* implicit */signed char) (unsigned short)6942);
            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((_Bool) var_8)) ? (((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (signed char)120)))) : (((/* implicit */int) ((_Bool) var_3))))))));
            /* LoopSeq 3 */
            for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                var_15 -= ((unsigned short) arr_4 [i_1 + 1]);
                var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_2 - 1] [i_2 - 3])) ^ (((/* implicit */int) var_8))));
            }
            for (unsigned short i_4 = 1; i_4 < 10; i_4 += 1) /* same iter space */
            {
                var_17 = ((/* implicit */_Bool) max((var_17), (((((/* implicit */int) (unsigned short)17162)) <= (((/* implicit */int) (signed char)126))))));
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */int) arr_11 [i_2 - 1] [i_1 + 1] [(signed char)8] [(signed char)2])) << (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))))))));
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((unsigned short) var_8)))));
            }
            for (unsigned short i_5 = 1; i_5 < 10; i_5 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((_Bool) (unsigned short)5590)))));
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (((+(((/* implicit */int) (signed char)31)))) * (((((/* implicit */int) arr_6 [i_2])) ^ (((/* implicit */int) arr_5 [i_5])))))))));
                }
                arr_19 [(_Bool)1] [i_2] [i_2] &= ((/* implicit */_Bool) ((arr_6 [i_5 + 1]) ? (((/* implicit */int) (short)31062)) : (((/* implicit */int) ((unsigned short) var_3)))));
                var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1 + 1] [i_2 - 3])) ? (((/* implicit */int) ((signed char) arr_9 [i_1] [i_2] [(_Bool)1]))) : (((/* implicit */int) (short)32767))));
                var_23 *= ((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1]))));
                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (_Bool)1))));
            }
            var_25 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_0))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)21034)))))));
            var_26 ^= ((/* implicit */_Bool) arr_0 [i_2] [i_1]);
        }
        for (short i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
        {
            var_27 -= ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)32741)))) <= (((/* implicit */int) (unsigned short)17162))));
            var_28 ^= ((short) (signed char)-12);
        }
        for (short i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
        {
            /* LoopSeq 4 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_29 = ((/* implicit */short) max((var_29), (((short) arr_2 [i_1 + 1] [i_1 + 1]))));
                var_30 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))) ^ (((/* implicit */int) ((_Bool) (signed char)126)))));
                var_31 += ((/* implicit */unsigned short) (((((_Bool)1) || ((_Bool)1))) ? (((/* implicit */int) ((signed char) (short)-22415))) : (((/* implicit */int) var_1))));
                var_32 = ((/* implicit */_Bool) min((var_32), (((((/* implicit */int) var_9)) == (((/* implicit */int) arr_3 [i_1 + 1]))))));
                var_33 ^= ((/* implicit */signed char) ((unsigned short) (_Bool)1));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) (-(((/* implicit */int) (signed char)77)))))));
                var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) arr_11 [i_1] [i_8] [i_8] [i_10]))));
                var_36 += ((/* implicit */short) (signed char)-29);
                /* LoopSeq 4 */
                for (short i_11 = 3; i_11 < 9; i_11 += 3) 
                {
                    arr_33 [i_8] [i_8] [i_1] |= ((/* implicit */short) arr_12 [i_1] [i_1] [i_8]);
                    var_37 = ((/* implicit */short) max((var_37), (var_5)));
                    var_38 = ((/* implicit */_Bool) min((var_38), (((((/* implicit */int) arr_28 [(unsigned short)4] [i_1 + 1] [i_8] [i_11])) < (((/* implicit */int) arr_28 [i_1] [i_1 + 1] [i_8] [i_8]))))));
                    /* LoopSeq 2 */
                    for (signed char i_12 = 0; i_12 < 11; i_12 += 1) 
                    {
                        var_39 |= ((/* implicit */signed char) ((short) var_3));
                        var_40 -= ((/* implicit */short) ((var_1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))));
                        var_41 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_34 [i_1] [i_1 + 1] [i_11 + 1])) % (((/* implicit */int) var_8))));
                        var_42 += ((((/* implicit */int) var_7)) <= (((/* implicit */int) (signed char)17)));
                    }
                    for (signed char i_13 = 4; i_13 < 9; i_13 += 3) 
                    {
                        arr_40 [i_13 - 1] [i_11] [i_10] [i_8] [i_8] [i_1] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_1))));
                        var_43 ^= ((/* implicit */_Bool) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))));
                    }
                    var_44 = ((/* implicit */_Bool) max((var_44), ((_Bool)1)));
                }
                for (unsigned short i_14 = 0; i_14 < 11; i_14 += 3) 
                {
                    var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) ((((((/* implicit */_Bool) (short)6844)) ? (((/* implicit */int) arr_30 [i_14] [i_8] [i_14] [i_14])) : (((/* implicit */int) var_6)))) < (((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1])))))));
                    var_46 += ((/* implicit */unsigned short) arr_37 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1] [(unsigned short)2] [i_1 + 1]);
                    var_47 ^= (!(((/* implicit */_Bool) ((signed char) arr_42 [i_1] [(signed char)2] [i_10]))));
                    var_48 += ((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_1] [i_1 + 1]))));
                    var_49 = ((/* implicit */_Bool) max((var_49), (((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))));
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_50 ^= (_Bool)0;
                    var_51 = ((/* implicit */unsigned short) min((var_51), (((/* implicit */unsigned short) ((((/* implicit */int) arr_36 [i_10] [i_1 + 1] [i_1 + 1] [i_1 + 1])) >> (((/* implicit */int) (_Bool)1)))))));
                    var_52 = ((/* implicit */unsigned short) max((var_52), (((unsigned short) ((short) (short)-30205)))));
                    /* LoopSeq 2 */
                    for (signed char i_16 = 0; i_16 < 11; i_16 += 2) 
                    {
                        var_53 = ((/* implicit */_Bool) min((var_53), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0)))))));
                        var_54 ^= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)65197))));
                    }
                    for (short i_17 = 1; i_17 < 9; i_17 += 2) 
                    {
                        var_55 = ((/* implicit */_Bool) max((var_55), (((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (((/* implicit */int) arr_31 [i_1] [i_17 - 1] [i_8] [i_17] [i_17])))))));
                        var_56 = ((/* implicit */short) max((var_56), (((/* implicit */short) ((((/* implicit */int) arr_11 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_17 + 1])) <= (((((/* implicit */int) var_8)) ^ (((/* implicit */int) (unsigned short)52320)))))))));
                    }
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_57 = ((/* implicit */short) min((var_57), (((/* implicit */short) (signed char)93))));
                    var_58 ^= ((/* implicit */unsigned short) arr_45 [i_18] [i_8] [i_8] [i_1]);
                }
                var_59 = ((/* implicit */unsigned short) max((var_59), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0)))))));
            }
            for (short i_19 = 0; i_19 < 11; i_19 += 4) /* same iter space */
            {
                var_60 = ((/* implicit */short) max((var_60), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) arr_8 [i_1] [i_8] [i_19])) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((/* implicit */int) var_9)))))));
                /* LoopSeq 2 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    var_61 = ((/* implicit */short) max((var_61), (((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) (unsigned short)15819)) * (((/* implicit */int) var_5)))))))));
                    var_62 += ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_21 [i_1] [i_1] [i_1])) : (((/* implicit */int) (_Bool)1)))));
                }
                for (unsigned short i_21 = 0; i_21 < 11; i_21 += 1) 
                {
                    var_63 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) || (arr_18 [i_1] [i_19] [i_1] [i_1] [i_19] [i_1]))))));
                    var_64 -= ((_Bool) var_5);
                }
                var_65 = ((/* implicit */signed char) max((var_65), (((/* implicit */signed char) var_2))));
                var_66 = ((/* implicit */unsigned short) min((var_66), (((/* implicit */unsigned short) (+((-(((/* implicit */int) var_9)))))))));
            }
            for (short i_22 = 0; i_22 < 11; i_22 += 4) /* same iter space */
            {
                var_67 += ((unsigned short) arr_52 [i_1 + 1] [i_22]);
                var_68 ^= ((/* implicit */signed char) ((short) (_Bool)1));
            }
            var_69 |= ((((/* implicit */int) (unsigned short)57077)) == (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)(-32767 - 1))))));
        }
        for (short i_23 = 0; i_23 < 11; i_23 += 4) /* same iter space */
        {
            var_70 *= ((/* implicit */signed char) arr_13 [i_1] [i_23] [i_1] [i_1]);
            var_71 = ((/* implicit */unsigned short) min((var_71), (var_4)));
        }
        var_72 ^= ((/* implicit */_Bool) (~(((/* implicit */int) var_6))));
        var_73 |= ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) var_9))));
    }
    var_74 = ((/* implicit */signed char) min((var_74), (((/* implicit */signed char) var_6))));
}
