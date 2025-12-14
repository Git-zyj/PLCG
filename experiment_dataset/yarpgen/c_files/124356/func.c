/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124356
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
    var_14 = (-(90396808U));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) ((unsigned int) (-(((((/* implicit */long long int) ((/* implicit */int) var_7))) - (arr_2 [i_0]))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((short) (-(-483335985))))) ? ((~(((/* implicit */int) ((arr_2 [i_2]) != (arr_6 [18ULL] [i_1] [i_1])))))) : (((/* implicit */int) ((90396806U) <= (1248137984U)))))))));
                    var_17 = ((/* implicit */unsigned short) min((4204570488U), (90396808U)));
                    var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_10))));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 3; i_3 < 12; i_3 += 3) 
    {
        arr_12 [i_3] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_2))))) : ((+(((/* implicit */int) (unsigned short)26179)))))), (((/* implicit */int) arr_5 [2U]))));
        arr_13 [i_3] = ((/* implicit */unsigned int) (_Bool)0);
        var_19 -= ((/* implicit */long long int) arr_10 [i_3 + 3]);
        var_20 ^= ((/* implicit */short) min(((((-(4204570488U))) + (max((((/* implicit */unsigned int) var_11)), (90396808U))))), (((((/* implicit */_Bool) var_0)) ? (((0U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39346))))) : (((/* implicit */unsigned int) -1419327979))))));
        arr_14 [2U] |= ((/* implicit */signed char) ((((/* implicit */_Bool) 4204570503U)) ? (1196638107U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27011)))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_21 = var_13;
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 7; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 3; i_8 < 10; i_8 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [(_Bool)1] [(_Bool)1])) ? (((((/* implicit */_Bool) arr_23 [(signed char)5] [(signed char)5] [i_6] [(signed char)5] [i_8])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_6] [i_8])) ? (2623360577U) : (((/* implicit */unsigned int) var_9))))) : (((((/* implicit */long long int) ((/* implicit */int) var_8))) & (0LL))))) : (((((/* implicit */_Bool) 1U)) ? (arr_29 [i_4] [i_5] [i_6] [i_4] [i_8] [i_7] [i_6 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                                var_23 = 5U;
                            }
                        } 
                    } 
                    arr_30 [i_4] [i_5] [i_4] = ((max((max((arr_22 [i_5] [i_6]), (3539351472U))), (((((/* implicit */_Bool) (unsigned short)1036)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6] [i_4] [i_4]))) : (4204570488U))))) > (((/* implicit */unsigned int) ((/* implicit */int) var_5))));
                    var_24 = ((/* implicit */unsigned int) max((var_24), (max((((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_7)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (755615823U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_6 + 4] [i_5]))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_11)))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_9 = 2; i_9 < 9; i_9 += 2) 
        {
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) > (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (var_4)))))))))));
            arr_33 [i_4] = ((/* implicit */long long int) (+(4204570488U)));
            arr_34 [5ULL] = max((((((/* implicit */unsigned long long int) ((unsigned int) 4294967295U))) * (min((((/* implicit */unsigned long long int) arr_3 [i_4])), (arr_23 [i_4] [i_9] [i_4] [i_9] [i_9]))))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((-294541562377720746LL) > (((/* implicit */long long int) ((/* implicit */int) var_8)))))), (arr_27 [i_4] [i_4] [6U] [i_9] [i_9])))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 1) 
            {
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((-603840753) != (((/* implicit */int) arr_16 [i_4])))))) <= (var_4))))) > (((unsigned long long int) arr_18 [i_10] [i_10] [i_4]))));
                var_27 = ((/* implicit */_Bool) (-(((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)38546))))) / ((~(var_6)))))));
                var_28 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (arr_40 [i_4] [i_10] [i_11] [i_11])))) ? (((/* implicit */unsigned long long int) arr_2 [i_4])) : (min((arr_10 [i_4]), (15100757167406155724ULL))))) * (((/* implicit */unsigned long long int) (~(4204570487U))))));
                var_29 = ((/* implicit */unsigned long long int) (-(((((3032870188U) ^ (3780428157U))) | (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_10)))))))));
                arr_42 [i_11] [(unsigned char)7] [i_10] = ((/* implicit */short) 676251980U);
            }
            var_30 = ((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned char) ((max((var_4), (((/* implicit */unsigned int) (unsigned short)62060)))) != (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)38522)) * (((/* implicit */int) arr_18 [i_4] [6U] [i_10]))))))))));
            var_31 = ((/* implicit */short) var_7);
            /* LoopSeq 2 */
            for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 2) 
            {
                var_32 ^= ((/* implicit */unsigned short) (+((-(((/* implicit */int) (unsigned short)65535))))));
                var_33 &= ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_24 [i_4] [i_4] [i_4] [i_4])))) ? (((((/* implicit */_Bool) arr_24 [i_4] [i_4] [i_4] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_21 [i_4] [i_10] [i_10] [4U]))) : (((((/* implicit */_Bool) arr_24 [0ULL] [i_10] [i_10] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_21 [8] [8] [i_4] [2U])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_13 = 3; i_13 < 10; i_13 += 2) 
                {
                    var_34 ^= ((/* implicit */short) ((_Bool) arr_41 [i_13 - 3] [i_13 - 1] [i_13 - 2] [i_13 - 1]));
                    arr_47 [i_4] [i_13] [i_4] = ((/* implicit */unsigned int) (~(arr_29 [7ULL] [i_13] [i_13 - 3] [i_13 - 3] [i_13] [i_13] [i_13])));
                    var_35 = ((/* implicit */unsigned long long int) ((_Bool) arr_40 [i_13 - 2] [i_13 - 1] [i_13 - 3] [i_13 - 3]));
                    arr_48 [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22267))) : (3345986906303395883ULL)));
                    arr_49 [1U] [i_10] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_4] [i_12] [i_12])) ? (((5423870208143652817ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_4] [i_4] [(short)4] [i_4]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                }
            }
            for (int i_14 = 0; i_14 < 11; i_14 += 1) 
            {
                var_36 = arr_4 [i_14];
                arr_52 [i_4] [i_14] [i_14] = ((/* implicit */unsigned long long int) ((((_Bool) (~(3046829314U)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7))));
            }
            var_37 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 1248137984U)) ? (((/* implicit */unsigned long long int) 4228132587U)) : (arr_45 [i_4] [i_4] [i_10] [7U]))))) <= (((unsigned long long int) ((((/* implicit */long long int) var_9)) == (var_6))))));
        }
        arr_53 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) var_13))))), (var_1)))) <= (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) % (((/* implicit */int) arr_41 [i_4] [i_4] [i_4] [i_4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_4])), ((unsigned short)35476))))) : (((((/* implicit */_Bool) 3738479252146422752LL)) ? (8550872095702014826ULL) : (((/* implicit */unsigned long long int) 13U))))))));
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
    {
        var_38 = ((/* implicit */short) ((((/* implicit */int) var_7)) * (((/* implicit */int) ((short) arr_3 [i_15])))));
        arr_57 [i_15] = ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) * (((/* implicit */int) ((((/* implicit */int) arr_35 [i_15] [i_15])) > (((((/* implicit */int) arr_7 [i_15] [i_15] [(short)9] [i_15])) - (((/* implicit */int) var_2)))))))));
        var_39 = ((/* implicit */int) var_6);
    }
}
