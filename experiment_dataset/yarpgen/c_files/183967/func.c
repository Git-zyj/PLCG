/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183967
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
    var_18 ^= var_4;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((13482420661463044478ULL) > (arr_2 [i_2]))))))) ? ((~(var_6))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_13), (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) 15732972235556865671ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) arr_6 [i_1 + 1] [i_1] [i_1 - 1] [i_1 + 1])))))));
                    var_20 = (~(min((((/* implicit */int) var_7)), (1292409059))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((-703604834) < (((/* implicit */int) arr_0 [i_1 + 1] [i_2])))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_0))));
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((arr_9 [i_1 + 1] [i_1] [i_1] [i_1 - 1]) < (((/* implicit */long long int) ((/* implicit */int) var_14))))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */short) ((var_16) << (((/* implicit */int) (_Bool)0))));
                            arr_17 [i_1] [i_2] [i_3] = ((/* implicit */int) -554256588327050655LL);
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((-1292409058) == (((/* implicit */int) var_7))));
                            var_23 = ((/* implicit */short) ((unsigned long long int) 1292409059));
                        }
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_24 = ((/* implicit */_Bool) ((((var_16) < (((/* implicit */unsigned long long int) var_6)))) ? (((/* implicit */int) ((var_6) < (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) == (var_1))))));
                            arr_21 [i_0] [i_1 - 2] [i_6] [i_2] = ((long long int) (~(var_13)));
                            var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 1292409057)) < (var_11)));
                            var_26 = ((/* implicit */unsigned int) ((short) arr_4 [i_1] [i_2] [i_2]));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1292409072)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)136))) : (8796093022208ULL)));
                        }
                        var_28 = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) var_7)), (arr_20 [i_1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1]))) == (((/* implicit */unsigned int) ((/* implicit */int) ((18446735277616529406ULL) <= (((/* implicit */unsigned long long int) var_17))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        arr_24 [i_0] [i_2] [i_7] = ((((/* implicit */int) ((((/* implicit */int) var_8)) == (1292409059)))) != (((/* implicit */int) ((9223372019674906624LL) < (7354158454332538547LL)))));
                        var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_13) : (((/* implicit */int) var_5)))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (int i_9 = 0; i_9 < 22; i_9 += 1) 
                        {
                            var_30 = ((/* implicit */_Bool) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39011))) < (534106905U))));
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((min((var_10), (((/* implicit */long long int) 1292409047)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_2)))))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_2] [i_0])) : (((/* implicit */int) var_2))))) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8192019615297907034ULL)) ? (534106899U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16430))))))))));
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) var_13)) < ((+(((((/* implicit */_Bool) 3760860405U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_6)))))));
                        }
                        for (signed char i_10 = 0; i_10 < 22; i_10 += 3) 
                        {
                            var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) (-(((/* implicit */int) ((arr_27 [i_1] [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1]) < (arr_27 [i_0] [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_8])))))))));
                            arr_31 [i_0] [i_0] = (((+(((/* implicit */int) var_2)))) << ((((((-(((/* implicit */int) var_12)))) + (52964))) - (2))));
                            arr_32 [i_1] = ((/* implicit */int) ((7354158454332538547LL) < (((/* implicit */long long int) ((int) arr_19 [i_1 - 2] [i_1] [i_1] [i_1 - 2] [i_1])))));
                            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_16) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) var_9))))))))) ? (((((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) (_Bool)1))))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_0] [i_1] [i_1] [i_8] [i_10]))))))) : (((/* implicit */int) ((signed char) ((unsigned int) var_6))))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 22; i_11 += 2) 
                        {
                            var_35 = ((/* implicit */int) var_12);
                            var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) max((max((4186705358517299806LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 18446735277616529422ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_14))))))), (((/* implicit */long long int) var_12)))))));
                            arr_36 [i_0] [i_1] = ((/* implicit */short) min((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) ((arr_2 [i_2]) != (((/* implicit */unsigned long long int) arr_20 [i_11] [i_8] [i_2] [i_0] [i_0])))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned short i_12 = 2; i_12 < 21; i_12 += 4) /* same iter space */
                        {
                            arr_39 [i_12] [i_8] = ((/* implicit */_Bool) var_16);
                            arr_40 [i_0] [i_1] [i_2] [i_8] [(signed char)8] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned char) (unsigned char)0))), (((-8702413944378932631LL) - (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) ? (((/* implicit */unsigned long long int) max((arr_9 [i_1] [i_12 - 1] [i_2] [i_1 + 1]), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) < (534106891U))))))) : ((-(var_11))));
                        }
                        for (unsigned short i_13 = 2; i_13 < 21; i_13 += 4) /* same iter space */
                        {
                            var_37 = ((/* implicit */int) max((var_37), ((+((-(-25255908)))))));
                            var_38 = ((/* implicit */unsigned long long int) (signed char)19);
                        }
                        for (unsigned char i_14 = 0; i_14 < 22; i_14 += 4) 
                        {
                            var_39 &= ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) arr_15 [i_0] [i_1] [i_1 - 2] [i_8])))) + (2147483647))) << (((((unsigned long long int) var_8)) - (29033ULL)))));
                            var_40 = ((/* implicit */signed char) ((((18446735277616529422ULL) <= (((/* implicit */unsigned long long int) var_6)))) ? (max((((((/* implicit */long long int) ((/* implicit */int) var_12))) % (7354158454332538524LL))), (((/* implicit */long long int) ((7354158454332538524LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) var_15)) > (((/* implicit */int) var_7))))))));
                            var_41 = ((/* implicit */int) ((long long int) var_14));
                        }
                        arr_46 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((unsigned int) ((var_11) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)52)))))) & (((/* implicit */unsigned int) max((((/* implicit */int) ((_Bool) var_15))), (min((var_17), (1292409072))))))));
                    }
                    for (unsigned int i_15 = 0; i_15 < 22; i_15 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_16 = 1; i_16 < 19; i_16 += 3) 
                        {
                            var_42 = max((((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [i_1 - 1] [i_1])) ? (-3913217134102042838LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16))))))), (var_1));
                            var_43 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 1287327219256634424ULL)) ? (((/* implicit */int) arr_8 [i_1 - 1] [i_2] [i_2] [i_2])) : (((((/* implicit */_Bool) 18446735277616529407ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))))));
                            var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)44650))))) == (2140534351U)));
                        }
                        for (unsigned int i_17 = 2; i_17 < 21; i_17 += 3) 
                        {
                            arr_54 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((min((((unsigned int) var_8)), (((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_0] [i_0] [i_17] [i_17 + 1])))))));
                            arr_55 [i_1 - 2] &= ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) - (((/* implicit */int) ((_Bool) var_1)))));
                            var_45 &= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_2))))) == (((/* implicit */int) arr_42 [i_1 - 1])))));
                            var_46 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) min((576588531), (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((((/* implicit */int) var_12)) < (var_13)))) : (((/* implicit */int) ((unsigned char) var_11))))));
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            arr_58 [i_2] [i_18] = ((/* implicit */_Bool) (-(max(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)36617)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-21951)))))))));
                            var_47 ^= ((/* implicit */_Bool) ((((_Bool) (+((-2147483647 - 1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) arr_41 [i_15] [i_1] [i_15] [i_2] [i_15])))) < (((/* implicit */int) (short)256)))))) : ((-((~(var_1)))))));
                        }
                        arr_59 [i_0] [0LL] [i_1] [i_2] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)65518))) ? (((long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_15))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1890865914)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_52 [i_1 - 2] [(_Bool)0] [i_1] [i_1 - 1] [i_1])))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_19 = 0; i_19 < 22; i_19 += 2) 
                    {
                        var_48 = ((/* implicit */int) ((unsigned char) ((unsigned int) var_14)));
                        var_49 = ((/* implicit */unsigned short) (~(((((/* implicit */int) var_4)) | (-268903970)))));
                        arr_62 [i_1 + 1] [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22975)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_10)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))) : (((/* implicit */int) ((((/* implicit */unsigned int) var_17)) < (var_6)))))));
                    }
                }
                var_50 = (-(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (unsigned char)157)))))));
                var_51 = ((unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-16)), (var_2)))) ? (((((/* implicit */_Bool) var_2)) ? (arr_27 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_1 - 1])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)39011))))));
            }
        } 
    } 
}
