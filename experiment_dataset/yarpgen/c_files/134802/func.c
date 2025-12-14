/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134802
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
    var_13 = (~(7691759501232244740ULL));
    var_14 += ((/* implicit */unsigned int) var_12);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    for (short i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_15 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11632)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53903)))))) ? (max((((/* implicit */unsigned long long int) 524224U)), (arr_9 [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18881))))) / (((/* implicit */unsigned long long int) ((long long int) arr_4 [i_2 + 2] [i_3 - 1]))));
                            var_16 |= min((((((/* implicit */_Bool) -7389617247412200065LL)) ? ((-(13495321728283790852ULL))) : (((/* implicit */unsigned long long int) (~(2889029671U)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) && (((/* implicit */_Bool) var_2))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 13; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) 51110024052366707ULL);
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_4] [i_0] [i_0])) ? (((((((/* implicit */_Bool) (unsigned short)22049)) ? (13495321728283790856ULL) : (((/* implicit */unsigned long long int) 983060360U)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39376))) & (17761825001890053003ULL)))));
                            var_19 = ((/* implicit */unsigned short) (~(2848996099U)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_6 = 1; i_6 < 15; i_6 += 4) 
                {
                    for (short i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        {
                            var_20 -= (((!(((/* implicit */_Bool) (~(-7389617247412200065LL)))))) ? ((~(((((/* implicit */_Bool) 13013776234939774873ULL)) ? (12388215123631927315ULL) : (((/* implicit */unsigned long long int) 2673749138U)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)31744))) + (arr_13 [i_1] [i_6 + 1] [i_7] [i_7])))));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)64491)), (var_8)))) ? (((/* implicit */unsigned long long int) var_10)) : (((unsigned long long int) var_12)))))))));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (arr_10 [i_7] [i_1] [i_1] [i_0])));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) == (2553739255320873211ULL)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_8 = 1; i_8 < 12; i_8 += 2) 
    {
        for (short i_9 = 1; i_9 < 11; i_9 += 2) 
        {
            for (short i_10 = 0; i_10 < 13; i_10 += 2) 
            {
                {
                    var_24 |= (-(13495321728283790872ULL));
                    arr_25 [i_8] [i_9] [(short)1] = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_0))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_11 = 0; i_11 < 13; i_11 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (var_12) : (arr_19 [i_8 + 1])));
                        var_27 = ((/* implicit */unsigned short) arr_3 [i_8 + 1] [i_11]);
                        arr_28 [i_9] [i_10] [i_9 - 1] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-18879)) ^ (((/* implicit */int) var_1))))) ? (var_3) : (((/* implicit */unsigned long long int) arr_13 [i_8 + 1] [i_8] [i_8 + 1] [i_11]))));
                        arr_29 [i_8] [i_9] [i_10] [i_11] [i_10] = (+(arr_9 [i_9]));
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned int) (short)25111);
}
