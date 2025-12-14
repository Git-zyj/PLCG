/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148094
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
    var_18 = ((/* implicit */signed char) (~(max((((((/* implicit */_Bool) var_7)) ? (var_17) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_13)))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_0 - 1]) << (((((/* implicit */int) arr_0 [i_0 - 1])) - (1)))))) ? ((~(((((/* implicit */_Bool) arr_2 [(signed char)1] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */int) var_6)))))) : (((/* implicit */int) ((unsigned short) arr_0 [i_0 - 1])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_20 -= ((/* implicit */int) ((((44645762) < (((/* implicit */int) (unsigned char)91)))) ? ((((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)96))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
            var_21 *= ((/* implicit */signed char) ((int) ((((/* implicit */unsigned int) arr_4 [i_1] [i_0 - 1] [(short)9])) * (var_16))));
            var_22 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_9)) + (2147483647))) << (0ULL)));
        }
        var_23 = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) == ((~(((/* implicit */int) var_5)))))))) > (((6325463461571685344LL) % (((/* implicit */long long int) arr_4 [10ULL] [10ULL] [10ULL])))))))));
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_0 - 1] [5ULL]) % (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [2ULL])) && (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))))))) ? (((/* implicit */int) ((short) var_1))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) arr_0 [i_0]))))) >= (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_0] [i_0])))))))));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_2 [(short)8] [(short)8]), (arr_2 [(short)8] [(short)8])))) && (arr_6 [i_2] [i_2 - 1])));
        /* LoopNest 2 */
        for (unsigned short i_3 = 3; i_3 < 11; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_27 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) arr_11 [(short)8] [i_3 - 3] [i_3] [i_4])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_2] [i_2])) < (((/* implicit */int) (_Bool)1)))))) >= (((arr_6 [i_2] [i_2]) ? (var_7) : (((/* implicit */unsigned long long int) var_11)))))))));
                    var_28 = ((/* implicit */unsigned char) arr_4 [i_3 - 2] [i_3] [i_4]);
                    /* LoopSeq 2 */
                    for (signed char i_5 = 3; i_5 < 9; i_5 += 4) 
                    {
                        var_29 = (_Bool)1;
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_6 = 1; i_6 < 11; i_6 += 4) 
                        {
                            arr_16 [i_5] [i_3] [i_5] [1ULL] [i_3] [i_2 - 1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2673740037U)) ? (4557475059276958451ULL) : (3767447109814202381ULL)));
                            arr_17 [i_2] [(short)6] [i_5] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-5)) >= (((/* implicit */int) (_Bool)1))))) == (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (_Bool)1)))))));
                            var_30 = ((arr_1 [i_3 + 1]) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))));
                        }
                        for (unsigned char i_7 = 2; i_7 < 11; i_7 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((signed char) arr_4 [i_5] [i_4] [i_3]))) ? (((int) var_17)) : (434269685))));
                            var_32 |= ((/* implicit */unsigned short) arr_13 [i_2 - 1] [i_2 - 1] [i_4] [i_5] [i_7 - 2]);
                            arr_22 [4U] [i_3 + 1] [i_4] [i_5 + 2] [4U] [i_5] = ((/* implicit */short) (~(((/* implicit */int) var_13))));
                            var_33 = ((/* implicit */unsigned int) arr_20 [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2 - 1] [i_2 - 1]);
                            arr_23 [i_2] [(_Bool)1] [i_5] [(_Bool)1] [i_2] = ((/* implicit */short) (-(((/* implicit */int) arr_11 [i_2] [i_3] [i_4] [7U]))));
                        }
                        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_19 [i_5] [i_5] [(_Bool)1] [i_5] [i_5])) ? (((/* implicit */int) arr_5 [9ULL])) : (arr_15 [i_2] [i_3] [i_2] [i_5 - 3] [i_5 - 1] [i_3])))))) && (((/* implicit */_Bool) arr_10 [i_5] [i_5]))));
                    }
                    for (int i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)0)))))));
                        var_36 = ((((/* implicit */_Bool) arr_2 [i_2] [i_8])) || (((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned short)40345), (((/* implicit */unsigned short) var_6))))) % (((/* implicit */int) arr_20 [i_2 - 1] [i_2] [i_3] [i_4] [i_8] [i_8]))))));
                        var_37 = ((/* implicit */signed char) (~((((-(arr_2 [i_2 - 1] [i_8]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_17) == (((/* implicit */int) var_5))))))))));
                    }
                    var_38 ^= ((/* implicit */int) arr_25 [i_2]);
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_9 = 0; i_9 < 12; i_9 += 4) 
        {
            var_39 = ((/* implicit */unsigned short) arr_13 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1] [i_9]);
            arr_30 [i_2 - 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_12)))))));
        }
        /* vectorizable */
        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            var_40 -= ((/* implicit */_Bool) ((unsigned char) arr_9 [i_2 - 1]));
            var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_2])))))));
            /* LoopNest 2 */
            for (int i_11 = 2; i_11 < 11; i_11 += 4) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    {
                        var_42 = ((/* implicit */_Bool) (signed char)-1);
                        arr_38 [i_2] [i_12] [i_11] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_33 [i_2] [i_2] [i_11] [i_12]))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_13 = 4; i_13 < 10; i_13 += 4) 
        {
            arr_41 [i_2] = ((/* implicit */unsigned int) arr_33 [i_13 + 2] [i_13] [i_2 - 1] [i_2]);
            /* LoopNest 3 */
            for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
            {
                for (int i_15 = 4; i_15 < 10; i_15 += 4) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 3) 
                    {
                        {
                            var_43 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_34 [i_2] [i_2 - 1] [i_2 - 1] [i_2])) < (((((/* implicit */int) arr_12 [i_2] [i_2] [i_15] [i_16])) % (((/* implicit */int) var_0))))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [0ULL] [i_13 + 2] [i_13] [i_13])) ? (((/* implicit */int) arr_34 [i_2] [i_13] [(short)6] [(short)6])) : (((/* implicit */int) arr_24 [i_14] [i_14]))))), (((unsigned int) var_5))))));
                            var_44 *= ((/* implicit */unsigned long long int) var_17);
                        }
                    } 
                } 
            } 
        }
        var_45 = ((/* implicit */_Bool) ((15063039673768796029ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))));
    }
    for (unsigned char i_17 = 0; i_17 < 23; i_17 += 4) 
    {
        /* LoopSeq 4 */
        for (signed char i_18 = 1; i_18 < 21; i_18 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_19 = 1; i_19 < 22; i_19 += 3) 
            {
                for (short i_20 = 0; i_20 < 23; i_20 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_21 = 1; i_21 < 20; i_21 += 3) 
                        {
                            arr_64 [i_17] [(signed char)20] [i_21] [i_19] [3U] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((15063039673768796037ULL) % (((/* implicit */unsigned long long int) arr_60 [i_17] [i_19 + 1] [i_19 + 1] [i_21]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_54 [i_18 + 1]))));
                            var_46 = ((/* implicit */_Bool) (unsigned char)124);
                            var_47 ^= ((((/* implicit */int) ((short) (signed char)-86))) > (((/* implicit */int) (!(var_8)))));
                            var_48 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_56 [i_18] [i_19 + 1] [i_20] [i_21])) % ((~(arr_55 [i_17] [i_18 + 2])))));
                        }
                        arr_65 [(signed char)4] [i_18] [(signed char)4] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_52 [i_17])) & (((/* implicit */int) (unsigned short)6561)))))))) >= (((((/* implicit */_Bool) min((arr_60 [i_17] [i_17] [i_19] [i_20]), (((/* implicit */long long int) var_17))))) ? (((/* implicit */int) min((((/* implicit */short) var_4)), (arr_54 [i_17])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_60 [i_17] [i_17] [i_17] [i_17])))))))));
                    }
                } 
            } 
            var_49 = ((/* implicit */short) max((var_49), (((/* implicit */short) ((((/* implicit */int) ((unsigned char) ((short) arr_60 [i_17] [i_17] [i_18] [(unsigned char)12])))) << ((((~(min((arr_60 [i_17] [8ULL] [i_17] [i_17]), (arr_60 [i_17] [i_18] [20ULL] [i_18]))))) - (8423602699042502783LL))))))));
        }
        for (unsigned char i_22 = 0; i_22 < 23; i_22 += 4) 
        {
            var_50 ^= ((short) ((min((arr_55 [i_17] [11]), (arr_55 [i_22] [i_22]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [i_17])))));
            arr_68 [i_17] [i_17] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(arr_63 [i_17] [(signed char)1]))))));
        }
        /* vectorizable */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            var_51 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_61 [i_17] [i_17] [i_23] [(short)7] [i_23] [i_17])) % (((/* implicit */int) arr_61 [i_17] [i_17] [i_17] [16U] [i_17] [i_17]))));
            var_52 = ((/* implicit */int) min((var_52), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_69 [i_17]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_55 [i_17] [i_23])) || (arr_61 [i_17] [i_17] [i_17] [i_23] [i_23] [(_Bool)1])))) : (((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) var_1)))))))));
            var_53 = ((/* implicit */int) ((signed char) arr_55 [i_17] [i_23]));
            arr_71 [i_23] [i_23] = ((/* implicit */short) ((((arr_67 [i_17]) ? (arr_56 [i_23] [i_23] [i_17] [i_23]) : (((/* implicit */long long int) ((/* implicit */int) arr_69 [i_23]))))) > (((/* implicit */long long int) ((/* implicit */int) ((arr_56 [i_23] [i_23] [i_23] [i_23]) > (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
        }
        for (long long int i_24 = 0; i_24 < 23; i_24 += 4) 
        {
            var_54 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */int) var_5)) % (((/* implicit */int) arr_52 [i_24])))), (((/* implicit */int) arr_73 [i_17] [i_24]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_62 [i_17] [i_24] [i_24] [i_17]))))) : ((~(((/* implicit */int) var_1))))));
            var_55 = ((/* implicit */short) ((unsigned long long int) arr_70 [i_24] [i_24] [i_24]));
            arr_74 [(unsigned char)1] [i_24] = ((/* implicit */unsigned short) ((short) arr_57 [i_17] [i_24] [i_24] [i_24]));
        }
        var_56 *= ((/* implicit */unsigned char) arr_60 [i_17] [i_17] [(_Bool)1] [(_Bool)1]);
    }
    var_57 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_8)))))))));
    var_58 = ((/* implicit */unsigned int) var_3);
    var_59 = ((/* implicit */short) var_11);
}
