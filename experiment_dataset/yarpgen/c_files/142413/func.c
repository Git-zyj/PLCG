/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142413
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
    var_12 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) > ((-(-9223372036854775798LL))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (-(arr_1 [i_0])));
        var_13 = ((/* implicit */int) (((+(((((/* implicit */_Bool) 9729443466497706148ULL)) ? (2690948471U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39344))))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((1604018824U) / (((/* implicit */unsigned int) arr_1 [i_0]))))) && (((arr_1 [i_0]) < (arr_0 [i_0] [i_0])))))))));
        var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((arr_1 [i_0]) & (arr_1 [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))), (1604018840U)));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_7 [(_Bool)1] [i_0] [i_1] [(signed char)14] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (short)12051)) ? (var_9) : (((/* implicit */unsigned long long int) 4513362935062548289LL))))))));
                    var_15 |= ((/* implicit */short) ((signed char) arr_0 [i_1] [i_2]));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_3 = 3; i_3 < 17; i_3 += 2) /* same iter space */
        {
            var_16 |= ((/* implicit */unsigned int) (+(1608432421)));
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) arr_4 [i_0]);
                        arr_16 [i_0] [i_3] [i_4] [i_3] = ((/* implicit */short) (unsigned char)189);
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 3; i_6 < 17; i_6 += 4) 
                        {
                            var_18 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_11 [i_0] [i_4] [i_5])) : (((/* implicit */int) arr_4 [i_3 - 1])))));
                            var_19 *= ((/* implicit */unsigned long long int) var_10);
                            var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)32))));
                        }
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            var_21 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_20 [i_3 - 3] [i_4] [i_7 + 1] [i_0] [i_7] [i_7] [i_7]))));
                            var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_4])) ? (((/* implicit */int) arr_9 [i_5])) : (((/* implicit */int) arr_9 [i_0]))));
                            var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [i_3 - 2] [i_3 - 2] [i_3 - 3]))));
                        }
                    }
                } 
            } 
        }
        for (unsigned long long int i_8 = 3; i_8 < 17; i_8 += 2) /* same iter space */
        {
            arr_28 [(_Bool)1] [i_8 - 1] = ((/* implicit */signed char) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]);
            /* LoopSeq 3 */
            for (unsigned short i_9 = 0; i_9 < 18; i_9 += 4) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned char) (!((_Bool)1)));
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 4) 
                {
                    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)192)) & (((/* implicit */int) (signed char)8))));
                            arr_35 [i_11] [i_0] [i_9] [i_0] [i_0] |= ((((/* implicit */_Bool) (short)23919)) || (((/* implicit */_Bool) 116025416)));
                        }
                    } 
                } 
                var_26 |= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_32 [i_0] [i_0])) * (((/* implicit */int) arr_32 [i_9] [i_0]))))), (((((/* implicit */unsigned long long int) ((arr_33 [i_0] [i_0] [11ULL] [i_8] [i_9] [i_9]) / (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_9] [(short)0] [i_0])))))) / (max((((/* implicit */unsigned long long int) 1604018854U)), (var_4)))))));
                var_27 = ((/* implicit */long long int) var_4);
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 2) 
                {
                    for (unsigned short i_13 = 0; i_13 < 18; i_13 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */short) (-(((/* implicit */int) ((var_0) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_9] [i_8 - 1] [i_8 - 2]))))))));
                            var_29 &= ((/* implicit */unsigned char) ((unsigned short) (~((+(((/* implicit */int) (short)-15222)))))));
                            var_30 += ((/* implicit */unsigned char) arr_5 [i_0] [i_9] [i_13]);
                            var_31 += ((/* implicit */signed char) ((((((15836513646363036722ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23919))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) != (((/* implicit */unsigned long long int) arr_27 [i_8])))))))) & ((~(2421922183535917351ULL)))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned short i_14 = 0; i_14 < 18; i_14 += 4) /* same iter space */
            {
                var_32 = ((/* implicit */unsigned char) ((var_9) < (((/* implicit */unsigned long long int) arr_38 [i_8] [i_8] [i_8] [i_8 - 1] [i_14]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 4) 
                {
                    var_33 *= ((/* implicit */short) (~(((/* implicit */int) (signed char)-107))));
                    var_34 = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) (unsigned char)48)) < (((/* implicit */int) arr_14 [i_0])))));
                    /* LoopSeq 1 */
                    for (unsigned short i_16 = 0; i_16 < 18; i_16 += 4) 
                    {
                        arr_50 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((arr_48 [i_0] [i_8 + 1] [i_14] [i_8 + 1] [i_16]) <= (var_4))))));
                        var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_47 [i_0] [i_8] [i_0])) < (((/* implicit */int) (unsigned char)189)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 262143LL)) || (((/* implicit */_Bool) arr_10 [i_0]))))) : (((/* implicit */int) arr_10 [i_8 - 1])))))));
                        arr_51 [i_0] [13] [i_14] [i_15] [i_15] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) 116025416)) ? ((+(arr_33 [i_0] [i_8 + 1] [i_14] [i_14] [i_15] [i_16]))) : (((/* implicit */long long int) ((/* implicit */int) ((var_10) > (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_0])))))))));
                        var_36 -= ((/* implicit */unsigned char) (-(arr_39 [i_8 - 2] [i_8] [i_8] [i_8 + 1] [i_8 + 1])));
                    }
                    var_37 = ((/* implicit */short) (~(((/* implicit */int) arr_43 [i_0] [i_8] [i_14] [i_0]))));
                    arr_52 [i_0] [i_8] [i_0] [3ULL] |= ((/* implicit */unsigned long long int) ((short) ((unsigned char) var_8)));
                }
            }
            /* vectorizable */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_38 = (-(((/* implicit */int) arr_34 [i_0] [i_0] [i_8 - 3] [i_8 - 3])));
                var_39 = ((/* implicit */unsigned long long int) (unsigned char)218);
                var_40 = ((/* implicit */short) arr_13 [i_0] [i_8] [i_8]);
                var_41 &= ((/* implicit */unsigned long long int) ((long long int) var_11));
                /* LoopNest 2 */
                for (unsigned short i_18 = 0; i_18 < 18; i_18 += 3) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(2690948471U)))) || (((/* implicit */_Bool) var_2))));
                            arr_62 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_13 [i_8 - 2] [i_8 - 1] [i_8 - 3]))));
                            arr_63 [i_0] [i_8] [i_17] [i_18] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_36 [i_8] [i_8] [i_8 - 2] [i_8]))));
                            var_43 = arr_43 [i_19] [i_8 - 3] [i_17] [i_8 - 3];
                            arr_64 [(_Bool)1] [i_19] [i_17] [(_Bool)1] [i_19] = ((/* implicit */signed char) (-(arr_27 [i_8 - 2])));
                        }
                    } 
                } 
            }
            var_44 = ((/* implicit */unsigned short) (-((-(((((/* implicit */_Bool) -5339241449964710310LL)) ? (2654702600340640582ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234)))))))));
        }
    }
    var_45 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (8426436588191233722LL) : (((/* implicit */long long int) ((/* implicit */int) max((((var_3) && (var_3))), (((var_3) && (((/* implicit */_Bool) 14487374943980945903ULL))))))))));
    var_46 |= ((/* implicit */unsigned char) (unsigned short)26206);
    var_47 ^= ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) <= (((/* implicit */int) var_2)))))));
}
