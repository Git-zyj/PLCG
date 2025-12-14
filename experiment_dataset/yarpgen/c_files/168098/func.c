/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168098
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
    var_11 = ((/* implicit */int) ((signed char) ((unsigned long long int) ((((/* implicit */int) var_1)) >> (((var_6) - (6966481612093404644LL)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
        {
            arr_6 [i_0] [i_1] &= ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-31)), ((unsigned short)7390)));
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))) >> (((((/* implicit */int) ((signed char) arr_2 [i_1] [i_1] [i_1]))) + (94)))));
            arr_8 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~((-(arr_0 [i_0]))))))));
            arr_9 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_0]) : (arr_4 [i_0] [i_1]))));
        }
        for (int i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                var_12 = ((((/* implicit */_Bool) ((signed char) arr_1 [i_0]))) ? (((arr_10 [i_3]) ^ (arr_4 [i_0] [i_2]))) : (((arr_1 [i_0]) ^ (arr_4 [i_0] [i_2]))));
                arr_15 [i_3] [i_3] = ((/* implicit */_Bool) (((-(((/* implicit */int) (_Bool)1)))) % (arr_0 [i_0])));
                arr_16 [i_3] = ((((/* implicit */_Bool) min((((arr_12 [i_0] [i_3] [i_0]) << (((((/* implicit */int) arr_3 [i_0] [i_2] [i_3])) - (112))))), (max((arr_12 [i_0] [i_3] [i_3]), (((/* implicit */unsigned int) arr_11 [i_2]))))))) ? (arr_2 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((long long int) arr_14 [i_3] [i_2]))));
            }
            for (signed char i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
            {
                var_13 = (!(((/* implicit */_Bool) (((+(arr_2 [i_0] [i_0] [i_0]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_0]))))))));
                arr_19 [i_0] [i_0] [i_2] [i_4] = (+(((/* implicit */int) arr_5 [i_0] [i_0])));
                var_14 = ((/* implicit */unsigned short) (+(((arr_13 [i_2] [i_0]) % (arr_13 [i_0] [i_4])))));
            }
            /* vectorizable */
            for (signed char i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
            {
                var_15 ^= ((/* implicit */unsigned short) (-((~(arr_0 [i_2])))));
                /* LoopSeq 1 */
                for (long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                {
                    var_16 += ((/* implicit */long long int) (+(((/* implicit */int) arr_18 [i_2]))));
                    /* LoopSeq 3 */
                    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_22 [i_0] [i_0] [(short)19] [(signed char)12] [i_6] [i_0])))))));
                        arr_26 [i_0] [7U] [i_0] [i_0] [i_6] = (+(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_5] [i_5] [i_7])) && (((/* implicit */_Bool) arr_14 [i_6] [i_6]))))));
                        arr_27 [i_0] [i_2] [i_6] [i_2] [i_2] [i_2] [i_6] = ((/* implicit */short) (~((+(((/* implicit */int) arr_5 [i_0] [i_2]))))));
                    }
                    for (short i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        arr_31 [i_8] [i_6] [i_6] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_0] [i_2]))));
                        var_18 = ((/* implicit */short) ((unsigned short) (!(((/* implicit */_Bool) arr_11 [i_0])))));
                        arr_32 [i_6] [i_6] [i_6] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) 5753754955978068706ULL)) ? (1878150401929304065LL) : (((/* implicit */long long int) ((/* implicit */int) (short)16273)))));
                    }
                    for (int i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        arr_35 [i_0] [i_2] [i_2] [i_6] = ((((/* implicit */_Bool) ((unsigned int) arr_34 [i_0] [i_2] [i_5] [i_6] [i_0]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_2] [7] [i_6]))))) : ((~(((/* implicit */int) arr_5 [i_0] [i_6])))));
                        arr_36 [i_0] [i_0] [i_6] [i_6] [i_9] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_33 [i_0] [i_2] [i_6]))) == (arr_10 [i_6]))))));
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((short) arr_24 [i_5] [i_5] [i_0])))));
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)55960))))))))));
                    }
                    arr_37 [i_0] [i_2] [i_6] = ((/* implicit */long long int) ((unsigned int) arr_14 [i_6] [i_2]));
                    arr_38 [i_0] [i_0] [i_0] [i_2] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */int) arr_21 [i_0] [i_2] [i_5] [i_0])) == (((/* implicit */int) ((_Bool) arr_21 [i_0] [(short)16] [i_0] [i_6])))));
                }
            }
            for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 3) 
            {
                arr_43 [i_0] [i_0] [i_10] [i_10] = ((min((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_2]))))), ((+(((/* implicit */int) arr_24 [i_0] [i_10] [i_0])))))) ^ (((/* implicit */int) ((short) (~(arr_20 [i_10]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    arr_47 [i_10] [i_2] [i_2] [i_0] [i_10] = ((/* implicit */short) ((_Bool) ((unsigned long long int) arr_25 [i_10] [i_11] [i_10] [i_2] [i_2] [i_10])));
                    arr_48 [i_0] [i_10] [i_10] [i_10] = ((/* implicit */signed char) arr_17 [i_0]);
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_52 [i_10] [i_10] [i_10] [i_10] = (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_4 [i_0] [i_0])))) >= (arr_10 [i_12])))));
                    var_21 = ((/* implicit */int) min((var_21), ((~((~(max((arr_17 [i_12]), (((/* implicit */int) arr_5 [i_0] [i_0]))))))))));
                    arr_53 [i_0] [i_2] [i_10] [i_10] = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [23LL] [i_10] [i_10])) ? (((/* implicit */int) arr_39 [i_0])) : (((/* implicit */int) arr_39 [i_12]))))), (((((/* implicit */unsigned long long int) arr_41 [i_10])) % (arr_13 [i_2] [i_2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_40 [i_10]) / (arr_46 [i_0] [i_0] [i_10] [i_10])))) ? (((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */long long int) arr_0 [i_10])) : (arr_1 [i_0]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_45 [i_0] [i_0] [i_10] [i_12]))))))))));
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (+(12862965244830105551ULL))))));
                }
            }
            arr_54 [i_0] [6] [i_2] = arr_3 [i_0] [i_2] [i_2];
            arr_55 [i_0] [i_0] = (((((+(arr_2 [i_0] [i_0] [i_0]))) <= (arr_13 [i_0] [i_2]))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_25 [i_0] [i_0] [i_2] [i_2] [i_0] [(short)18]))) && (((/* implicit */_Bool) max((694578919), (694578911))))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_34 [i_0] [i_2] [i_2] [i_2] [i_2]))))))));
        }
        for (int i_13 = 0; i_13 < 24; i_13 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 3; i_14 < 23; i_14 += 1) 
            {
                for (short i_15 = 0; i_15 < 24; i_15 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 3) 
                        {
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (~(((/* implicit */int) ((signed char) arr_50 [i_16] [i_15] [i_15] [i_13]))))))));
                            arr_66 [i_14] [i_15] [i_13] [i_13] [i_14] = arr_30 [i_16] [i_15] [i_14] [i_14] [i_0] [i_0];
                            var_24 = ((/* implicit */short) ((int) ((_Bool) (short)-14493)));
                            arr_67 [i_14] [i_13] [(short)3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_63 [i_14 - 1] [i_14 + 1] [i_14 - 1] [i_14])) == (((/* implicit */int) arr_63 [i_14 + 1] [i_14] [i_14 + 1] [i_14]))));
                        }
                        var_25 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_25 [i_14] [i_13] [i_14] [i_15] [i_14] [i_14])) << ((((-(((/* implicit */int) arr_5 [i_0] [i_0])))) + (10088))))) + (((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_61 [i_0] [i_14] [i_14] [i_15]))))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0]))));
            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) max((-694578920), (-1)))) : (arr_1 [i_0]))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_0] [0LL] [i_0] [i_13] [i_0])))))))))));
            var_28 = ((/* implicit */signed char) (-(((/* implicit */int) arr_24 [i_0] [i_0] [i_13]))));
        }
        for (unsigned long long int i_17 = 1; i_17 < 22; i_17 += 4) 
        {
            var_29 *= ((/* implicit */int) ((((((arr_63 [i_0] [i_0] [i_17] [i_17]) ? (((/* implicit */int) arr_44 [i_0] [i_0] [i_17])) : (arr_20 [20ULL]))) - (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)50626))))))) < ((+(((/* implicit */int) arr_18 [i_0]))))));
            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((+(arr_10 [i_0])))))) ? (((/* implicit */long long int) ((((arr_58 [(short)16] [i_0] [i_0]) / (arr_17 [i_0]))) / (((((/* implicit */int) arr_59 [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */int) arr_51 [i_0] [i_17] [i_0] [i_17]))))))) : ((+(2096896LL)))));
        }
        arr_70 [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) min((arr_42 [i_0] [i_0]), (arr_42 [i_0] [i_0]))));
        arr_71 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)16273)) ? (((/* implicit */int) (unsigned short)14910)) : (((/* implicit */int) arr_59 [i_0] [i_0] [i_0] [14])))) <= (((/* implicit */int) (unsigned short)49955))));
        /* LoopSeq 3 */
        for (long long int i_18 = 0; i_18 < 24; i_18 += 2) 
        {
            arr_74 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)3653)))))))));
            arr_75 [i_18] = ((/* implicit */short) (~(arr_11 [i_18])));
        }
        for (short i_19 = 0; i_19 < 24; i_19 += 4) 
        {
            arr_78 [i_0] [i_0] [i_19] = ((unsigned short) arr_49 [i_19] [i_19] [i_0] [i_0] [i_19]);
            var_31 ^= ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1070643251686411745ULL)))))));
            arr_79 [i_0] [i_0] = ((/* implicit */short) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_19] [i_0] [i_0] [i_19] [i_19] [i_19])))))))));
            var_32 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_30 [(short)22] [22ULL] [i_0] [i_0] [i_19] [i_19]))));
        }
        /* vectorizable */
        for (short i_20 = 0; i_20 < 24; i_20 += 4) 
        {
            var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_0] [i_20] [i_0])) ? (((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [10LL] [(signed char)10] [i_0])) : (((/* implicit */int) arr_21 [(_Bool)1] [i_20] [i_20] [(_Bool)1]))))) ? (arr_34 [i_0] [i_0] [i_0] [i_20] [i_20]) : (((/* implicit */int) ((short) arr_29 [i_0] [i_0] [2] [i_0] [i_0]))));
            var_34 = ((/* implicit */unsigned long long int) ((_Bool) (short)16259));
            arr_82 [i_0] [i_20] = (-(arr_17 [i_20]));
        }
    }
}
