/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121006
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
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (((-(((((/* implicit */int) (short)-32082)) | (((/* implicit */int) var_3)))))) - (((/* implicit */int) var_13)))))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (~(8323612647076286583ULL)))) ? (10123131426633265032ULL) : (((/* implicit */unsigned long long int) var_12)))) : (((((/* implicit */unsigned long long int) ((long long int) var_4))) - (6401354427268164955ULL)))));
    var_17 &= ((/* implicit */unsigned short) ((long long int) (-(((((/* implicit */_Bool) (unsigned char)34)) ? (((/* implicit */unsigned long long int) var_9)) : (867321746162793932ULL))))));
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) 11426256437563568472ULL)))))), (max((((((/* implicit */_Bool) 1683911972448741494ULL)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) var_12)))))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (~(9ULL)))) ? ((~(((/* implicit */int) var_14)))) : (((/* implicit */int) ((short) arr_0 [i_0])))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 14502351348889293591ULL)) ? (-120013863) : (((/* implicit */int) (signed char)90))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                arr_9 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 12006145360724864704ULL)) ? (((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 1])) ? (min((arr_5 [i_0] [i_1] [i_2]), (((/* implicit */unsigned int) 1944373090)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_8 [i_0] [i_0] [i_0])))))) : (((/* implicit */unsigned int) (-(max((var_6), (((/* implicit */int) (unsigned char)118)))))))));
                var_21 ^= ((/* implicit */unsigned short) min((((/* implicit */short) (unsigned char)180)), ((short)-3877)));
            }
            var_22 ^= ((/* implicit */unsigned char) max((arr_6 [i_0] [i_1] [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_14))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)11))))) : (arr_0 [i_1]))))));
        }
    }
    for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (-(arr_0 [i_3]))))));
            arr_16 [i_3] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)157))));
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) 738125686)) ? (((/* implicit */int) (signed char)-3)) : (-1703707532)));
            var_25 ^= ((/* implicit */signed char) (~(((/* implicit */int) arr_7 [i_3] [i_4] [i_3]))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            var_26 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_13 [i_3] [i_5] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27650))) : (6091172268218669048ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-17))))) ? (((/* implicit */int) max((((unsigned short) arr_15 [i_5])), (((/* implicit */unsigned short) var_3))))) : (((((/* implicit */_Bool) arr_10 [i_3 + 3])) ? (arr_17 [i_5] [i_3 - 2] [i_3 - 2]) : (((/* implicit */int) arr_10 [i_3 + 2]))))));
            var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) / (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_4 [i_5] [i_3])), (arr_15 [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)92))) : (arr_5 [i_5] [i_3] [i_3])))));
            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_3] [i_3 - 1] [i_5])) ? (((/* implicit */long long int) (+(arr_17 [i_5] [i_5] [i_3 - 2])))) : (min((arr_8 [i_5] [i_5] [i_3]), (((/* implicit */long long int) 2994963743U)))))))));
        }
        for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            var_29 = ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) 602335187556020132ULL)))))) ? (((((/* implicit */_Bool) arr_20 [i_3] [i_6] [i_3 - 2])) ? (((((/* implicit */_Bool) 5577864415643600897LL)) ? (((/* implicit */long long int) arr_20 [i_6] [i_6] [i_3])) : (arr_0 [i_3]))) : (((/* implicit */long long int) (~(((/* implicit */int) var_7))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_1 [i_3] [i_6])))) || ((!(((/* implicit */_Bool) var_4)))))))));
            /* LoopSeq 2 */
            for (int i_7 = 2; i_7 < 19; i_7 += 3) 
            {
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((long long int) arr_0 [i_3])))) ? (((/* implicit */long long int) (+(4289787538U)))) : (((long long int) ((((/* implicit */int) (signed char)16)) >> (((((/* implicit */int) (unsigned char)41)) - (11))))))));
                var_31 = ((/* implicit */long long int) min((var_31), (5390870751894576230LL)));
            }
            for (unsigned int i_8 = 1; i_8 < 18; i_8 += 1) 
            {
                var_32 = ((/* implicit */signed char) var_14);
                var_33 *= ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-27))) > (((arr_20 [i_8] [i_6] [i_3]) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))))))) ? (((long long int) ((((/* implicit */_Bool) 6880164621517426030ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4803))) : (arr_22 [i_8] [i_8] [i_8] [i_8])))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_11 [i_3])) ? (arr_23 [i_3] [i_3]) : (arr_15 [i_8]))))))));
                var_34 = ((/* implicit */short) ((((/* implicit */_Bool) min((max((3417894645623302518LL), (((/* implicit */long long int) (short)4802)))), (((/* implicit */long long int) (signed char)58))))) ? (((((/* implicit */_Bool) ((unsigned char) arr_20 [i_3] [i_6] [i_3]))) ? (((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_6]))) : (arr_8 [i_3] [i_3] [i_3]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)49))) : (845048515U)))))) : (((/* implicit */long long int) ((int) (short)-14)))));
                var_35 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_18 [i_3] [i_6]))) ? (((((/* implicit */_Bool) arr_4 [i_3] [i_8])) ? (arr_25 [i_3] [i_6] [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)190))))) : (((/* implicit */long long int) arr_3 [i_3] [i_8] [i_3]))))) ? ((~(min((arr_8 [i_3] [i_3] [i_8]), (arr_15 [i_8]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_3] [i_6])))));
                arr_26 [i_3] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((unsigned long long int) 7027617287527227300ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -5951414138587451665LL)) == (arr_6 [i_3] [i_6] [i_8]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) >= (((((/* implicit */_Bool) 17106763490593438544ULL)) ? (7027617287527227290ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)9)))))))))));
            }
            arr_27 [i_3] [i_6] [i_6] &= ((/* implicit */short) arr_17 [i_3] [i_3] [i_3]);
        }
        var_36 |= ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_14 [i_3] [i_3] [i_3])), (var_1)))) * (arr_22 [i_3] [i_3] [i_3] [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_3 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (((long long int) arr_7 [i_3] [i_3] [i_3])))))));
    }
    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
    {
        var_37 *= ((/* implicit */signed char) (((~(((3238810189U) << (((((/* implicit */int) var_7)) + (37))))))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_9])))));
        var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-6))));
        var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) 2082315414))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_7))) ? (((/* implicit */int) min((arr_28 [i_9]), (arr_29 [i_9])))) : (((/* implicit */int) arr_28 [i_9]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)18875)) ? (((/* implicit */int) arr_29 [i_9])) : (((/* implicit */int) (short)-28106))))) ? (((/* implicit */unsigned int) ((int) var_4))) : (((unsigned int) var_3))))));
    }
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 25; i_10 += 2) /* same iter space */
    {
        var_40 = ((/* implicit */long long int) ((signed char) ((unsigned int) 7882222192857758027ULL)));
        var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [i_10])) ? (((/* implicit */int) arr_29 [i_10])) : (((((/* implicit */_Bool) 140737471578112LL)) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) (signed char)-80))))));
        /* LoopNest 3 */
        for (long long int i_11 = 2; i_11 < 23; i_11 += 1) 
        {
            for (int i_12 = 0; i_12 < 25; i_12 += 2) 
            {
                for (unsigned int i_13 = 2; i_13 < 23; i_13 += 1) 
                {
                    {
                        var_42 = ((/* implicit */short) (-(((((/* implicit */_Bool) (short)-27996)) ? (((/* implicit */int) (unsigned short)6032)) : (((/* implicit */int) (unsigned short)56701))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_14 = 0; i_14 < 25; i_14 += 4) 
                        {
                            var_43 = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_29 [i_10]))))));
                            var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) ((signed char) (unsigned char)2)))));
                            var_45 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59504)) ? (1577583520) : (((/* implicit */int) (signed char)-121)))))));
                        }
                        for (short i_15 = 1; i_15 < 23; i_15 += 1) 
                        {
                            var_46 = ((/* implicit */short) ((((/* implicit */_Bool) arr_43 [i_11 - 1] [i_13] [i_13 + 1] [i_13] [i_15])) ? (-5361638618373032463LL) : (((/* implicit */long long int) arr_43 [i_11 - 1] [i_12] [i_13 + 1] [i_15] [i_12]))));
                            var_47 = ((/* implicit */unsigned int) ((long long int) arr_37 [i_13 + 2] [i_11 + 2] [i_10]));
                            var_48 = ((/* implicit */signed char) ((long long int) arr_44 [i_13 + 2] [i_13] [i_13] [i_13] [i_13] [i_10] [i_10]));
                            var_49 = ((/* implicit */unsigned int) min((var_49), (((/* implicit */unsigned int) (signed char)(-127 - 1)))));
                        }
                        for (long long int i_16 = 0; i_16 < 25; i_16 += 1) 
                        {
                            var_50 |= ((/* implicit */long long int) ((unsigned char) ((unsigned int) (short)0)));
                            var_51 = ((/* implicit */signed char) (+((+(arr_41 [i_11] [i_13] [i_16])))));
                            var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3407148512U)) ? (((/* implicit */int) (unsigned short)45853)) : (-1989516915)));
                        }
                    }
                } 
            } 
        } 
    }
}
