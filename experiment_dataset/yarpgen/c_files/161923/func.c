/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161923
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)99)) ? (396888061U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-12)))))), (-1940113963809952877LL)))) ? (max((-1940113963809952869LL), (1940113963809952876LL))) : (((/* implicit */long long int) var_0))));
    var_13 = ((/* implicit */_Bool) (signed char)-54);
    var_14 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (-((-(396888047U)))))) : (max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 3332540107918807934LL)) : (4022108605166510748ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_6 [i_1] |= ((/* implicit */_Bool) (short)-4141);
                    var_15 = ((/* implicit */signed char) var_3);
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((14508126075335127582ULL) - (var_10)))))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0 + 1]))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0 - 1])) >= (((/* implicit */int) arr_1 [i_0 + 1]))));
                            var_19 += ((/* implicit */unsigned int) (~(1765735782641601584ULL)));
                            arr_11 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3275))) : (arr_3 [i_0] [i_0])))));
                        }
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */signed char) (+(1940113963809952876LL)));
                            var_21 = ((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (var_1)))));
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_2 [i_0 - 3])) == (5546328903591873218ULL)));
                        }
                        for (short i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            var_23 -= ((/* implicit */unsigned long long int) var_0);
                            arr_18 [(signed char)0] [i_1] [i_1] [i_3] [i_6] |= ((/* implicit */short) ((((/* implicit */_Bool) 3898079248U)) ? (7995741886137718814ULL) : (var_4)));
                            var_24 ^= ((/* implicit */unsigned int) ((arr_15 [i_0] [i_6] [i_2] [i_3] [i_6]) != (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                            var_25 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((short) 3332540107918807934LL))) ? (((/* implicit */unsigned int) 214882521)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (396888061U)))));
                            var_26 = ((/* implicit */signed char) ((long long int) 8648663655051925906LL));
                        }
                        arr_19 [i_1] [i_3] = ((/* implicit */unsigned long long int) (+(712298719U)));
                    }
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((_Bool) 3953595316U)))));
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_7)) ? (-3332540107918807935LL) : (((/* implicit */long long int) 430460386)))))))));
        var_29 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((396888041U) >= (396888052U)))))));
        var_30 = ((/* implicit */int) ((arr_12 [i_0] [i_0 - 2] [i_0] [i_0 - 3] [(short)7] [i_0 - 3] [i_0]) ? ((-(arr_9 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 3] [i_0]))) : (((/* implicit */long long int) arr_2 [(signed char)8]))));
    }
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            for (short i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                {
                    arr_28 [i_7] [i_7] [i_8] = ((/* implicit */signed char) (~(((int) arr_22 [i_7 - 1]))));
                    /* LoopNest 2 */
                    for (short i_10 = 4; i_10 < 19; i_10 += 1) 
                    {
                        for (long long int i_11 = 1; i_11 < 17; i_11 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) min((max((17140027406500766257ULL), (((/* implicit */unsigned long long int) 698161381283974315LL)))), (((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) var_6)), (-3332540107918807935LL))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)22)))))))))))));
                                arr_33 [i_10] [(_Bool)1] = ((/* implicit */int) max((3898079227U), (((/* implicit */unsigned int) arr_30 [i_7] [1ULL] [1ULL] [i_10] [i_10] [(signed char)16]))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3898079240U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_7 - 1]))) : (5647859965063021586ULL)))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        arr_37 [i_7] [i_7] [i_8] [i_9] [(unsigned short)9] [i_12] = ((/* implicit */signed char) ((arr_22 [i_7 - 1]) ? (((/* implicit */int) arr_20 [i_7 - 1])) : (((/* implicit */int) (_Bool)1))));
                        arr_38 [i_7] [i_8] [i_8] [i_9] [i_8] = ((/* implicit */signed char) ((_Bool) var_3));
                        var_33 = ((/* implicit */long long int) ((unsigned long long int) arr_22 [i_7 - 1]));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        var_34 -= ((/* implicit */signed char) (_Bool)1);
                        var_35 = ((/* implicit */unsigned short) (+((~(916782452)))));
                    }
                }
            } 
        } 
        var_36 -= ((/* implicit */unsigned int) (+(((/* implicit */int) max((arr_20 [i_7 - 1]), (((signed char) (short)1200)))))));
        var_37 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (unsigned short)12391))) | (((/* implicit */int) (_Bool)1))));
        var_38 ^= ((/* implicit */signed char) (+(((((/* implicit */int) arr_26 [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 1])) % (((/* implicit */int) (signed char)-17))))));
        var_39 -= max(((((~(arr_39 [i_7] [i_7]))) << ((((-(1874261538075187708LL))) + (1874261538075187726LL))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))));
    }
    for (signed char i_14 = 1; i_14 < 15; i_14 += 2) 
    {
        var_40 -= ((/* implicit */long long int) (signed char)64);
        var_41 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 13322034851592018307ULL)))))));
        arr_43 [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((12669778777204388805ULL), (((/* implicit */unsigned long long int) (unsigned short)28817))))) ? (max((((/* implicit */unsigned int) var_8)), (3898079242U))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) << (((1300277055U) - (1300277032U))))))))) ? ((~(max((4882302851241227508LL), (arr_25 [i_14] [i_14] [i_14]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_23 [i_14] [i_14])))) ? (1755476807U) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) (unsigned short)29163))))))))));
        var_42 = ((/* implicit */long long int) max((var_42), (min((((/* implicit */long long int) max((((/* implicit */unsigned int) ((int) (signed char)-65))), (max((((/* implicit */unsigned int) (signed char)-1)), (var_1)))))), (((((/* implicit */_Bool) 1224225185)) ? (((long long int) 1224225178)) : (((/* implicit */long long int) -1601867629))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_15 = 1; i_15 < 11; i_15 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_16 = 2; i_16 < 10; i_16 += 4) 
        {
            for (unsigned int i_17 = 0; i_17 < 12; i_17 += 4) 
            {
                for (signed char i_18 = 0; i_18 < 12; i_18 += 4) 
                {
                    {
                        var_43 = ((/* implicit */signed char) var_3);
                        var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) var_11))))))));
                    }
                } 
            } 
        } 
        arr_53 [i_15] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) 1224225173)))));
        var_45 = ((/* implicit */signed char) max((var_45), (arr_30 [i_15 + 1] [i_15 + 1] [i_15 - 1] [i_15 + 1] [i_15 + 1] [i_15])));
        var_46 = ((/* implicit */signed char) 1833197539U);
    }
}
