/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108543
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
    var_11 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (var_9)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((unsigned long long int) arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
            var_13 &= var_7;
        }
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_14 = ((/* implicit */unsigned int) var_7);
            var_15 = ((/* implicit */unsigned long long int) ((unsigned int) var_0));
        }
    }
    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        var_16 &= ((/* implicit */short) (-(((/* implicit */int) min(((unsigned short)554), ((unsigned short)64981))))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 1; i_4 < 20; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_17 = min((11333932049998249974ULL), (((/* implicit */unsigned long long int) (+(var_5)))));
                    var_18 = ((/* implicit */unsigned long long int) var_1);
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        for (short i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            {
                                var_19 = min(((-(11333932049998249971ULL))), (((/* implicit */unsigned long long int) ((arr_18 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 + 1]) < (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_2)), (arr_13 [i_5] [i_5] [i_7]))))))));
                                arr_23 [i_7] [i_3] [(unsigned short)0] [i_7] &= ((/* implicit */unsigned int) ((signed char) max((var_6), (arr_16 [i_4 - 1] [(short)15] [i_4 + 1]))));
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (var_4)));
                            }
                        } 
                    } 
                    arr_24 [(_Bool)0] [i_5] [i_5] [(unsigned short)14] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1LL)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)555))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))) : ((-(var_7))))) : (((((/* implicit */_Bool) var_6)) ? (((var_5) - (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) (+(var_8))))))));
                }
            } 
        } 
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_21 -= var_10;
        var_22 = ((/* implicit */unsigned int) arr_11 [i_8] [i_8]);
        arr_27 [i_8] [i_8] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_8]))) : (var_8)))), (arr_14 [i_8] [i_8])));
        /* LoopNest 2 */
        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) 
        {
            for (unsigned long long int i_10 = 2; i_10 < 19; i_10 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 21; i_11 += 1) 
                    {
                        for (unsigned int i_12 = 1; i_12 < 19; i_12 += 1) 
                        {
                            {
                                var_23 *= ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_16 [i_12 + 1] [i_10] [i_10 + 1])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_12 + 2] [i_12] [i_10 + 1]))) * (var_10)))));
                                var_24 = min((max((arr_18 [i_12] [i_11] [i_10 + 1] [i_9]), (arr_18 [i_8] [i_9] [i_8] [i_11]))), (max((((/* implicit */unsigned long long int) arr_10 [i_8])), (7112812023711301644ULL))));
                                var_25 += ((/* implicit */_Bool) -1551904636);
                                var_26 = ((/* implicit */long long int) ((arr_22 [(signed char)18] [i_10] [(signed char)12] [i_10 + 2] [i_10 - 2] [i_12 + 2]) ? (arr_20 [i_12] [i_8] [i_8] [10U]) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_9]))) : (1048575U))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        for (long long int i_14 = 0; i_14 < 21; i_14 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) 288230376084602880ULL))));
                                var_28 = ((/* implicit */unsigned char) ((17836539970385564283ULL) < (((/* implicit */unsigned long long int) var_1))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */unsigned int) (unsigned short)64102)), (var_10)))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned long long int i_15 = 1; i_15 < 10; i_15 += 1) 
    {
        for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 1) 
        {
            {
                var_30 |= ((/* implicit */_Bool) ((((_Bool) ((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned char)174))))));
                var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) max((2397981033U), (((/* implicit */unsigned int) (_Bool)1)))))));
            }
        } 
    } 
}
