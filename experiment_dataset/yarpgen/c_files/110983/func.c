/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110983
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */long long int) max((((unsigned int) var_4)), (((/* implicit */unsigned int) (~(427862141))))))) >= ((-9223372036854775807LL - 1LL))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_3 [3U] [i_0] = ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_10)) : (var_2))) : (((/* implicit */int) arr_1 [(short)9]))))) : ((((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_7)), ((short)32767))))) : (1290664931U))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                {
                    var_15 ^= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) max(((unsigned short)13493), ((unsigned short)32129))))))) ? (((/* implicit */long long int) arr_0 [i_0] [(signed char)11])) : (var_12)));
                    arr_9 [i_2] = ((/* implicit */signed char) ((long long int) (+(((/* implicit */int) (short)-32767)))));
                    var_16 *= ((/* implicit */unsigned long long int) (short)24576);
                }
            } 
        } 
        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) max(((short)8156), (((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        arr_12 [(short)2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24576)) ? (((/* implicit */int) arr_4 [i_3] [(_Bool)1])) : (arr_0 [i_3] [i_3])))) ? (((/* implicit */int) arr_1 [i_3])) : ((((_Bool)1) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) arr_4 [17ULL] [i_3]))))))) ? (arr_5 [i_3] [i_3]) : ((((!(((/* implicit */_Bool) (unsigned short)12249)))) ? (arr_5 [i_3] [i_3]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_4 [i_3] [i_3])) : (((/* implicit */int) arr_6 [i_3] [15LL] [i_3])))))))));
        /* LoopSeq 3 */
        for (int i_4 = 4; i_4 < 7; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                for (unsigned short i_6 = 2; i_6 < 8; i_6 += 2) 
                {
                    {
                        arr_20 [i_6] [7U] [i_5] [i_5] [i_3] [i_3] = ((/* implicit */short) ((unsigned char) max((((/* implicit */unsigned long long int) arr_16 [i_3] [i_5] [i_6])), (((((/* implicit */_Bool) arr_1 [i_3])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32757))))))));
                        var_18 = ((/* implicit */unsigned int) (-((-(((int) arr_13 [i_5] [i_5] [6ULL]))))));
                    }
                } 
            } 
            arr_21 [4ULL] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) max(((unsigned short)54169), (arr_8 [i_3] [i_4] [i_3])))) ? (((((/* implicit */_Bool) arr_8 [i_3] [(short)0] [(signed char)20])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_8 [i_3] [i_4 - 2] [i_4])))) : (((/* implicit */int) max((arr_8 [i_3] [i_4] [i_4]), (arr_8 [i_3] [(signed char)4] [i_3]))))));
        }
        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                arr_26 [0LL] [i_7] [i_8] [i_8] = ((/* implicit */_Bool) (signed char)(-127 - 1));
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned int i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        {
                            arr_32 [i_3] [i_7] = ((/* implicit */signed char) arr_4 [(short)1] [(short)1]);
                            arr_33 [i_3] [i_7] [i_8] [(unsigned short)6] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned short)12249)) ? (var_12) : (var_12))))) || (((/* implicit */_Bool) max(((+(((/* implicit */int) (unsigned short)6193)))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)17151)) || (((/* implicit */_Bool) -4618475900092482180LL))))))))));
                            var_19 ^= ((/* implicit */unsigned int) (short)(-32767 - 1));
                        }
                    } 
                } 
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_8] [i_7] [i_3])) ? (((/* implicit */int) arr_18 [i_3] [(signed char)2] [i_3])) : (((/* implicit */int) arr_18 [i_3] [(signed char)9] [i_3]))))), (((arr_4 [i_7] [i_8]) ? (6021823336990226644ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3] [i_3] [i_3]))))))))));
            }
            for (signed char i_11 = 1; i_11 < 8; i_11 += 2) 
            {
                var_21 &= ((/* implicit */long long int) 16790400901049547053ULL);
                var_22 = ((/* implicit */int) max(((+(((long long int) (short)-8131)))), ((+(((((/* implicit */_Bool) arr_15 [i_3] [i_7] [i_11] [i_11])) ? (arr_5 [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
                var_23 ^= ((/* implicit */unsigned int) ((arr_16 [i_3] [i_3] [i_11]) ? (((/* implicit */long long int) (-((+(((/* implicit */int) (signed char)68))))))) : (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)54169))))) : (5614492887746374426LL)))));
            }
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */signed char) arr_35 [i_3] [i_3] [i_7])), ((signed char)4)))) >> (((((((((/* implicit */int) var_3)) ^ (((/* implicit */int) (signed char)125)))) - (((/* implicit */int) arr_13 [i_3] [i_3] [i_3])))) + (11873)))));
            var_25 ^= ((/* implicit */unsigned long long int) 1718641645U);
        }
        for (unsigned int i_12 = 0; i_12 < 10; i_12 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)32))) * (2576325650U)))) ? (((/* implicit */int) arr_38 [i_3])) : (((((/* implicit */int) var_7)) & (((/* implicit */int) arr_15 [(unsigned short)4] [i_3] [i_12] [i_12]))))))) ? (((/* implicit */int) (_Bool)1)) : ((+(var_4))))))));
            /* LoopSeq 1 */
            for (short i_13 = 0; i_13 < 10; i_13 += 3) 
            {
                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1436125300)) ? (var_4) : (((/* implicit */int) var_5))))) ? ((+(((/* implicit */int) (unsigned short)16704)))) : (((/* implicit */int) arr_41 [i_3] [i_12] [i_13]))))) ? (((/* implicit */int) max(((_Bool)1), (arr_16 [i_3] [i_3] [i_13])))) : (((/* implicit */int) (_Bool)0)))))));
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 10; i_14 += 2) 
                {
                    for (long long int i_15 = 0; i_15 < 10; i_15 += 3) 
                    {
                        {
                            arr_47 [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_28 [i_3] [i_12] [i_13] [(signed char)7] [i_15]))));
                            arr_48 [5U] [i_13] [2LL] [i_14] [3] [i_14] = 2434019956U;
                        }
                    } 
                } 
                var_28 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((arr_34 [i_13] [i_12]), (((/* implicit */unsigned long long int) (signed char)73))))) ? (5191307944752341443LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58264))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                arr_49 [i_3] [i_12] [i_13] [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_41 [i_13] [i_3] [i_3])) & (((/* implicit */int) (unsigned short)13513)))), ((-(((/* implicit */int) arr_25 [i_3] [i_3] [i_13]))))))) ? (((/* implicit */int) arr_44 [i_3] [(signed char)1] [i_12] [i_13])) : (max((((/* implicit */int) ((_Bool) arr_43 [i_3] [i_3]))), (min((((/* implicit */int) (signed char)-118)), (-535157188)))))));
            }
            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (short)7680))));
            /* LoopNest 2 */
            for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 3) 
            {
                for (signed char i_17 = 0; i_17 < 10; i_17 += 1) 
                {
                    {
                        var_30 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */int) (signed char)7)) ^ (((/* implicit */int) arr_13 [i_17] [i_3] [i_3]))))))) ? (max((min((((/* implicit */unsigned long long int) (signed char)-13)), (var_1))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)52023))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_2)))))))));
                        var_31 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_12]))))) ? (((((/* implicit */_Bool) arr_1 [i_16])) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) arr_1 [(signed char)13])))) : (((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) arr_1 [i_3]))))));
                    }
                } 
            } 
            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_11 [i_3])))) >= (arr_17 [i_3] [i_3] [i_12]))) ? ((~(((/* implicit */int) max((((/* implicit */short) (signed char)-84)), (arr_54 [i_12] [i_12] [i_12] [i_12] [i_3] [(unsigned char)8])))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_3])) || (arr_16 [i_3] [i_3] [i_12])))))))));
        }
    }
    for (signed char i_18 = 1; i_18 < 17; i_18 += 3) 
    {
        arr_58 [i_18] = ((/* implicit */_Bool) (unsigned char)55);
        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((signed char) ((unsigned long long int) (signed char)-82))))));
        /* LoopNest 2 */
        for (long long int i_19 = 0; i_19 < 18; i_19 += 3) 
        {
            for (unsigned long long int i_20 = 1; i_20 < 15; i_20 += 3) 
            {
                {
                    var_34 = ((/* implicit */_Bool) (short)-1);
                    arr_66 [i_18] [i_18 + 1] [i_18] [i_18] = ((/* implicit */signed char) ((((unsigned long long int) (-(((/* implicit */int) arr_8 [(signed char)14] [i_19] [i_20]))))) << (((((/* implicit */int) (unsigned char)64)) - (61)))));
                    var_35 ^= ((((/* implicit */_Bool) ((long long int) var_8))) ? (((((/* implicit */_Bool) ((signed char) arr_56 [i_18] [13ULL]))) ? (1596067570U) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)120))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))));
                }
            } 
        } 
        arr_67 [i_18 + 1] = ((/* implicit */short) arr_55 [i_18]);
        arr_68 [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7602093294810677812LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [(unsigned char)14] [i_18] [i_18])))))) ? (((((/* implicit */_Bool) arr_1 [i_18 + 1])) ? (3671029191U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(signed char)6] [i_18 + 1] [i_18]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_18])) | (((/* implicit */int) arr_59 [i_18] [i_18] [i_18])))))))) ? (max((((((/* implicit */_Bool) (unsigned short)13513)) ? (2698899725U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (arr_64 [i_18 - 1] [i_18 - 1]))) : (((/* implicit */unsigned int) var_4))));
    }
    for (short i_21 = 0; i_21 < 14; i_21 += 4) 
    {
        arr_71 [i_21] = ((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) arr_0 [i_21] [i_21])) | (arr_56 [i_21] [i_21])))));
        arr_72 [i_21] = ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) != (min((arr_63 [i_21] [i_21] [i_21]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_7 [i_21] [i_21] [i_21])) : (((/* implicit */int) arr_8 [i_21] [i_21] [i_21]))))))));
        arr_73 [i_21] = ((max((3557808412U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)19261)) && (((/* implicit */_Bool) arr_56 [(unsigned short)4] [i_21]))))))) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
    }
    var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : ((~(((((/* implicit */_Bool) (unsigned short)16403)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 3 */
    for (unsigned char i_22 = 0; i_22 < 21; i_22 += 2) 
    {
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            for (signed char i_24 = 0; i_24 < 21; i_24 += 1) 
            {
                {
                    var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (((long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) arr_75 [i_24])) : (arr_2 [i_22])))))))));
                    var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-15)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_24] [i_23] [i_23])) ? (var_2) : (((/* implicit */int) max(((signed char)6), (arr_81 [16ULL])))))))));
                }
            } 
        } 
    } 
}
