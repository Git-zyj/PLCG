/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134689
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 4; i_2 < 10; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        {
                            arr_18 [i_1] [2U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)64280)) ? (((((/* implicit */_Bool) var_15)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-118))))) : (((((/* implicit */_Bool) arr_3 [i_3])) ? (var_8) : (var_8)))));
                            arr_19 [i_4] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1])))) && (((/* implicit */_Bool) (~(-9023828829450199277LL))))));
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((arr_10 [i_0] [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 1]))))))));
            var_20 = ((/* implicit */unsigned short) arr_7 [i_1]);
        }
        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            arr_23 [i_0] [i_5] |= ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_16))))) ^ (max((arr_6 [i_0] [i_5]), (((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_5] [i_5]))))))));
            arr_24 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) min((var_13), (var_13)))))));
        }
        for (unsigned char i_6 = 1; i_6 < 12; i_6 += 1) 
        {
            arr_29 [i_0] [i_6 - 1] [(signed char)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0])) ? (arr_16 [i_0]) : (arr_16 [i_0])))) ? (((((/* implicit */_Bool) arr_16 [i_6 + 1])) ? (arr_16 [i_0]) : (arr_16 [i_0]))) : (min((arr_16 [i_6 + 2]), (arr_16 [i_6 + 1])))));
            arr_30 [i_6] &= ((/* implicit */unsigned short) max(((+(((arr_7 [i_0]) ? (9023828829450199301LL) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0]))))))), (((/* implicit */long long int) (-(arr_6 [i_0] [i_6]))))));
        }
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 14; i_7 += 2) 
        {
            for (unsigned short i_8 = 2; i_8 < 13; i_8 += 1) 
            {
                {
                    arr_35 [i_0] [i_0] [i_8] = (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned short)51054))))));
                    /* LoopSeq 1 */
                    for (signed char i_9 = 4; i_9 < 12; i_9 += 1) 
                    {
                        arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14471)) ? (-4229176539437848957LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32743)))));
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (~(((/* implicit */int) max(((unsigned short)51064), (((/* implicit */unsigned short) arr_37 [i_8 - 2]))))))))));
                        var_22 = ((/* implicit */long long int) max((var_22), (((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_27 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_28 [i_0]))))))) ? (((max((((/* implicit */long long int) arr_28 [i_0])), (var_0))) >> (((((((/* implicit */_Bool) arr_14 [i_8 - 1] [i_8] [i_7] [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */long long int) var_7)) : (var_13))) - (2969560212LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) min((arr_28 [i_8 - 2]), (((/* implicit */short) (signed char)-118))))) <= ((-(((/* implicit */int) (signed char)-118))))))))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 2) 
                        {
                            arr_43 [i_10] [i_9 + 2] [i_8] [i_0] = ((arr_8 [i_0] [i_0]) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_8)))) ? ((~(var_13))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)14481), (((/* implicit */unsigned short) var_15))))))))));
                            arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_6)) >> (((min((max((((/* implicit */long long int) -1248912456)), (4229176539437848940LL))), (arr_11 [i_0] [i_9 - 1] [i_7] [i_0]))) + (6262019380800555392LL)))));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)-4)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51054)))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34951))) : (arr_27 [i_7]))))) : (((/* implicit */int) var_4))));
                        }
                        for (short i_11 = 0; i_11 < 14; i_11 += 2) 
                        {
                            arr_47 [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(9953190681657616157ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : ((-(arr_8 [i_7] [i_0])))))) ? (((arr_46 [i_11] [i_11] [i_9] [i_9 - 1] [i_8] [i_7] [i_0]) / (((/* implicit */long long int) -1248912456)))) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) 9023828829450199273LL)))) ? (((/* implicit */int) ((-9023828829450199277LL) < (((/* implicit */long long int) 2077501049U))))) : (-394196820)))));
                            var_24 = ((/* implicit */long long int) max((var_24), (min((((/* implicit */long long int) arr_34 [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) ((arr_6 [i_0] [i_0]) >> (((var_8) + (606019446178610877LL)))))) ? (((((/* implicit */long long int) arr_25 [i_0])) / (var_1))) : (((((/* implicit */_Bool) var_9)) ? (arr_16 [i_0]) : (((/* implicit */long long int) -677189194))))))))));
                        }
                        for (long long int i_12 = 0; i_12 < 14; i_12 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_12] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9553))) : (arr_10 [i_12] [i_9] [i_8] [i_7] [i_12])))))) ? (((((/* implicit */_Bool) arr_32 [i_8 + 1])) ? (arr_32 [i_8 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_12] [i_9 - 2] [i_9] [i_9] [i_9 + 2] [i_12]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)1023)) ? (4273852610U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-14818))))))));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(max((((/* implicit */long long int) 2077501048U)), (var_10)))))) ? (arr_49 [i_0] [i_12] [i_9 + 2] [i_12]) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 7262500402572835233ULL)))) : (((-4229176539437848973LL) & (((/* implicit */long long int) arr_39 [i_12] [i_7] [(signed char)10] [i_12] [i_12] [i_8] [(_Bool)1]))))))));
                            arr_50 [i_0] [i_7] [i_8] [0U] [i_12] = ((var_7) << (((max((arr_33 [i_0] [i_8 - 2] [i_9]), (arr_33 [i_8] [i_8 + 1] [i_8]))) - (1700298754U))));
                        }
                        for (long long int i_13 = 0; i_13 < 14; i_13 += 3) /* same iter space */
                        {
                            arr_54 [i_0] = ((/* implicit */signed char) (-((-(368161597554122838LL)))));
                            arr_55 [i_0] [i_0] [i_8 - 1] [i_9] [(unsigned short)6] [i_9 + 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (signed char)(-127 - 1))), (var_16))))) ^ (min((((/* implicit */unsigned int) var_5)), (arr_27 [i_8])))))) ? ((((_Bool)1) ? (((/* implicit */int) max((((/* implicit */short) arr_37 [i_8])), (arr_2 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_7] [i_7] [i_8] [i_9] [i_13] [i_0] [i_0]))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (arr_11 [i_9 + 2] [i_0] [i_0] [i_8 - 1]))))));
                            arr_56 [i_0] [i_7] [i_8 - 1] = ((/* implicit */int) max((((/* implicit */long long int) (unsigned short)55979)), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_34 [i_13] [i_8] [i_8]))))), (arr_16 [i_0])))));
                        }
                    }
                    arr_57 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (_Bool)1);
                }
            } 
        } 
    }
    for (short i_14 = 3; i_14 < 18; i_14 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_15 = 0; i_15 < 21; i_15 += 1) 
        {
            for (signed char i_16 = 1; i_16 < 18; i_16 += 3) 
            {
                {
                    arr_65 [i_16] [i_16] [i_16] [(signed char)3] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)49347)), ((((_Bool)1) ? ((~(arr_63 [i_14] [i_15] [i_16 + 2]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))))));
                    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? ((-(((/* implicit */int) arr_59 [i_16] [i_14 - 3])))) : (((/* implicit */int) ((2496410630553269328LL) <= (-9023828829450199277LL))))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 2; i_17 < 19; i_17 += 4) 
                    {
                        for (short i_18 = 1; i_18 < 20; i_18 += 4) 
                        {
                            {
                                var_28 |= ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (~(-4229176539437848964LL))))) % ((-(((/* implicit */int) (short)-14818))))));
                                var_29 -= ((/* implicit */long long int) ((((((/* implicit */int) arr_66 [i_17 - 2] [i_17] [i_17] [i_14 + 2])) & (((/* implicit */int) arr_66 [i_17 - 1] [i_17] [i_17] [i_14 - 1])))) ^ (((((/* implicit */_Bool) arr_66 [i_17 - 2] [i_17] [i_17] [i_14 + 3])) ? (((/* implicit */int) arr_66 [i_17 + 2] [i_17] [i_17] [i_14 + 2])) : (((/* implicit */int) arr_66 [i_17 - 2] [i_17] [i_17] [i_14 - 2]))))));
                                arr_72 [i_16] [i_15] [(signed char)4] [18ULL] [i_18 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_69 [i_17] [i_17 - 2] [i_17 + 2] [i_17] [i_17 + 1] [i_17] [i_17 + 2]))) ? (((((/* implicit */_Bool) arr_69 [i_17 + 2] [i_17 + 2] [i_17 + 2] [i_17 + 2] [i_17 - 2] [i_17 + 1] [i_17])) ? (arr_69 [i_17] [i_17 - 2] [i_17 + 2] [i_17 - 2] [i_17 - 1] [(_Bool)1] [i_17]) : (arr_69 [i_17] [i_17 + 1] [i_17 + 2] [i_17 - 2] [i_17 - 2] [i_17 + 1] [i_17]))) : (((((/* implicit */_Bool) arr_69 [i_17] [i_17 + 1] [i_17 + 2] [i_17] [i_17 - 1] [i_17] [i_17 + 1])) ? (arr_69 [i_17] [i_17 + 1] [i_17 - 2] [i_17 + 1] [i_17 - 1] [i_17] [i_17 + 2]) : (arr_69 [i_17] [i_17 - 1] [i_17 - 2] [i_17] [i_17 + 1] [i_17] [i_17 - 2])))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */long long int) ((((((/* implicit */int) var_16)) == (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_62 [i_14] [i_16] [i_16])) : (((/* implicit */int) (unsigned char)171)))))) ? (((/* implicit */int) (((-(-9023828829450199270LL))) < (-4229176539437848957LL)))) : (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) arr_66 [i_14] [i_16] [(unsigned short)19] [i_15])))), (((/* implicit */int) var_2))))));
                }
            } 
        } 
        arr_73 [i_14] = ((/* implicit */signed char) (-(min((((/* implicit */long long int) ((((/* implicit */_Bool) -4229176539437848957LL)) && (((/* implicit */_Bool) arr_62 [i_14] [(short)1] [i_14 + 2]))))), (var_0)))));
    }
    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9023828829450199277LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55979))) : (-3375382052905412362LL)));
}
