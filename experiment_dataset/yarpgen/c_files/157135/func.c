/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157135
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
    var_13 = ((/* implicit */unsigned int) var_2);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 4; i_3 < 13; i_3 += 3) 
                    {
                        var_14 &= ((/* implicit */_Bool) (-2147483647 - 1));
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */_Bool) 1311685146U);
                            arr_14 [i_3] [i_3] = ((/* implicit */unsigned int) 1461940901);
                        }
                    }
                    /* LoopSeq 3 */
                    for (signed char i_5 = 1; i_5 < 11; i_5 += 3) 
                    {
                        var_16 |= ((/* implicit */unsigned char) min((var_5), (((/* implicit */short) ((_Bool) (signed char)18)))));
                        var_17 |= ((/* implicit */unsigned char) max((((/* implicit */long long int) 545440056)), (4437322747783167287LL)));
                        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_0))));
                        var_19 = ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) (unsigned short)13061))))) && (((((/* implicit */_Bool) (unsigned char)28)) && (((/* implicit */_Bool) (unsigned short)13059)))));
                    }
                    /* vectorizable */
                    for (signed char i_6 = 4; i_6 < 13; i_6 += 4) 
                    {
                        var_20 -= ((/* implicit */long long int) ((var_4) >= (((/* implicit */long long int) var_10))));
                        /* LoopSeq 4 */
                        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            arr_26 [i_0] [i_0] [12LL] [i_2] [i_6] [i_6] [i_7] |= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)496)) - (((/* implicit */int) var_7))));
                            arr_27 [i_0] [i_0] = ((/* implicit */unsigned char) 135107988821114880LL);
                        }
                        for (unsigned long long int i_8 = 1; i_8 < 11; i_8 += 4) 
                        {
                            var_21 = ((/* implicit */long long int) var_12);
                            var_22 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) & ((-9223372036854775807LL - 1LL)))));
                        }
                        for (short i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            var_23 = ((/* implicit */long long int) ((((var_12) - (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
                            var_24 = ((/* implicit */int) ((((-9223372036854775784LL) + (9223372036854775807LL))) << (((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 14; i_10 += 2) 
                        {
                            arr_35 [i_0] [i_1] [8] [i_10] = ((/* implicit */long long int) var_10);
                            var_25 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)30312)) - (((/* implicit */int) ((_Bool) (unsigned char)150)))));
                            arr_36 [i_0] [i_1] [i_2] [i_2] [i_6] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)106)) | (((/* implicit */int) var_8))));
                            var_26 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)58254)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_9)))));
                        }
                        var_27 *= ((/* implicit */_Bool) var_5);
                    }
                    for (unsigned int i_11 = 0; i_11 < 14; i_11 += 4) 
                    {
                        var_28 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned short)55389)), (((1503694911166819036ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                        var_29 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned char)24), ((unsigned char)24)))) ? ((~(((/* implicit */int) max((((/* implicit */short) (unsigned char)26)), (var_5)))))) : (((((/* implicit */int) var_11)) / (((/* implicit */int) (unsigned char)236))))));
                        var_30 = (!(((/* implicit */_Bool) ((var_9) - (9223372036854775807LL)))));
                        var_31 = ((/* implicit */_Bool) ((min((((/* implicit */long long int) (unsigned char)39)), (var_4))) << (((/* implicit */int) (unsigned char)56))));
                    }
                    var_32 = ((/* implicit */signed char) max((896175932), (((/* implicit */int) var_1))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_12 = 0; i_12 < 13; i_12 += 2) 
    {
        var_33 |= ((/* implicit */unsigned char) max((min((((/* implicit */long long int) -927986816)), (((((/* implicit */long long int) ((/* implicit */int) var_7))) & (var_0))))), (((/* implicit */long long int) min(((unsigned char)101), (((/* implicit */unsigned char) (signed char)60)))))));
        /* LoopSeq 3 */
        for (int i_13 = 0; i_13 < 13; i_13 += 2) 
        {
            arr_44 [i_12] = ((/* implicit */unsigned char) min((((126976LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-33))))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)39)))))));
            arr_45 [3] [i_13] = ((/* implicit */_Bool) max((((short) ((4192959514U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)217)))))), (((/* implicit */short) (((-(((/* implicit */int) var_3)))) <= ((((_Bool)0) ? (-804877205) : (((/* implicit */int) var_3)))))))));
        }
        for (signed char i_14 = 0; i_14 < 13; i_14 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned char i_15 = 2; i_15 < 12; i_15 += 2) 
            {
                for (unsigned short i_16 = 1; i_16 < 12; i_16 += 4) 
                {
                    for (long long int i_17 = 0; i_17 < 13; i_17 += 1) 
                    {
                        {
                            arr_58 [i_16] [i_16] [i_16] [i_17] [i_16] [(_Bool)1] = min((((/* implicit */long long int) (signed char)-60)), (max((((/* implicit */long long int) (short)-26182)), (((((/* implicit */_Bool) (unsigned short)55386)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)251))) : (var_0))))));
                            var_34 *= ((/* implicit */signed char) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)191)) : (((/* implicit */int) (unsigned char)156))))), (0ULL)))));
                            arr_59 [i_17] [i_15] [i_17] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */long long int) min((((/* implicit */unsigned int) var_11)), (2113929216U)))) <= (min((var_0), (((/* implicit */long long int) var_3)))))));
                            arr_60 [i_12] [i_12] [(unsigned char)9] [i_12] [i_17] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)236)) >> (((/* implicit */int) var_7))))), (var_10)));
                            var_35 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (_Bool)1)), (((var_2) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))));
                        }
                    } 
                } 
            } 
            var_36 -= var_7;
            var_37 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)20))) / (max((((/* implicit */unsigned long long int) var_1)), (var_12))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
            /* LoopNest 3 */
            for (int i_18 = 1; i_18 < 10; i_18 += 3) 
            {
                for (short i_19 = 0; i_19 < 13; i_19 += 4) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        {
                            arr_70 [i_20] [(unsigned char)4] = ((((/* implicit */unsigned long long int) 134217728)) - (5107975184270842926ULL));
                            arr_71 [i_20] [i_19] [i_18] [i_14] [i_12] = ((/* implicit */int) max((max((var_9), (((/* implicit */long long int) var_5)))), (min((var_4), (((/* implicit */long long int) var_8))))));
                            arr_72 [i_12] [i_12] [9LL] [i_12] [i_12] = ((/* implicit */long long int) (((+(var_2))) < (((unsigned long long int) var_1))));
                            arr_73 [i_12] [i_14] [i_18] [i_19] [i_20] = ((/* implicit */_Bool) min((13338768889438708690ULL), (((/* implicit */unsigned long long int) 8176695606102766062LL))));
                        }
                    } 
                } 
            } 
            var_38 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)10176)), (max((((/* implicit */int) (unsigned char)65)), ((~(((/* implicit */int) (_Bool)1))))))));
        }
        for (int i_21 = 0; i_21 < 13; i_21 += 3) 
        {
            arr_76 [i_12] [i_12] = ((/* implicit */_Bool) ((((/* implicit */long long int) 985691102)) / (9223372036854775807LL)));
            /* LoopSeq 1 */
            for (signed char i_22 = 0; i_22 < 13; i_22 += 3) 
            {
                /* LoopSeq 1 */
                for (int i_23 = 0; i_23 < 13; i_23 += 3) 
                {
                    var_39 = ((/* implicit */long long int) ((_Bool) 126959LL));
                    arr_82 [i_23] [i_22] [i_22] [i_12] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)27)) || ((_Bool)1)))), (max((((/* implicit */int) (_Bool)1)), (-985691102)))));
                }
                /* LoopSeq 2 */
                for (int i_24 = 0; i_24 < 13; i_24 += 2) 
                {
                    var_40 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (((/* implicit */short) (_Bool)1)))))) / (3608238430U)));
                    var_41 -= ((/* implicit */unsigned int) (_Bool)1);
                }
                /* vectorizable */
                for (long long int i_25 = 3; i_25 < 11; i_25 += 4) 
                {
                    var_42 |= ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
                    var_43 = ((/* implicit */_Bool) ((long long int) (unsigned char)2));
                }
                var_44 = ((/* implicit */unsigned char) 18446744073709551598ULL);
            }
        }
        var_45 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_8)), (((short) (_Bool)1)))))) + ((-9223372036854775807LL - 1LL))));
        arr_90 [i_12] = ((/* implicit */_Bool) (+(11053967931635653136ULL)));
    }
    for (signed char i_26 = 0; i_26 < 16; i_26 += 3) 
    {
        var_46 ^= ((/* implicit */unsigned long long int) ((var_0) == (((/* implicit */long long int) ((/* implicit */int) var_6)))));
        /* LoopNest 2 */
        for (long long int i_27 = 0; i_27 < 16; i_27 += 3) 
        {
            for (signed char i_28 = 0; i_28 < 16; i_28 += 3) 
            {
                {
                    arr_99 [6] |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_3))))) ? (((((/* implicit */int) var_3)) ^ (((/* implicit */int) (_Bool)0)))) : ((~(((/* implicit */int) (short)20235)))))), (((/* implicit */int) (short)327))));
                    arr_100 [i_27] [i_28] [i_27] [i_27] = ((/* implicit */unsigned int) min((((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)))) ? (((var_2) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) 72057593903710208LL))));
                    /* LoopNest 2 */
                    for (unsigned char i_29 = 0; i_29 < 16; i_29 += 2) 
                    {
                        for (unsigned char i_30 = 0; i_30 < 16; i_30 += 2) 
                        {
                            {
                                var_47 ^= ((var_10) <= (((/* implicit */unsigned int) (((-(-511024704))) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) >= (var_2))))))));
                                var_48 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (var_0)))) ? (min((((/* implicit */unsigned long long int) var_0)), (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_3))))));
                                arr_105 [14U] [i_27] [(unsigned short)10] [i_29] [(unsigned char)5] = ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) var_1)))));
                                arr_106 [i_26] [i_26] [i_27] [i_28] [i_27] [14ULL] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)6)))))) < (var_12)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_49 = ((/* implicit */unsigned char) ((min((var_12), (((/* implicit */unsigned long long int) -4041121654907409856LL)))) % (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)15)))) & (((/* implicit */int) var_11)))))));
        arr_107 [i_26] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 3107759894111672078ULL)))))) : (max((((/* implicit */unsigned int) (signed char)24)), (var_10)))));
    }
}
