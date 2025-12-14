/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101191
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
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) var_8))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_12) : (arr_1 [i_0]))))))), (max((var_9), (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                var_16 = ((/* implicit */int) arr_4 [i_0] [16] [i_2 + 1]);
                arr_7 [i_2 + 1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(signed char)11] [i_2 - 2])))))));
            }
            for (int i_3 = 2; i_3 < 16; i_3 += 2) 
            {
                var_17 = (~(((((/* implicit */int) (signed char)(-127 - 1))) & (((/* implicit */int) (signed char)-39)))));
                var_18 = ((/* implicit */long long int) ((unsigned long long int) (+(arr_5 [i_0] [i_3 - 1] [(unsigned short)13]))));
            }
            for (signed char i_4 = 2; i_4 < 17; i_4 += 1) 
            {
                var_19 -= ((/* implicit */unsigned long long int) (+((+((+(var_2)))))));
                var_20 -= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((-1174445343065044344LL) / ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_12)))) : (10U)))), (min((arr_13 [i_0] [i_0]), (arr_13 [i_4 - 2] [i_1])))));
            }
            var_21 ^= ((/* implicit */unsigned short) max((((unsigned long long int) var_8)), (((/* implicit */unsigned long long int) (signed char)127))));
            var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -1220304865)) <= (11232360646661006313ULL)));
        }
        for (unsigned short i_5 = 1; i_5 < 14; i_5 += 1) 
        {
            var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (arr_1 [i_0]) : (var_8)))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48938)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((arr_5 [i_0] [i_5] [i_5 + 1]) << (((((((/* implicit */int) arr_4 [15LL] [15LL] [i_0])) + (146))) - (53)))))))) : (((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_6 [i_0])))) ? (((/* implicit */long long int) ((arr_14 [i_0] [i_0]) << (((var_12) - (2077736170944779998LL)))))) : (((4515399651551696392LL) << (((var_12) - (2077736170944780026LL)))))))));
            arr_16 [i_0] = ((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0]);
            var_24 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_5 + 1])) ? (((((/* implicit */_Bool) -1672928092)) ? (8195519528544241861LL) : (-8195519528544241839LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5 + 4] [i_5] [i_5 + 4])))));
        }
        for (int i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                for (long long int i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    {
                        var_25 *= ((/* implicit */unsigned char) ((var_7) << ((((((~(4515399651551696394LL))) + (4515399651551696406LL))) - (8LL)))));
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_7] [i_6])) || (((/* implicit */_Bool) arr_21 [i_7] [i_8]))))) == ((-(((/* implicit */int) (signed char)-107))))));
                        arr_29 [i_7] [i_6] [i_7] [i_7] [15LL] [i_8] = ((/* implicit */long long int) max((17131293212000031513ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)237)) ? (((((/* implicit */_Bool) 1220304888)) ? (((/* implicit */long long int) 3617565745U)) : (3905321375373826880LL))) : (((-4515399651551696381LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9714))))))))));
                        var_27 = ((/* implicit */int) ((((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) var_9)) : (arr_11 [i_0] [i_0] [i_0] [i_0]))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_7] [(unsigned char)1]))))) >= (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_6])) - (((/* implicit */int) arr_2 [15LL] [i_6])))))));
                    }
                } 
            } 
            var_28 = min((3869585913073368242LL), (((/* implicit */long long int) -1571389989)));
        }
        for (long long int i_9 = 1; i_9 < 14; i_9 += 1) 
        {
            arr_32 [i_9] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) min((34359738367LL), (var_5)))) / (2706618462764862551ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-100)))));
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 18; i_10 += 4) 
            {
                for (long long int i_11 = 1; i_11 < 14; i_11 += 1) 
                {
                    {
                        var_29 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_31 [i_9])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) ((((/* implicit */_Bool) 11818256929466808872ULL)) && (((/* implicit */_Bool) arr_31 [i_9])))))));
                        var_30 = ((arr_36 [i_0] [i_9] [i_0]) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_0] [i_9 + 4] [(unsigned short)2] [i_11 + 4])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)1))))) : (min((var_3), (((/* implicit */unsigned int) arr_31 [i_9]))))))));
                    }
                } 
            } 
        }
        arr_37 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9829)) ? (1099511103488LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)21)))))) ? (arr_14 [i_0] [i_0]) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_13 [i_0] [i_0]) >= (arr_5 [i_0] [i_0] [i_0])))))))));
        /* LoopSeq 4 */
        for (unsigned char i_12 = 1; i_12 < 17; i_12 += 3) /* same iter space */
        {
            arr_40 [i_0] [i_12 + 1] [i_0] = ((/* implicit */int) ((max((((/* implicit */long long int) arr_14 [i_0] [i_12 + 1])), (((((/* implicit */_Bool) 3076287475U)) ? (((/* implicit */long long int) 1505843811)) : (arr_8 [i_12] [i_12]))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -6804221529538664137LL)) ? (arr_12 [i_0]) : (arr_33 [6LL] [2LL] [i_0] [6LL]))))))))));
            /* LoopNest 3 */
            for (unsigned char i_13 = 0; i_13 < 18; i_13 += 3) 
            {
                for (unsigned short i_14 = 1; i_14 < 17; i_14 += 3) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 1) 
                    {
                        {
                            arr_51 [12] [12] [i_13] [i_13] [i_13] [12] [i_13] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_25 [i_12 - 1] [(unsigned char)12] [i_14 - 1] [i_14])) ? (var_12) : (arr_23 [0LL] [0LL] [i_14 - 1])))));
                            var_31 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)(-127 - 1))))) + (((/* implicit */int) var_4))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_16 = 1; i_16 < 17; i_16 += 3) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned long long int) arr_1 [i_16]);
            arr_54 [i_0] = (-(((/* implicit */int) ((unsigned char) arr_11 [i_0] [i_0] [i_16] [i_16]))));
            var_33 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_41 [i_0] [i_16 + 1])))) ? (((1726340814U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24503))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_16 - 1]))))))));
        }
        /* vectorizable */
        for (unsigned char i_17 = 1; i_17 < 17; i_17 += 3) /* same iter space */
        {
            var_34 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13)) ? (((/* implicit */unsigned long long int) arr_39 [i_0])) : (var_0)))) ? (var_5) : (arr_41 [i_17] [i_0]));
            /* LoopSeq 1 */
            for (unsigned short i_18 = 1; i_18 < 16; i_18 += 4) 
            {
                var_35 = ((/* implicit */unsigned long long int) arr_52 [i_18 + 2] [i_18 + 2] [i_18 + 1]);
                var_36 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) / (arr_25 [i_18 - 1] [10LL] [i_18 - 1] [i_17 - 1]));
                var_37 *= ((/* implicit */unsigned char) (+(((/* implicit */int) var_4))));
                var_38 = ((/* implicit */signed char) arr_59 [i_17 - 1] [i_18 + 1]);
                /* LoopSeq 2 */
                for (int i_19 = 2; i_19 < 17; i_19 += 3) 
                {
                    arr_64 [i_19] [i_19] [i_19] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_53 [i_0] [i_0] [i_0]))));
                    var_39 = ((/* implicit */long long int) (unsigned short)16);
                }
                for (int i_20 = 1; i_20 < 16; i_20 += 4) 
                {
                    var_40 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((4294967295U) | (((/* implicit */unsigned int) arr_12 [i_18]))))) >= ((+(-2077274971541509232LL)))));
                    var_41 ^= ((/* implicit */unsigned long long int) ((unsigned char) arr_56 [(signed char)0] [i_18 + 1] [i_20 + 2]));
                }
            }
            var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) ((signed char) 8529935998117679539LL)))));
        }
        for (signed char i_21 = 2; i_21 < 14; i_21 += 3) 
        {
            arr_70 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) > (8529935998117679544LL)));
            arr_71 [15U] [15U] [i_0] |= ((/* implicit */signed char) -1928252392);
        }
    }
    for (int i_22 = 1; i_22 < 11; i_22 += 1) 
    {
        var_43 = ((/* implicit */unsigned char) (+(((max((11232360646661006318ULL), (((/* implicit */unsigned long long int) var_3)))) << (((((((/* implicit */_Bool) arr_10 [(signed char)3] [i_22] [(signed char)3] [(unsigned char)4])) ? (((/* implicit */long long int) 4294967295U)) : (arr_55 [i_22] [i_22 - 1] [i_22]))) - (4294967256LL)))))));
        var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50869)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)14677))))) || (((((/* implicit */_Bool) arr_67 [6U])) && (((/* implicit */_Bool) arr_48 [6] [i_22 - 1] [6] [i_22] [i_22 - 1]))))));
    }
    for (unsigned short i_23 = 0; i_23 < 25; i_23 += 2) 
    {
        arr_79 [i_23] = ((/* implicit */int) ((((/* implicit */_Bool) arr_76 [(unsigned char)10] [(signed char)6])) || (((/* implicit */_Bool) arr_76 [i_23] [i_23]))));
        arr_80 [i_23] [i_23] = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) (+(-1505843803)))), (arr_76 [i_23] [i_23]))) != (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_77 [i_23])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_77 [i_23]))))))));
        arr_81 [i_23] = ((/* implicit */long long int) ((((/* implicit */int) ((arr_78 [i_23]) == (arr_78 [i_23])))) <= (((/* implicit */int) ((unsigned short) ((int) var_12))))));
    }
    var_45 = ((/* implicit */long long int) ((1407389024) & (((/* implicit */int) (unsigned short)20384))));
    /* LoopSeq 1 */
    for (long long int i_24 = 1; i_24 < 9; i_24 += 3) 
    {
        arr_86 [(signed char)0] [i_24] = ((/* implicit */unsigned long long int) arr_39 [i_24]);
        var_46 ^= ((/* implicit */unsigned int) arr_42 [i_24] [i_24]);
        arr_87 [i_24] = ((/* implicit */signed char) var_5);
        arr_88 [i_24] [i_24] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 176995754U)) ? (((/* implicit */unsigned long long int) 7210484165475084105LL)) : (15307755962887186721ULL)))) ? (((((6279375955503935945LL) / (-9223372036854775784LL))) / ((-(var_5))))) : (var_2)));
    }
}
