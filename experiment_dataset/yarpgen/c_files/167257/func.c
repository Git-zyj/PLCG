/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167257
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
    var_10 = ((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) var_2)), (((var_6) / (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
    var_11 |= ((/* implicit */unsigned char) (~(max(((~(var_9))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_4)), (var_6))))))));
    var_12 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((((/* implicit */_Bool) (~(var_8)))) ? (max((((/* implicit */unsigned int) var_7)), (2691088970U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5860))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) var_1);
        var_14 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)117)) ? (((/* implicit */unsigned int) var_8)) : (arr_2 [i_0]))))) == ((+(((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) (_Bool)1))))))));
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)95))))) ? (min((((/* implicit */long long int) arr_1 [3LL])), (2147483647LL))) : (((/* implicit */long long int) (-(arr_2 [i_0])))))), (((/* implicit */long long int) min(((-(((/* implicit */int) (unsigned char)104)))), (((/* implicit */int) (_Bool)1)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)122)))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) (+(arr_2 [i_1])));
        arr_7 [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_1]))));
    }
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            var_16 = ((/* implicit */unsigned long long int) ((unsigned short) var_0));
            arr_16 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (((_Bool)1) ? (6623174790748535255ULL) : (((/* implicit */unsigned long long int) var_3))));
        }
        for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)32)) ? (arr_10 [i_4] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)139)))))) ? (-2147483647LL) : (2147483647LL)));
            /* LoopSeq 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_18 = ((/* implicit */short) min((max((var_6), (((/* implicit */long long int) arr_18 [i_2] [i_2])))), (((/* implicit */long long int) min(((~(((/* implicit */int) var_0)))), ((~(((/* implicit */int) var_0)))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_12 [i_2]))));
                    arr_26 [i_2] [i_2] = ((/* implicit */short) ((((((/* implicit */int) var_5)) | (((/* implicit */int) var_0)))) & (((/* implicit */int) (short)-1))));
                }
                for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
                {
                    var_20 = ((/* implicit */short) var_6);
                    var_21 = ((/* implicit */unsigned short) arr_18 [i_2] [i_2]);
                }
                var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_5 [i_4])) < (((/* implicit */int) (unsigned short)53735)))))));
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_2 [i_2]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5] [i_4] [i_2])))))) || (((/* implicit */_Bool) max((((/* implicit */int) arr_8 [i_4])), (max((((/* implicit */int) var_1)), (var_3)))))))))));
                /* LoopSeq 3 */
                for (long long int i_8 = 2; i_8 < 17; i_8 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */long long int) min((((((((/* implicit */int) var_5)) < (((/* implicit */int) var_4)))) ? ((-(var_8))) : (((/* implicit */int) var_7)))), (((/* implicit */int) arr_27 [i_2] [11] [i_5] [i_2]))));
                    var_25 = ((/* implicit */_Bool) (~(var_3)));
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -3982101006940756733LL)) ? (((((/* implicit */_Bool) 11LL)) ? (((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */int) (_Bool)1)) : (1122003555))) : (((/* implicit */int) (unsigned char)135)))) : (-461479972)));
                }
                for (long long int i_9 = 2; i_9 < 17; i_9 += 3) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))) >= (((((/* implicit */_Bool) arr_25 [i_9 + 1] [i_9] [i_9 + 1] [i_9])) ? (((/* implicit */unsigned long long int) 2147483647LL)) : (0ULL)))));
                    var_28 = ((/* implicit */unsigned char) ((var_6) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)9197))))))));
                    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) (short)7184)) : (var_3)))))) ? ((((+(var_9))) * (((/* implicit */unsigned long long int) ((var_8) / (var_8)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4])))));
                    var_30 = ((/* implicit */_Bool) arr_33 [i_2] [i_2] [i_2]);
                }
                for (long long int i_10 = 0; i_10 < 21; i_10 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_11 = 0; i_11 < 21; i_11 += 4) 
                    {
                        var_31 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)16)) ? (var_8) : (var_8)))))) ? (max((((/* implicit */unsigned long long int) var_6)), (max((var_9), (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) ((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_11]))) : (3769532580U))))));
                        var_32 = ((/* implicit */signed char) (unsigned short)25035);
                        var_33 = ((/* implicit */int) arr_9 [i_2]);
                        var_34 = ((/* implicit */short) ((((/* implicit */int) (signed char)(-127 - 1))) | (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)113)) | (var_8)))) ? ((~(-855351098))) : ((~(((/* implicit */int) var_1))))))));
                    }
                    arr_39 [(_Bool)1] [(_Bool)1] [(unsigned char)14] [i_2] = ((/* implicit */_Bool) arr_4 [i_4] [i_5]);
                    arr_40 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)59135)) ? (((/* implicit */int) (short)-28143)) : (((/* implicit */int) (unsigned short)6398))));
                    var_35 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-256)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 235766903U)) ? (((((/* implicit */int) (unsigned char)30)) ^ (((/* implicit */int) (unsigned short)65516)))) : (((/* implicit */int) var_5))))) : ((-(((arr_36 [i_2] [i_2] [i_2] [i_2]) % (((/* implicit */long long int) ((/* implicit */int) (signed char)115)))))))));
                }
            }
            for (unsigned int i_12 = 1; i_12 < 19; i_12 += 4) 
            {
                var_36 -= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)255))));
                var_37 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                var_38 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 525434716U)) ? (arr_11 [i_2] [16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7)))))) ? (((((/* implicit */_Bool) arr_31 [i_2] [i_2] [i_12 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11890))))), ((-(11823569282961016360ULL))));
            }
        }
        for (short i_13 = 4; i_13 < 19; i_13 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_14 = 1; i_14 < 20; i_14 += 3) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) arr_45 [i_2] [i_2] [i_13 - 2] [i_15])) : (((/* implicit */int) arr_45 [i_2] [i_13] [i_13 - 3] [i_15]))))) ? ((+(((/* implicit */int) (unsigned char)33)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-20621)))))));
                        var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_21 [i_2] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : ((-(68719472640LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? ((+(((/* implicit */int) (_Bool)1)))) : (var_8)))))))));
                        arr_49 [i_2] [i_2] [i_14] [i_2] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_47 [i_2]))));
                        var_41 = ((/* implicit */_Bool) (-2147483647 - 1));
                    }
                } 
            } 
            var_42 *= ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) (short)-12212))), (((arr_15 [i_13 - 2] [i_13 + 1] [i_13 - 1]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)47))))));
            /* LoopNest 2 */
            for (unsigned char i_16 = 1; i_16 < 19; i_16 += 3) 
            {
                for (int i_17 = 3; i_17 < 18; i_17 += 1) 
                {
                    {
                        var_43 = min(((~(((/* implicit */int) arr_19 [i_2] [i_17 - 1] [i_16 - 1])))), (((/* implicit */int) arr_19 [i_16] [i_17 + 2] [i_16 - 1])));
                        var_44 = (unsigned char)175;
                        arr_55 [i_2] [i_13] [(short)5] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_42 [i_16 + 1] [i_13] [i_17 + 3]))));
                    }
                } 
            } 
        }
        var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)47)) ? (((/* implicit */long long int) 2147483628)) : (0LL)));
        var_46 += ((/* implicit */_Bool) (((-(min((var_9), (((/* implicit */unsigned long long int) 3577568736U)))))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_2])))))));
    }
}
