/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106381
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((2536767159U) == (((/* implicit */unsigned int) -741411830)))))) != ((~(610305378775502467LL)))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)61876);
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 9; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        for (int i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) arr_13 [i_1] [i_2] [i_2] [i_1]);
                                arr_21 [i_1] [i_2] [i_3 + 1] [i_4] [i_2] [0ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(3921354372U)))) ? (((/* implicit */unsigned long long int) ((373612917U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1] [i_2 + 1] [i_2])))))) : (((unsigned long long int) var_0))));
                                arr_22 [i_2] [i_2] [i_2] [(unsigned short)10] [i_2 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) != (arr_12 [i_2 + 3] [i_2]))))))) >> (((((/* implicit */int) ((18446744073709551606ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)218)))))) >> (0ULL)))));
                            }
                        } 
                    } 
                    arr_23 [i_1] [i_1] [i_2] = ((/* implicit */int) 0U);
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 9; i_6 += 4) 
                    {
                        for (int i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            {
                                arr_30 [i_2] = ((/* implicit */long long int) ((-1467912480) ^ (((((/* implicit */int) (signed char)-15)) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_6])))))))));
                                var_15 = ((signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) 373612952U)), (arr_26 [i_1] [i_2] [i_1] [i_2] [i_7])))) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) arr_2 [i_6 + 2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 1; i_10 < 11; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 4) 
                        {
                            {
                                arr_41 [i_1] [i_1] [(signed char)8] [i_9] [i_1] = ((((/* implicit */int) ((min((var_6), (((/* implicit */long long int) arr_18 [i_9])))) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-104)))))) % ((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))))));
                                var_16 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_40 [i_10 + 1] [i_9] [i_9] [i_9 + 1])) ? (2536767159U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_10 + 1] [i_9] [i_9 + 1] [i_9 + 1]))))));
                                var_17 *= ((/* implicit */long long int) (signed char)-22);
                            }
                        } 
                    } 
                    arr_42 [i_1] [i_8] [i_9 + 1] [i_9] = ((/* implicit */_Bool) ((unsigned char) 9937976862558926216ULL));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) arr_38 [i_1] [i_1])))))))));
        arr_43 [i_1] = ((/* implicit */unsigned int) arr_26 [i_1] [i_1] [i_1] [i_1] [i_1]);
        var_19 = ((/* implicit */unsigned int) (short)0);
    }
    for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) (_Bool)1);
        /* LoopNest 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (long long int i_14 = 0; i_14 < 12; i_14 += 3) 
            {
                {
                    var_21 = (!(((/* implicit */_Bool) (short)14211)));
                    var_22 = max(((-(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_8)))))), (((/* implicit */int) var_5)));
                }
            } 
        } 
    }
    for (unsigned char i_15 = 4; i_15 < 11; i_15 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_16 = 2; i_16 < 13; i_16 += 4) 
        {
            for (signed char i_17 = 0; i_17 < 14; i_17 += 1) 
            {
                {
                    arr_66 [i_17] = (~((~(((/* implicit */int) (_Bool)1)))));
                    var_23 = ((/* implicit */unsigned short) ((int) ((arr_60 [i_15 - 4] [i_16]) * (arr_60 [i_15 - 4] [i_17]))));
                }
            } 
        } 
        arr_67 [i_15] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_15 + 3]))) : (1581232456422335424ULL)))) || (((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) ((18446744073709551607ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61876)))))) : ((~((+(((/* implicit */int) (unsigned short)65354))))))));
    }
    var_24 = 3041654163775884402LL;
    var_25 = ((/* implicit */int) (_Bool)1);
    var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
}
