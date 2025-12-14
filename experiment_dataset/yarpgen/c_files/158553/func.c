/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158553
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
    var_17 = ((/* implicit */unsigned int) max((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (18080883469876890333ULL))), (((/* implicit */unsigned long long int) var_1)))), (((((/* implicit */_Bool) ((2185552131570813390LL) & (((/* implicit */long long int) var_1))))) ? (11528922610340688128ULL) : (((11528922610340688128ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52737)))))))));
    var_18 = ((/* implicit */unsigned long long int) (unsigned char)13);
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_19 *= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((11528922610340688128ULL) - (11528922610340688123ULL)))))) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)52738)) <= (((/* implicit */int) arr_0 [i_0]))))))) == (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)242))) != (((((/* implicit */_Bool) arr_0 [4LL])) ? (((/* implicit */unsigned int) 1700986519)) : (arr_1 [i_0] [i_0]))))))));
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) var_2))))))) / (((((/* implicit */_Bool) (unsigned short)52713)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (11528922610340688128ULL)))));
        var_20 = ((/* implicit */int) 8715950832040331736ULL);
        arr_3 [i_0] = (_Bool)1;
    }
    for (int i_1 = 4; i_1 < 9; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) 10683100);
        var_21 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_13)), (-1262355811152292385LL)))) + (arr_4 [i_1]))), (((/* implicit */unsigned long long int) (_Bool)1))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) (short)9441)) : (-10683106)));
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 9; i_2 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (short)27074))));
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) (unsigned short)52737)) - (((/* implicit */int) (short)9441)))) : (((/* implicit */int) (_Bool)1)))))));
        var_25 -= ((/* implicit */unsigned char) arr_5 [i_2]);
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 9; i_3 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            var_26 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52738))) : (-6601678002346369175LL)))) || (((/* implicit */_Bool) (signed char)-64))));
            var_27 = 9223372036854775807LL;
            arr_13 [i_4] [i_4] [i_4] = ((/* implicit */short) ((((arr_8 [i_3] [i_4]) << (((1262355811152292384LL) - (1262355811152292360LL))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47251)))));
            var_28 = ((/* implicit */int) max((var_28), (((((/* implicit */_Bool) arr_7 [i_3] [4])) ? (((/* implicit */int) ((arr_5 [5]) < (3357498896335065683LL)))) : (((((/* implicit */int) (unsigned short)52706)) ^ (((/* implicit */int) var_6))))))));
        }
        for (int i_5 = 3; i_5 < 9; i_5 += 2) 
        {
            var_29 = ((/* implicit */unsigned int) var_11);
            var_30 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18308))) % (arr_14 [i_3 - 4])));
            arr_18 [3] [i_5 + 1] [i_5 - 3] = ((/* implicit */unsigned short) ((arr_4 [i_3 - 2]) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */int) (unsigned short)12822)) : (((/* implicit */int) (_Bool)1)))))));
        }
        arr_19 [i_3] [i_3] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_3 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((3107097303675234242LL) != (3099070732701941269LL))))) : (((((/* implicit */_Bool) 4007397464U)) ? (2945172147071408075ULL) : (((/* implicit */unsigned long long int) arr_5 [i_3 - 1]))))));
        var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47253))) : (arr_8 [i_3] [i_3 + 1])))) ? (((/* implicit */unsigned long long int) arr_5 [i_3 + 3])) : (arr_4 [i_3]));
    }
}
