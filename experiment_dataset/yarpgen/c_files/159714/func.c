/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159714
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
    for (signed char i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        var_17 = ((unsigned int) ((arr_1 [i_0 + 2]) << (((/* implicit */int) var_7))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) -1685627332)) != (arr_1 [i_0 - 1])));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (short i_3 = 1; i_3 < 9; i_3 += 3) 
                {
                    {
                        var_18 ^= arr_4 [i_0] [i_0] [i_0 + 2];
                        var_19 = ((/* implicit */signed char) ((((-5775943400441810684LL) + (9223372036854775807LL))) >> (17ULL)));
                        var_20 ^= ((4294967295U) * (120840259U));
                        arr_11 [i_3] [i_1] [i_2] [0ULL] [i_3 + 2] = ((/* implicit */unsigned int) (short)3458);
                    }
                } 
            } 
            arr_12 [i_0 - 2] = ((/* implicit */unsigned int) ((short) 10665888167793052190ULL));
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((var_1) ^ (((/* implicit */unsigned long long int) 841409223U)))) * (0ULL))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(short)4] [8ULL] [i_0 + 3] [i_0 + 1]))))))));
                arr_15 [i_4] [i_0 + 3] [i_1] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)3458))));
            }
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) 4294967275U)) : (10665888167793052198ULL)));
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) -2147483618))));
        }
        for (long long int i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (67108863ULL) : (67108863ULL)))) ? (min((((/* implicit */unsigned int) (short)-26994)), (0U))) : (max((3453558050U), (((/* implicit */unsigned int) (short)-32758)))))) >> (((((var_16) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16))) | (4294967274U))))) - (3255977263U))))))));
            arr_22 [i_6] [i_0] [i_0] = ((/* implicit */unsigned long long int) 3473694917146923461LL);
        }
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_7 = 1; i_7 < 10; i_7 += 3) 
        {
            var_26 = ((/* implicit */long long int) ((arr_7 [i_0 + 2] [i_0 + 1]) ^ (arr_7 [i_7 - 1] [i_0])));
            var_27 = ((/* implicit */unsigned int) ((unsigned char) (signed char)83));
            arr_26 [i_7] = ((/* implicit */_Bool) ((var_1) - (((/* implicit */unsigned long long int) arr_4 [i_7 - 1] [i_0 - 2] [i_0 + 1]))));
            var_28 -= ((/* implicit */unsigned char) ((unsigned long long int) 18446744073709551599ULL));
        }
        for (unsigned char i_8 = 4; i_8 < 10; i_8 += 4) 
        {
            var_29 = ((((/* implicit */_Bool) (signed char)83)) ? (((unsigned long long int) 855671558U)) : (((/* implicit */unsigned long long int) ((855671558U) | (3118804652U)))));
            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) min(((~(14620187482622664840ULL))), (((/* implicit */unsigned long long int) (short)0)))))));
            var_31 ^= ((/* implicit */signed char) (+(((unsigned int) (-(-3067975087437572998LL))))));
            arr_29 [i_0 - 2] = (_Bool)1;
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    {
                        arr_36 [i_0] [i_8 - 3] [i_9] [i_10] = ((/* implicit */short) ((((/* implicit */long long int) 620650072U)) / (-1869043879967465884LL)));
                        var_32 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 10326658741994759583ULL)) ? (0ULL) : (((unsigned long long int) 3410843461U))));
                        var_33 = ((/* implicit */unsigned int) ((signed char) (short)32748));
                    }
                } 
            } 
        }
        for (long long int i_11 = 1; i_11 < 10; i_11 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 1; i_13 < 9; i_13 += 1) 
                {
                    for (int i_14 = 0; i_14 < 11; i_14 += 1) 
                    {
                        {
                            arr_46 [i_13] [i_11] [9LL] [i_13] = ((/* implicit */long long int) min((((unsigned long long int) min((8U), (((/* implicit */unsigned int) -2038317833))))), (((/* implicit */unsigned long long int) ((signed char) ((unsigned char) 2))))));
                            var_34 = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) (signed char)101)), (4294967295U))), (((((/* implicit */unsigned int) ((((/* implicit */int) var_15)) / (((/* implicit */int) (signed char)-12))))) * (((4294967274U) * (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
                        }
                    } 
                } 
                var_35 = ((/* implicit */unsigned long long int) min((var_35), (((unsigned long long int) (short)32735))));
                arr_47 [i_0] [i_11 + 1] [0ULL] = ((/* implicit */unsigned long long int) 3695160280U);
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 4) 
                {
                    for (int i_16 = 0; i_16 < 11; i_16 += 4) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) 3U))) && (((/* implicit */_Bool) 1674936348U)))))));
                            var_37 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-104), (((/* implicit */signed char) ((37ULL) != (((/* implicit */unsigned long long int) 3410843461U))))))))) * ((-(((18446744073709551584ULL) - (((/* implicit */unsigned long long int) 1744006727))))))));
                            arr_53 [i_0] [i_11] [i_12] [(signed char)9] [i_15] [i_16] = ((unsigned long long int) 3311041791U);
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned int i_17 = 0; i_17 < 11; i_17 += 4) 
            {
                for (int i_18 = 3; i_18 < 7; i_18 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_19 = 2; i_19 < 10; i_19 += 3) 
                        {
                            var_38 = ((/* implicit */unsigned int) (short)12543);
                            arr_63 [i_19] = ((/* implicit */int) ((unsigned long long int) (~(1617107813))));
                        }
                        /* vectorizable */
                        for (unsigned char i_20 = 3; i_20 < 10; i_20 += 4) 
                        {
                            arr_66 [i_0 - 3] [i_11] [i_17] [i_18 - 1] [i_20 - 1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_17] [i_18 - 2] [i_18 - 2] [i_20]))) >= (901265025U)));
                            var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 288732307)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-49))) : (0ULL)))) ? (((/* implicit */int) ((unsigned char) var_0))) : (((/* implicit */int) (short)32735))));
                            var_40 = ((/* implicit */int) ((((/* implicit */_Bool) 6193855266942446394ULL)) && (((/* implicit */_Bool) 47ULL))));
                            arr_67 [i_0 - 1] [i_11] [i_11 - 1] [i_0] [i_20] [i_11 - 1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                            var_41 -= ((/* implicit */unsigned long long int) ((short) 18075776015119573145ULL));
                        }
                        var_42 = ((/* implicit */unsigned long long int) var_11);
                        var_43 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)32732))));
                    }
                } 
            } 
            var_44 &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) (short)-9791)) ? (1837492844591718553ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (1387685659U))))))));
            /* LoopNest 2 */
            for (signed char i_21 = 3; i_21 < 10; i_21 += 3) 
            {
                for (int i_22 = 0; i_22 < 11; i_22 += 3) 
                {
                    {
                        var_45 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32717))) % (((((/* implicit */_Bool) -1545496774)) ? (4095ULL) : (((/* implicit */unsigned long long int) (-(4294967292U))))))));
                        var_46 -= ((/* implicit */short) ((min((max((var_1), (((/* implicit */unsigned long long int) 8721001981272999115LL)))), (((/* implicit */unsigned long long int) var_9)))) << (((/* implicit */int) max((((_Bool) 2147483647)), (((18446744073709551615ULL) <= (18075776015119573141ULL))))))));
                    }
                } 
            } 
        }
        for (unsigned char i_23 = 1; i_23 < 10; i_23 += 3) 
        {
            arr_78 [i_0] = ((/* implicit */unsigned long long int) ((int) (short)-16308));
            var_47 = ((/* implicit */unsigned long long int) var_5);
            var_48 = ((/* implicit */unsigned int) max((min((12252888806767105216ULL), (((/* implicit */unsigned long long int) 8721001981272999114LL)))), (((/* implicit */unsigned long long int) max((arr_0 [i_0 + 1] [i_23 + 1]), (arr_0 [i_0 + 2] [i_23 + 1]))))));
            arr_79 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1093))) != (16U)));
        }
        var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) ((((_Bool) -938606817)) || (((/* implicit */_Bool) var_7)))))));
    }
    var_50 = 3311041791U;
}
