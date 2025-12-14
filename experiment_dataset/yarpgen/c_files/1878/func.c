/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1878
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
    var_20 = ((/* implicit */unsigned int) max(((((!(((/* implicit */_Bool) var_1)))) ? (var_1) : (((/* implicit */long long int) 665876139)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) min(((unsigned char)15), (var_3)))) : (((/* implicit */int) max((var_14), (((/* implicit */short) var_0))))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) var_4);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_0 + 2])) != (((/* implicit */int) arr_0 [i_0 - 2])))) ? (max((1096019429U), (((/* implicit */unsigned int) arr_0 [i_0 + 1])))) : (max((((/* implicit */unsigned int) arr_0 [i_0 + 2])), (2143289344U)))));
    }
    for (signed char i_1 = 3; i_1 < 22; i_1 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) ((_Bool) (+(((((/* implicit */_Bool) arr_6 [i_1])) ? (-1388400548) : (((/* implicit */int) (signed char)55)))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            for (unsigned int i_3 = 1; i_3 < 23; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    {
                        var_22 *= ((/* implicit */unsigned int) min((min((((((/* implicit */long long int) ((/* implicit */int) var_11))) & (var_1))), (max((-5001314522705854519LL), (((/* implicit */long long int) arr_12 [i_1] [i_2] [i_3] [i_3])))))), (((/* implicit */long long int) var_15))));
                        arr_15 [i_1] [i_1] [i_4] [i_2] [i_4] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) arr_14 [i_4])))))), (arr_9 [i_2])));
                    }
                } 
            } 
        } 
        var_23 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(min((((/* implicit */int) (unsigned char)19)), (2063722895)))))) + (max((((/* implicit */long long int) min((((/* implicit */int) var_15)), (-2063722896)))), (((((/* implicit */_Bool) arr_8 [i_1] [5])) ? (arr_10 [i_1 - 2]) : (((/* implicit */long long int) var_8))))))));
    }
    for (signed char i_5 = 3; i_5 < 22; i_5 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_6 = 4; i_6 < 23; i_6 += 3) 
        {
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) max((var_19), (min((((/* implicit */unsigned int) (unsigned char)237)), (min((((/* implicit */unsigned int) (unsigned char)19)), (var_19))))))))));
            arr_22 [i_5] [i_6] = var_0;
            arr_23 [(_Bool)1] [i_6] &= -1;
        }
        for (long long int i_7 = 0; i_7 < 25; i_7 += 1) 
        {
            var_25 = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) (signed char)-74)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) (signed char)-55)) : (arr_12 [i_5 + 1] [i_5] [i_7] [i_7])))) : (min((2143289344U), (((/* implicit */unsigned int) var_17)))))) >= (((/* implicit */unsigned int) 665876119))));
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (!(arr_19 [(_Bool)1] [i_7] [(_Bool)1]))))));
            var_27 = ((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-94)), (2063722896)));
            /* LoopNest 3 */
            for (unsigned short i_8 = 0; i_8 < 25; i_8 += 2) 
            {
                for (signed char i_9 = 2; i_9 < 22; i_9 += 1) 
                {
                    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 2) 
                    {
                        {
                            arr_34 [i_7] [i_5 + 2] [i_5 + 2] [(unsigned char)14] [1ULL] [i_5 - 2] = ((/* implicit */unsigned char) max((1096019438U), (((/* implicit */unsigned int) (signed char)0))));
                            var_28 += ((/* implicit */signed char) ((((((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-2175725827858160590LL))) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) arr_8 [i_10] [i_8])) : (arr_9 [i_8])))))) + (((/* implicit */long long int) (+(var_9))))));
                            arr_35 [i_5 + 2] [i_10] [(_Bool)1] [i_10] [i_8] &= ((/* implicit */unsigned long long int) ((unsigned int) ((long long int) var_2)));
                            arr_36 [i_7] [i_8] [i_9 + 2] [i_7] = ((/* implicit */long long int) (+(((unsigned long long int) var_8))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 25; i_11 += 3) 
        {
            for (signed char i_12 = 0; i_12 < 25; i_12 += 2) 
            {
                {
                    arr_43 [i_11] = ((/* implicit */signed char) max((((/* implicit */int) min(((short)-18466), (((/* implicit */short) var_4))))), (((int) max((var_1), (((/* implicit */long long int) (short)-18466)))))));
                    var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
                    arr_44 [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_18 [i_5] [i_5])) ? (((/* implicit */int) arr_0 [i_12])) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_9 [i_11]), (((/* implicit */unsigned int) arr_30 [i_11] [i_11]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_11] [i_11] [i_12] [i_5]))) : (var_1)))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) - (((/* implicit */int) arr_1 [i_11]))))) ? (((/* implicit */unsigned long long int) 8084565234371791446LL)) : (((arr_11 [i_11]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5 - 2])))))))));
                }
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_13 = 0; i_13 < 16; i_13 += 3) /* same iter space */
    {
        arr_47 [i_13] = ((/* implicit */signed char) arr_2 [i_13]);
        /* LoopSeq 1 */
        for (unsigned int i_14 = 0; i_14 < 16; i_14 += 1) 
        {
            arr_52 [i_13] [i_14] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_15)) < (((/* implicit */int) var_4)))))) : (((arr_42 [i_13]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128)))))));
            var_31 = ((/* implicit */unsigned int) var_18);
        }
    }
    for (unsigned char i_15 = 0; i_15 < 16; i_15 += 3) /* same iter space */
    {
        var_32 = ((/* implicit */_Bool) ((int) max((((/* implicit */unsigned int) ((var_8) >> (((-6124850373663322988LL) + (6124850373663323009LL)))))), (((((/* implicit */_Bool) -1720763930)) ? (var_9) : (((/* implicit */unsigned int) arr_20 [i_15])))))));
        arr_55 [i_15] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((signed char) -1))))) : (((((arr_17 [i_15]) + (9223372036854775807LL))) >> (((max((((/* implicit */long long int) (unsigned short)53222)), (arr_17 [i_15]))) - (53194LL)))))));
    }
    /* vectorizable */
    for (unsigned char i_16 = 0; i_16 < 16; i_16 += 3) /* same iter space */
    {
        arr_59 [i_16] = ((/* implicit */short) arr_0 [i_16]);
        arr_60 [i_16] [i_16] = ((/* implicit */_Bool) arr_32 [i_16]);
        /* LoopSeq 2 */
        for (short i_17 = 0; i_17 < 16; i_17 += 2) 
        {
            arr_65 [i_16] [(signed char)4] = ((/* implicit */short) ((-10) + (((/* implicit */int) ((short) var_18)))));
            /* LoopNest 2 */
            for (int i_18 = 1; i_18 < 13; i_18 += 2) 
            {
                for (short i_19 = 0; i_19 < 16; i_19 += 3) 
                {
                    {
                        arr_72 [i_16] [i_18] [i_16] [i_16] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) & (-104211845579322125LL)))) ? (((/* implicit */int) arr_66 [i_16] [i_16] [i_16])) : (((/* implicit */int) var_5)));
                        arr_73 [i_18] [i_17] = ((/* implicit */signed char) arr_28 [i_18 - 1] [i_18 - 1] [(_Bool)1] [i_18 - 1]);
                        /* LoopSeq 1 */
                        for (unsigned int i_20 = 0; i_20 < 16; i_20 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned short) var_15);
                            var_34 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)38529)) ? ((~(((/* implicit */int) arr_0 [i_17])))) : (((((/* implicit */int) (unsigned char)116)) & (((/* implicit */int) arr_50 [i_19] [i_17]))))));
                            var_35 = ((/* implicit */short) var_5);
                        }
                    }
                } 
            } 
            arr_76 [i_16] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_58 [i_16])) ? (((/* implicit */unsigned long long int) arr_38 [i_16] [i_16] [i_17])) : (arr_58 [i_17])));
            arr_77 [i_16] [i_17] [i_17] = ((/* implicit */long long int) ((var_5) || (((/* implicit */_Bool) var_12))));
        }
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            var_36 = ((/* implicit */unsigned int) (_Bool)0);
            /* LoopNest 2 */
            for (signed char i_22 = 3; i_22 < 13; i_22 += 2) 
            {
                for (unsigned short i_23 = 4; i_23 < 15; i_23 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_24 = 0; i_24 < 16; i_24 += 3) 
                        {
                            arr_90 [i_16] [10LL] [i_22 + 2] [i_23] [i_24] [i_24] &= var_1;
                            arr_91 [15LL] [i_16] [i_22] [i_22] [i_23] [i_22] [i_24] = ((/* implicit */_Bool) var_17);
                            arr_92 [i_22] [i_21] = ((/* implicit */unsigned char) (+(arr_68 [i_16] [i_21] [i_21])));
                        }
                        for (unsigned int i_25 = 0; i_25 < 16; i_25 += 1) 
                        {
                            arr_95 [i_22] [i_21] [i_21] [4] = ((/* implicit */unsigned int) arr_93 [i_22] [14U] [i_22] [i_23 + 1] [i_25]);
                            arr_96 [i_16] [i_21] [i_21] [i_22] = ((/* implicit */_Bool) var_10);
                            arr_97 [i_22] [i_22] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)138)) || (var_11))));
                            var_37 = ((/* implicit */unsigned short) (-(-1911034548)));
                            arr_98 [i_25] [i_22] [i_22 - 2] [i_21] [i_22] [i_16] = ((/* implicit */signed char) ((long long int) arr_83 [i_22] [i_22] [i_22] [i_22]));
                        }
                        for (unsigned char i_26 = 0; i_26 < 16; i_26 += 2) 
                        {
                            var_38 = ((/* implicit */unsigned char) var_19);
                            arr_101 [i_21] [i_22] = arr_88 [i_22 - 1];
                            arr_102 [i_16] [i_21] [(unsigned short)8] [(unsigned short)8] [i_22 - 1] [i_23 - 1] [i_22] = ((/* implicit */signed char) ((arr_33 [i_23 + 1] [i_22 + 1]) & (147745454079809012LL)));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                        {
                            var_39 ^= ((/* implicit */signed char) ((((((((/* implicit */_Bool) 17907135186199642689ULL)) ? (-2063722896) : (((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (signed char)-55)))) + (82)))));
                            arr_106 [i_16] [i_22] [i_16] = ((/* implicit */short) ((var_8) != (((/* implicit */int) ((((/* implicit */long long int) var_8)) > (arr_17 [i_16]))))));
                        }
                        var_40 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_66 [i_23 - 1] [i_22 + 3] [i_22 + 1]))) <= (arr_10 [i_21])));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_28 = 2; i_28 < 14; i_28 += 3) 
            {
                arr_110 [i_28] [i_21] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((var_8) > (473794269))))));
                arr_111 [i_16] [i_21] [i_21] [i_28 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)13222)) ? (2024554193U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-23)))));
            }
        }
        var_41 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_16] [i_16] [i_16] [i_16])) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((arr_49 [i_16] [i_16]) ^ (((/* implicit */int) (short)18465)))) : (((/* implicit */int) (signed char)-55))));
    }
}
