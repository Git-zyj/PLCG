/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142393
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            arr_6 [i_1] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
            var_20 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned short)26081)) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1] [i_0])) != (((/* implicit */int) var_16))))))), (((/* implicit */int) var_2))));
            var_21 -= ((/* implicit */unsigned long long int) max(((unsigned short)65535), (((/* implicit */unsigned short) (short)-11064))));
        }
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            var_22 = ((/* implicit */unsigned short) max((arr_1 [i_0] [i_0]), ((short)-11064)));
            arr_11 [i_2] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) (((~(12697414404618846992ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_13), (((/* implicit */unsigned short) (short)-28115)))))))))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    {
                        arr_17 [i_2] [i_0] [i_2] [i_4] = ((/* implicit */signed char) (-(arr_5 [i_0] [0ULL] [i_3])));
                        arr_18 [i_4] [i_3] [i_4] = ((/* implicit */unsigned short) max(((-(((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) (short)28115)))))), (((/* implicit */int) max(((short)28115), ((short)28103))))));
                    }
                } 
            } 
        }
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) var_14))));
        var_24 = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_3 [16U] [i_0])))) ^ (((/* implicit */int) (unsigned char)60))));
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    {
                        arr_30 [i_0] [i_5] [i_5] [i_0] = ((/* implicit */short) (-(((((/* implicit */int) var_5)) - (((/* implicit */int) arr_24 [11ULL] [i_5] [i_5] [i_0]))))));
                        arr_31 [i_7] [7LL] [i_5] [i_5] [i_0] [i_0] = 2622514374U;
                        /* LoopSeq 2 */
                        for (short i_8 = 4; i_8 < 17; i_8 += 4) /* same iter space */
                        {
                            arr_34 [i_0] [i_0] [i_0] [i_5] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (short)-28129)), (arr_32 [i_8] [i_5] [i_8] [i_5] [i_7])));
                            arr_35 [(_Bool)1] [i_5] [10U] [i_5] [10U] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_0] [i_5] [17LL] [(_Bool)1])) ? (((long long int) (~(((/* implicit */int) arr_24 [i_0] [i_6] [i_5] [i_8]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (2147483640) : (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) arr_27 [i_0] [i_5] [(_Bool)1] [i_8]))))))));
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)43789)) || (((/* implicit */_Bool) var_10))))), ((~(var_3)))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_13)))), (((/* implicit */int) max((((/* implicit */signed char) arr_4 [i_0])), (var_18))))))) : (min((arr_33 [i_0] [i_0] [(short)8] [(unsigned short)14] [i_8 - 4] [i_0] [i_8 - 1]), (arr_33 [i_0] [i_5] [i_6] [i_6] [i_6] [i_6] [i_8 - 4])))));
                        }
                        /* vectorizable */
                        for (short i_9 = 4; i_9 < 17; i_9 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned short) var_16);
                            arr_39 [i_5] [i_5] [0] [i_7] [i_5] [i_6] [i_5] = ((/* implicit */short) ((((/* implicit */int) arr_27 [i_9] [i_0] [i_5] [i_0])) + (((((/* implicit */_Bool) arr_23 [i_9] [i_6] [i_5])) ? (((/* implicit */int) (signed char)-86)) : (((/* implicit */int) (short)11064))))));
                            var_27 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((1073741824) << (((((arr_22 [i_9] [i_9]) + (780804593))) - (13)))))) ? (((/* implicit */int) arr_3 [i_5] [i_5])) : (((/* implicit */int) ((_Bool) (unsigned char)204)))));
                        }
                        var_28 = ((/* implicit */unsigned short) arr_9 [i_7]);
                        var_29 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */int) (short)10681))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        var_30 &= ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_21 [i_10] [i_10] [(unsigned char)14])) : ((~(((/* implicit */int) (signed char)83)))));
        arr_44 [i_10] = (!(((/* implicit */_Bool) (~(((/* implicit */int) var_18))))));
        /* LoopSeq 2 */
        for (long long int i_11 = 0; i_11 < 10; i_11 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_12 = 1; i_12 < 9; i_12 += 1) 
            {
                for (long long int i_13 = 2; i_13 < 9; i_13 += 2) 
                {
                    {
                        var_31 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-11064)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_6))));
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_12 + 1] [i_12 - 1] [i_13 - 2] [i_13] [i_13 - 2])) >> (((2147483647) - (2147483618)))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_14 = 0; i_14 < 10; i_14 += 1) 
            {
                for (long long int i_15 = 1; i_15 < 6; i_15 += 2) 
                {
                    for (unsigned int i_16 = 0; i_16 < 10; i_16 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned short) (((~(((/* implicit */int) var_8)))) ^ (((((/* implicit */_Bool) arr_33 [i_10] [i_11] [i_11] [i_14] [i_15 + 3] [i_15] [i_16])) ? (((/* implicit */int) (short)28115)) : (((/* implicit */int) arr_4 [i_11]))))));
                            arr_62 [i_14] [i_15] [i_14] [i_11] [i_10] = ((/* implicit */short) ((arr_32 [i_15 - 1] [i_11] [i_15 + 1] [i_15] [i_15]) - (arr_32 [i_15 - 1] [i_11] [i_15 + 2] [i_15] [i_15])));
                            var_34 = ((/* implicit */signed char) ((unsigned int) arr_50 [i_11] [i_10] [i_14] [i_15]));
                        }
                    } 
                } 
            } 
            var_35 = ((/* implicit */int) (+((+(var_10)))));
            arr_63 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_3)))) ? (arr_55 [(signed char)0] [(signed char)0]) : ((-2147483647 - 1))));
        }
        for (unsigned long long int i_17 = 1; i_17 < 8; i_17 += 2) 
        {
            arr_68 [i_17] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (short)28115)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) var_11)))));
            /* LoopSeq 1 */
            for (unsigned short i_18 = 1; i_18 < 9; i_18 += 3) 
            {
                arr_71 [i_10] [i_17] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_18)) ? (2147483647) : (((/* implicit */int) var_0)))) : ((-(((/* implicit */int) var_19))))));
                arr_72 [2U] [i_17] [2U] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28114)) ? (((/* implicit */int) (short)9505)) : (((/* implicit */int) (short)32767))));
                var_36 = ((/* implicit */int) arr_19 [14LL]);
            }
            arr_73 [i_10] [i_17] = ((/* implicit */_Bool) var_19);
        }
    }
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
    {
        arr_77 [i_19] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_19)))), (((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) arr_15 [(short)4] [(short)4])))))))) | (min((var_10), (((/* implicit */unsigned long long int) ((var_17) | (((/* implicit */long long int) ((/* implicit */int) (short)-28119))))))))));
        /* LoopNest 2 */
        for (unsigned short i_20 = 2; i_20 < 9; i_20 += 3) 
        {
            for (signed char i_21 = 0; i_21 < 10; i_21 += 4) 
            {
                {
                    var_37 = ((/* implicit */unsigned short) (+(arr_51 [i_20])));
                    arr_84 [i_20] [i_20] [i_20] = ((/* implicit */_Bool) max((((/* implicit */int) var_16)), ((-(((/* implicit */int) var_18))))));
                }
            } 
        } 
        arr_85 [i_19] [i_19] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_1 [i_19] [i_19])) ? (((/* implicit */int) var_2)) : (-1640346102)))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_47 [i_19] [i_19] [i_19] [i_19]))))), (14004355319469933190ULL)))));
        var_38 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned short)27552), (((/* implicit */unsigned short) var_18))))) ? ((-(((/* implicit */int) var_18)))) : (((/* implicit */int) arr_27 [i_19] [i_19] [i_19] [i_19]))))), (max((var_1), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (short)-28115)), (var_0))))))));
    }
    var_39 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((((/* implicit */int) var_15)) / (((((/* implicit */int) (short)-805)) - (((/* implicit */int) var_16))))))));
}
