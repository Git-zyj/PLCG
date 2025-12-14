/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111221
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            arr_5 [10] = ((/* implicit */unsigned long long int) ((long long int) var_4));
            arr_6 [(short)4] [(signed char)0] |= ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) (short)29316)), (2799766573647619042LL))), (((((/* implicit */_Bool) 8019371192535278924ULL)) ? (2799766573647619063LL) : (-2799766573647619043LL)))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (short i_3 = 1; i_3 < 10; i_3 += 2) 
            {
                arr_11 [i_0] [i_0] [0ULL] [0U] = ((/* implicit */int) ((((/* implicit */_Bool) (-((~(-2799766573647619053LL)))))) ? (((((/* implicit */unsigned long long int) min((2799766573647619040LL), (((/* implicit */long long int) (short)28608))))) | (8796093022207ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((var_12), (arr_8 [1U]))))) | (max((-2799766573647619043LL), (2799766573647619042LL))))))));
                var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((short) min((2799766573647619040LL), (((((/* implicit */long long int) ((/* implicit */int) var_12))) / (var_2)))))))));
            }
            for (unsigned int i_4 = 2; i_4 < 9; i_4 += 4) /* same iter space */
            {
                arr_14 [i_0] [i_2] [i_4] = ((/* implicit */unsigned int) var_1);
                var_14 = ((/* implicit */unsigned long long int) var_7);
                arr_15 [i_4] [i_2 - 2] [9LL] = ((/* implicit */unsigned long long int) ((arr_2 [(signed char)1] [i_2 - 2] [i_2 - 2]) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) min((68413823), (((/* implicit */int) arr_10 [i_0] [i_2 - 1] [i_4 - 2]))))) <= (min((((/* implicit */unsigned long long int) (short)-5151)), (arr_7 [i_0] [i_2 - 1] [i_4])))))))));
                arr_16 [i_0] [i_0] [i_4 + 1] [i_0] = ((/* implicit */unsigned int) (~((-(arr_13 [i_0] [i_0])))));
            }
            for (unsigned int i_5 = 2; i_5 < 9; i_5 += 4) /* same iter space */
            {
                var_15 = ((/* implicit */long long int) arr_8 [i_0]);
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 2) 
                {
                    for (short i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        {
                            arr_27 [i_7] [i_6] [i_6 - 1] [i_5] [i_6] [i_0] = ((/* implicit */signed char) max((((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (-9223372036854775791LL))), (((/* implicit */long long int) ((short) (-(((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))))))));
                            var_16 = ((/* implicit */signed char) 1622099871U);
                            arr_28 [i_6] [i_6 + 2] [i_5] [i_6] = ((/* implicit */signed char) (~(min((-4743499311101007861LL), (((/* implicit */long long int) arr_22 [i_5 - 1] [i_7] [i_7] [i_7]))))));
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_9 = 2; i_9 < 10; i_9 += 2) 
                {
                    arr_33 [i_0] [i_2] [i_2] [i_9 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((/* implicit */unsigned long long int) arr_18 [i_9] [i_9 - 2])) : (((((/* implicit */_Bool) (short)22299)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_8]))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2749075697U)) ? (8816754464672480247LL) : (4743499311101007861LL))))));
                        arr_38 [i_9] [i_10] = ((((/* implicit */unsigned int) ((/* implicit */int) (short)14031))) ^ (1545891577U));
                        arr_39 [i_0] [i_0] [i_0] [i_0] [6LL] = (~(((/* implicit */int) arr_36 [i_2] [i_2] [i_2] [i_2 - 1] [i_9 - 1] [i_9 - 1] [i_10])));
                    }
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_19 [i_0] [i_2] [i_0] [i_9 + 1])))) ? ((-(arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)66)))));
                    var_19 = ((/* implicit */long long int) ((unsigned long long int) arr_21 [i_8] [i_2 + 1] [i_8] [4U]));
                }
                for (long long int i_11 = 1; i_11 < 10; i_11 += 2) 
                {
                    arr_42 [i_0] [i_2] [i_8] [i_11] = var_9;
                    arr_43 [(short)5] [(short)5] [i_8] [8] = ((/* implicit */unsigned int) ((short) -2799766573647619044LL));
                }
                var_20 = ((/* implicit */short) 2799766573647619040LL);
            }
            /* LoopSeq 1 */
            for (unsigned int i_12 = 0; i_12 < 11; i_12 += 1) 
            {
                arr_47 [i_2 - 2] [i_2 - 2] [i_2 + 1] [i_2 - 3] |= ((/* implicit */long long int) ((arr_7 [i_2 - 2] [i_2 + 1] [i_2 - 2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_26 [i_2 - 2] [i_2] [i_2 - 2] [i_2] [i_0] [i_0]))))));
                arr_48 [i_0] [i_2] [i_12] = ((((((/* implicit */_Bool) 1545891596U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))) << (((((int) arr_46 [i_0] [3ULL] [i_0])) + (1190116704))));
                var_21 = ((((/* implicit */_Bool) max((min((2827432766908055072LL), (-4743499311101007883LL))), (((/* implicit */long long int) ((arr_25 [i_0] [i_0] [10ULL] [i_2] [i_0] [i_12]) != (((/* implicit */unsigned long long int) -2799766573647619041LL)))))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-108)), (var_11)))) ? (max((((/* implicit */unsigned int) (signed char)112)), (2749075712U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_32 [i_0] [i_0] [i_0] [i_0] [i_12] [i_12]) < (((/* implicit */long long int) ((/* implicit */int) (signed char)2))))))))) : (2749075706U));
                var_22 += ((/* implicit */unsigned int) ((((min((arr_32 [i_0] [i_0] [i_2] [i_2] [i_0] [(_Bool)1]), (((/* implicit */long long int) (signed char)-42)))) > (((/* implicit */long long int) min((1468169417U), (var_0)))))) ? (min((((/* implicit */unsigned long long int) var_9)), (min((arr_23 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1]), (((/* implicit */unsigned long long int) 2799766573647619037LL)))))) : (((/* implicit */unsigned long long int) 2827432766908055072LL))));
            }
        }
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) min((arr_37 [1LL] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) ((long long int) arr_41 [i_0]))))))));
        arr_49 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(2799766573647619050LL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)114))))) : (((arr_45 [i_0] [i_0] [i_0]) | (12659243923721134813ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((4743499311101007891LL), (((/* implicit */long long int) (signed char)-1))))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_5))))))))) : (18446744073709551615ULL)));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 2) 
    {
        for (long long int i_14 = 0; i_14 < 21; i_14 += 4) 
        {
            for (int i_15 = 1; i_15 < 19; i_15 += 2) 
            {
                {
                    var_24 = ((/* implicit */long long int) ((((/* implicit */long long int) arr_51 [10LL])) > ((-(min((((/* implicit */long long int) 956607304U)), (-4743499311101007883LL)))))));
                    arr_57 [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (-2799766573647619034LL) : (3920160081706765022LL)))) ? (min((((/* implicit */unsigned long long int) (signed char)-83)), (var_1))) : (((unsigned long long int) (short)-20871))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2799766573647619066LL)) ? (((/* implicit */int) (signed char)44)) : (((/* implicit */int) (signed char)-83))))), (((((/* implicit */_Bool) 3338359992U)) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) 463265367U)))))) : (((/* implicit */unsigned long long int) max((min((3338359991U), (((/* implicit */unsigned int) (short)-14834)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4743499311101007881LL))))))))));
                    var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_6), (var_9)))) ? (((/* implicit */unsigned long long int) min((10U), (((/* implicit */unsigned int) (signed char)-91))))) : ((~(var_1))))))));
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (-(arr_51 [i_13]))))) ? (((/* implicit */int) (signed char)99)) : (((/* implicit */int) (!(((/* implicit */_Bool) -4743499311101007859LL)))))));
                }
            } 
        } 
    } 
}
