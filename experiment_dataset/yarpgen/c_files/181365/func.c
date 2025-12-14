/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181365
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            var_13 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)46)) ? (((/* implicit */int) (short)10422)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (signed char)63))));
            var_14 = ((/* implicit */long long int) (signed char)-98);
            var_15 += ((/* implicit */unsigned char) max((((/* implicit */long long int) (unsigned char)94)), (((((/* implicit */_Bool) (short)32767)) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (5572364536424375713LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)124))))) : (9223372036854775807LL)))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (long long int i_3 = 4; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_16 *= ((unsigned char) ((((/* implicit */_Bool) (signed char)34)) ? (((((/* implicit */int) (unsigned char)176)) + (((/* implicit */int) (signed char)0)))) : (((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) (unsigned short)2934))))));
                        var_17 &= arr_0 [i_0];
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) arr_7 [i_0] [i_1] [i_1] [i_3]))));
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_7 [i_3 + 4] [i_3 - 1] [i_3 + 3] [i_3 - 2]) || (((/* implicit */_Bool) (unsigned char)160)))))) % (-4280953324142712659LL))))));
                        arr_10 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((unsigned char) (unsigned char)31))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)127)), ((unsigned short)43894)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)160)) || (((/* implicit */_Bool) arr_2 [i_0])))))))));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned short) min((((unsigned char) -2441227902640621895LL)), (((/* implicit */unsigned char) (signed char)112))));
        }
        for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_5 = 2; i_5 < 15; i_5 += 4) 
            {
                for (signed char i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    {
                        var_21 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */int) (unsigned short)50649)) : (((/* implicit */int) arr_12 [i_5] [i_5])))))))) << (((((/* implicit */int) arr_1 [i_0])) - (10450)))));
                        var_22 = arr_16 [i_0] [i_4] [i_6] [i_0] [i_5 - 1];
                    }
                } 
            } 
            arr_18 [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((-8513673076213865344LL) - (((/* implicit */long long int) (+(-1828805601))))))) ^ (arr_6 [i_0] [7ULL] [i_0] [(unsigned char)9] [i_4])));
        }
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)0)))))));
        arr_19 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)109)) + (1924583979)))) ? (((/* implicit */int) (signed char)23)) : ((~(((/* implicit */int) (unsigned char)133))))));
    }
    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 2) 
    {
        arr_24 [(unsigned char)5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(634547757362955905LL)))) + (((arr_22 [i_7]) + (arr_22 [i_7])))));
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 23; i_8 += 4) 
        {
            for (unsigned char i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_10 = 3; i_10 < 22; i_10 += 4) 
                    {
                        var_24 = arr_29 [i_10 + 1] [i_10] [i_10] [i_10];
                        var_25 = min(((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) max((arr_21 [i_7]), (arr_28 [(short)22] [i_8] [i_7]))))))), (((/* implicit */long long int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_23 [i_10 - 2])))));
                    }
                    /* vectorizable */
                    for (unsigned char i_11 = 0; i_11 < 23; i_11 += 2) 
                    {
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_9] [i_9] [i_9] [i_9])) - (((/* implicit */int) arr_28 [i_11] [i_8] [8ULL])))))));
                        var_27 ^= ((/* implicit */signed char) ((arr_22 [i_9]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_34 [i_7] [i_11] [i_11] [i_7]))))))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_37 [1LL] [i_9] [(unsigned short)5] [i_12] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (((_Bool)1) ? (-1249861181) : (((/* implicit */int) (unsigned char)128))))) ? (((/* implicit */int) arr_20 [i_7] [(unsigned char)12])) : ((~(((/* implicit */int) arr_20 [i_7] [(unsigned char)10])))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-12)), (6360468788381157116ULL)))) ? ((~(((/* implicit */int) (unsigned char)255)))) : (((((/* implicit */int) arr_30 [i_7])) - (((/* implicit */int) (signed char)-28))))))));
                        arr_38 [i_7] [i_9] = ((/* implicit */unsigned char) min(((((~(((/* implicit */int) (signed char)-19)))) & (((((/* implicit */int) arr_23 [i_8])) * (((/* implicit */int) (unsigned char)197)))))), ((+(((/* implicit */int) ((((/* implicit */_Bool) -4020366587373268133LL)) || (((/* implicit */_Bool) arr_31 [i_9])))))))));
                        var_28 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)137))) == (-1094165094294175136LL)))), (min((arr_36 [i_8] [i_8] [i_8] [(short)14]), (arr_36 [i_8] [i_9] [i_9] [i_9])))));
                        arr_39 [i_7] [(unsigned char)16] [i_9] [18LL] [i_7] |= ((/* implicit */unsigned char) (signed char)11);
                    }
                    for (unsigned char i_13 = 2; i_13 < 22; i_13 += 1) 
                    {
                        arr_42 [i_9] [i_8] [i_13 + 1] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_9] [i_13 - 1] [i_13 - 2] [15LL])) & (((/* implicit */int) arr_35 [i_8] [i_13 - 2] [i_13 + 1] [i_13]))))) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)207))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_8] [i_13 - 2] [i_13 - 1] [i_13 - 2]))) >= (8046673544229925905ULL))))));
                        var_29 -= ((/* implicit */unsigned char) (((-(((/* implicit */int) (signed char)(-127 - 1))))) * (((/* implicit */int) ((((/* implicit */int) max((arr_27 [i_7] [i_7] [i_7] [i_7]), (((/* implicit */unsigned char) (signed char)127))))) != (((((/* implicit */int) (signed char)42)) - (((/* implicit */int) (signed char)59)))))))));
                        var_30 -= ((/* implicit */unsigned char) (-((((+(arr_26 [i_7] [i_8]))) / (max((((/* implicit */long long int) (signed char)-125)), (-5744361979463990361LL)))))));
                        var_31 = ((/* implicit */long long int) (+(min((((/* implicit */int) (signed char)-74)), (((((/* implicit */int) arr_29 [i_7] [i_7] [(_Bool)1] [i_13])) >> (((((/* implicit */int) (unsigned char)95)) - (92)))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_14 = 3; i_14 < 20; i_14 += 1) 
                    {
                        var_32 = ((/* implicit */int) min((var_32), ((+((-2147483647 - 1))))));
                        arr_47 [(signed char)7] [i_8] [i_9] [i_14 + 1] [i_14] = ((/* implicit */unsigned long long int) (signed char)-89);
                        arr_48 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) arr_28 [i_7] [i_9] [i_7])) : (((((/* implicit */int) (signed char)127)) * (((/* implicit */int) (unsigned char)20))))));
                        var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) (short)8107))));
                    }
                    var_34 = ((/* implicit */signed char) arr_40 [(signed char)20] [i_8] [i_9] [i_8] [(unsigned char)3] [i_9]);
                    arr_49 [i_7] [i_9] = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) (signed char)101)), (((((/* implicit */_Bool) 549755813887LL)) ? (arr_45 [i_7] [i_9] [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_15 = 0; i_15 < 23; i_15 += 1) 
        {
            var_35 = ((/* implicit */unsigned char) (+(4194594025118180055ULL)));
            arr_52 [i_15] = ((/* implicit */unsigned short) arr_28 [i_15] [i_15] [(unsigned char)1]);
            var_36 += ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-14))) < (-5738007969768451463LL)))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_7] [i_7] [i_15] [i_7] [i_15]))) : (arr_44 [i_15] [i_7]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_34 [i_7] [i_7] [i_7] [i_7])))))));
        }
        for (unsigned char i_16 = 0; i_16 < 23; i_16 += 2) 
        {
            var_37 = ((/* implicit */unsigned char) arr_20 [(short)16] [i_16]);
            var_38 *= ((/* implicit */_Bool) min((((((6458827162858942833LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15971))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) arr_21 [i_7]))))))), (((/* implicit */long long int) arr_31 [i_7]))));
            var_39 = (unsigned char)101;
        }
    }
    for (long long int i_17 = 1; i_17 < 16; i_17 += 4) 
    {
        arr_58 [i_17 - 1] [i_17] = ((/* implicit */signed char) ((((/* implicit */int) ((max((9223372036854775807LL), (((/* implicit */long long int) (short)-14177)))) != (((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_17 + 1]))) : (-1LL)))))) * (((/* implicit */int) ((unsigned char) min((((/* implicit */short) arr_54 [i_17 + 1] [i_17])), ((short)12280)))))));
        /* LoopNest 3 */
        for (long long int i_18 = 0; i_18 < 20; i_18 += 4) 
        {
            for (unsigned char i_19 = 2; i_19 < 16; i_19 += 4) 
            {
                for (signed char i_20 = 0; i_20 < 20; i_20 += 2) 
                {
                    {
                        var_40 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)47))) : (((min((arr_46 [20LL] [i_17 + 2] [i_17 + 2] [i_18] [i_18] [i_17 + 2]), (((/* implicit */long long int) arr_55 [i_20])))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_20]))) != (arr_50 [i_20] [i_20] [i_19])))))))));
                        var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) min((((((/* implicit */_Bool) (-(((/* implicit */int) (short)1100))))) ? (((/* implicit */int) arr_25 [i_17] [i_17])) : (((/* implicit */int) (signed char)-47)))), (max(((~(((/* implicit */int) (signed char)38)))), (((/* implicit */int) arr_20 [i_17 - 1] [i_17 - 1])))))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned short i_21 = 0; i_21 < 21; i_21 += 4) 
    {
        var_42 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_21])) - (((/* implicit */int) (unsigned char)94))))), (min((arr_40 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21]), ((-9223372036854775807LL - 1LL))))))) || (((/* implicit */_Bool) 1191995050077218597LL))));
        arr_69 [i_21] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (signed char)120))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_21])) + (((/* implicit */int) (unsigned char)85))))) && (((((/* implicit */int) (unsigned char)44)) < (((/* implicit */int) arr_43 [i_21] [i_21] [(unsigned char)0] [i_21] [i_21]))))))) : (((/* implicit */int) ((((/* implicit */_Bool) max(((short)-12705), (((/* implicit */short) arr_28 [i_21] [i_21] [i_21]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) arr_32 [i_21] [i_21] [i_21] [(unsigned short)5])) : (((/* implicit */int) (unsigned char)89))))))))));
        var_43 *= (((+(((((/* implicit */_Bool) (signed char)-33)) ? (((/* implicit */unsigned long long int) arr_26 [i_21] [i_21])) : (arr_44 [i_21] [i_21]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21])) || ((((_Bool)1) && (((/* implicit */_Bool) (unsigned short)50220)))))))));
    }
    var_44 = ((/* implicit */unsigned char) var_6);
    var_45 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65535)) >> (((/* implicit */int) (_Bool)1))));
}
