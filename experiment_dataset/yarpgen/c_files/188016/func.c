/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188016
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_1] [i_1] [i_1] [4] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) min((arr_10 [i_0] [i_0] [i_1] [i_0] [i_0]), (arr_10 [i_1] [i_0] [i_1] [i_3] [i_3])))) || (((/* implicit */_Bool) (-(2251799811588096ULL))))))) > (((/* implicit */int) ((arr_6 [i_1]) && (((/* implicit */_Bool) var_4)))))));
                            var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) arr_3 [7U]))));
                        }
                    } 
                } 
                arr_12 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (((-(((/* implicit */int) var_8)))) >= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (var_10)))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_4 = 1; i_4 < 16; i_4 += 1) /* same iter space */
    {
        var_14 += ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) 18444492273897963520ULL)) && (((/* implicit */_Bool) 1793409190U)))))));
        arr_15 [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-4468))));
    }
    for (long long int i_5 = 1; i_5 < 16; i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 1) 
                        {
                            arr_28 [i_5] [i_5] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) var_4)))))))));
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */long long int) max(((-(var_12))), (max((((/* implicit */unsigned int) (signed char)-22)), (var_10)))))) + (min((((/* implicit */long long int) (+(253304279)))), (max((((/* implicit */long long int) var_4)), (var_11))))))))));
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) 5319229576895726188ULL))));
                        }
                        /* LoopSeq 3 */
                        for (long long int i_10 = 0; i_10 < 18; i_10 += 1) 
                        {
                            arr_31 [i_5] [12ULL] [i_7] [12ULL] [i_10] |= ((/* implicit */_Bool) var_4);
                            arr_32 [i_5] [i_6] [3] [i_8] [i_6] = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))));
                            arr_33 [(short)12] [12U] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) max(((!(((/* implicit */_Bool) (-(((/* implicit */int) var_3))))))), (max((((10514286421604292364ULL) <= (18444492273897963520ULL))), (((_Bool) 2305843009213628416LL))))));
                            arr_34 [(_Bool)1] [i_6] [i_5] [i_6] [i_6] = ((/* implicit */signed char) 18444492273897963520ULL);
                            arr_35 [i_5] [i_6] [i_5] [(unsigned short)4] [i_8] [i_10] = (-(((/* implicit */int) arr_26 [i_5] [i_6] [i_7] [i_8] [i_10])));
                        }
                        for (int i_11 = 4; i_11 < 16; i_11 += 1) 
                        {
                            var_17 ^= 253304279;
                            var_18 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)0)), (-4150696118567348820LL)))), ((((-(2251799811588096ULL))) + (7932457652105259251ULL)))));
                            arr_40 [i_5] [10LL] [i_5] [i_11] [i_11] [i_11] = ((/* implicit */short) 0ULL);
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 1) 
                        {
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-109)))))));
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) var_10)), (arr_22 [i_5] [i_7] [i_5] [i_12]))) ^ (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)-1)))))))) || (((/* implicit */_Bool) max((arr_21 [i_5] [i_6] [(_Bool)1] [(unsigned char)11]), (((/* implicit */long long int) var_4)))))));
                            arr_44 [i_5] [i_6] [i_8] [i_6] [i_12] = ((/* implicit */unsigned char) ((max((min((7766523900627210988ULL), (((/* implicit */unsigned long long int) 253304279)))), (max((2251799811588096ULL), (18446744073709551615ULL))))) < (((/* implicit */unsigned long long int) (((((+(var_5))) + (9223372036854775807LL))) << (((/* implicit */int) (!(((/* implicit */_Bool) 2147483648U))))))))));
                            var_21 = ((/* implicit */short) max(((~(-129447255192391532LL))), (max((((129447255192391547LL) + (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)255)))))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_13 = 0; i_13 < 18; i_13 += 1) /* same iter space */
                    {
                        arr_47 [i_5 - 1] [i_5 - 1] [i_5] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)2))));
                        arr_48 [i_5] = ((/* implicit */short) var_7);
                        var_22 -= ((/* implicit */unsigned short) var_5);
                    }
                    arr_49 [i_5] = ((/* implicit */unsigned int) min((max((((0ULL) % (((/* implicit */unsigned long long int) arr_13 [i_7])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)0))))))), (((/* implicit */unsigned long long int) (unsigned short)65472))));
                    /* LoopNest 2 */
                    for (long long int i_14 = 2; i_14 < 17; i_14 += 1) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 18; i_15 += 3) 
                        {
                            {
                                arr_54 [i_5] [i_6] [i_7] [i_14] [i_15] = ((/* implicit */unsigned char) 2147483647U);
                                arr_55 [i_5] [i_5] = ((/* implicit */signed char) (-(arr_21 [i_5] [10LL] [i_14 - 2] [i_15])));
                                var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(9223372019674906624LL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 = min(((!(arr_46 [(unsigned short)8] [i_5] [i_5] [i_5 - 1]))), ((_Bool)1));
        arr_56 [i_5] = ((/* implicit */unsigned long long int) ((short) (+(((((/* implicit */long long int) var_12)) + (-129447255192391532LL))))));
    }
}
