/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106591
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
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        arr_12 [19LL] [19LL] [19LL] [i_3] [i_3] = ((/* implicit */unsigned int) (unsigned char)186);
                        var_12 = ((/* implicit */unsigned char) arr_0 [i_0]);
                        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)203)) << (((((/* implicit */int) arr_3 [i_0] [13ULL] [(_Bool)1])) - (236)))))), (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)78)))))) < (((/* implicit */long long int) ((arr_4 [i_0] [i_0] [i_0]) / (((/* implicit */int) var_9))))))))));
                        var_14 ^= ((/* implicit */unsigned char) arr_5 [i_1] [i_1] [i_2] [i_3]);
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */long long int) var_1);
                        var_16 = ((/* implicit */long long int) ((arr_2 [i_0]) == (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    }
                    for (unsigned short i_5 = 1; i_5 < 19; i_5 += 4) 
                    {
                        var_17 -= ((/* implicit */long long int) ((((/* implicit */int) var_6)) > (((/* implicit */int) (unsigned char)51))));
                        var_18 = ((/* implicit */unsigned int) ((((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((((/* implicit */int) arr_13 [i_0] [i_1] [i_5 + 3] [i_5 + 1] [i_5 + 2] [i_5 + 3])) - (22))))) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)208)) > (((/* implicit */int) max(((unsigned char)78), ((unsigned char)208)))))))));
                        var_19 = ((/* implicit */unsigned char) 433689207);
                    }
                    var_20 = var_0;
                }
            } 
        } 
        var_21 &= ((((/* implicit */int) max((max((((/* implicit */short) var_0)), (arr_18 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */short) (unsigned char)219))))) - (((/* implicit */int) var_3)));
    }
    var_22 = ((/* implicit */_Bool) var_2);
    var_23 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (unsigned char)70))))), (max((var_5), (((/* implicit */unsigned int) var_3))))));
    var_24 = 2818572409683690327ULL;
    /* LoopNest 2 */
    for (short i_6 = 1; i_6 < 19; i_6 += 1) 
    {
        for (short i_7 = 1; i_7 < 20; i_7 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (short i_9 = 1; i_9 < 19; i_9 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) min((var_8), (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-2030839734350672443LL))), (((/* implicit */long long int) (signed char)-75)))))))));
                            var_26 = ((((((/* implicit */_Bool) max((arr_15 [i_9]), (((/* implicit */long long int) arr_7 [i_6]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (13312660666201086129ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((arr_29 [i_6] [i_7 - 1] [i_6]), (((/* implicit */unsigned long long int) 3669362977U))))) || (((/* implicit */_Bool) ((var_8) & (((/* implicit */long long int) ((/* implicit */int) var_4)))))))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (int i_10 = 1; i_10 < 17; i_10 += 2) 
                {
                    arr_34 [i_6] [i_7] [i_6] [i_10] = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_11 [i_6])), (((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)178))) - (var_11))) + (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)205))) - (var_7)))))));
                    arr_35 [14LL] [i_7] &= ((/* implicit */signed char) max((((/* implicit */int) var_9)), (((((/* implicit */int) max((arr_31 [i_6] [i_7]), (((/* implicit */unsigned short) var_6))))) >> (((-14) + (26)))))));
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_0)) <= (((/* implicit */int) arr_23 [i_6] [i_7])))) ? (((/* implicit */int) var_2)) : (max((((/* implicit */int) (unsigned char)189)), (arr_32 [i_6] [i_6 + 1] [i_6 + 2])))))) * (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_27 [i_6 + 1] [i_6 - 1] [9LL])) * (((/* implicit */int) (unsigned char)171))))), (max((arr_29 [i_6] [i_6] [i_6 + 1]), (((/* implicit */unsigned long long int) var_8))))))));
                }
                for (unsigned int i_11 = 2; i_11 < 20; i_11 += 4) 
                {
                    var_28 = ((/* implicit */signed char) (unsigned char)206);
                    var_29 += ((/* implicit */signed char) -11LL);
                    var_30 = ((/* implicit */int) var_8);
                    var_31 = ((/* implicit */long long int) var_9);
                }
                for (long long int i_12 = 0; i_12 < 21; i_12 += 2) /* same iter space */
                {
                    var_32 *= var_5;
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_33 = ((/* implicit */_Bool) var_4);
                        arr_42 [i_6] = ((/* implicit */_Bool) var_3);
                        arr_43 [i_6] [i_6] [8] [i_12] [i_6] [i_6 - 1] = var_5;
                    }
                    var_34 = min((arr_31 [i_6] [i_6]), (var_1));
                }
                for (long long int i_14 = 0; i_14 < 21; i_14 += 2) /* same iter space */
                {
                    arr_48 [i_14] [i_7 + 1] [8U] &= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned char)78)), (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) % (((/* implicit */int) var_1))))) ? (min((((/* implicit */unsigned int) -14)), (477540902U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)53)) * (((/* implicit */int) (unsigned char)68)))))))));
                    var_35 = ((/* implicit */int) var_10);
                    /* LoopSeq 4 */
                    for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 4) 
                    {
                        var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) (!(((/* implicit */_Bool) min(((+(((/* implicit */int) var_6)))), (((/* implicit */int) arr_11 [i_15]))))))))));
                        var_37 = ((/* implicit */int) var_3);
                        /* LoopSeq 1 */
                        for (long long int i_16 = 1; i_16 < 17; i_16 += 4) 
                        {
                            var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)60)), ((~(((/* implicit */int) var_4)))))))));
                            var_39 = ((/* implicit */long long int) (short)0);
                            var_40 = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_3)) >= (((/* implicit */int) (_Bool)0)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (max((var_7), (((/* implicit */long long int) (unsigned char)205)))))) & (((/* implicit */long long int) min((((/* implicit */int) arr_41 [i_6] [i_7 + 1] [i_7] [i_7 + 1] [i_7])), (((((/* implicit */int) var_9)) * (((/* implicit */int) var_6)))))))));
                            var_41 = ((/* implicit */unsigned short) (unsigned char)73);
                            arr_55 [i_6] [i_15] [i_6] [(unsigned char)12] [i_6] &= ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_17 [i_6] [i_6 - 1] [i_14] [i_6])) / (((/* implicit */int) (unsigned char)50))))));
                        }
                        var_42 *= ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                    for (unsigned int i_17 = 0; i_17 < 21; i_17 += 4) 
                    {
                        arr_59 [i_6] [i_6 - 1] [i_6] [i_6] = max((((/* implicit */unsigned long long int) ((min((var_7), (((/* implicit */long long int) arr_23 [i_6] [i_7 + 1])))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_20 [11ULL] [11ULL])))))))), (((arr_21 [i_6 - 1]) >> (((/* implicit */int) (unsigned char)0)))));
                        var_43 *= ((/* implicit */short) ((min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))))), (6864036205433203201LL))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)86)))));
                        var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) min((((((((/* implicit */_Bool) arr_3 [i_6] [i_6 + 1] [i_6])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_47 [i_6 + 1] [i_6 + 2] [i_6])))) * (((/* implicit */int) var_1)))), (((/* implicit */int) ((arr_10 [i_6] [i_6] [i_6] [i_6 - 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)59)))))))))));
                    }
                    /* vectorizable */
                    for (short i_18 = 3; i_18 < 19; i_18 += 4) /* same iter space */
                    {
                        var_45 = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) == (((/* implicit */int) arr_1 [9LL]))));
                        arr_62 [i_14] |= var_8;
                        var_46 = ((/* implicit */_Bool) var_6);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_19 = 0; i_19 < 21; i_19 += 4) 
                        {
                            arr_66 [i_6 + 1] [i_6 + 1] [(short)17] [i_6] [i_6 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) -6864036205433203201LL)) <= (8780515604429730194ULL)));
                            arr_67 [i_6 + 2] [i_6 + 2] [i_6] [i_6] [i_6 + 2] = ((/* implicit */int) (signed char)110);
                        }
                        var_47 = ((/* implicit */int) arr_54 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6 + 1] [7]);
                    }
                    for (short i_20 = 3; i_20 < 19; i_20 += 4) /* same iter space */
                    {
                        arr_70 [i_6] [i_6] [i_6 + 2] [i_6 + 1] = arr_61 [i_6] [i_6] [i_6 - 1];
                        arr_71 [i_6] [i_7] = ((/* implicit */long long int) 18446744073709551614ULL);
                    }
                }
            }
        } 
    } 
}
