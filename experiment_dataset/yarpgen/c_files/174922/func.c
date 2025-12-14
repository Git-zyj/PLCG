/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174922
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
    var_19 = ((/* implicit */unsigned long long int) var_0);
    var_20 &= ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) (short)8328)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (7689423277342062763LL))) % (((/* implicit */long long int) max((-1123854074), (((/* implicit */int) (short)-24460))))))), (((((/* implicit */_Bool) min((var_0), (-1123854055)))) ? (((/* implicit */long long int) ((int) -1361806695166149314LL))) : (((var_9) / (((/* implicit */long long int) -1151200447))))))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_16))))) : (((long long int) -1361806695166149283LL))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_1 + 1] [i_0 + 1] = ((/* implicit */short) ((((_Bool) (unsigned short)65535)) ? (max((var_17), (arr_7 [i_0] [i_1 - 1] [i_2]))) : ((+(arr_7 [i_1] [i_1 + 1] [i_2])))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_1] [i_2] = ((/* implicit */int) ((((var_18) / ((~(arr_4 [9U]))))) < (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_3] [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_10 [i_0] [i_1] [12] [i_2] [i_3] [i_3]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16888)))))))));
                        arr_13 [i_3] = ((/* implicit */unsigned long long int) (+(min((-1980865448), (2011317494)))));
                        arr_14 [i_0 + 1] [i_3] [i_2] [i_3] = ((/* implicit */short) max((((1151200437) | (((/* implicit */int) ((short) -1361806695166149283LL))))), (((/* implicit */int) ((_Bool) 1151200448)))));
                        arr_15 [i_0] [i_0] |= ((/* implicit */_Bool) (((-(((/* implicit */int) (short)0)))) << (((var_17) + (894783274)))));
                    }
                }
            } 
        } 
        arr_16 [i_0 + 1] = ((/* implicit */signed char) (~((+(((/* implicit */int) (_Bool)0))))));
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned short i_6 = 4; i_6 < 12; i_6 += 3) 
                {
                    {
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) (short)21045)) || (((/* implicit */_Bool) 1284298681637232499ULL)))))));
                        arr_25 [i_5] = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (((+(((/* implicit */int) var_14)))) < (((/* implicit */int) arr_23 [i_0 + 1] [(_Bool)1] [(short)13] [i_6 + 4] [i_6 + 4] [i_5])))))) : (4434604997813741979LL));
                        arr_26 [i_0 + 1] [i_5] = ((/* implicit */unsigned int) arr_19 [i_6 + 4] [i_6 + 4] [i_5] [i_5]);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                var_23 = ((/* implicit */_Bool) (-(min((arr_6 [i_0 + 1] [i_4] [i_7]), (arr_6 [i_0 - 2] [i_4] [i_7])))));
                var_24 = ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) var_16)) : (-1739635882)))), ((~(-1361806695166149283LL)))))) ? (((/* implicit */int) (((~(((/* implicit */int) var_16)))) >= (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) arr_20 [i_0] [i_7])))))))) : (((var_1) ? (((((/* implicit */_Bool) 2143182408)) ? (((/* implicit */int) (signed char)-4)) : (849316714))) : (min((((/* implicit */int) (unsigned char)168)), (arr_28 [i_4] [i_4]))))));
                arr_29 [i_4] [i_7] = ((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned long long int) ((2075544776) ^ (arr_6 [i_0] [i_0] [(unsigned char)10])))), (arr_0 [i_4]))));
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    for (long long int i_9 = 1; i_9 < 15; i_9 += 1) 
                    {
                        {
                            arr_36 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) (short)10568))))) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) var_6))));
                            arr_37 [i_0] [i_0] [i_9] [i_0] [i_4] = ((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0]);
                            var_25 += ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) -1980865448)) + ((~(3383974097U)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 16; i_10 += 2) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_43 [i_11] [0ULL] [i_7] [i_10] [10U] = ((/* implicit */int) ((unsigned short) 2074115828));
                            arr_44 [i_11] [i_4] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) (short)-12820)))));
                            var_26 |= ((/* implicit */unsigned char) var_8);
                        }
                    } 
                } 
            }
            for (unsigned long long int i_12 = 1; i_12 < 15; i_12 += 2) 
            {
                arr_49 [1LL] [i_4] [1LL] [i_12 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_42 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_4] [i_0 - 2])) / (-1703759695)))) ? (((4597465298160026731ULL) + (arr_40 [i_0 + 1] [i_0] [i_4] [i_12] [(short)8] [i_12]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_12] [i_4] [(short)12] [i_0])) + (((/* implicit */int) arr_23 [i_4] [i_4] [i_4] [i_4] [i_0] [i_0])))))))) ? (((((/* implicit */_Bool) arr_45 [i_0 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_45 [i_0 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-12820))) : (arr_35 [i_4])))))))));
                arr_50 [i_0] [i_0] [i_12] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) min((-2074115829), (((/* implicit */int) (short)32761))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_0 - 1] [i_0 - 2] [i_0 + 1] [i_0] [i_12 - 1])) << (((((/* implicit */int) var_15)) - (51430))))))));
            }
        }
        arr_51 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_21 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0]))) ? (min((((/* implicit */long long int) arr_21 [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_0])), (var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0])) ? (arr_21 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0]) : (arr_21 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]))))));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 24; i_13 += 3) 
    {
        arr_54 [i_13] = (short)-12805;
        arr_55 [i_13] [i_13] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))));
    }
    for (int i_14 = 0; i_14 < 12; i_14 += 2) 
    {
        var_27 ^= ((/* implicit */signed char) 13849278775549524880ULL);
        var_28 = ((/* implicit */signed char) min(((~(((/* implicit */int) (short)32761)))), (2074115814)));
        /* LoopNest 3 */
        for (int i_15 = 1; i_15 < 10; i_15 += 1) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                {
                    {
                        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) var_5)), ((short)9574)))) ? (((((/* implicit */_Bool) -1980865451)) ? (((/* implicit */int) (signed char)53)) : (((/* implicit */int) arr_48 [i_14] [i_15])))) : (((int) arr_19 [i_14] [i_14] [i_16] [13U]))))))))));
                        var_30 *= (-((+(((((/* implicit */int) (unsigned short)7796)) / (963610445))))));
                        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((744301920) + (((/* implicit */int) ((((/* implicit */_Bool) 8612939232391715256LL)) || (((/* implicit */_Bool) 748600266U))))))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_18 = 0; i_18 < 19; i_18 += 2) 
    {
        var_32 = ((/* implicit */unsigned int) ((((int) ((((/* implicit */_Bool) (short)23296)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))) >= (((/* implicit */int) ((short) ((arr_52 [i_18]) ^ (((/* implicit */int) var_1))))))));
        arr_69 [(unsigned short)10] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_52 [i_18])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((-1980865451) | (1980865430)))) && (((/* implicit */_Bool) max((arr_67 [i_18]), (var_0))))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) -1386457176)) || (((/* implicit */_Bool) -849316714))))))));
        arr_70 [i_18] [i_18] = ((/* implicit */short) (signed char)12);
    }
}
