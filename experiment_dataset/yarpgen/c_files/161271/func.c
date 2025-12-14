/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161271
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
    for (short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 3) /* same iter space */
        {
            arr_4 [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [(unsigned char)2]))) : (arr_0 [i_0])))));
            var_16 = ((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) (signed char)85)))));
        }
        for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 3) /* same iter space */
        {
            arr_8 [i_0] [i_0] [i_2] = (!(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0])))))) < (var_5))));
            arr_9 [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0])) ? ((((-(((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 11104992288428225645ULL))))))) : ((+(((/* implicit */int) min(((_Bool)1), (arr_1 [i_0] [i_0]))))))));
        }
        for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 3) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned long long int) 1702314894U);
            var_18 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15652)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [(unsigned char)4])))) && (((/* implicit */_Bool) arr_7 [4LL])))) ? (((/* implicit */int) arr_1 [6U] [(unsigned char)6])) : (((/* implicit */int) max((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_2 [(unsigned short)10])))), ((!(arr_5 [i_3] [(_Bool)1] [i_0]))))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_4 = 2; i_4 < 18; i_4 += 2) 
        {
            arr_15 [i_0] [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_4])) <= (((/* implicit */int) arr_11 [i_0] [i_0]))))) : ((-(((/* implicit */int) (short)-1))))));
            arr_16 [i_0] [i_0] = ((/* implicit */signed char) 0U);
            arr_17 [i_0] [i_0] = ((/* implicit */unsigned char) ((1471669306) + (((/* implicit */int) arr_5 [i_0] [i_0] [i_0 - 2]))));
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) arr_2 [i_0]))));
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_22 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)14516)) : (((/* implicit */int) (unsigned short)24283)))))));
            /* LoopSeq 3 */
            for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_6 [i_0] [i_6]) ? (((/* implicit */unsigned int) -2147483642)) : (2138527864U)))) ? (((/* implicit */int) arr_24 [i_0 + 1])) : (((/* implicit */int) (unsigned char)141))));
                var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)6))));
            }
            for (unsigned short i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_8 = 1; i_8 < 19; i_8 += 2) 
                {
                    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_13 [i_5] [i_5] [i_5]))))));
                            arr_33 [i_0 + 2] [i_0 + 2] [3LL] [i_7] [i_7] [i_8] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_0 - 1] [11LL] [i_0 + 1] [i_0])) ? ((~(((/* implicit */int) (unsigned short)1)))) : (((/* implicit */int) arr_6 [i_5] [i_7]))));
                            var_23 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24283))) : (1069032326715788729ULL)));
                        }
                    } 
                } 
                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_12 [i_0])))) ? (arr_12 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
            }
            for (unsigned short i_10 = 0; i_10 < 20; i_10 += 1) /* same iter space */
            {
                arr_36 [i_0] [i_5] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (-5430450603715529380LL))))));
                var_25 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_20 [i_0 - 1] [i_0]))));
            }
        }
    }
    /* LoopNest 2 */
    for (short i_11 = 0; i_11 < 21; i_11 += 3) 
    {
        for (unsigned char i_12 = 0; i_12 < 21; i_12 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_13 = 0; i_13 < 21; i_13 += 1) 
                {
                    var_26 = ((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */unsigned long long int) arr_40 [i_11])), (((((/* implicit */_Bool) (signed char)14)) ? (17780103725556812533ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_13] [i_11]))))))));
                    arr_45 [i_11] [i_11] [16U] [i_13] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) 1738090455U)) ? (((/* implicit */int) (unsigned short)29453)) : (((/* implicit */int) arr_37 [i_11])))) >= ((~(((/* implicit */int) (short)-18917)))))) ? (((((((/* implicit */unsigned long long int) var_11)) != (var_7))) ? (((/* implicit */int) (_Bool)1)) : ((~(arr_39 [i_11] [i_13]))))) : (((/* implicit */int) (_Bool)1))));
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_13]))) == (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_44 [i_11] [i_11])) + (var_15)))), (((arr_37 [i_11]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41246))) : (1069032326715788729ULL)))))));
                }
                for (int i_14 = 0; i_14 < 21; i_14 += 3) 
                {
                    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) min((arr_42 [i_14] [i_12]), (((/* implicit */unsigned char) (_Bool)1)))))))) ? (max((((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))) : (arr_47 [i_11] [i_12] [i_12]))), (((/* implicit */unsigned long long int) 3056036669U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (var_5)))))))));
                    var_29 = ((/* implicit */unsigned char) ((short) (+(((((/* implicit */_Bool) (short)-18923)) ? (((/* implicit */int) arr_40 [i_11])) : (var_15))))));
                    var_30 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_11] [i_12])))))));
                    var_31 ^= ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) <= (((((/* implicit */int) arr_42 [3ULL] [i_12])) ^ (((/* implicit */int) arr_42 [i_12] [i_12])))))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_10)) : (arr_47 [i_11] [i_11] [i_11])))) : (((/* implicit */unsigned long long int) arr_46 [(_Bool)1] [i_12] [i_14]))));
                    var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_44 [i_11] [i_12])) * (((/* implicit */int) (unsigned char)153)))))));
                }
                arr_48 [i_11] [15ULL] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)24283)) / (((/* implicit */int) (unsigned char)244))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((6938644974237462591LL) < (((/* implicit */long long int) ((/* implicit */int) (short)32761))))))) : (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_11] [i_11]))) : (var_6))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) (unsigned char)251)) : (arr_39 [i_11] [i_11]))))))));
                var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)128)) >> (((83204234) - (83204226)))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)194)), (var_1))))));
            }
        } 
    } 
}
