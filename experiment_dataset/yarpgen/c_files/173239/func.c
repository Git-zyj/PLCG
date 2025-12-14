/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173239
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
    for (long long int i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */int) (unsigned short)35026);
                /* LoopSeq 1 */
                for (signed char i_2 = 2; i_2 < 7; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_21 = ((int) ((((/* implicit */_Bool) arr_9 [(unsigned char)8] [i_3] [i_3] [i_3 - 1])) ? (((((/* implicit */_Bool) arr_1 [i_3 - 2])) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2] [i_3] [i_2] [i_1] [1ULL]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_7 [(short)0] [i_1] [i_1]))))));
                                var_22 = ((/* implicit */int) max((arr_1 [i_3 - 2]), (((/* implicit */long long int) ((arr_8 [i_0 + 2] [i_0 + 2] [i_0 - 1]) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_2])))))));
                            }
                        } 
                    } 
                    var_23 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) max((var_19), (((/* implicit */int) (unsigned short)35023))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) arr_8 [i_2] [i_1] [i_0]))))) & (((/* implicit */int) (short)-11121))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (arr_7 [(unsigned char)9] [i_1] [i_2])))) * (((unsigned long long int) arr_5 [(_Bool)1]))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) ((_Bool) 2162771150669495939ULL));
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 4; i_7 < 11; i_7 += 3) 
            {
                {
                    arr_23 [i_7] [i_6] [i_7] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_22 [i_6] [i_6]))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        for (int i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            {
                                arr_30 [i_5] [i_6] [i_7] [i_8] [i_7] = ((/* implicit */unsigned long long int) ((long long int) (~((((_Bool)1) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (unsigned short)10)))))));
                                arr_31 [i_5] [i_6] [i_7] [i_7] [i_7] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
                                var_25 = ((/* implicit */int) ((min((((arr_16 [i_5]) / (((/* implicit */int) arr_21 [i_7] [i_6])))), (((/* implicit */int) arr_25 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 - 1])))) >= (((/* implicit */int) max((arr_29 [i_7] [i_7 - 4] [i_7]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [(signed char)1] [(unsigned short)7])) || (((/* implicit */_Bool) var_6))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_10 = 1; i_10 < 12; i_10 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned int) (unsigned char)149);
                        var_27 |= ((min((arr_17 [i_6]), (arr_18 [i_7 + 2] [i_5]))) & (((((/* implicit */_Bool) arr_17 [i_10 - 1])) ? (arr_17 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30510))))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_28 = ((/* implicit */short) var_16);
                        var_29 = ((/* implicit */unsigned short) ((signed char) arr_33 [i_7] [i_7] [i_7] [i_6] [i_7] [i_7]));
                        var_30 ^= ((/* implicit */int) ((((/* implicit */_Bool) (+(2147483647)))) || (((((/* implicit */_Bool) arr_29 [i_7] [4] [(signed char)8])) && (arr_33 [6] [i_7] [i_7] [i_7 - 4] [6] [i_7 + 2])))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_12 = 0; i_12 < 25; i_12 += 3) 
    {
        for (long long int i_13 = 3; i_13 < 24; i_13 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 25; i_14 += 3) 
                {
                    for (unsigned int i_15 = 4; i_15 < 21; i_15 += 3) 
                    {
                        for (long long int i_16 = 0; i_16 < 25; i_16 += 4) 
                        {
                            {
                                arr_52 [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */short) arr_43 [i_12] [i_12]);
                                arr_53 [15U] [i_12] [i_14] [11U] [i_14] = ((/* implicit */int) ((_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_36 [i_12] [i_12])), ((unsigned short)24822)))) >> (((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) var_8)) : (var_12))) - (3992623606U))))));
                                var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) min((((/* implicit */long long int) var_12)), (9223372036854775807LL))))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_37 [(short)15])) ? (((/* implicit */int) (unsigned short)30510)) : (((/* implicit */int) (unsigned short)24822)))), (((/* implicit */int) ((((/* implicit */int) (signed char)72)) == (((/* implicit */int) arr_48 [i_12] [i_16] [i_12] [i_12] [i_14] [i_16])))))))) : (2642742227U))))));
                                arr_54 [i_12] [i_12] [i_14] [i_15] [i_14] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_40 [i_12]))))) ? (((((var_18) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_12] [i_12] [i_14] [i_15 - 4] [i_15 - 1] [i_15 - 1]))) : (8402041816031663951ULL))) - (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) min((((long long int) -511527924)), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)30510))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (short i_17 = 1; i_17 < 23; i_17 += 3) 
                {
                    for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                    {
                        for (signed char i_19 = 1; i_19 < 23; i_19 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */int) min((var_32), (((((int) arr_50 [i_12] [i_17 - 1] [i_17 - 1] [(short)12] [i_19 - 1])) << (((((((/* implicit */_Bool) arr_41 [i_12] [i_12] [i_12])) ? (arr_41 [i_12] [i_13] [i_17 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_12] [i_12] [i_17 + 1] [(signed char)18] [i_17 + 1]))))) - (1492320538U)))))));
                                arr_61 [i_12] [(signed char)3] [(signed char)3] [i_18] [i_19] [i_12] = ((/* implicit */int) ((((/* implicit */int) (signed char)81)) >= (max((((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) arr_38 [i_12])) - (117))))), (((/* implicit */int) arr_49 [i_12]))))));
                                arr_62 [i_12] = ((/* implicit */unsigned int) (unsigned short)41112);
                                arr_63 [i_13] [10LL] [i_13] [i_13] [10LL] [i_13] [i_13] &= ((/* implicit */short) (((_Bool)1) || (((/* implicit */_Bool) -7522607450571946044LL))));
                            }
                        } 
                    } 
                } 
                var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_39 [i_12] [(unsigned char)13]) : (((/* implicit */unsigned long long int) 2147483644))))) ? (-4678029428728585525LL) : (arr_57 [8] [i_13 - 1] [(_Bool)1] [i_13] [i_13 + 1] [i_13 - 1])))) ? (((/* implicit */unsigned long long int) ((long long int) arr_59 [i_13 - 3] [i_13 - 3] [12ULL] [i_13 - 3]))) : (arr_39 [i_12] [i_13]))))));
            }
        } 
    } 
}
