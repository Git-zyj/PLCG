/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17106
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
    for (int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_8 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (signed char)-127)) ? (min((((/* implicit */unsigned long long int) var_9)), (9515132323868131176ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7693330457905687471ULL)) ? (var_3) : (((/* implicit */int) (unsigned char)144))))))) : (((((/* implicit */_Bool) ((4259897076U) >> (((2181431069507584ULL) - (2181431069507575ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)81))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (7693330457905687483ULL) : (9532386481164054257ULL)))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_2 = 3; i_2 < 22; i_2 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_10 = ((/* implicit */unsigned long long int) min((var_10), (16787589488383614092ULL)));
                        var_11 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) / (((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_0])))));
                        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (unsigned char)162))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) 28ULL))));
                        arr_17 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (signed char)106);
                        arr_18 [20U] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)47)) : (((/* implicit */int) var_6))))) + (((((/* implicit */_Bool) var_3)) ? (21ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            var_14 = ((/* implicit */unsigned short) 9532386481164054257ULL);
                            arr_25 [i_0] [i_1] [i_5] [i_0] = ((/* implicit */_Bool) var_7);
                        }
                        arr_26 [i_0] [(unsigned short)0] [(signed char)18] [i_2] [i_5] = ((/* implicit */int) (unsigned short)42386);
                        arr_27 [i_0] [i_0] [i_2] [(_Bool)1] = (!((!(((/* implicit */_Bool) arr_12 [i_0] [i_0 + 1] [15LL] [i_0] [i_0 + 1] [i_0])))));
                    }
                    var_15 |= var_4;
                    arr_28 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0 - 1]))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned int) 13082734595864887762ULL);
                        arr_31 [i_7] [i_7] [i_7] [i_0] [6ULL] [i_7] = ((/* implicit */signed char) (!(((((/* implicit */int) var_0)) <= (((/* implicit */int) var_6))))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 1) /* same iter space */
                        {
                            arr_37 [i_0] [i_0] [i_0] [i_0] [(signed char)20] = ((/* implicit */short) ((((/* implicit */int) var_4)) != (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_2))))));
                            var_17 = ((/* implicit */signed char) (-(var_3)));
                            arr_38 [i_0 + 1] [i_0] [i_2] [17] [(signed char)15] = ((/* implicit */unsigned int) (_Bool)1);
                            arr_39 [i_0] [i_1] [i_0] [i_8] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)65520))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 23; i_10 += 1) /* same iter space */
                        {
                            arr_43 [i_0] [i_8] [i_8] [i_8] [i_8] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)147)) >= (((/* implicit */int) arr_15 [i_10] [i_2 - 1] [i_1 - 1] [i_0]))));
                            arr_44 [i_10] [i_0] [16ULL] [i_0] [16ULL] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967277U)) + (((unsigned long long int) (signed char)0))));
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (unsigned char)36))));
                            var_19 -= var_5;
                        }
                        for (unsigned int i_11 = 0; i_11 < 23; i_11 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned short) ((18446744073709551606ULL) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 67108863ULL)) ? (arr_29 [i_0] [i_1] [i_2] [i_0] [i_11]) : (((/* implicit */unsigned int) var_3)))))));
                            var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_0]))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 4) 
                        {
                            var_22 ^= ((/* implicit */unsigned int) var_1);
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)14))));
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((unsigned char) ((1659154585325937524ULL) / (18446744073642442752ULL))))));
                        }
                        for (unsigned long long int i_13 = 1; i_13 < 21; i_13 += 2) 
                        {
                            arr_53 [16ULL] [i_0] [16ULL] [i_8] [16ULL] [17ULL] = ((/* implicit */short) var_3);
                            var_25 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((unsigned long long int) (signed char)64)) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
                        }
                        var_26 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0 - 1] [i_0] [i_0] [i_0 - 2]))) : (arr_46 [i_2 - 1] [i_2 + 1] [i_2 - 2] [i_2 - 1])));
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) var_0))))));
                        arr_54 [i_0 - 2] [14U] [i_2] [i_0] [(unsigned short)4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_14 = 0; i_14 < 23; i_14 += 4) 
                    {
                        for (unsigned char i_15 = 2; i_15 < 21; i_15 += 2) 
                        {
                            {
                                arr_60 [i_0] [2ULL] = ((/* implicit */signed char) ((unsigned short) 1659154585325937554ULL));
                                var_28 = ((/* implicit */signed char) var_2);
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_16 = 3; i_16 < 22; i_16 += 4) /* same iter space */
                {
                    var_29 = ((/* implicit */signed char) arr_2 [i_0]);
                    var_30 = ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */int) (short)-30666)), (((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_5)) + (56))))))));
                    /* LoopNest 2 */
                    for (short i_17 = 2; i_17 < 20; i_17 += 3) 
                    {
                        for (int i_18 = 3; i_18 < 22; i_18 += 1) 
                        {
                            {
                                arr_67 [i_0] [i_1] [i_16] [i_17 - 2] [i_0] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) ((((((/* implicit */_Bool) -1)) ? (arr_30 [(signed char)10] [i_1] [i_0] [15] [i_18] [i_0]) : (((/* implicit */unsigned long long int) -88824821)))) > (((18446744073642442752ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
                                var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned short)38156)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_1] [6ULL] [i_18 - 1] [10ULL])))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_19 = 3; i_19 < 22; i_19 += 4) /* same iter space */
                {
                    var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_13 [i_19] [i_19] [i_19] [i_1] [(_Bool)1]))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */int) var_1)))))))));
                    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_68 [i_0 - 3] [i_1 - 1] [i_19 + 1] [i_19])) : (536805376)));
                    arr_70 [i_0] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) var_1)) ? (arr_45 [i_19 - 2] [i_0] [i_1 - 1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))));
                }
                for (unsigned char i_20 = 0; i_20 < 23; i_20 += 2) 
                {
                    arr_75 [i_0] [i_1] [(signed char)13] = ((/* implicit */unsigned short) (-(((unsigned long long int) ((((/* implicit */int) (unsigned short)15212)) / (var_9))))));
                    arr_76 [i_0] [i_1] = ((/* implicit */unsigned char) var_3);
                    var_34 ^= (~(((/* implicit */int) ((unsigned short) arr_12 [i_0 - 1] [i_0 - 1] [i_1] [(unsigned short)0] [i_20] [i_1]))));
                }
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? ((+((+(((/* implicit */int) var_0)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))) < (((/* implicit */int) var_1)))))));
}
