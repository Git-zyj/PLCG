/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179795
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
    var_19 = ((/* implicit */long long int) var_8);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_20 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (~(var_17)))) ? (((((/* implicit */_Bool) 4664690656266635845LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-400726172047232212LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)90))))), (((/* implicit */long long int) (((-(3613903620U))) - (arr_2 [i_0]))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) 0U)) != (-1497688229173578364LL)))) <= (((int) (-(798428863U))))));
            arr_5 [1U] [i_1] [1U] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-32756))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))) : (((unsigned int) (short)32763)))));
            arr_6 [10U] [i_1] &= ((/* implicit */long long int) (((-(((/* implicit */int) var_16)))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
            var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1] [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_3 [9] [i_0 - 1] [i_0 - 1])) : (var_0)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))))) : ((-(arr_2 [i_1]))))))));
        }
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)144)))))))) <= (((/* implicit */int) (short)-32756)))))));
            var_24 = ((/* implicit */long long int) (-(min((((/* implicit */unsigned int) var_5)), (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32761))) : (1872060025U)))))));
            var_25 = ((/* implicit */long long int) min((var_25), (((((/* implicit */_Bool) (short)-32767)) ? (-5604802307547853926LL) : (((/* implicit */long long int) 4212955223U))))));
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    {
                        arr_13 [i_0] [i_0] [i_3] [i_0] = ((((((/* implicit */long long int) 132120576U)) > (var_14))) ? (max((((arr_12 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))))))) : (2979414161U));
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
                        {
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((unsigned int) ((int) (~(((/* implicit */int) (short)-32766)))))))));
                            arr_17 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 + 1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)0), ((unsigned char)30))))) / (((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)29))) : (max((var_2), (((/* implicit */long long int) arr_7 [(_Bool)1] [(_Bool)1]))))))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            var_27 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) (short)32751))));
                            arr_22 [i_6] [i_4] [i_3] [(_Bool)1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) var_13))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [18] [18] [(unsigned short)15] [(short)3] [(short)3]))) : (var_14)));
                        }
                        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            arr_25 [i_0 - 1] [(_Bool)1] [(unsigned short)10] = ((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)172)) && (((/* implicit */_Bool) 585165533))))), (var_9))))));
                            arr_26 [i_4] [(unsigned short)6] [i_4] [(unsigned short)6] [(unsigned short)6] [i_4] [i_4] = ((/* implicit */short) var_1);
                        }
                    }
                } 
            } 
        }
        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 4) /* same iter space */
        {
            arr_29 [(unsigned short)3] [i_8] = ((/* implicit */short) min((((arr_20 [i_0] [i_0] [i_0] [(_Bool)1] [i_0]) % (2268910197U))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)107)) != ((~((-2147483647 - 1)))))))));
            arr_30 [(unsigned short)18] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */unsigned long long int) ((min((arr_16 [i_0 + 1] [(signed char)17] [i_0 + 1] [(signed char)17] [i_0 + 1] [11] [i_0]), (((/* implicit */long long int) var_9)))) | (((((/* implicit */_Bool) (short)-25624)) ? (((/* implicit */long long int) 275622350U)) : (var_18))))))));
            arr_31 [(unsigned char)15] [i_8] [i_8] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_10 [i_0 - 1] [i_0 - 1] [i_0 + 1]), (arr_12 [i_0 - 1]))))));
            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) arr_18 [i_8] [i_8] [(short)12] [i_0] [i_0] [(short)18] [20U]))));
        }
        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) min((((unsigned int) ((arr_19 [i_0] [3ULL] [i_0] [i_0] [i_0] [i_0] [(short)1]) ? (((/* implicit */unsigned long long int) arr_16 [3U] [10LL] [i_0] [18U] [i_0] [i_0] [i_0 - 1])) : (var_4)))), (max((((arr_9 [i_0]) | (((/* implicit */unsigned int) var_17)))), (((/* implicit */unsigned int) arr_11 [i_0 - 1] [9U] [9U] [i_0 - 1] [(unsigned short)14] [9U])))))))));
        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) var_4))));
    }
    /* LoopSeq 4 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_31 = ((/* implicit */short) 585165533);
        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((unsigned int) (((~(((/* implicit */int) var_9)))) * (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-25602))))))))));
        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) arr_32 [5LL])) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)121))) + (((arr_32 [i_9]) | (((/* implicit */long long int) ((/* implicit */int) arr_33 [(short)16] [i_9]))))))) : (((/* implicit */long long int) (+(((/* implicit */int) ((var_3) < (((/* implicit */long long int) var_1))))))))));
    }
    for (unsigned short i_10 = 0; i_10 < 19; i_10 += 4) /* same iter space */
    {
        var_34 -= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) > (min((7524053624494017427LL), (var_18)))));
        /* LoopNest 3 */
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
        {
            for (unsigned char i_12 = 0; i_12 < 19; i_12 += 4) 
            {
                for (int i_13 = 3; i_13 < 18; i_13 += 4) 
                {
                    {
                        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((((/* implicit */_Bool) ((((585165533) > (((/* implicit */int) (short)-32757)))) ? (arr_41 [i_11] [i_12] [i_11] [i_10]) : (((((/* implicit */_Bool) arr_33 [21U] [9])) ? (((/* implicit */int) (short)-26877)) : (var_1)))))) ? (((/* implicit */int) (short)-32757)) : (((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) ((_Bool) arr_10 [(short)2] [i_11] [(short)2])))))))))));
                        arr_46 [10U] [10U] [10U] [i_13 + 1] [0U] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((var_18) <= (((/* implicit */long long int) (-(585165541)))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_14 = 0; i_14 < 19; i_14 += 4) /* same iter space */
    {
        var_36 *= (+(((((/* implicit */_Bool) ((var_17) >> (((((/* implicit */int) (short)-25624)) + (25654)))))) ? (-585165533) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [(_Bool)1] [i_14]))))))));
        /* LoopSeq 1 */
        for (int i_15 = 0; i_15 < 19; i_15 += 4) 
        {
            var_37 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)46997)), (((long long int) ((_Bool) var_5)))));
            arr_51 [i_15] [i_15] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((-7524053624494017432LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_10)))))))) ^ (((unsigned long long int) var_6))));
            /* LoopNest 2 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                {
                    {
                        arr_56 [i_16] [i_17 - 1] [i_16] [i_15] [i_16] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) / (max((((/* implicit */unsigned int) var_1)), (arr_50 [i_15] [i_16] [i_17])))))) | ((+(max((var_13), (((/* implicit */unsigned long long int) 1073741823U))))))));
                        arr_57 [i_15] |= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_45 [(signed char)0] [i_15] [1ULL] [i_17] [i_17])) / (((/* implicit */int) arr_42 [i_17] [6LL] [i_14] [(signed char)7] [i_14] [i_14]))))))))));
                    }
                } 
            } 
        }
        var_38 = ((/* implicit */short) max((min((((/* implicit */int) ((((/* implicit */_Bool) 1949742026419770638ULL)) && (((/* implicit */_Bool) 2333278401U))))), (((((/* implicit */int) arr_7 [i_14] [20])) / (var_0))))), ((~(min((((/* implicit */int) (short)-30701)), (arr_4 [i_14])))))));
        arr_58 [i_14] [i_14] = ((/* implicit */unsigned short) min((arr_40 [i_14] [i_14]), (((/* implicit */unsigned int) (short)32724))));
        arr_59 [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_14] [i_14] [i_14] [3] [(short)16] [i_14] [i_14])) ? ((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_0)) : (-7524053624494017428LL))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) var_17)) + (-7524053624494017427LL)))) ? ((~(arr_37 [i_14]))) : (((/* implicit */long long int) var_17))))));
    }
    /* vectorizable */
    for (unsigned char i_18 = 0; i_18 < 17; i_18 += 4) 
    {
        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_18] [i_18])) ? (((/* implicit */int) arr_55 [i_18] [i_18] [i_18] [i_18] [18ULL] [i_18])) : (((/* implicit */int) var_10))));
        var_40 = ((/* implicit */long long int) (+(((1961688895U) & (1961688894U)))));
    }
    var_41 = ((/* implicit */_Bool) min((((/* implicit */short) ((var_18) >= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_15))))))), ((short)32767)));
    var_42 |= ((/* implicit */int) (-(((((/* implicit */long long int) (~(((/* implicit */int) (short)32766))))) | (var_2)))));
}
