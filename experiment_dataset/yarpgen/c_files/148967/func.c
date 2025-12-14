/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148967
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
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 24; i_0 += 3) /* same iter space */
    {
        var_10 ^= ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))))) ? (min((min((15725368479073792918ULL), (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [13U] [i_0])) || (((/* implicit */_Bool) -1309945373))))))) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])));
        var_11 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))) + (max((((/* implicit */unsigned long long int) var_9)), (12016013351209812166ULL)))));
        arr_2 [i_0] [i_0 - 2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 12134064343313203813ULL)) ? (12134064343313203805ULL) : (15725368479073792914ULL))), (((((/* implicit */unsigned long long int) arr_1 [i_0 - 1] [i_0 - 2])) + (((((/* implicit */_Bool) (short)-17532)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242))) : (arr_0 [i_0 + 1] [24ULL])))))));
        arr_3 [i_0 - 1] = ((/* implicit */signed char) ((((((/* implicit */int) ((arr_1 [i_0 - 2] [i_0]) == (((/* implicit */int) var_5))))) >> (((((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])) ? (arr_0 [19ULL] [19ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)88))))) - (10571290643799667702ULL))))) | (min((arr_1 [20] [20]), (((/* implicit */int) ((8796093022207ULL) != (15725368479073792886ULL))))))));
    }
    for (signed char i_1 = 2; i_1 < 24; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 2; i_2 < 22; i_2 += 3) 
        {
            var_12 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((arr_4 [i_1 - 2] [i_2]), (arr_7 [i_2])))) ? (((/* implicit */int) (short)17399)) : (((/* implicit */int) min((arr_8 [2ULL]), (((/* implicit */unsigned short) arr_7 [i_1]))))))), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_0 [i_1] [i_2]) | (((/* implicit */unsigned long long int) 1519259681))))) && (((/* implicit */_Bool) ((arr_0 [23] [i_2]) + (((/* implicit */unsigned long long int) var_8))))))))));
            var_13 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) max((arr_7 [i_1]), (((/* implicit */unsigned char) arr_5 [i_2]))))) / (((/* implicit */int) var_6)))));
            arr_10 [i_1] [i_1] [i_2 + 3] = ((/* implicit */unsigned short) arr_5 [i_1]);
        }
        /* LoopNest 2 */
        for (long long int i_3 = 2; i_3 < 23; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 24; i_4 += 1) 
            {
                {
                    arr_17 [i_3] [i_3] [i_4 + 1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((_Bool) var_6)))))) - (((arr_14 [i_4 - 1] [i_4] [i_3] [i_1]) & (arr_14 [i_1 - 2] [i_1 - 2] [i_1] [i_1 - 2])))));
                    var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned char) (!(arr_11 [i_3])))), (arr_7 [i_4])));
                    arr_18 [i_3] [i_3] [i_4] = max((((/* implicit */unsigned long long int) arr_11 [i_3])), (2721375594635758718ULL));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            arr_21 [i_5] [i_1 - 1] [(short)17] = ((/* implicit */unsigned char) (((+(max((((/* implicit */long long int) arr_12 [i_1])), (var_4))))) % (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 - 1])))));
            arr_22 [i_1] [i_1] [i_1 - 2] = ((((((/* implicit */_Bool) (short)14077)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 435354627U)) ? (-753108592) : (((/* implicit */int) (signed char)117))))) : (-1448416199845848577LL))) & (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 - 1]))));
        }
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            arr_25 [i_1 - 2] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551601ULL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_0 [i_1] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 - 1]))))))));
            /* LoopNest 3 */
            for (unsigned int i_7 = 3; i_7 < 24; i_7 += 3) 
            {
                for (short i_8 = 2; i_8 < 23; i_8 += 1) 
                {
                    for (int i_9 = 2; i_9 < 23; i_9 += 3) 
                    {
                        {
                            arr_34 [6ULL] [0ULL] [20] [i_9 - 1] &= ((((/* implicit */unsigned long long int) var_2)) - (arr_23 [i_8 - 1] [i_9 - 2]));
                            arr_35 [i_7] [i_7 - 1] [i_8 + 2] [i_7] = ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [(unsigned char)6])) && (((/* implicit */_Bool) arr_19 [i_1 - 2] [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4115672797U))))));
                            var_15 += ((/* implicit */unsigned char) arr_14 [20ULL] [i_7 - 3] [i_8] [i_9]);
                            arr_36 [i_9] [i_8 - 2] [i_7] [i_7] [i_6] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_32 [i_7 - 1] [i_9] [i_9 + 1] [i_9] [(unsigned char)12] [(_Bool)1]))));
                            var_16 |= ((/* implicit */unsigned char) ((2721375594635758705ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1 - 1])))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_10 = 1; i_10 < 23; i_10 += 1) 
            {
                for (short i_11 = 1; i_11 < 24; i_11 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned long long int) arr_39 [i_1 + 1]);
                        var_18 *= ((/* implicit */unsigned long long int) ((unsigned char) ((arr_37 [23LL] [i_11 - 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_1 + 1] [(unsigned char)21] [i_10 - 1]))))));
                    }
                } 
            } 
        }
        arr_43 [i_1 - 2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_1 - 1]))));
    }
    var_19 = ((/* implicit */short) max((var_6), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 7ULL)))))));
}
