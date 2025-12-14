/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129001
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 1]))), (((/* implicit */unsigned int) (short)-20550))));
        arr_4 [i_0] = ((((var_7) >> (((/* implicit */int) ((((/* implicit */int) (short)20550)) != (((/* implicit */int) arr_2 [6LL]))))))) >> (((((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [(_Bool)1]))))), ((short)-20548)))) + (20579))));
        var_15 -= ((/* implicit */short) arr_1 [i_0 - 1]);
        arr_5 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1])))), (((((/* implicit */_Bool) ((long long int) var_8))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1]))) : (((0LL) >> (((((/* implicit */int) (short)20536)) - (20519)))))))));
        var_16 = 8037162153245791026LL;
    }
    for (long long int i_1 = 1; i_1 < 18; i_1 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) ((signed char) max((((arr_6 [i_1] [i_1]) >> (((arr_6 [i_1] [i_1]) - (851598546764942283LL))))), ((+(arr_8 [i_1]))))));
        /* LoopNest 2 */
        for (short i_2 = 4; i_2 < 16; i_2 += 1) 
        {
            for (long long int i_3 = 3; i_3 < 18; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_18 = arr_10 [i_1 + 1];
                                arr_18 [(_Bool)1] [i_2 - 4] [i_3] [i_4] [i_5 - 1] = ((/* implicit */unsigned char) min(((~(arr_14 [i_1 + 1] [i_5 - 1] [i_3 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)20550)))) ^ (((((/* implicit */_Bool) (unsigned short)31109)) ? (((/* implicit */long long int) arr_9 [i_5])) : (arr_15 [i_2] [i_4] [i_3] [i_2] [i_1]))))))));
                                var_19 ^= ((/* implicit */short) arr_8 [i_1]);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) min((max((max((arr_16 [i_3 + 1] [6LL] [i_2] [i_2] [i_2] [i_1] [i_1]), (((/* implicit */short) var_8)))), (max((arr_16 [i_2] [i_2 + 1] [i_3] [i_2] [i_1] [i_2] [i_3]), (((/* implicit */short) var_6)))))), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) -21LL))))) != (((/* implicit */int) var_8)))))));
                    var_21 = ((/* implicit */unsigned long long int) var_11);
                    arr_19 [i_1 - 1] [i_2] [i_3] = ((/* implicit */unsigned int) ((min((((long long int) arr_9 [i_2])), (arr_6 [i_2 + 3] [i_1 - 1]))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) arr_16 [i_3] [i_2] [i_2] [i_2] [i_1] [i_1] [i_1])))))) != (((((-18LL) + (9223372036854775807LL))) >> (18LL))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                {
                    arr_28 [i_1] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) (!(var_1)))) != (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_7] [i_6])) != (((/* implicit */int) (short)20539)))))) != (((((/* implicit */_Bool) arr_13 [i_1 + 1] [i_6])) ? (arr_9 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
                    var_22 = ((/* implicit */signed char) (short)20549);
                }
            } 
        } 
        arr_29 [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (((((+(arr_15 [i_1] [i_1] [i_1] [i_1] [i_1]))) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)20549)) - (20540))))))));
    }
    for (unsigned short i_8 = 4; i_8 < 10; i_8 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned char i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                {
                    arr_36 [i_8] [i_8] [i_10] = ((/* implicit */short) ((((/* implicit */int) min((var_0), (var_10)))) != (((/* implicit */int) var_6))));
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned int) arr_26 [i_8 - 4] [i_8 - 4] [i_10])), (arr_7 [i_8]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12)))))))))))));
                    arr_37 [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-16949)), (arr_21 [i_8 - 3] [i_9]))))));
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        for (short i_12 = 0; i_12 < 12; i_12 += 2) 
                        {
                            {
                                var_24 -= ((_Bool) ((((-5393283248610202332LL) + (9223372036854775807LL))) >> (((((((arr_15 [i_9] [i_9] [i_9] [i_12] [i_9]) + (9223372036854775807LL))) >> (((((/* implicit */int) var_8)) - (157))))) - (30858LL)))));
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) min((var_14), (((/* implicit */unsigned char) var_13))))) != (((/* implicit */int) ((_Bool) arr_31 [i_8])))))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_31 [i_8]) ? (((/* implicit */int) arr_20 [3LL])) : (((/* implicit */int) var_2))))) != (max((((/* implicit */unsigned long long int) var_5)), (var_3))))))));
                                arr_44 [i_11] [i_9] [i_8] [i_11] [i_12] = ((/* implicit */long long int) (+(((/* implicit */int) var_1))));
                                arr_45 [i_12] [i_11] [i_11] [i_8] [i_10] [i_9] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (-(arr_23 [i_8 - 3] [i_8] [i_9])))))) + ((+(((arr_22 [i_10] [i_11]) - (((/* implicit */long long int) arr_1 [i_8]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_13 = 0; i_13 < 12; i_13 += 3) 
        {
            for (unsigned char i_14 = 0; i_14 < 12; i_14 += 4) 
            {
                {
                    arr_51 [i_8] [i_8] [i_13] = ((((/* implicit */int) min((((/* implicit */short) arr_25 [i_8 + 2] [i_8 + 2])), (arr_27 [i_14] [i_14] [4U])))) != ((~(((/* implicit */int) arr_13 [i_8] [i_8 + 1])))));
                    var_26 = ((/* implicit */signed char) arr_1 [i_8]);
                    /* LoopSeq 2 */
                    for (short i_15 = 2; i_15 < 10; i_15 += 3) 
                    {
                        arr_56 [i_8] [i_8] = ((/* implicit */unsigned short) ((min((var_3), ((~(arr_11 [i_8]))))) >> (((18LL) & (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))))));
                        var_27 = ((/* implicit */short) ((((/* implicit */long long int) ((((((/* implicit */int) var_2)) >> (((((/* implicit */int) (unsigned short)47381)) - (47364))))) >> (((((/* implicit */int) arr_2 [i_14])) + (22171)))))) != (arr_8 [i_8 - 2])));
                    }
                    for (long long int i_16 = 0; i_16 < 12; i_16 += 2) 
                    {
                        var_28 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_17 [i_8] [i_8] [i_16])), ((+(max((((/* implicit */unsigned int) arr_34 [i_8] [i_13])), (var_5)))))));
                        var_29 = ((/* implicit */short) (_Bool)0);
                        var_30 = ((/* implicit */unsigned short) arr_7 [i_16]);
                        var_31 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (arr_46 [i_16] [i_16] [i_16]))), (((((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_8 - 1] [i_13] [i_14] [i_14] [i_16]))))) + (((/* implicit */unsigned long long int) max((arr_22 [i_8] [i_13]), (((/* implicit */long long int) var_2)))))))));
                    }
                    var_32 = ((/* implicit */unsigned short) ((((((((/* implicit */int) arr_41 [9LL] [9LL] [i_13] [i_14] [i_14] [i_13])) * (((/* implicit */int) var_10)))) - (((/* implicit */int) var_10)))) * (((/* implicit */int) ((short) ((((/* implicit */int) var_13)) * (((/* implicit */int) var_1))))))));
                    var_33 = ((/* implicit */short) ((min((arr_1 [i_13]), (((/* implicit */unsigned int) ((unsigned short) (unsigned char)161))))) != (((/* implicit */unsigned int) max((((((/* implicit */int) (unsigned short)65535)) >> (((arr_0 [i_14] [i_14]) + (1068436181763544093LL))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_13]))))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_17 = 0; i_17 < 12; i_17 += 2) 
        {
            var_34 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_54 [i_8] [i_8] [i_8] [i_17])) >> (((/* implicit */int) var_9))))))))));
            arr_63 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((arr_9 [i_8 - 4]) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((_Bool) 6104237970077219587LL)))))));
        }
    }
    var_35 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((var_7) >> (((/* implicit */int) var_1)))) : (-18LL))))));
    var_36 = ((/* implicit */long long int) max((var_36), (min((((/* implicit */long long int) var_0)), (min((((((var_11) + (9223372036854775807LL))) >> (((((/* implicit */int) var_14)) - (179))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) != (var_5))))))))));
}
