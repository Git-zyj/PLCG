/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150445
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) ((unsigned short) (-(arr_3 [i_0]))));
                arr_6 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */signed char) (_Bool)0)), ((signed char)44)));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) var_15);
    /* LoopSeq 4 */
    for (int i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */short) max((((9327697668768021104ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)119))))), (((/* implicit */unsigned long long int) (+(arr_3 [i_2]))))));
        arr_10 [i_2] = ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (signed char)59)), (4006404968612732606ULL))) >> (((((/* implicit */int) (signed char)-54)) + (62)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) -5)) >= (11637461248811491046ULL)))) : ((-(((/* implicit */int) (_Bool)1)))));
        arr_11 [i_2] = min(((-(arr_2 [i_2] [(signed char)4]))), (((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (arr_2 [i_2] [i_2]) : (arr_2 [i_2] [i_2]))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_4 = 4; i_4 < 17; i_4 += 1) /* same iter space */
        {
            arr_16 [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) (unsigned char)5))));
            var_18 = ((/* implicit */long long int) ((-1718595689) - ((+(arr_1 [i_3] [i_3])))));
            arr_17 [10U] [i_4 - 4] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) -6500247811491352317LL)) ? (6500247811491352317LL) : (((/* implicit */long long int) -1718595689))));
        }
        for (short i_5 = 4; i_5 < 17; i_5 += 1) /* same iter space */
        {
            var_19 -= ((/* implicit */unsigned short) arr_19 [i_3] [i_3]);
            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((arr_1 [i_3] [i_5]) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))))));
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (~(((unsigned int) arr_12 [(signed char)8])))))));
        }
        arr_20 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)24684)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3]))) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3])))));
        var_22 = ((/* implicit */unsigned int) ((unsigned long long int) arr_0 [i_3]));
    }
    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
    {
        var_23 |= ((/* implicit */signed char) max((((/* implicit */unsigned short) (signed char)32)), ((unsigned short)50338)));
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) min((max((var_13), (max((((/* implicit */long long int) var_0)), (arr_21 [6ULL]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14808))) : (18446744073709551594ULL)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-9)), (var_6)))) : (1)))))))));
        arr_23 [i_6] [i_6] = ((unsigned long long int) (signed char)-2);
    }
    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
    {
        var_25 &= ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) arr_25 [i_7] [8ULL])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [(signed char)8]))))))));
        arr_26 [i_7] [i_7] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_7]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_7 [i_7]), (((/* implicit */signed char) (_Bool)1)))))) : (((((/* implicit */_Bool) arr_7 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_7]))) : (6500247811491352326LL))));
        var_26 ^= ((/* implicit */_Bool) min((max((((unsigned long long int) arr_0 [(short)15])), (((/* implicit */unsigned long long int) arr_18 [i_7] [i_7] [0LL])))), (min((max((((/* implicit */unsigned long long int) arr_0 [i_7])), (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_7])) ? (arr_21 [6LL]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-28))))))))));
        /* LoopSeq 2 */
        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            arr_29 [i_7] [i_7] = ((/* implicit */short) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_7] [i_8] [i_7])) ? (((/* implicit */int) (unsigned short)14336)) : (((/* implicit */int) arr_0 [i_8]))))), (((((/* implicit */_Bool) var_6)) ? (arr_15 [i_7] [i_7] [i_8]) : (((/* implicit */long long int) var_1)))))) / (((((/* implicit */_Bool) arr_27 [i_7])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_7] [i_7] [i_8])) ? (((/* implicit */int) (unsigned char)52)) : (((/* implicit */int) var_4))))) : (min((arr_3 [i_7]), (((/* implicit */long long int) var_8))))))));
            arr_30 [0LL] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_7])) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) & (((/* implicit */int) (unsigned short)23092))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (((((/* implicit */unsigned long long int) 6500247811491352317LL)) + (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) (unsigned char)10)))))))));
            arr_31 [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_15 [i_7] [i_7] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_21 [i_7]))), (((/* implicit */long long int) ((short) 8871014606457338596LL)))))) ? (((((/* implicit */_Bool) arr_4 [i_7])) ? (((((/* implicit */_Bool) arr_27 [6U])) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) arr_25 [i_7] [i_7])) ? (((/* implicit */int) (unsigned short)11155)) : (var_2))))) : (((/* implicit */int) (signed char)-81))));
        }
        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)32763)), (3974767656282536825ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_7]) || (((/* implicit */_Bool) arr_15 [i_7] [i_7] [(unsigned short)16])))))) : (var_7))) << (((((/* implicit */int) max(((unsigned short)65535), ((unsigned short)22857)))) - (65479)))));
            arr_34 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_7]))) : (arr_33 [i_7])))) ? (((((/* implicit */_Bool) var_14)) ? (arr_1 [i_7] [i_7]) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((arr_22 [i_7]), (((/* implicit */signed char) var_4)))))))) ? (((((/* implicit */_Bool) (signed char)-59)) ? (arr_13 [i_7] [i_9]) : (arr_13 [i_7] [i_9]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_7])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1)))))));
            var_28 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_9])) ? (((/* implicit */int) arr_7 [i_9])) : (((/* implicit */int) arr_7 [i_9]))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (536870911U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) / ((+(arr_33 [i_9]))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)33191)) & (((/* implicit */int) (unsigned short)3)))))));
        }
    }
}
