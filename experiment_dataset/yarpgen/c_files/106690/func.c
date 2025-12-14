/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106690
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
    for (short i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */signed char) (short)17340);
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) var_3))));
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) 4503599627370495ULL))));
        var_14 = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = var_9;
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))))))) != (((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17340)))))));
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)63)))))));
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                var_16 = ((/* implicit */unsigned int) arr_5 [i_1]);
                var_17 = ((/* implicit */unsigned short) var_7);
            }
            var_18 = ((/* implicit */unsigned char) ((signed char) arr_10 [i_1] [i_2] [i_1]));
            var_19 = ((/* implicit */unsigned short) ((signed char) (short)13190));
        }
        for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                for (unsigned char i_6 = 1; i_6 < 18; i_6 += 4) 
                {
                    {
                        arr_20 [i_4] [i_5] = ((/* implicit */unsigned int) var_3);
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (((-(-411109737))) > (var_8))))));
                        var_21 = 3389391329668994791ULL;
                        var_22 = ((/* implicit */short) ((var_9) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32372)) ? (((/* implicit */int) (signed char)55)) : (((/* implicit */int) (short)6795)))))));
                        var_23 = (i_5 % 2 == zero) ? (((/* implicit */long long int) ((arr_12 [i_5] [i_5] [i_6 + 1]) >> (((arr_12 [i_5] [i_6 + 1] [i_6 - 1]) - (3700833536U)))))) : (((/* implicit */long long int) ((arr_12 [i_5] [i_5] [i_6 + 1]) >> (((((arr_12 [i_5] [i_6 + 1] [i_6 - 1]) - (3700833536U))) - (3229097762U))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */long long int) arr_11 [(signed char)16] [i_4] [i_4]);
            /* LoopSeq 1 */
            for (unsigned short i_7 = 2; i_7 < 17; i_7 += 4) 
            {
                var_25 = ((/* implicit */unsigned long long int) var_5);
                var_26 = ((/* implicit */short) ((var_2) <= (((/* implicit */unsigned long long int) arr_21 [i_1] [i_4] [i_1]))));
                var_27 = ((/* implicit */unsigned long long int) (short)6795);
                var_28 = ((/* implicit */unsigned int) (unsigned short)26509);
            }
        }
        for (unsigned long long int i_8 = 3; i_8 < 16; i_8 += 1) /* same iter space */
        {
            var_29 |= ((/* implicit */unsigned short) 1405863225U);
            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (unsigned char)102))));
        }
    }
    for (short i_9 = 0; i_9 < 19; i_9 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_10 = 1; i_10 < 17; i_10 += 2) /* same iter space */
        {
            var_31 = ((/* implicit */unsigned short) var_4);
            arr_31 [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)114))));
            var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_9] [i_10]))));
        }
        for (unsigned int i_11 = 1; i_11 < 17; i_11 += 2) /* same iter space */
        {
            var_33 = ((/* implicit */long long int) 8888394648400510416ULL);
            var_34 &= ((/* implicit */_Bool) (-((+(((((/* implicit */long long int) ((/* implicit */int) (short)14378))) - (var_6)))))));
            arr_35 [i_9] [i_9] = ((/* implicit */long long int) (unsigned short)7);
            /* LoopSeq 1 */
            for (signed char i_12 = 2; i_12 < 17; i_12 += 4) 
            {
                var_35 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_11 + 1] [i_11 + 1]))) : (((var_7) ^ (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_9]))))))));
                var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (~(((((/* implicit */int) arr_27 [i_11])) >> (((arr_16 [i_9] [i_9] [i_9]) - (9749238290590729694ULL))))))))));
            }
            var_37 = ((/* implicit */signed char) (!(((arr_29 [i_11] [i_9] [i_9]) <= (((/* implicit */long long int) 4294967293U))))));
        }
        /* LoopSeq 1 */
        for (int i_13 = 3; i_13 < 16; i_13 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_14 = 0; i_14 < 19; i_14 += 3) /* same iter space */
            {
                var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_13] [i_13 + 1] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_13 - 1] [i_13 + 1] [i_9]))) : (((unsigned long long int) 9558349425309041225ULL))));
                var_39 ^= ((/* implicit */signed char) ((-1463924912949796452LL) == (((/* implicit */long long int) 3136455099U))));
                /* LoopSeq 1 */
                for (unsigned int i_15 = 0; i_15 < 19; i_15 += 3) 
                {
                    var_40 = arr_38 [i_9];
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 19; i_16 += 1) 
                    {
                        arr_52 [i_9] [i_14] [i_9] = ((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) (short)-6791)))))))) * (4811447174546691749LL));
                        var_41 = ((((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)-1)) + (29)))))) % ((+(var_6))))) >> ((((-(((((/* implicit */unsigned int) var_3)) + (arr_50 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))) - (3103675541U))));
                        var_42 = ((/* implicit */short) (-(-2383281437276418066LL)));
                    }
                    arr_53 [i_9] [i_9] [i_9] [i_15] = max(((+(((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_5)))))), (((/* implicit */int) (short)32760)));
                }
            }
            for (signed char i_17 = 0; i_17 < 19; i_17 += 3) /* same iter space */
            {
                var_43 ^= ((/* implicit */short) max((((/* implicit */int) min((((/* implicit */short) (signed char)(-127 - 1))), (arr_39 [4U])))), (((((/* implicit */_Bool) arr_39 [4LL])) ? (((/* implicit */int) arr_39 [18])) : (((/* implicit */int) arr_39 [(unsigned short)16]))))));
                var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)103)) ? (8070450532247928832LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-23))))))));
            }
            var_45 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9558349425309041200ULL)) ? ((-(8888394648400510397ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [i_13])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */unsigned int) var_1)), (var_9)))));
        }
        var_46 = ((/* implicit */int) (+(var_2)));
        var_47 = ((/* implicit */short) arr_14 [i_9]);
        var_48 = ((/* implicit */unsigned short) (+(((min((-2666972060923407726LL), (((/* implicit */long long int) (unsigned short)34015)))) ^ (((/* implicit */long long int) ((((((/* implicit */int) (short)-6792)) + (2147483647))) >> (((((/* implicit */int) arr_36 [i_9] [i_9] [i_9] [i_9])) + (50))))))))));
    }
    for (unsigned int i_18 = 2; i_18 < 22; i_18 += 3) 
    {
        arr_60 [i_18] = ((/* implicit */unsigned int) var_6);
        var_49 = ((/* implicit */signed char) ((((((((/* implicit */int) (signed char)-98)) + (2147483647))) >> (((((((arr_58 [i_18]) + (2147483647))) >> (((((/* implicit */int) (short)-9978)) + (9983))))) - (27947016))))) << (((137438953471ULL) - (137438953466ULL)))));
    }
    var_50 = ((/* implicit */long long int) (signed char)0);
    var_51 ^= ((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101))) * (var_9)))), (var_6))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)0)) ? (-145422874) : (((/* implicit */int) (signed char)-96))))));
    var_52 = ((/* implicit */unsigned long long int) var_5);
    var_53 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) & (var_6)))) ? (((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-5))) : (4294967285U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)14378)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_9)));
}
