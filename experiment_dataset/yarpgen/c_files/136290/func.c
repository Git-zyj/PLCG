/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136290
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((_Bool) max((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_6)))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        arr_14 [i_1] = ((/* implicit */int) max((5485673697254488012LL), (((/* implicit */long long int) (~((-(((/* implicit */int) var_14)))))))));
                        var_18 += ((/* implicit */unsigned long long int) var_15);
                        arr_15 [i_1] = ((/* implicit */int) -1186649306396142488LL);
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned short i_4 = 2; i_4 < 21; i_4 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_12))));
                            var_20 = ((/* implicit */_Bool) ((arr_12 [i_1] [i_4 + 1] [i_4 + 1] [i_4]) / (var_16)));
                            arr_20 [i_1] [12] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_4] [i_4] [i_4 + 1] [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (5485673697254488013LL)));
                            var_21 ^= ((/* implicit */long long int) (_Bool)1);
                            arr_21 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 5485673697254488016LL)) - (arr_18 [(unsigned char)11] [i_4] [i_4] [i_4] [i_4]))))));
                        }
                        for (long long int i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */short) min((((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))) ^ (min((5485673697254488013LL), (((/* implicit */long long int) (_Bool)1)))))), (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)146)), (((((/* implicit */int) arr_13 [i_0] [i_3] [i_5])) ^ (((/* implicit */int) var_0)))))))));
                            var_23 *= ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) 0)), (min((((/* implicit */unsigned long long int) var_16)), (7035971002263906004ULL))))) - (min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_12 [i_0] [15U] [i_3] [i_5])), (-5485673697254488028LL)))), (((unsigned long long int) var_16))))));
                        }
                        /* vectorizable */
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned char) ((short) 5485673697254488019LL));
                            var_25 = ((/* implicit */int) max((var_25), (((((/* implicit */int) var_14)) * (((/* implicit */int) ((_Bool) var_11)))))));
                            arr_29 [i_6] [i_1] [i_1] [i_3] [i_6] = ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [(_Bool)1] [i_3])) ? (arr_8 [i_1]) : (20ULL));
                        }
                        for (long long int i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */int) max((var_26), ((-(var_16)))));
                            var_27 = ((/* implicit */unsigned long long int) arr_22 [i_0] [i_1] [i_1] [i_2] [i_1] [i_7] [i_7]);
                            var_28 = ((/* implicit */int) (-(1186649306396142488LL)));
                            arr_33 [i_0] [i_1] [i_1] [i_3] [i_3] [i_1] = ((/* implicit */_Bool) (((~((~(-4309684044355804431LL))))) ^ (((((((var_10) + (9223372036854775807LL))) << (((3081217465586610837ULL) - (3081217465586610837ULL))))) | (var_9)))));
                        }
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (_Bool)1))));
        }
        for (short i_8 = 2; i_8 < 21; i_8 += 3) 
        {
            arr_36 [17LL] [17LL] [17LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) 1186649306396142492LL))));
            var_30 -= ((/* implicit */unsigned short) var_13);
        }
        /* LoopSeq 3 */
        for (unsigned short i_9 = 0; i_9 < 22; i_9 += 4) 
        {
            arr_39 [i_0] [i_9] = ((/* implicit */unsigned char) ((max((((unsigned long long int) 1022943839)), (18446744073709551615ULL))) > (var_4)));
            /* LoopSeq 1 */
            for (unsigned char i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                var_31 = ((/* implicit */_Bool) (((+(13ULL))) | ((+(min((((/* implicit */unsigned long long int) arr_5 [i_9])), (13ULL)))))));
                var_32 -= ((/* implicit */_Bool) var_5);
                var_33 *= ((/* implicit */signed char) var_14);
            }
            var_34 = ((/* implicit */unsigned short) min((min((max((var_4), (16949158378866002598ULL))), (var_5))), (((/* implicit */unsigned long long int) 5485673697254488032LL))));
        }
        for (unsigned short i_11 = 0; i_11 < 22; i_11 += 1) 
        {
            arr_47 [i_0] [i_11] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65525)) >> (((var_7) - (3174067563U)))))) % (13ULL))), (((/* implicit */unsigned long long int) arr_44 [i_11]))));
            arr_48 [i_11] [i_11] [i_11] = (i_11 % 2 == 0) ? (((((/* implicit */_Bool) ((1497585694843548999ULL) >> (((4309684044355804443LL) - (4309684044355804435LL)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */long long int) ((((/* implicit */int) var_6)) << (((arr_23 [i_0] [i_0] [i_0] [(short)4] [i_11]) - (2260136779472411524LL)))))) : (max((5485673697254488021LL), (((/* implicit */long long int) var_13))))))))) : (((((/* implicit */_Bool) ((1497585694843548999ULL) >> (((4309684044355804443LL) - (4309684044355804435LL)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */long long int) ((((/* implicit */int) var_6)) << (((((arr_23 [i_0] [i_0] [i_0] [(short)4] [i_11]) - (2260136779472411524LL))) - (6437924102198666818LL)))))) : (max((5485673697254488021LL), (((/* implicit */long long int) var_13)))))))));
            arr_49 [i_11] [i_11] = ((/* implicit */unsigned long long int) (+(var_9)));
            var_35 = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_31 [(_Bool)1] [i_0] [i_0] [(_Bool)1] [i_11] [i_11] [i_11])), (((long long int) max((((/* implicit */int) arr_6 [i_0] [i_0] [i_11])), (var_16))))));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_36 = ((/* implicit */short) 16949158378866002598ULL);
            var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) 7035971002263906010ULL))));
        }
    }
    for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 2) /* same iter space */
    {
        var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((-1186649306396142481LL) | (max((((/* implicit */long long int) max((((/* implicit */int) (unsigned short)383)), (var_17)))), (max((var_9), (arr_42 [i_13] [i_13]))))))))));
        var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_28 [i_13] [i_13])));
        arr_56 [i_13] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 900403559U)) || (((/* implicit */_Bool) arr_9 [i_13] [i_13] [i_13])))))) / (((/* implicit */int) (short)-32483))));
        arr_57 [i_13] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) < (max((var_4), (((/* implicit */unsigned long long int) var_14))))));
    }
    /* vectorizable */
    for (unsigned long long int i_14 = 0; i_14 < 17; i_14 += 2) /* same iter space */
    {
        arr_61 [i_14] [i_14] = ((/* implicit */short) ((arr_4 [i_14] [i_14] [i_14]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
        var_40 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (4221244881016526489LL)))) >> (((/* implicit */int) var_15))));
    }
    for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 2) /* same iter space */
    {
        var_41 += ((/* implicit */unsigned char) ((((((/* implicit */int) min((var_2), (min((var_13), (((/* implicit */short) (unsigned char)38))))))) + (2147483647))) >> (((((int) -87621568)) + (87621585)))));
        var_42 = ((/* implicit */unsigned long long int) var_2);
    }
    var_43 = ((/* implicit */unsigned char) ((unsigned short) min((var_5), (((/* implicit */unsigned long long int) (+(-8762377932072926147LL)))))));
    var_44 = ((/* implicit */_Bool) var_12);
}
