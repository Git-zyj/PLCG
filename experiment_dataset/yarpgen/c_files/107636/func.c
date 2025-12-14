/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107636
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
    var_15 *= ((/* implicit */_Bool) var_0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_16 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_4 [i_1] [19LL] [i_0]))) ? (((/* implicit */unsigned long long int) var_8)) : (((8944043317047816942ULL) >> (((-1485257562) + (1485257564)))))));
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1])) << (((((((((/* implicit */long long int) ((/* implicit */int) var_14))) | (-3667855949691139913LL))) + (3667855949691139941LL))) - (11LL)))));
        }
        for (int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_2]);
            arr_10 [i_0] [i_2] [(_Bool)1] = (((~(((/* implicit */int) var_3)))) == (((/* implicit */int) arr_1 [i_0])));
        }
        arr_11 [i_0] = ((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_0]);
        arr_12 [i_0] [i_0] = ((((/* implicit */_Bool) 8944043317047816942ULL)) ? (9502700756661734674ULL) : (8944043317047816941ULL));
        var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */int) var_12))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                {
                    var_18 = ((/* implicit */_Bool) min((var_18), (((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)30320)) / (((/* implicit */int) (_Bool)1))))) <= (9502700756661734673ULL)))));
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((arr_8 [i_4] [i_4]) ? (arr_4 [i_0] [i_3] [i_4]) : (arr_4 [i_0] [i_3] [i_4]))))));
                    var_20 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_4] [i_4]))));
                }
            } 
        } 
    }
    for (unsigned short i_5 = 2; i_5 < 14; i_5 += 1) 
    {
        var_21 = ((/* implicit */_Bool) arr_1 [i_5]);
        /* LoopNest 3 */
        for (signed char i_6 = 1; i_6 < 13; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 2; i_7 < 13; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((arr_22 [i_5]), (((/* implicit */unsigned long long int) arr_1 [i_5])))), (((/* implicit */unsigned long long int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((((_Bool) 7703462909841326080ULL)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_5] [i_5 - 2])) >> (((55722604U) - (55722602U)))))) : (max((var_2), (((/* implicit */long long int) var_5))))))) : (((((/* implicit */_Bool) 8944043317047816941ULL)) ? (((8944043317047816942ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_6] [(signed char)3]))))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_20 [i_5])))))));
                        var_23 = ((/* implicit */unsigned long long int) arr_25 [i_5] [i_6] [i_7]);
                        var_24 *= ((/* implicit */signed char) arr_20 [4ULL]);
                        var_25 *= ((/* implicit */short) ((((((((/* implicit */_Bool) 9502700756661734675ULL)) || (((/* implicit */_Bool) arr_4 [i_5] [i_5] [i_8])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-8401)) ? (((/* implicit */int) var_4)) : (arr_5 [(unsigned char)18])))) : (min((((/* implicit */long long int) arr_2 [i_7])), (12LL))))) == (((/* implicit */long long int) ((/* implicit */int) ((var_6) < (((((/* implicit */_Bool) (signed char)-118)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                {
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (short)30320)) ? (8944043317047816941ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) ? (min((9502700756661734659ULL), (max((9502700756661734674ULL), (8944043317047816944ULL))))) : (9502700756661734680ULL))))));
                    var_27 = ((/* implicit */unsigned long long int) ((var_2) / (((((/* implicit */_Bool) arr_5 [i_5])) ? (var_2) : (((/* implicit */long long int) ((arr_5 [i_5]) / (((/* implicit */int) var_14)))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_11 = 2; i_11 < 17; i_11 += 3) 
    {
        var_28 = ((/* implicit */unsigned short) arr_15 [i_11] [i_11]);
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_11 + 1])) ? (((/* implicit */int) arr_1 [i_11 + 1])) : (((/* implicit */int) (short)-11595))));
    }
}
