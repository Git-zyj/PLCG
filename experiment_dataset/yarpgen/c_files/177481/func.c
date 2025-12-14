/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177481
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */short) arr_0 [i_1]);
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [12] [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8191))) : (17586619509197347335ULL)))) ? (((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (2619461988U))));
                                arr_16 [i_3] [20LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(var_12)))))) ? ((+(((((/* implicit */_Bool) -9223372036854775802LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))) : (9LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? ((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))) : ((+(((/* implicit */int) (short)-7496)))))))));
                                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((signed char) (-(-401289861)))))));
                                var_15 *= ((/* implicit */unsigned char) ((((((((/* implicit */int) var_9)) * (-313785366))) < (((/* implicit */int) var_9)))) ? (((/* implicit */int) ((min((17737027555886931811ULL), (860124564512204281ULL))) < (((/* implicit */unsigned long long int) var_5))))) : (min((((/* implicit */int) min((arr_7 [i_0] [i_0] [i_2]), (((/* implicit */signed char) (_Bool)1))))), ((~(2147483647)))))));
                                arr_17 [i_0] [i_0] [7LL] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */int) (((~(var_7))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) 9LL)) ? (((/* implicit */int) max(((_Bool)0), (var_10)))) : (((((/* implicit */int) var_1)) << (((((((/* implicit */int) (short)-27598)) + (27622))) - (12))))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((signed char) (_Bool)1)))));
                    var_17 = ((/* implicit */int) var_2);
                    arr_18 [i_0] [i_1] [14ULL] = ((/* implicit */int) var_10);
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [i_1] [i_2])) : (((/* implicit */int) var_1))))), (((var_10) ? (10893731391188114643ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6058))))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) arr_4 [i_0] [6ULL])) : (((/* implicit */int) var_9))))))))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        arr_23 [i_5] [i_6] = ((/* implicit */_Bool) 2147483647);
                        var_19 = ((/* implicit */unsigned char) ((min((17737027555886931811ULL), (((10893731391188114621ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) <= (((((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_5] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_0]))) : (17737027555886931811ULL))) >> (((((/* implicit */_Bool) var_12)) ? (0) : (((/* implicit */int) (short)12259))))))));
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */_Bool) arr_4 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_9))))))) : (arr_11 [i_0] [i_1] [i_5] [(signed char)14] [i_6] [i_6] [i_6])))));
                        var_21 += ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-54))));
                    }
                    for (int i_7 = 1; i_7 < 19; i_7 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (var_12) : (((/* implicit */int) arr_6 [(unsigned char)6] [i_1]))))) ? (((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_6))) : (((/* implicit */long long int) min((var_0), (((/* implicit */unsigned int) var_10)))))))));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_5)))) ? (((((/* implicit */int) var_10)) % (((/* implicit */int) arr_19 [i_7] [i_7 + 1] [i_7] [i_7 + 1])))) : (((/* implicit */int) ((((((/* implicit */_Bool) 4726534051211098064ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (var_6))) != (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [12] [12] [i_7] [12]))))))));
                        var_24 = ((/* implicit */int) max((var_24), ((+(min(((+((-2147483647 - 1)))), (((/* implicit */int) var_2))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        arr_29 [i_0] = ((/* implicit */unsigned long long int) var_7);
                        var_25 ^= (!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [14ULL] [i_0] [14ULL] [i_8] [i_5])));
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) var_7))));
                        var_27 = ((/* implicit */unsigned long long int) var_3);
                    }
                    var_28 = ((/* implicit */unsigned int) max((var_28), ((((((_Bool)1) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [(_Bool)1] [(_Bool)1]))))) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 3; i_9 < 20; i_9 += 4) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 1) 
                        {
                            {
                                arr_36 [i_0] [i_1] [i_9] [i_9 - 3] [i_9 - 3] = ((/* implicit */short) (((-(678240403567624272ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((16092323422816167885ULL) == (((/* implicit */unsigned long long int) 3702176665U))))))));
                                var_29 ^= ((/* implicit */signed char) (~(var_6)));
                                var_30 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)6)) && (((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_10])))) ? (((/* implicit */int) arr_19 [i_0] [i_1] [i_5] [i_10])) : (((((/* implicit */_Bool) arr_7 [i_1] [i_5] [i_9 - 3])) ? (((/* implicit */int) arr_19 [i_0] [i_1] [i_5] [i_10])) : (((/* implicit */int) arr_19 [i_0] [i_1] [i_5] [i_10]))))));
                            }
                        } 
                    } 
                    arr_37 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) var_8))))) : (((((/* implicit */long long int) ((/* implicit */int) var_1))) / ((-9223372036854775807LL - 1LL)))))) / (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_1] [i_0])))));
                }
            }
        } 
    } 
    var_31 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2524913930U)))))))) <= (3932824948719837996ULL)));
    /* LoopNest 2 */
    for (unsigned char i_11 = 0; i_11 < 19; i_11 += 4) 
    {
        for (int i_12 = 0; i_12 < 19; i_12 += 1) 
        {
            {
                arr_42 [i_11] [i_12] = ((/* implicit */unsigned int) ((((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 494457704U)) <= (8301918935586924045LL))))) : (max((arr_32 [i_11] [i_11] [i_11] [(_Bool)1] [i_12]), (((/* implicit */unsigned long long int) var_1)))))) % (((/* implicit */unsigned long long int) var_3))));
                arr_43 [i_12] [i_11] [i_12] = ((/* implicit */short) var_4);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 4) 
    {
        arr_48 [(signed char)16] [(signed char)16] = ((/* implicit */signed char) (+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]))) : (var_7)))))));
        var_32 = (+(max((((/* implicit */int) (_Bool)1)), (2009305072))));
        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-1)) ? (860124564512204281ULL) : (((/* implicit */unsigned long long int) -298555210)))) | (((/* implicit */unsigned long long int) ((arr_24 [i_13] [i_13]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_39 [i_13]))))))))));
        /* LoopSeq 1 */
        for (unsigned short i_14 = 0; i_14 < 18; i_14 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_15 = 2; i_15 < 17; i_15 += 4) 
            {
                var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) (unsigned short)6))));
                arr_55 [i_13] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_21 [i_13] [i_14] [i_13] [(unsigned char)20] [i_15 - 1])), ((unsigned char)5)))) ? ((~(((/* implicit */int) var_9)))) : (((int) var_9))));
            }
            arr_56 [i_13] [i_13] [i_14] = (((-(((/* implicit */int) ((short) arr_45 [i_14]))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) 1916107383))))));
            var_35 = ((/* implicit */_Bool) (+(min((((var_4) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30308))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_1)), (arr_4 [i_13] [i_14]))))))));
        }
    }
}
