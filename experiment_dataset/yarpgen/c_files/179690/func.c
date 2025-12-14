/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179690
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((4503599627370496LL), (((/* implicit */long long int) ((arr_0 [i_0]) < (17091909029879076540ULL))))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((signed char) (-2147483647 - 1))), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) > (4503599627370496LL))))))))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                for (signed char i_3 = 3; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */signed char) -4503599627370501LL);
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) 4503599627370496LL))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 2; i_4 < 22; i_4 += 4) 
                        {
                            var_22 += ((/* implicit */unsigned int) max((((((/* implicit */_Bool) -4503599627370497LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)71))) : (-4503599627370493LL))), (((/* implicit */long long int) arr_5 [i_2]))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_6 [i_0] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_0] [i_4] [i_0])))))) ? (arr_6 [22U] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 47433972))))))) ? (((/* implicit */unsigned long long int) ((4503599627370483LL) + (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_13 [i_1] [i_1])), (arr_9 [i_0] [i_0]))))))) : (((((/* implicit */_Bool) ((short) arr_11 [i_0] [i_0] [i_0] [i_0]))) ? (((1125899906841600ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))))) : (((/* implicit */unsigned long long int) ((arr_2 [i_3]) | (((/* implicit */int) arr_1 [i_2])))))))));
                            arr_14 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((int) ((((-4503599627370483LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_2] [i_0] [i_0]))))) ? ((+(((/* implicit */int) (short)12)))) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_2] [i_4 + 1])))));
                            var_24 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) (-(arr_2 [i_0])))), (18445618173802710005ULL)));
                        }
                        var_25 = ((/* implicit */_Bool) 1125899906841588ULL);
                        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) max((((((/* implicit */_Bool) arr_3 [i_2 + 3])) ? (18445618173802710027ULL) : (((/* implicit */unsigned long long int) arr_7 [i_3 + 2] [i_1] [i_2 - 2])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-28288))) : (3112401369U)))))))));
                    }
                } 
            } 
        } 
    }
    var_27 = ((/* implicit */int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_1), (var_10))))) + (min((1125899906841595ULL), (((/* implicit */unsigned long long int) var_15))))))));
    var_28 = ((/* implicit */unsigned long long int) 4503599627370496LL);
    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (!(((/* implicit */_Bool) 1125899906841578ULL)))))));
}
