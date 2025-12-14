/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166789
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
    var_10 = var_5;
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    var_11 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) (unsigned char)99)), (5500233484983304239LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [12] [13ULL])) ? (var_7) : (var_9))))))) ? (((((/* implicit */long long int) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_0))))) + (((5500233484983304242LL) + (((/* implicit */long long int) -1851705993)))))) : (((/* implicit */long long int) ((/* implicit */int) ((min((1582769740268904132LL), (((/* implicit */long long int) 424875247)))) > (((/* implicit */long long int) ((/* implicit */int) (short)7958)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((((/* implicit */_Bool) ((arr_11 [i_0] [i_1] [i_2 - 1] [i_2 - 1]) << (((/* implicit */int) arr_12 [i_0 + 1] [i_0] [(_Bool)1] [i_0] [i_4]))))) ? (((/* implicit */unsigned int) max((1851705992), (((/* implicit */int) var_6))))) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_4 [i_2 - 1] [i_3 + 1] [i_0 - 2]), (((/* implicit */short) ((((/* implicit */int) arr_5 [i_2] [i_3])) >= (((/* implicit */int) arr_12 [i_0] [i_4] [i_4] [i_3] [i_0]))))))))))))));
                                arr_15 [i_0] [12] [i_4] [i_3] [i_4] |= ((/* implicit */int) (((!(((var_9) < (var_7))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0 - 2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_9)))), (min((arr_11 [i_0] [i_1] [i_0] [i_3]), (((/* implicit */long long int) arr_2 [i_3 + 1])))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [i_0 + 1] [i_4]) : (((/* implicit */int) var_6)))) << ((((+(5500233484983304239LL))) - (5500233484983304238LL))))))));
                                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) -1851705990))), (min((((/* implicit */int) var_3)), (var_8)))))) ? (((var_6) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [4U] [i_1] [i_4] [i_3] [i_4]))))) : (((((/* implicit */unsigned int) var_8)) * (var_7))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((((/* implicit */int) arr_4 [i_2] [i_3] [i_4])) ^ (((/* implicit */int) arr_6 [i_0] [i_1])))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (var_8) : (var_5))))))));
                                arr_16 [i_3] [i_3] = ((/* implicit */unsigned int) var_1);
                                var_14 = ((/* implicit */unsigned int) min((((/* implicit */int) (signed char)112)), (((((/* implicit */int) var_3)) ^ (max((((/* implicit */int) var_6)), (var_5)))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [(short)4] = ((/* implicit */short) max((min((arr_11 [i_0 - 1] [i_1] [i_0 - 1] [i_2 + 2]), (((/* implicit */long long int) arr_12 [(_Bool)1] [i_0] [i_0 + 1] [i_2] [i_2 + 1])))), (((/* implicit */long long int) min((-1851705992), (((/* implicit */int) (short)12820)))))));
                }
            } 
        } 
    } 
}
