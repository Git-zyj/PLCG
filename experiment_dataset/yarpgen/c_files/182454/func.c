/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182454
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
    var_17 = ((/* implicit */unsigned long long int) var_1);
    var_18 ^= var_5;
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 22; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) max(((_Bool)1), (((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1]))) <= (3972403655U)))));
                                var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1470528607199195528LL)), (((((/* implicit */_Bool) 3972403644U)) ? (((/* implicit */unsigned long long int) 91486020U)) : (4244871885927875995ULL)))));
                                arr_12 [i_0] [i_0] [i_1] [i_3 + 1] [i_3 + 1] [i_0] [4U] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (3972403669U)));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) (unsigned short)39483)) ? (arr_10 [i_0] [i_0] [i_1 - 2] [i_1] [i_1] [23ULL] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))), (((/* implicit */unsigned long long int) min(((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_15)))), (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_4 [i_0]))))))))));
                arr_13 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)44605)) ? ((~(((/* implicit */int) ((((/* implicit */int) (unsigned short)63615)) != (((/* implicit */int) (_Bool)1))))))) : (arr_0 [i_0] [i_1])));
                arr_14 [i_0] [i_1] = ((/* implicit */unsigned int) (-(arr_1 [i_0 - 2] [i_0 - 1])));
            }
        } 
    } 
}
