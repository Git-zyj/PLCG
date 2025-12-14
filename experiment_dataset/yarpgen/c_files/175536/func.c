/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175536
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
    var_10 = ((/* implicit */unsigned long long int) (unsigned char)78);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */int) (~(arr_1 [i_0] [i_0])));
        arr_2 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 3787557300061104741LL)) : (var_5))))));
        var_12 -= ((/* implicit */unsigned int) ((9288618980775052131ULL) << (((/* implicit */int) (_Bool)0))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) var_9);
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */short) ((max(((((_Bool)1) ? (3786218114448230053LL) : (3787557300061104754LL))), (((/* implicit */long long int) (unsigned short)47984)))) ^ (((((/* implicit */_Bool) 3786218114448230066LL)) ? (-3786218114448230035LL) : (((/* implicit */long long int) min((2147483626), (32145904))))))));
        var_13 = min((var_0), (var_1));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                {
                    arr_12 [i_1] [i_3] [i_3] = ((/* implicit */unsigned short) arr_4 [i_1]);
                    arr_13 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_7 [i_1] [i_2]))) ? ((-(min((var_9), (var_2))))) : (((/* implicit */unsigned long long int) arr_0 [i_3]))));
                    arr_14 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_0 [i_3])))) ? (((((/* implicit */_Bool) (~(4900598822331851517LL)))) ? (arr_10 [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_1])) ? (((/* implicit */int) (unsigned short)65523)) : (-1630653772)))))) : (((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned int) (short)-22644)), (1510607171U)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 2; i_4 < 14; i_4 += 3) 
                    {
                        for (unsigned char i_5 = 1; i_5 < 15; i_5 += 1) 
                        {
                            {
                                arr_20 [i_5] = ((/* implicit */_Bool) 3209906057U);
                                arr_21 [i_5] [i_3] [i_2] [i_5] = ((/* implicit */unsigned int) (+(var_7)));
                                var_14 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) arr_16 [i_5] [i_5] [i_5 - 1] [i_4 + 3])), (arr_19 [i_5] [i_5] [i_5] [i_5 + 1] [i_4 + 2]))), (((/* implicit */unsigned long long int) min((-2581625134228149640LL), (((/* implicit */long long int) (short)-19695)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_15 = ((/* implicit */short) -3787557300061104734LL);
    }
}
