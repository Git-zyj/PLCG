/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122763
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
    var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) 268435456)), (-202404449794152693LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (1545910845) : (268435456)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_8)) : (72057594037927935ULL))))) ^ (((((/* implicit */_Bool) max((4133066670U), (((/* implicit */unsigned int) 1545910846))))) ? (min((18374686479671623669ULL), (((/* implicit */unsigned long long int) -268435457)))) : (((/* implicit */unsigned long long int) 161900619U))))));
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)21)) || (((/* implicit */_Bool) (unsigned char)42)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_4 [i_0 + 3] [i_0] [i_2 + 1]) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) arr_4 [i_0 + 3] [i_0 + 2] [i_2 + 1]))))) ? (((((/* implicit */int) ((((/* implicit */int) arr_5 [i_0])) >= (((/* implicit */int) arr_9 [i_0] [i_1 - 3] [i_2] [i_1 - 3]))))) | ((-(((/* implicit */int) arr_2 [i_0])))))) : (min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) == (arr_0 [i_0])))), ((-(((/* implicit */int) (short)-22307))))))));
                        arr_12 [i_2] [i_1] [i_2 - 1] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) var_1))));
                        var_17 = ((/* implicit */long long int) arr_10 [i_3] [i_2] [i_1 - 2] [i_0] [(short)9]);
                        arr_13 [i_0] [i_1] [i_1 - 2] [(signed char)9] [i_2] [i_1] = ((/* implicit */int) var_12);
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned long long int) max((arr_4 [(signed char)9] [i_1] [i_1]), (((((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 2] [i_0 + 3])) <= (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 3] [i_0 + 3]))))));
        }
        for (int i_4 = 4; i_4 < 8; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned int) (short)10076)), (var_2)))), (((((/* implicit */_Bool) (signed char)-5)) ? (202404449794152692LL) : (((/* implicit */long long int) var_8))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1657490970393524630LL)) ? (202404449794152692LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-26933)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (161900635U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [6U] [2] [6U])))))) : (((((/* implicit */_Bool) 202404449794152692LL)) ? (((/* implicit */long long int) 4133066685U)) : (202404449794152692LL)))))) : (((((/* implicit */_Bool) arr_16 [9] [i_4] [2ULL])) ? (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */long long int) -1692560843))))) : (((((/* implicit */_Bool) 161900627U)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5 - 1] [(unsigned char)0] [i_0]))))))))))));
                var_20 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4133066674U)) ? (((/* implicit */int) (unsigned char)202)) : (-268435450)))), (((((/* implicit */_Bool) min((-268435448), (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 - 1] [i_5 - 1] [i_5] [i_5]))) : (((161900592U) ^ (var_8)))))));
                var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_16 [i_0 + 1] [i_4] [i_5 - 1])), (712930078)))) ? (((((/* implicit */int) ((var_4) < (((/* implicit */unsigned int) 268435447))))) / (((/* implicit */int) (short)20150)))) : (((/* implicit */int) (((+(2199023255551LL))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))))));
            }
            /* vectorizable */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
            {
                var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [6LL])) ? (((/* implicit */int) (short)20129)) : (268435421)));
                /* LoopSeq 3 */
                for (short i_7 = 2; i_7 < 10; i_7 += 3) /* same iter space */
                {
                    var_23 |= (unsigned short)55406;
                    var_24 &= ((/* implicit */unsigned int) (short)3);
                    var_25 ^= (+(1522739087U));
                    /* LoopSeq 2 */
                    for (signed char i_8 = 2; i_8 < 11; i_8 += 1) /* same iter space */
                    {
                        var_26 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((1522739092U) & (((/* implicit */unsigned int) 268435419))))) ? (((((/* implicit */_Bool) 712930081)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)30453))) : (arr_8 [i_0] [i_4 - 1] [i_6 - 1] [i_7 - 2]))) : (((/* implicit */unsigned int) ((-268435423) / (((/* implicit */int) (short)30453)))))));
                        var_27 = -5423371697954628732LL;
                    }
                    for (signed char i_9 = 2; i_9 < 11; i_9 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned int) (short)20143);
                        var_29 ^= ((/* implicit */unsigned int) (-(-712930085)));
                    }
                    var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_29 [i_0 + 2] [i_4] [i_6] [i_4])))))));
                }
                for (short i_10 = 2; i_10 < 10; i_10 += 3) /* same iter space */
                {
                    arr_36 [i_0] [i_4] [i_6 - 1] [i_10 + 1] = ((/* implicit */signed char) (unsigned short)18622);
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_6 - 1] [i_6 - 1] [i_6 - 1])) ? (3455038117U) : (var_6)));
                }
                for (short i_11 = 2; i_11 < 10; i_11 += 3) /* same iter space */
                {
                    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) 2147483645))));
                    var_33 = ((/* implicit */int) ((((unsigned long long int) 161900627U)) % (4927933465969627065ULL)));
                }
            }
            var_34 = ((/* implicit */int) ((((/* implicit */_Bool) (~(-4383170753060268442LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1]))) : (((var_6) | (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 8570538844488180536ULL))))))));
        }
        for (long long int i_12 = 0; i_12 < 12; i_12 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_13 = 1; i_13 < 9; i_13 += 3) 
            {
                for (short i_14 = 0; i_14 < 12; i_14 += 4) 
                {
                    {
                        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483645)) ? (((/* implicit */long long int) ((/* implicit */int) (short)22532))) : (((((/* implicit */_Bool) (short)20151)) ? (-926747128234666114LL) : (((/* implicit */long long int) -2147483646))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_15 [(unsigned short)2] [(_Bool)1])) ? (((/* implicit */long long int) 1209657748U)) : (arr_43 [i_14] [i_12] [i_12] [i_0]))) <= (((/* implicit */long long int) arr_44 [i_12])))))) : (((((/* implicit */_Bool) ((((arr_3 [(short)4] [i_12] [8LL]) + (9223372036854775807LL))) >> (((((-2147483646) - (-2147483625))) + (69)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)162))) : (max((var_6), (((/* implicit */unsigned int) arr_7 [i_14]))))))));
                        arr_50 [i_0 + 1] [i_12] [i_12] [i_14] [i_0] [i_13 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483646)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)62))) : (161900607U)))) ? (arr_34 [0ULL] [i_12] [0ULL] [0ULL]) : (((/* implicit */long long int) (+(((/* implicit */int) (short)-20141)))))));
                        var_36 = min(((-(((arr_3 [i_12] [i_13] [i_14]) % (3173398869514267722LL))))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)105))))));
                    }
                } 
            } 
            arr_51 [i_0 - 1] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [4ULL] [4ULL])) ? (min((((/* implicit */unsigned long long int) arr_8 [i_0 + 1] [i_0 + 3] [i_0 - 1] [i_0 + 2])), (((((/* implicit */_Bool) arr_37 [2LL] [(unsigned char)3] [8ULL])) ? (var_0) : (((/* implicit */unsigned long long int) 1585055068)))))) : (((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) (unsigned char)105))))) ? (((/* implicit */unsigned long long int) (~(3550319738U)))) : (var_0)))));
        }
        var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((((min((var_6), (((/* implicit */unsigned int) var_12)))) != (1169325972U))) ? (((/* implicit */unsigned long long int) min((3503128322U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2772228208U)))))))) : (((((/* implicit */_Bool) arr_21 [8U] [i_0 - 1] [i_0 + 1])) ? (4927933465969627069ULL) : (((/* implicit */unsigned long long int) arr_21 [i_0] [i_0] [i_0 - 1])))))))));
        var_38 = ((/* implicit */short) ((2993577110U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)20143)))));
    }
    for (long long int i_15 = 0; i_15 < 22; i_15 += 2) 
    {
        var_39 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2993577110U)) ? (((((/* implicit */_Bool) var_0)) ? (6667489873501231232ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)40))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35555))))))));
        arr_56 [i_15] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) -3135985275587078749LL)))))))) ^ (min((var_8), (((/* implicit */unsigned int) (signed char)(-127 - 1)))))));
    }
    for (unsigned int i_16 = 0; i_16 < 25; i_16 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_17 = 1; i_17 < 23; i_17 += 1) 
        {
            for (unsigned long long int i_18 = 1; i_18 < 21; i_18 += 2) 
            {
                for (long long int i_19 = 0; i_19 < 25; i_19 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_20 = 4; i_20 < 22; i_20 += 1) 
                        {
                            var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) ((13863805388321040558ULL) * (((/* implicit */unsigned long long int) 1509377444)))))));
                            arr_69 [i_20] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_57 [i_18]))))), (min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)56341))))), (1169325975U)))));
                        }
                        var_41 = ((/* implicit */unsigned int) (unsigned short)35555);
                    }
                } 
            } 
        } 
        arr_70 [i_16] = ((/* implicit */long long int) ((min((arr_62 [i_16] [i_16] [i_16]), (min((13ULL), (((/* implicit */unsigned long long int) -208918921)))))) >= (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)233))) : (5423371697954628739LL))))))));
        var_42 = ((/* implicit */long long int) arr_64 [23] [20] [(unsigned char)13]);
        /* LoopNest 2 */
        for (unsigned long long int i_21 = 0; i_21 < 25; i_21 += 1) 
        {
            for (long long int i_22 = 2; i_22 < 22; i_22 += 3) 
            {
                {
                    var_43 = ((/* implicit */unsigned char) var_9);
                    arr_78 [i_22 + 1] [i_21] [i_16] &= min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)59039)) > (arr_77 [i_21] [i_22 + 3] [9LL] [i_22 + 1])))), (min((min((((/* implicit */unsigned int) 2147483645)), (arr_71 [i_16]))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) 1469097126)) : (2993577110U))))));
                }
            } 
        } 
        var_44 = ((/* implicit */int) (((+(min((5423371697954628710LL), (((/* implicit */long long int) var_1)))))) >> (((((/* implicit */int) arr_74 [i_16] [i_16] [i_16] [i_16])) - (172)))));
    }
}
