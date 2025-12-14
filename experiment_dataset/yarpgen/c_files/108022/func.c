/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108022
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (+(((arr_0 [13U]) ? (((/* implicit */int) min((var_9), (arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_0])))))))));
        var_15 *= ((/* implicit */short) (((_Bool)1) ? (((((arr_1 [i_0]) >> (((var_4) - (911821961483679322ULL))))) & (((/* implicit */int) var_8)))) : ((~(((/* implicit */int) ((_Bool) arr_0 [i_0])))))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_13)))) ^ (((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) && (((/* implicit */_Bool) (signed char)127))));
    }
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_17 = ((/* implicit */long long int) (+(max(((~(((/* implicit */int) (short)-20458)))), (((/* implicit */int) ((var_7) < (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))))))))));
        arr_4 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (var_6))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) min((((unsigned int) (+(((/* implicit */int) arr_6 [i_2] [i_2]))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) > (4294967270U))))));
        var_19 ^= ((/* implicit */unsigned long long int) ((_Bool) min((((unsigned int) arr_6 [i_2] [i_2])), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [12] [i_2]))))))));
        arr_8 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) arr_5 [i_2]))))) ? (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) max((var_8), (var_13)))))) : ((~((~(((/* implicit */int) arr_7 [i_2]))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_4 = 1; i_4 < 19; i_4 += 3) 
            {
                var_20 &= (!(((/* implicit */_Bool) (+(var_7)))));
                var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [i_2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13)))))));
            }
            arr_16 [i_2] [i_2] [21LL] = arr_12 [i_2] [i_3] [i_2] [i_3];
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_6 = 3; i_6 < 21; i_6 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_7 = 2; i_7 < 21; i_7 += 1) 
                {
                    var_22 |= ((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_5] [i_6] [i_7]))));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [i_5] [i_5] [i_6])))))) ? (arr_11 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_13))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))) : (0ULL)))));
                }
                for (int i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_9 = 2; i_9 < 20; i_9 += 1) 
                    {
                        var_24 = ((/* implicit */signed char) min((((_Bool) arr_24 [i_6] [i_6] [i_6] [i_8] [i_5])), (((_Bool) arr_5 [i_5]))));
                        var_25 ^= ((/* implicit */unsigned char) arr_20 [i_2]);
                        arr_27 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] &= ((/* implicit */int) var_4);
                    }
                    arr_28 [i_2] [i_5] [9LL] [i_2] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_5] [i_2])))));
                }
                var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((signed char) var_12))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) arr_19 [i_2] [i_5] [i_5] [i_2])) : (((/* implicit */int) arr_21 [i_2] [i_2] [i_5] [i_6 - 1])))))))) : ((+(((int) var_13)))))))));
                arr_29 [i_2] [i_5] = var_11;
                var_27 = ((/* implicit */unsigned char) 3914367538856879440LL);
            }
            for (signed char i_10 = 1; i_10 < 21; i_10 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_11 = 2; i_11 < 18; i_11 += 3) 
                {
                    var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4071805375511167021LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (-3914367538856879466LL)))) && (((/* implicit */_Bool) arr_26 [i_11] [i_2] [i_5] [i_5] [i_2] [i_2]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 1; i_12 < 18; i_12 += 4) 
                    {
                        var_29 = min((((/* implicit */int) arr_10 [i_2] [i_5] [i_5])), ((~((~(((/* implicit */int) arr_26 [i_10] [i_10] [i_2] [i_10] [i_12 - 1] [i_5])))))));
                        var_30 ^= ((/* implicit */int) ((((/* implicit */long long int) ((arr_6 [i_11] [i_10 + 1]) ? (((/* implicit */int) arr_6 [i_11] [i_10 - 1])) : (((/* implicit */int) arr_6 [i_11] [i_10 - 1]))))) > (min((((/* implicit */long long int) (~(((/* implicit */int) arr_20 [i_5]))))), ((-(var_6)))))));
                    }
                    for (short i_13 = 0; i_13 < 22; i_13 += 4) 
                    {
                        arr_40 [i_2] [i_5] [i_5] [i_13] [i_13] &= ((/* implicit */long long int) (+((~(arr_13 [i_10 + 1] [i_2] [i_10 + 1])))));
                        arr_41 [i_13] [i_5] [i_10] [i_5] [(_Bool)1] [i_5] [i_2] = ((unsigned int) (((!(((/* implicit */_Bool) var_7)))) && ((!(var_9)))));
                    }
                }
                var_31 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(4071805375511167021LL)))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13212))) ^ (2103203192266351665ULL)))));
                var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (~(((/* implicit */int) (((!(arr_25 [i_2] [i_2] [i_10] [i_5] [i_2]))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (var_12))))))))))));
                /* LoopSeq 2 */
                for (short i_14 = 0; i_14 < 22; i_14 += 1) 
                {
                    arr_44 [(_Bool)1] [(_Bool)1] [i_5] = arr_37 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2];
                    /* LoopSeq 2 */
                    for (unsigned int i_15 = 0; i_15 < 22; i_15 += 3) 
                    {
                        var_33 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) var_6))))))))));
                        var_34 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_39 [i_2] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_2] [i_10 - 1] [i_2]) ? (((/* implicit */int) arr_39 [(signed char)8] [i_10 - 1] [i_10 + 1] [i_14] [i_15] [i_15] [i_15])) : (((/* implicit */int) arr_39 [i_2] [i_10 + 1] [i_10 + 1] [i_14] [i_14] [i_14] [i_14])))))));
                        arr_48 [i_2] [i_10] [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)(-127 - 1))) < (((/* implicit */int) (unsigned char)202))));
                    }
                    for (long long int i_16 = 0; i_16 < 22; i_16 += 1) 
                    {
                        var_35 |= ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) 4233555637U)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_2)))))));
                        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) ((signed char) 13721641052073247085ULL))))))));
                        var_37 &= ((/* implicit */short) (+((~(max((((/* implicit */int) var_11)), (-1261747105)))))));
                        arr_53 [i_5] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((var_7) | (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_10] [i_2])))))) ? (((/* implicit */long long int) min((arr_13 [i_2] [i_5] [i_16]), (((/* implicit */int) arr_46 [i_2] [i_5] [i_10 + 1] [i_10 + 1] [i_16]))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_15 [i_5] [i_5])) : (var_2))))), (((/* implicit */long long int) ((((/* implicit */int) var_9)) & ((~(((/* implicit */int) arr_43 [i_5] [i_5])))))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_17 = 2; i_17 < 20; i_17 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)16))));
                        var_39 = var_6;
                    }
                    for (unsigned short i_18 = 0; i_18 < 22; i_18 += 3) 
                    {
                        var_40 = var_10;
                        var_41 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_55 [i_14] [i_18] [i_14] [(signed char)12] [i_10 - 1] [i_5] [i_2])), (var_3))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_50 [i_2] [i_5] [i_10] [i_14] [i_5] [i_14] [i_10])) : (5608770008992911288ULL)))))));
                    }
                    var_42 = ((/* implicit */unsigned int) var_9);
                }
                for (unsigned char i_19 = 0; i_19 < 22; i_19 += 3) 
                {
                    var_43 = ((/* implicit */unsigned int) ((var_12) == (((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) arr_9 [6LL] [6LL] [i_19]))) & (arr_17 [5U] [i_5] [i_10]))))))));
                    var_44 = ((/* implicit */short) arr_33 [i_5]);
                    /* LoopSeq 1 */
                    for (short i_20 = 1; i_20 < 21; i_20 += 4) 
                    {
                        var_45 += ((/* implicit */_Bool) ((((/* implicit */_Bool) -1261747105)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)(-32767 - 1)))));
                        var_46 = ((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_47 [17U] [i_5] [i_10 + 1] [i_10 + 1] [(_Bool)1] [i_20 - 1])), (arr_35 [i_10 - 1] [i_19] [i_19] [i_20 + 1] [i_20 + 1] [i_20 + 1] [i_20 + 1])))) ^ (((/* implicit */int) ((short) var_1)))));
                        arr_63 [i_2] [i_2] [i_5] [i_10 - 1] [i_19] [i_5] [i_5] = ((/* implicit */unsigned short) arr_51 [i_2] [19U] [i_20] [i_19] [i_19]);
                    }
                }
            }
            var_47 = ((/* implicit */unsigned int) var_7);
            arr_64 [i_2] [i_2] [i_5] = max((((((/* implicit */_Bool) arr_14 [8U] [i_2] [i_2] [5U])) ? (((var_12) - (((/* implicit */unsigned long long int) arr_33 [i_5])))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))))), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 34973443))))))));
        }
        for (int i_21 = 1; i_21 < 20; i_21 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                var_48 = ((/* implicit */signed char) (~(min((((/* implicit */long long int) (-(((/* implicit */int) arr_68 [i_2]))))), (((2097151LL) / (((/* implicit */long long int) 4294967295U))))))));
                var_49 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23889)) ? (61411659U) : (((/* implicit */unsigned int) 1632508055))))) ? (((((/* implicit */_Bool) arr_33 [i_2])) ? (var_6) : (arr_33 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-4753))))))));
            }
            var_50 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9117663871849927271LL)) ? (((min((arr_66 [i_2] [(short)10]), (((/* implicit */unsigned int) var_9)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
            var_51 = ((/* implicit */unsigned short) (((~((~(((/* implicit */int) var_9)))))) & ((+(((/* implicit */int) var_13))))));
            arr_70 [i_21 - 1] [i_2] = ((/* implicit */unsigned char) arr_10 [i_21] [i_21] [i_21]);
            arr_71 [(_Bool)1] [(_Bool)1] |= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(524287U)))))))));
        }
        var_52 ^= ((/* implicit */int) var_13);
    }
    for (unsigned int i_23 = 0; i_23 < 22; i_23 += 4) 
    {
        var_53 = ((/* implicit */int) arr_33 [i_23]);
        var_54 = ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) var_0)))))) ? (((/* implicit */int) arr_54 [i_23] [i_23] [i_23] [i_23] [i_23])) : ((+(max((1973730984), (((/* implicit */int) (unsigned char)248))))))));
    }
}
