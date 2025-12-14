/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137349
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
    var_19 ^= ((/* implicit */unsigned short) ((max((((var_2) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))), (max((var_6), (-612264182675352759LL))))) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((long long int) 0ULL))), (((((/* implicit */_Bool) (+(arr_1 [i_0] [i_0])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26289))) - (13413074214717102904ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35660)))))));
                var_21 ^= ((/* implicit */unsigned int) (-(((((/* implicit */long long int) ((/* implicit */int) ((5033669858992448704ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))))) - (((((/* implicit */_Bool) (unsigned short)511)) ? (arr_1 [i_0] [i_0]) : (var_6)))))));
                var_22 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (unsigned char)104)), (13413074214717102904ULL)));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((unsigned char) 3164609122U))) ? (((/* implicit */unsigned long long int) ((long long int) var_9))) : (arr_10 [i_2])))));
                                var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */int) max((var_12), (((/* implicit */unsigned char) var_7))))), (var_3)));
                                var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_3] [i_4])) ? ((((_Bool)1) ? (var_3) : (((/* implicit */int) min(((unsigned short)511), (((/* implicit */unsigned short) (unsigned char)88))))))) : (arr_5 [i_1] [i_1] [i_1])));
                                var_26 *= ((/* implicit */unsigned char) (unsigned short)65024);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned long long int) var_10)), (5033669858992448713ULL)))))));
}
