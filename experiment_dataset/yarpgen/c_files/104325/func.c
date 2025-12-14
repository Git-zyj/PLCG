/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104325
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) var_6))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            var_14 = ((/* implicit */long long int) ((((((/* implicit */int) (short)2469)) == (-194843756))) ? (-880364139) : (1499778801)));
            var_15 = ((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_3 [i_1 + 2] [i_0])))));
            var_16 ^= ((/* implicit */unsigned char) (unsigned short)32876);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_6 [(signed char)10] [i_2] &= ((/* implicit */signed char) max((18446744073709551614ULL), (((/* implicit */unsigned long long int) ((((var_3) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))) >= (max((var_12), (((/* implicit */int) (_Bool)1)))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 2) 
            {
                for (unsigned short i_4 = 2; i_4 < 18; i_4 += 2) 
                {
                    for (int i_5 = 4; i_5 < 18; i_5 += 2) 
                    {
                        {
                            arr_15 [i_5 - 4] [i_0] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_11 [i_0])))))))));
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (-(max((((long long int) (_Bool)1)), (((((/* implicit */_Bool) arr_8 [i_0])) ? (arr_10 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))))));
                        }
                    } 
                } 
            } 
        }
        for (int i_6 = 0; i_6 < 19; i_6 += 1) /* same iter space */
        {
            arr_20 [(_Bool)1] [(signed char)14] |= ((/* implicit */long long int) var_3);
            /* LoopNest 3 */
            for (unsigned char i_7 = 2; i_7 < 17; i_7 += 3) 
            {
                for (unsigned int i_8 = 2; i_8 < 18; i_8 += 3) 
                {
                    for (unsigned int i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        {
                            arr_28 [i_9] [i_0] [i_6] [i_9] [i_8] [i_9] [i_9] &= ((/* implicit */short) ((((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)(-127 - 1))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [18LL] [18LL] [11U]))))))) ? (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) -194843756)) ? (arr_16 [i_9]) : (((/* implicit */int) (unsigned short)6277)))))) : (max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)32660))))), (var_6)))));
                            arr_29 [i_0] [i_6] [i_7 - 2] [2] [i_0] [(signed char)15] = ((/* implicit */int) max(((!(((/* implicit */_Bool) arr_11 [i_0])))), (var_3)));
                            arr_30 [i_0] [i_0] [i_0] = ((/* implicit */int) (signed char)26);
                        }
                    } 
                } 
            } 
        }
        for (int i_10 = 0; i_10 < 19; i_10 += 1) /* same iter space */
        {
            var_18 = min((((unsigned short) 17159195339459185287ULL)), (var_2));
            var_19 = ((/* implicit */unsigned short) (+(((var_7) ? (arr_0 [i_0]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_10])))))))));
            var_20 ^= ((/* implicit */unsigned int) arr_8 [i_0]);
            /* LoopNest 2 */
            for (int i_11 = 2; i_11 < 18; i_11 += 2) 
            {
                for (signed char i_12 = 0; i_12 < 19; i_12 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) 880364139)) ? (((/* implicit */int) arr_2 [i_0] [i_11 - 2] [i_0])) : (((/* implicit */int) arr_5 [10ULL] [i_10] [i_10])))))));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 1338719735185659853ULL)) && (((/* implicit */_Bool) arr_10 [i_11 + 1] [i_11] [i_11 - 2]))))) >> (((min((arr_27 [i_10] [i_10] [i_11 - 2] [i_11 + 1] [i_0]), (((/* implicit */long long int) 194843752)))) + (2623248759280758422LL)))));
                        var_23 &= ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) arr_4 [(unsigned short)7])), (max((var_5), (((/* implicit */long long int) arr_23 [i_0] [i_10] [i_11 - 1] [5ULL])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-28)) == (arr_31 [1ULL] [1ULL])))) : (((/* implicit */int) arr_14 [i_11] [(_Bool)1] [i_11 + 1] [i_11 - 2] [i_11 - 1])))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 3) 
                        {
                            var_24 = (-(max((((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)(-127 - 1)))))), (arr_12 [i_0] [0LL] [i_11 - 1]))));
                            var_25 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-57)), (max((arr_0 [i_0]), (((/* implicit */int) (signed char)0))))))), ((~(((arr_32 [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                            arr_41 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)68)) ? (2517827025289821960LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32898)))));
                            var_26 *= ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_11 [i_11]))))));
                        }
                        for (unsigned int i_14 = 2; i_14 < 17; i_14 += 3) 
                        {
                            arr_44 [i_0] [i_10] [i_0] [i_12] [i_14] = ((/* implicit */_Bool) (-(((((((/* implicit */_Bool) arr_18 [i_10] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_8)))) + (((/* implicit */int) (signed char)-72))))));
                            arr_45 [i_0] [7ULL] [i_11 + 1] [i_10] [i_10] [i_10] [i_0] = ((/* implicit */unsigned char) arr_39 [i_0] [i_14] [i_14] [i_14 - 2]);
                            var_27 = ((/* implicit */int) min((min(((~(var_10))), (max((1716145259372818335ULL), (((/* implicit */unsigned long long int) -1933240735)))))), (arr_32 [i_12] [i_11])));
                            var_28 = ((/* implicit */unsigned short) ((min((arr_24 [i_11 + 1] [i_11 - 2] [i_14 + 1]), (arr_24 [i_11 - 2] [i_11 - 1] [i_14 - 1]))) - (((/* implicit */unsigned long long int) arr_11 [i_0]))));
                            arr_46 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(arr_1 [i_0])));
                        }
                        for (int i_15 = 1; i_15 < 17; i_15 += 3) 
                        {
                            arr_49 [9] [i_0] [i_10] [i_0] [i_12] [i_15 - 1] = ((/* implicit */short) arr_21 [16] [i_10] [i_15 - 1] [4U]);
                            arr_50 [i_0] [i_10] [i_10] [i_10] [i_10] [12ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(max((-2517827025289821941LL), (arr_36 [i_0] [(unsigned short)12] [0])))))) && (((/* implicit */_Bool) ((unsigned long long int) (-9223372036854775807LL - 1LL))))));
                        }
                    }
                } 
            } 
        }
        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((arr_38 [i_0] [15] [i_0] [i_0]) - (((/* implicit */unsigned long long int) 6402295345445864683LL))))))) ? (((/* implicit */int) (_Bool)1)) : (max((arr_26 [i_0]), (arr_26 [i_0])))));
    }
    for (signed char i_16 = 0; i_16 < 10; i_16 += 3) 
    {
        var_30 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) -499773280)) ? (arr_25 [(_Bool)1] [i_16] [(signed char)10] [i_16] [i_16] [i_16]) : (arr_24 [i_16] [i_16] [i_16])))) ? (((/* implicit */long long int) ((((arr_47 [(_Bool)1] [i_16] [i_16] [(unsigned short)12] [18]) && (((/* implicit */_Bool) arr_24 [i_16] [i_16] [i_16])))) ? (max(((-2147483647 - 1)), (((/* implicit */int) (unsigned short)32878)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) : (((long long int) (((_Bool)1) || (((/* implicit */_Bool) arr_10 [i_16] [(short)12] [i_16]))))));
        arr_53 [i_16] = arr_33 [i_16] [i_16];
        arr_54 [i_16] = (_Bool)0;
    }
}
