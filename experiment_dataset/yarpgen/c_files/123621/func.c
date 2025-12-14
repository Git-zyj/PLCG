/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123621
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
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    var_12 = ((/* implicit */long long int) min((arr_4 [i_1 + 2]), (min((arr_4 [i_1 + 2]), (var_3)))));
                    arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) var_6);
                }
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned long long int) var_4);
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1)))))) : (-2340226535392261584LL)));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_5 = 2; i_5 < 21; i_5 += 3) 
                {
                    var_15 = ((/* implicit */int) max((max((((/* implicit */long long int) (short)-30555)), (-2929382486789394576LL))), (((/* implicit */long long int) arr_17 [i_0] [i_0] [i_1]))));
                    /* LoopNest 2 */
                    for (short i_6 = 4; i_6 < 19; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            {
                                arr_25 [i_0] [i_1] [i_0] [i_6] [12] [i_7] |= ((/* implicit */unsigned char) var_9);
                                var_16 |= ((long long int) var_7);
                            }
                        } 
                    } 
                }
                for (signed char i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    arr_29 [8LL] [i_0] [i_8] |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_26 [i_8])) : (((/* implicit */int) arr_13 [i_0] [i_8] [i_0] [i_0]))))))), (((unsigned long long int) var_7))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 22; i_10 += 3) 
                        {
                            {
                                arr_37 [i_1] [i_1] [i_9] [i_8] [i_1] [i_0] = ((/* implicit */int) min((max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)31729))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_9))))), (arr_28 [i_0] [i_1])));
                                arr_38 [i_0] [i_1] [i_8] [5] = min((((/* implicit */long long int) ((int) max((arr_32 [i_8] [i_10] [i_10] [i_9]), (arr_18 [1ULL] [2LL] [i_8] [0ULL]))))), (((((/* implicit */_Bool) var_3)) ? (min((var_2), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (short)30573)))))));
                                var_17 ^= var_1;
                            }
                        } 
                    } 
                }
                var_18 = ((/* implicit */long long int) ((unsigned short) (-(((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_1] [i_1 - 1])))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_11 = 0; i_11 < 17; i_11 += 1) /* same iter space */
    {
        arr_43 [i_11] = ((((/* implicit */_Bool) var_1)) ? (arr_22 [20U] [i_11] [i_11] [i_11] [i_11]) : (arr_22 [2] [i_11] [(unsigned short)14] [2] [i_11]));
        arr_44 [i_11] = ((/* implicit */unsigned short) ((signed char) 7218512581861617863ULL));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 17; i_12 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_12]))));
        var_20 = ((/* implicit */unsigned int) var_4);
    }
}
