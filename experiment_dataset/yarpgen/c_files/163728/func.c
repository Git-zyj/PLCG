/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163728
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
    var_10 &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) max((var_0), (var_0))))))), (min((max((((/* implicit */unsigned long long int) var_7)), (var_3))), (((/* implicit */unsigned long long int) max((var_4), (var_4))))))));
    var_11 = ((/* implicit */unsigned short) var_1);
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_13 [i_1] = ((/* implicit */unsigned short) var_7);
                                arr_14 [i_1] [i_0 - 2] [i_1] [i_1 - 1] [i_0 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) 3723796130U)), (34359214080ULL))), (min((((/* implicit */unsigned long long int) (unsigned char)1)), (18446744039350337552ULL)))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_8) : (var_8)))), (min((((/* implicit */unsigned long long int) var_4)), (var_1))))) : (((((/* implicit */_Bool) 36028797002186752ULL)) ? (34359214064ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    arr_15 [i_0 - 3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? ((+(var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_5)))))));
                    var_12 |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_1), (min((((/* implicit */unsigned long long int) var_0)), (var_1)))))) ? (min((((/* implicit */unsigned long long int) var_9)), (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (var_5)))))));
                    var_13 &= ((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) < (((/* implicit */unsigned long long int) var_6))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            {
                var_14 = ((/* implicit */short) max((((/* implicit */unsigned int) min((((/* implicit */int) var_5)), (var_6)))), (((((/* implicit */_Bool) var_1)) ? (var_2) : (var_2)))));
                arr_23 [i_6] [i_5] [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_0))));
            }
        } 
    } 
}
