/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14392
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
    var_18 = max((((((/* implicit */_Bool) (+(var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((1362410173466467849ULL) == (var_15))))) : (var_13))), (min((5746593316765582062ULL), (var_4))));
    var_19 = max((5746593316765582071ULL), (var_16));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        var_20 = ((unsigned long long int) 5746593316765582062ULL);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    var_21 += (~((~(((((/* implicit */_Bool) var_1)) ? (18446744073709551603ULL) : (arr_8 [i_2] [i_1] [i_0 - 1] [i_0]))))));
                    var_22 *= min((5112340480394582872ULL), (17396410779669686551ULL));
                    var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 18006377768684977257ULL)) ? (arr_8 [i_2] [i_2] [i_2 + 1] [i_2 + 1]) : (arr_8 [i_1] [i_1] [i_2 + 2] [i_2]))) < (((unsigned long long int) ((arr_4 [i_0] [i_0]) != (var_11))))));
                    var_24 *= (-(12700150756943969544ULL));
                    arr_9 [i_0] [i_0] = ((((/* implicit */_Bool) (+(arr_3 [i_0])))) ? (((unsigned long long int) var_1)) : (((((/* implicit */_Bool) (-(2333016373403285195ULL)))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_3 [i_0]) : (arr_8 [i_0] [i_1] [i_0 - 2] [i_1]))) : (8827409039168438131ULL))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 24; i_4 += 3) 
            {
                {
                    arr_15 [i_0] = max((((unsigned long long int) arr_1 [i_0])), (18446744073709551615ULL));
                    var_25 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18006377768684977240ULL) : (12700150756943969535ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((2746409078847084969ULL), (var_1))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            {
                                var_26 -= max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((1020ULL) << (((12662469434098231683ULL) - (12662469434098231651ULL))))))))), (((((/* implicit */_Bool) 12662469434098231713ULL)) ? (4ULL) : (18446744073709551615ULL))));
                                arr_22 [i_0] [i_0 + 1] [i_0] = (-(((((/* implicit */_Bool) (+(18446744073709551615ULL)))) ? (arr_21 [i_0] [i_3] [i_4] [i_5] [i_6]) : (((unsigned long long int) 440366305024574359ULL)))));
                            }
                        } 
                    } 
                    var_27 = arr_7 [i_0];
                }
            } 
        } 
    }
}
