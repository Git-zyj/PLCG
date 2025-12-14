/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188031
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)39240))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_15 [1U] [i_1] [i_4] [i_4] [i_4] [i_4 + 1]))));
                                var_19 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_4]))));
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 708639389U)) ? (((/* implicit */int) arr_11 [i_3 - 2] [i_4 - 1] [i_2 - 2])) : (((/* implicit */int) arr_11 [i_3 + 2] [i_4 - 1] [i_2 + 1]))));
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-14435)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_2 - 1] [i_4 - 2] [i_4 - 2] [i_3 + 2])) : (((/* implicit */int) arr_12 [(unsigned char)2] [i_1] [i_2 + 1] [i_4 - 2] [i_4 + 2] [i_3 - 2]))));
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (((-(((/* implicit */int) var_15)))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32765))) == (arr_3 [i_1] [i_2 - 2])))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 952986341755317305LL)) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_10 [i_0] [i_1] [i_2 + 1]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [6U] [6U] [6U] [i_2 - 2] [i_2 - 1]))) | (arr_3 [i_0] [i_2])))));
                    arr_16 [i_0] [i_1] [(short)10] &= ((/* implicit */short) ((unsigned short) arr_15 [i_2 + 1] [(short)4] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 2]));
                    var_24 = ((/* implicit */short) var_4);
                    /* LoopSeq 1 */
                    for (short i_5 = 3; i_5 < 8; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 2; i_6 < 10; i_6 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) (-(708639403U)));
                            arr_21 [i_1] [i_2 - 1] = ((/* implicit */unsigned short) (+(var_10)));
                            arr_22 [i_0] [i_0] [7U] [i_1] [i_6 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)9)) ? (15ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5775)))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)56779)) ? (((/* implicit */int) (short)32752)) : (((/* implicit */int) (unsigned char)206)))))));
                            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_7])) ? (((/* implicit */int) (unsigned char)71)) : (((/* implicit */int) (short)9227))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) < (var_1)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [i_0] [i_7])) : (((/* implicit */int) var_16)))))))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)44096))))) ? ((-(3586327907U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5 - 2] [i_5 - 1] [i_5] [i_5 + 3] [i_5 + 1] [i_5 + 1])))));
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) arr_1 [i_0]))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 12; i_9 += 4) /* same iter space */
                        {
                            arr_31 [i_1] [i_1] [i_5] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0])) & (((/* implicit */int) var_4))));
                            arr_32 [(short)9] [i_1] [i_5] [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) var_14))));
                            arr_33 [i_1] [3ULL] [11U] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (short)-32753)) ? (-2981271273953336857LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))));
                            arr_34 [i_0] [i_1] [i_2 - 2] [i_5] [i_1] = ((/* implicit */long long int) ((arr_29 [i_0] [0ULL] [0ULL] [0ULL] [i_5 + 3] [(short)1]) >> (((((/* implicit */int) var_8)) - (43153)))));
                        }
                        var_30 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_9 [i_0] [i_1] [i_2 - 2] [i_5])) / (((/* implicit */int) var_17)))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32755))) > (8137239879987665292ULL))))));
                    }
                }
            } 
        } 
        arr_35 [i_0] [i_0] = ((/* implicit */short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) + (arr_23 [(short)0] [(unsigned short)5] [i_0] [i_0] [i_0])))));
    }
    for (short i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
    {
        arr_40 [(unsigned short)6] [(unsigned short)6] = ((/* implicit */long long int) ((short) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)5351)) : (((/* implicit */int) var_9)))))));
        arr_41 [i_10] = (+(0ULL));
    }
    /* vectorizable */
    for (short i_11 = 4; i_11 < 15; i_11 += 2) 
    {
        arr_45 [i_11] = ((/* implicit */short) arr_44 [i_11 - 4] [i_11 + 2]);
        /* LoopSeq 3 */
        for (unsigned char i_12 = 0; i_12 < 19; i_12 += 3) 
        {
            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) arr_44 [i_11] [i_12]))));
            var_32 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_48 [i_12]))));
            var_33 = ((/* implicit */unsigned int) var_15);
        }
        for (unsigned short i_13 = 2; i_13 < 18; i_13 += 4) 
        {
            arr_52 [i_11 - 2] [i_11] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)251)) >= (((/* implicit */int) (short)-9221))))) % (((/* implicit */int) (unsigned char)19))));
            /* LoopSeq 2 */
            for (unsigned short i_14 = 0; i_14 < 19; i_14 += 3) 
            {
                /* LoopNest 2 */
                for (short i_15 = 3; i_15 < 17; i_15 += 3) 
                {
                    for (unsigned char i_16 = 2; i_16 < 18; i_16 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned char) var_7);
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)32768)) >> (((((/* implicit */int) var_17)) - (2243)))))) ? (((/* implicit */int) arr_50 [i_14] [(short)14])) : (((/* implicit */int) ((((/* implicit */_Bool) 2ULL)) || (((/* implicit */_Bool) (short)9501)))))));
                            var_36 = ((/* implicit */unsigned char) var_10);
                        }
                    } 
                } 
                var_37 += ((/* implicit */unsigned char) (-(((/* implicit */int) arr_58 [i_11 - 3] [i_11 + 4] [i_11 - 4] [i_11 - 3] [i_11 - 2]))));
            }
            for (short i_17 = 2; i_17 < 18; i_17 += 2) 
            {
                arr_63 [i_11] [i_13 - 2] [i_13 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)9227)) ? (((/* implicit */int) arr_51 [i_17 - 2])) : (((/* implicit */int) arr_51 [i_17 + 1]))));
                arr_64 [i_11] [i_11] [i_17] [i_17 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_17)) > (((/* implicit */int) var_4)))) && (((/* implicit */_Bool) arr_44 [i_11] [i_11]))));
            }
            var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((short) arr_58 [i_11 - 3] [i_13 + 1] [i_11] [i_11 - 2] [i_11 + 2])))));
            var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) ((651713333852114444LL) + (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
        }
        for (unsigned long long int i_18 = 0; i_18 < 19; i_18 += 1) 
        {
            var_40 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (unsigned char)49))))));
            var_41 += ((/* implicit */unsigned short) (-(var_7)));
        }
    }
    /* vectorizable */
    for (short i_19 = 1; i_19 < 21; i_19 += 3) 
    {
        arr_69 [i_19] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_67 [i_19])) << (((((/* implicit */int) arr_68 [i_19 + 3] [i_19 + 2])) - (183)))));
        arr_70 [i_19] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) var_8)))));
    }
    /* LoopNest 2 */
    for (long long int i_20 = 3; i_20 < 21; i_20 += 4) 
    {
        for (unsigned char i_21 = 4; i_21 < 21; i_21 += 2) 
        {
            {
                arr_77 [i_20] [i_21] [i_21 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_74 [i_21] [i_21 - 1])) ? (((/* implicit */int) arr_74 [i_21] [i_21 - 3])) : (((/* implicit */int) arr_74 [i_21 - 1] [i_21 - 3]))))) ? (((/* implicit */unsigned long long int) ((unsigned int) (-(3586327888U))))) : ((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)15360))))) : (((((/* implicit */_Bool) 708639389U)) ? (arr_73 [i_20]) : (((/* implicit */unsigned long long int) var_7))))))));
                var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) min((14101000734997107639ULL), (((/* implicit */unsigned long long int) (unsigned short)32774))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)31)), (var_17)))) : (((/* implicit */int) ((unsigned short) (short)32753)))))))));
                var_43 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-32764)) / (((/* implicit */int) (unsigned char)187))))) | (((((/* implicit */_Bool) var_3)) ? (67108848ULL) : (arr_75 [i_20] [i_20] [(unsigned short)18])))))) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250))) : (var_7)))))) : ((~(((((/* implicit */_Bool) (short)-14905)) ? (var_10) : (((/* implicit */long long int) var_14))))))));
                var_44 &= ((/* implicit */short) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) arr_68 [i_20] [i_20])), ((short)32767)))) && (((/* implicit */_Bool) arr_68 [(short)14] [i_21 - 4]))))), (min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 0ULL))))), ((unsigned short)33214)))));
                var_45 = ((/* implicit */short) ((unsigned char) (~(arr_76 [i_20 - 3] [i_21 - 2] [i_21]))));
            }
        } 
    } 
    var_46 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (short)-3407)))))))))));
    var_47 = min((((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned short) (short)-14678))))), (((((/* implicit */_Bool) 3238856810U)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)-9710))))) : (((708639384U) << (((185534634242861711ULL) - (185534634242861700ULL))))))));
}
