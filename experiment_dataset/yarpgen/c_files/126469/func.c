/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126469
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
    for (long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        arr_4 [i_0 + 2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 8342804832465128375ULL))));
        var_13 &= ((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_0 - 1]));
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 17; i_1 += 4) /* same iter space */
        {
            arr_7 [i_0] [i_1] [i_0] = 8ULL;
            /* LoopSeq 2 */
            for (short i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                arr_10 [i_2] [i_1] [i_2] = ((unsigned long long int) (+(((arr_8 [i_2] [i_1] [i_2] [4ULL]) >> (((var_5) + (163334729672718980LL)))))));
                arr_11 [12LL] [4ULL] [i_2] = (+(max((var_11), (((/* implicit */long long int) arr_9 [i_0 - 1])))));
            }
            for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 3) 
            {
                arr_14 [1ULL] [i_1] [i_1] = ((/* implicit */short) arr_5 [i_0]);
                var_14 *= 8342804832465128375ULL;
            }
            arr_15 [i_0] [i_0] = ((unsigned int) ((((/* implicit */_Bool) 10103939241244423264ULL)) ? (21ULL) : (18446744073709551607ULL)));
        }
        /* vectorizable */
        for (short i_4 = 2; i_4 < 17; i_4 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) 1ULL)) ? (arr_13 [i_4] [i_4] [1ULL]) : (0ULL))));
            arr_19 [i_0] [i_0] = (((!(((/* implicit */_Bool) arr_6 [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0])) || (((/* implicit */_Bool) arr_0 [i_4])))))) : (arr_13 [i_0] [i_4 + 2] [i_4 + 2]));
            var_16 = ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [18ULL]))) ? (((((/* implicit */_Bool) 0ULL)) ? (0ULL) : (8ULL))) : (arr_13 [i_0 + 2] [i_0 - 1] [i_4 - 2]));
        }
    }
    for (unsigned int i_5 = 3; i_5 < 18; i_5 += 1) 
    {
        var_17 = ((/* implicit */short) ((((var_4) <= (((/* implicit */unsigned long long int) max((arr_20 [i_5]), (var_5)))))) ? (((((/* implicit */_Bool) ((long long int) arr_20 [i_5]))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_5]))) : (16462015179264391179ULL))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [4ULL]))) : (5528033786919698488ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_5 + 3])) ? (((/* implicit */int) arr_21 [i_5 + 3])) : (((/* implicit */int) arr_21 [i_5 + 3])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 2) 
        {
            for (unsigned int i_7 = 1; i_7 < 20; i_7 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */long long int) ((unsigned long long int) max((((/* implicit */unsigned long long int) (short)-26310)), (1152921504606846975ULL))));
                    var_19 = ((min((var_4), (((/* implicit */unsigned long long int) arr_25 [i_5 - 1] [i_6 - 1])))) >> (((((((/* implicit */_Bool) arr_25 [i_5 - 3] [i_6 - 1])) ? (arr_25 [i_5 - 2] [i_6 + 1]) : (2147483648U))) - (2486973552U))));
                }
            } 
        } 
        arr_28 [i_5] = min((((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) arr_22 [i_5] [i_5])))), ((~(arr_27 [i_5]))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */_Bool) ((long long int) 0ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned long long int) (short)30584)) == ((~(0ULL))))))) : (arr_26 [20ULL] [20ULL] [i_5])))));
    }
    for (unsigned long long int i_8 = 2; i_8 < 16; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 2; i_9 < 13; i_9 += 1) 
        {
            for (unsigned int i_10 = 2; i_10 < 15; i_10 += 3) 
            {
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_10 + 2])), (arr_5 [i_8 - 1])))) ? (21ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((5528033786919698489ULL), (((/* implicit */unsigned long long int) var_7))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_8] [i_9 + 2])) ? (arr_26 [i_8 - 1] [i_9] [i_10]) : (arr_8 [5U] [9ULL] [i_10] [i_10]))))))))));
                    arr_35 [i_8] [i_9] [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))));
                    var_22 = ((/* implicit */unsigned int) ((((0ULL) < (arr_13 [i_8] [i_9 - 1] [i_10]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_3 [i_8] [i_9 - 1])))))) : (arr_29 [0U] [i_9 - 1])));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_33 [i_8 - 1] [i_8] [9ULL] [14ULL]))));
        arr_36 [i_8] = ((/* implicit */long long int) (short)8);
    }
    for (unsigned int i_11 = 2; i_11 < 9; i_11 += 2) 
    {
        var_24 = ((unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_11 + 1] [i_11 + 2])) ? (((/* implicit */unsigned long long int) 2147483637U)) : (1064629506833947260ULL)));
        var_25 = min((((unsigned long long int) ((((/* implicit */_Bool) 15397743993699902532ULL)) ? (-5614097136966983528LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))), (((/* implicit */unsigned long long int) ((short) ((unsigned long long int) (short)-11071)))));
        arr_39 [7ULL] &= ((/* implicit */long long int) (+((-(((((/* implicit */_Bool) arr_21 [i_11])) ? (var_12) : (((/* implicit */unsigned long long int) arr_25 [i_11] [i_11]))))))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_12 = 4; i_12 < 20; i_12 += 4) 
    {
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_40 [i_12 + 2] [i_12 - 3]) ^ (arr_40 [i_12 - 1] [i_12 - 4])))) ? (((/* implicit */unsigned long long int) ((unsigned int) 4294967295U))) : (((unsigned long long int) arr_40 [i_12] [6ULL]))));
        var_27 -= arr_40 [0U] [i_12];
        /* LoopSeq 3 */
        for (unsigned long long int i_13 = 1; i_13 < 19; i_13 += 1) 
        {
            var_28 = ((/* implicit */short) arr_41 [18ULL]);
            arr_46 [i_12] [i_12 + 1] [i_13] = ((((/* implicit */_Bool) ((((var_10) < (var_10))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_44 [14ULL] [17ULL] [i_13])) && (((/* implicit */_Bool) arr_44 [2ULL] [i_12] [13ULL]))))) : (((((/* implicit */_Bool) arr_40 [9ULL] [16U])) ? (((/* implicit */int) arr_45 [i_13] [i_13] [i_13])) : (((/* implicit */int) arr_45 [i_12] [15ULL] [i_13]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_43 [i_12] [i_13] [12ULL]) < (var_12))))) < (min((18446744073709551615ULL), (arr_41 [i_12 - 1]))))))) : ((~(((unsigned long long int) arr_40 [i_12] [6ULL])))));
            arr_47 [i_13] [i_13] = ((/* implicit */short) ((5934980330895830114ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 3932484291U)) ? (arr_43 [2LL] [i_12 - 4] [i_12 - 4]) : (arr_43 [i_12 - 2] [i_12] [i_13 + 1]))) != (((/* implicit */unsigned long long int) var_11))))))));
            arr_48 [i_13] [9ULL] [11ULL] = arr_44 [i_12] [i_12] [i_13];
        }
        for (unsigned long long int i_14 = 4; i_14 < 19; i_14 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) * (var_4)))) ? (max((var_8), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_2)), (arr_50 [i_12] [i_14]))))))) ? (var_10) : (((/* implicit */unsigned long long int) (~(5422175404979383739LL))))));
            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) min((arr_44 [13U] [i_14] [4ULL]), (arr_42 [10ULL] [i_12]))))));
            var_31 |= ((/* implicit */unsigned int) var_7);
        }
        for (unsigned long long int i_15 = 4; i_15 < 19; i_15 += 1) /* same iter space */
        {
            arr_55 [i_15] = ((min((((/* implicit */unsigned long long int) arr_52 [i_12 - 2])), (arr_53 [i_12 - 2]))) & (((/* implicit */unsigned long long int) ((unsigned int) arr_50 [i_12 - 2] [i_15]))));
            var_32 = min((arr_44 [i_12] [19ULL] [i_12 + 1]), (((/* implicit */unsigned long long int) 198668742U)));
        }
    }
    for (unsigned long long int i_16 = 2; i_16 < 10; i_16 += 3) 
    {
        arr_59 [6ULL] = ((/* implicit */unsigned long long int) var_5);
        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_18 [i_16 + 1] [i_16 + 1])) ? (arr_18 [i_16 - 1] [i_16 - 2]) : (arr_26 [15ULL] [i_16 - 2] [11U]))))))));
    }
    var_34 = ((/* implicit */unsigned int) var_5);
}
