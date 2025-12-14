/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150058
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), ((unsigned short)41000)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)24535)) : (((/* implicit */int) (unsigned short)24536))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 14; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (-(var_16)));
                        var_19 += ((/* implicit */unsigned short) var_5);
                        var_20 ^= ((/* implicit */unsigned int) arr_4 [(short)8] [10ULL] [i_3]);
                        arr_12 [i_0] [i_0] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_0] [(unsigned short)12] [i_1] [i_0] [i_1] [i_3]))))), (max((67108863LL), (((/* implicit */long long int) var_13))))))), (((((arr_1 [i_0] [i_0]) >> (((-7284017508476076899LL) + (7284017508476076956LL))))) & (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_0 [i_0] [i_0])), (var_2))))))));
                    }
                } 
            } 
        } 
        var_21 |= ((/* implicit */unsigned short) ((((((var_11) ? (max((((/* implicit */int) var_5)), (arr_2 [i_0]))) : (((((/* implicit */int) arr_7 [i_0])) ^ (((/* implicit */int) arr_9 [12] [12] [i_0] [6ULL] [(unsigned short)6] [i_0])))))) + (2147483647))) << ((((-(((/* implicit */int) var_7)))) + (39235)))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))) / (((arr_4 [i_0] [i_0] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) var_14)))))))) ? (((((/* implicit */_Bool) var_1)) ? (227058254) : (((/* implicit */int) ((((/* implicit */_Bool) -394104765)) || (((/* implicit */_Bool) (unsigned short)40990))))))) : (((/* implicit */int) var_14))));
        var_23 = ((/* implicit */int) var_3);
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                for (int i_7 = 3; i_7 < 19; i_7 += 4) 
                {
                    {
                        arr_26 [i_4] [i_4] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)3907)) >= ((-(-65734426)))));
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_4] [i_4] [i_7 + 3])) ? (((/* implicit */int) var_5)) : (2147483647)));
                        var_25 = (+(((/* implicit */int) (_Bool)1)));
                        arr_27 [i_6] [i_4] [i_4] [i_7 - 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)4989)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_24 [i_7 + 3]))));
                    }
                } 
            } 
            arr_28 [i_4] [i_5] = ((((/* implicit */_Bool) (short)16382)) || (((/* implicit */_Bool) arr_24 [i_5])));
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_4])) ? (var_2) : (((/* implicit */int) (unsigned short)24545))));
        }
        for (short i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            var_27 = ((((/* implicit */_Bool) (short)15289)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (((long long int) var_14)));
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-61)) ? ((~(1976590781U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)184)) ? (((/* implicit */int) (signed char)93)) : (-227058254))))));
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((8394484840270077364LL) / (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4] [i_4])))))) ? (-86819300) : (((/* implicit */int) ((unsigned char) var_4)))));
        }
        arr_32 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (-67108863LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_4])) ? (((/* implicit */int) arr_30 [i_4])) : (((/* implicit */int) arr_14 [i_4] [i_4])))))));
        var_30 = ((/* implicit */long long int) (~(((2082976767) - (((/* implicit */int) var_4))))));
    }
    for (short i_9 = 0; i_9 < 14; i_9 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_10 = 0; i_10 < 14; i_10 += 3) 
        {
            arr_37 [i_9] [9LL] [i_10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))));
            var_31 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_19 [i_9])) ? (-2147483643) : (520926280)))));
        }
        for (unsigned short i_11 = 0; i_11 < 14; i_11 += 2) 
        {
            arr_41 [i_9] [i_9] = ((/* implicit */unsigned long long int) arr_17 [i_9] [i_9] [i_9]);
            arr_42 [i_9] [i_9] [i_9] = ((/* implicit */int) max((((/* implicit */unsigned int) ((-394104765) + (((/* implicit */int) var_7))))), (3199954512U)));
            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_9])) ? (((/* implicit */int) ((short) (+(((/* implicit */int) var_4)))))) : (((/* implicit */int) ((((/* implicit */_Bool) -955638511)) && (((((/* implicit */_Bool) (unsigned char)173)) && (((/* implicit */_Bool) arr_39 [i_9])))))))));
        }
        arr_43 [i_9] [i_9] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_13 [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [(unsigned char)3] [i_9] [i_9]))) : (((((-8394484840270077364LL) + (9223372036854775807LL))) << (((((((/* implicit */int) (signed char)(-127 - 1))) + (151))) - (23))))))));
        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) arr_2 [i_9]))));
        var_34 = ((((((((/* implicit */_Bool) arr_20 [i_9] [(unsigned char)15] [i_9])) ? (((/* implicit */int) (short)16383)) : (((/* implicit */int) arr_14 [i_9] [i_9])))) <= (((520926280) << (((var_17) - (3683008639949370844ULL))))))) ? (((/* implicit */int) (((~(((/* implicit */int) (signed char)(-127 - 1))))) > (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_14)))))))) : (max((max((arr_39 [i_9]), (((/* implicit */int) arr_19 [i_9])))), (max((var_0), (((/* implicit */int) var_6)))))));
    }
    for (unsigned char i_12 = 3; i_12 < 10; i_12 += 1) 
    {
        var_35 = ((/* implicit */signed char) ((max((arr_2 [0LL]), (((arr_39 [6ULL]) - (((/* implicit */int) (unsigned short)41000)))))) != (((/* implicit */int) var_5))));
        arr_47 [i_12] = ((((((/* implicit */unsigned int) (~(32512)))) <= (((366944811U) / (arr_40 [i_12] [i_12] [(short)8]))))) ? (min((((/* implicit */unsigned int) min((arr_3 [i_12] [i_12] [i_12]), (arr_3 [i_12] [i_12] [i_12])))), (max((308850502U), (((/* implicit */unsigned int) 955638525)))))) : (((/* implicit */unsigned int) -2082976766)));
        var_36 -= ((/* implicit */signed char) (-(var_15)));
        /* LoopNest 2 */
        for (unsigned short i_13 = 1; i_13 < 8; i_13 += 2) 
        {
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                {
                    var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)256)) ? (min((-2000543017), (((/* implicit */int) (unsigned char)82)))) : (((((/* implicit */int) arr_50 [i_12] [i_12 - 1])) | (((/* implicit */int) (unsigned short)0))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6571))) : (1004991129598641362LL))))));
                    arr_53 [i_14] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)256)) ? (min((((/* implicit */long long int) var_9)), (arr_52 [i_12 - 2] [i_13 + 1] [i_14 - 1] [i_14 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((var_3) <= (((/* implicit */unsigned long long int) 4956334920465104700LL))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 3) 
                    {
                        var_38 = (unsigned char)82;
                        var_39 *= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_40 [i_12] [i_13] [8ULL])) ? (arr_40 [i_12] [i_12] [2U]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)82))))));
                        var_40 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_12] [i_12] [i_15])) ? (((/* implicit */int) arr_48 [i_15])) : (((/* implicit */int) (unsigned short)55319)))))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (1413752051U) : (((/* implicit */unsigned int) 31))))) ? (((/* implicit */int) arr_48 [(_Bool)1])) : (((/* implicit */int) ((7492998819969821571LL) <= (((/* implicit */long long int) arr_40 [i_13] [i_13] [i_15])))))))));
                        var_41 -= ((/* implicit */unsigned short) min((((/* implicit */int) var_14)), (((((/* implicit */int) ((((/* implicit */int) arr_29 [i_12] [i_12])) <= (((/* implicit */int) var_10))))) / (((((/* implicit */_Bool) 6078056267545058530LL)) ? (((/* implicit */int) (short)28370)) : (-50352034)))))));
                        /* LoopSeq 2 */
                        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                        {
                            var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */int) ((-1004991129598641346LL) < (((/* implicit */long long int) 821121847U))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) % (((/* implicit */int) (signed char)121))))) ? (((((/* implicit */_Bool) var_7)) ? (arr_21 [6U] [i_14 - 1] [19ULL] [i_12]) : (((/* implicit */int) arr_6 [14LL] [i_14] [14LL])))) : (((((/* implicit */_Bool) 3261561266U)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (short)-16536)))))))))));
                            var_43 |= ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */unsigned long long int) ((769731064U) + (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)654))) - (var_15))))) : (((/* implicit */unsigned long long int) min((7492998819969821546LL), (((/* implicit */long long int) (_Bool)0)))))));
                            arr_61 [i_16] [i_15] [i_12] [i_15] [i_12] = ((/* implicit */unsigned char) 1033406027U);
                        }
                        for (int i_17 = 3; i_17 < 10; i_17 += 1) 
                        {
                            var_44 = ((/* implicit */int) min((((((/* implicit */_Bool) 233124782)) && ((_Bool)1))), (((_Bool) 27ULL))));
                            var_45 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)127)) ? (-191163083) : (((/* implicit */int) (unsigned short)511))));
                            arr_64 [i_15] [i_15] [(_Bool)1] [i_15] [i_15] = ((/* implicit */long long int) ((unsigned char) (+((-2147483647 - 1)))));
                            arr_65 [i_12 - 1] [i_13] [i_13] [i_15] [i_15] [i_15] = ((/* implicit */long long int) max(((~(((var_4) ? (((/* implicit */int) arr_0 [i_15] [i_15])) : (var_2))))), (((/* implicit */int) var_4))));
                        }
                    }
                }
            } 
        } 
    }
    var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) var_3))));
}
