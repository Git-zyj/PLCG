/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152894
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
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                var_13 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)173)) && ((!(((/* implicit */_Bool) 5814139150979715606LL))))));
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (((~(var_2))) + ((((!(((/* implicit */_Bool) arr_1 [i_0 + 1])))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))))))));
                /* LoopSeq 4 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    var_15 = ((/* implicit */long long int) max((var_15), (var_11)));
                    var_16 = arr_4 [i_2];
                    var_17 += max((((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1 + 1] [i_2])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_5 [i_0 - 1] [i_1 - 2] [i_2]))))))), (var_4));
                }
                /* vectorizable */
                for (long long int i_3 = 3; i_3 < 19; i_3 += 1) 
                {
                    var_18 -= arr_3 [i_0 - 1] [i_0 - 1] [i_0 + 1];
                    var_19 = ((/* implicit */long long int) max((var_19), ((((+(arr_0 [i_0 + 2]))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 2] [i_0 + 1])))))));
                }
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    var_20 -= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0 - 1] [i_0 + 1]))))));
                    var_21 = ((/* implicit */long long int) min((var_21), (-1036707806948504995LL)));
                }
                for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        for (long long int i_7 = 3; i_7 < 18; i_7 += 1) 
                        {
                            {
                                arr_24 [i_0 + 2] [i_7] [i_5] [i_6] [i_7 - 1] = var_9;
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((unsigned char) arr_0 [i_0 + 1]))));
                                arr_25 [i_0 + 1] [i_1 + 1] [i_7] [i_6] [i_7 - 3] = (((!(((/* implicit */_Bool) ((unsigned char) var_6))))) ? (arr_19 [i_0 + 2] [i_0 + 2] [i_1 + 1] [i_5] [i_6] [i_7 - 2]) : (((((-5111602743764913952LL) + (9223372036854775807LL))) << (((((/* implicit */int) arr_10 [i_0 + 1] [i_7 - 2] [i_7 - 1] [i_7 - 2])) - (63))))));
                            }
                        } 
                    } 
                    arr_26 [i_0 - 1] [i_0 - 1] [i_1 + 1] [i_5] &= ((/* implicit */long long int) max((arr_5 [i_1 - 1] [i_1 - 1] [i_0 + 1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 0LL)))))));
                    arr_27 [i_0 - 1] [i_1 - 1] [i_5] = ((/* implicit */long long int) (unsigned char)55);
                    var_23 = ((/* implicit */unsigned char) (~(9223372036854775805LL)));
                }
                var_24 *= ((/* implicit */unsigned char) 288230376151711742LL);
            }
        } 
    } 
    var_25 = max((max((var_2), (var_11))), (((8589934591LL) - (-5111602743764913952LL))));
}
