/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137221
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_18 &= ((/* implicit */unsigned int) arr_3 [i_0] [i_0 - 2] [i_0 + 1]);
                    var_19 = ((/* implicit */signed char) arr_0 [i_1]);
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
    {
        var_20 |= ((/* implicit */unsigned char) (~(((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_3] [i_3] [i_3])) || (var_6)))) / (67043328)))));
        var_21 *= ((/* implicit */signed char) min((((unsigned int) ((4294967275U) != (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))), ((~(arr_10 [i_3] [8LL])))));
        /* LoopNest 3 */
        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                for (signed char i_6 = 1; i_6 < 15; i_6 += 4) 
                {
                    {
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [i_5] [i_6 - 1])) ? (((/* implicit */int) arr_3 [i_3] [i_3] [i_3])) : (((/* implicit */int) var_14))))) ? (((/* implicit */long long int) arr_13 [i_3] [i_3] [i_3])) : (arr_0 [(unsigned char)22]))) : (((((/* implicit */_Bool) arr_19 [i_3] [i_6 + 1] [i_5] [i_5])) ? (arr_19 [i_5] [i_6 - 1] [i_5] [i_6]) : (arr_19 [i_3] [i_6 + 1] [i_3] [i_6 + 1])))));
                        /* LoopSeq 4 */
                        for (long long int i_7 = 4; i_7 < 12; i_7 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((int) var_2)))))));
                            arr_25 [i_3] [i_3] [i_3] [i_7] [(short)14] [(short)14] = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (short)14210)) >= (((/* implicit */int) arr_7 [i_6 - 1] [i_7] [i_7 - 3] [i_7])))));
                        }
                        /* vectorizable */
                        for (long long int i_8 = 4; i_8 < 12; i_8 += 1) /* same iter space */
                        {
                            var_24 = arr_6 [i_4];
                            var_25 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_13 [i_3] [i_4] [i_5]) : (arr_8 [i_4] [i_4])))) ? (((/* implicit */unsigned long long int) ((-7279285887506779711LL) / (((/* implicit */long long int) var_17))))) : (((((/* implicit */_Bool) arr_22 [i_3] [i_5] [6] [i_8 + 3] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)56))) : (arr_1 [i_4])))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 1) 
                        {
                            var_26 -= ((/* implicit */unsigned long long int) ((unsigned char) 257698037760ULL));
                            var_27 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) ((arr_9 [i_3] [i_4]) == (2561089465008546104LL))))) + (((((/* implicit */_Bool) arr_24 [i_5] [i_6] [i_5] [i_3] [i_5])) ? (arr_19 [i_3] [i_3] [i_3] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (short)6235))))))) > (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) <= (var_17)))))))));
                            var_28 = ((/* implicit */_Bool) (((-(arr_20 [i_3] [i_4] [i_5] [i_9]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (arr_8 [i_3] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))));
                            var_29 = ((/* implicit */unsigned char) ((((_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_7 [i_6 - 1] [i_6] [i_6] [i_6 + 1])))) : (((unsigned long long int) arr_4 [i_3] [i_4] [i_9]))));
                            arr_30 [i_9] [i_9] [i_9] [i_9] [i_9] &= ((/* implicit */long long int) 4294967275U);
                        }
                        for (unsigned short i_10 = 0; i_10 < 16; i_10 += 4) 
                        {
                            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) 635627828U))));
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) -4782382209183702811LL)))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) - (3251308523776828652ULL)))));
                        }
                        var_32 = ((/* implicit */long long int) min((var_32), (((long long int) ((arr_15 [i_3] [i_5] [i_3] [i_3]) & (arr_17 [i_3] [i_5] [i_4] [i_3]))))));
                        var_33 -= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) ((((/* implicit */int) (signed char)3)) <= (((/* implicit */int) var_15)))))) >= (((/* implicit */int) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_8 [(_Bool)1] [i_3])))) && (((/* implicit */_Bool) arr_18 [i_3] [i_4] [i_5] [6])))))));
                        arr_34 [i_5] [i_4] [i_5] [i_5] = ((/* implicit */unsigned char) ((var_6) && (((/* implicit */_Bool) arr_22 [i_3] [i_5] [i_4] [i_5] [i_6]))));
                    }
                } 
            } 
        } 
        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) -2561089465008546105LL)) ? (((/* implicit */int) arr_18 [i_3] [i_3] [i_3] [0U])) : (arr_15 [i_3] [i_3] [i_3] [(signed char)5]))) == (((/* implicit */int) var_6)))))));
    }
    for (unsigned short i_11 = 0; i_11 < 16; i_11 += 1) /* same iter space */
    {
        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_6 [i_11]) / (((/* implicit */int) (unsigned short)29668))))) ? (((((/* implicit */_Bool) (short)581)) ? (4294967274U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37982))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_11])))))))))));
        var_36 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 899794765386738339LL)) ? ((~(((6182362753217698192ULL) & (((/* implicit */unsigned long long int) 9006508083686797999LL)))))) : (((/* implicit */unsigned long long int) (-(((unsigned int) arr_27 [6U] [(unsigned char)0])))))));
        var_37 = ((/* implicit */unsigned long long int) (~(arr_6 [i_11])));
    }
    for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 3) 
        {
            var_38 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_13] [i_13] [i_12])) != (((/* implicit */int) arr_3 [i_12] [i_12] [i_13]))));
            var_39 += ((/* implicit */short) (-(((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_12] [i_13] [(short)1]))) / (var_11)))));
        }
        /* vectorizable */
        for (int i_14 = 2; i_14 < 10; i_14 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_15 = 0; i_15 < 12; i_15 += 2) 
            {
                for (long long int i_16 = 0; i_16 < 12; i_16 += 3) 
                {
                    {
                        var_40 *= ((/* implicit */unsigned int) (-(((/* implicit */int) var_12))));
                        var_41 += ((/* implicit */int) ((9384151137289375427ULL) != (((/* implicit */unsigned long long int) arr_41 [i_12] [i_14 - 1]))));
                        /* LoopSeq 2 */
                        for (unsigned char i_17 = 0; i_17 < 12; i_17 += 3) 
                        {
                            var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) (unsigned char)119))));
                            arr_54 [i_15] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_14 - 2] [i_14 - 2])) ? ((+(((/* implicit */int) (unsigned char)5)))) : (((/* implicit */int) var_12))));
                            arr_55 [i_12] [i_14 - 2] [2ULL] [i_12] [i_16] [i_15] [i_12] = ((/* implicit */unsigned long long int) ((4294967264U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_17] [i_14 - 2])))));
                            var_43 += ((/* implicit */signed char) ((((arr_49 [i_12] [(unsigned short)9] [i_12] [i_16] [i_14 + 1]) == (((/* implicit */long long int) arr_5 [i_12] [i_15] [11LL])))) ? (((var_13) ? (7487972700872273879ULL) : (((/* implicit */unsigned long long int) arr_40 [i_16])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_16] [i_17])) ? (((/* implicit */long long int) arr_46 [i_15] [i_17])) : (9223372036854775805LL))))));
                            arr_56 [i_12] [i_14] [i_15] [i_17] [i_12] [i_16] [i_12] |= ((/* implicit */short) var_5);
                        }
                        for (unsigned short i_18 = 0; i_18 < 12; i_18 += 4) 
                        {
                            var_44 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_15)) == (((/* implicit */int) arr_43 [i_14] [i_18] [i_15]))))) - (((/* implicit */int) ((unsigned char) var_4)))));
                            var_45 *= ((/* implicit */unsigned char) ((unsigned int) var_14));
                            arr_60 [i_14] [i_14] [i_14 - 1] [i_14] [0U] &= arr_15 [i_18] [i_16] [i_14 - 2] [i_14 - 2];
                            arr_61 [8U] [i_14] [9U] [i_16] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [i_14] [i_14 + 2] [i_14] [i_14 - 1] [i_14 + 2])) ? (((/* implicit */int) arr_28 [i_14 + 1] [i_14 + 1] [i_14 + 2] [i_14 + 2] [i_14 + 1] [i_14 + 1] [i_14 + 1])) : (((/* implicit */int) arr_33 [(unsigned short)6] [(unsigned short)6] [i_14] [i_14 - 2] [i_14 + 1]))));
                            var_46 ^= ((/* implicit */int) var_17);
                        }
                    }
                } 
            } 
            var_47 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 9384151137289375427ULL)) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) arr_45 [i_12] [i_14 - 2] [i_14]))))));
        }
        for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 2) 
        {
            var_48 -= ((/* implicit */short) (+(arr_11 [i_12] [i_19] [i_19])));
            arr_65 [i_12] [i_19] [i_12] = ((/* implicit */signed char) ((unsigned short) min((max((((/* implicit */unsigned int) arr_6 [i_12])), (arr_38 [i_12]))), (((/* implicit */unsigned int) (unsigned short)27544)))));
            var_49 = ((/* implicit */short) arr_33 [i_12] [i_12] [(unsigned char)13] [i_12] [i_19]);
        }
        var_50 ^= ((/* implicit */_Bool) max(((-(((/* implicit */int) (short)0)))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_31 [i_12] [i_12] [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_31 [i_12] [i_12] [i_12] [i_12] [i_12]))))));
        /* LoopNest 3 */
        for (unsigned int i_20 = 0; i_20 < 12; i_20 += 1) 
        {
            for (signed char i_21 = 1; i_21 < 9; i_21 += 1) 
            {
                for (int i_22 = 0; i_22 < 12; i_22 += 3) 
                {
                    {
                        var_51 = var_9;
                        arr_73 [2] [i_21] [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (arr_13 [i_20] [i_21] [i_22]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3)))))) && (((/* implicit */_Bool) var_16))));
                        var_52 ^= ((/* implicit */short) ((unsigned char) ((unsigned int) var_10)));
                    }
                } 
            } 
        } 
        arr_74 [i_12] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_69 [i_12] [i_12] [i_12])) ? (((arr_15 [i_12] [i_12] [i_12] [i_12]) - (arr_68 [i_12] [i_12] [i_12]))) : (((/* implicit */int) max((arr_64 [i_12] [i_12]), (((/* implicit */unsigned char) arr_52 [i_12] [i_12])))))))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) 7487972700872273879ULL)))) ? (arr_26 [(unsigned char)0] [i_12] [(_Bool)1] [(unsigned char)0] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)37952))))))));
    }
    var_53 |= ((/* implicit */_Bool) var_3);
    var_54 = ((/* implicit */int) var_14);
}
