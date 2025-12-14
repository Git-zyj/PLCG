/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104788
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_2] [i_0] [i_2] [i_4] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((var_2), (((/* implicit */short) var_5))))) ? (((/* implicit */unsigned long long int) var_6)) : (var_8))), (((/* implicit */unsigned long long int) max(((+(var_1))), (((/* implicit */long long int) (~(var_4)))))))));
                                var_13 = ((/* implicit */short) (+(max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_5)), (var_3)))), (var_8)))));
                                var_14 = ((/* implicit */short) min(((-((~(((/* implicit */int) var_5)))))), (var_7)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 19; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? ((~(var_4))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))), (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_10))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5)))))))));
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (var_6)))) ? (((/* implicit */int) min((var_3), (var_3)))) : ((~(var_4)))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */short) min(((+(var_8))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */short) var_0)), (var_9)))))))));
                    var_18 = ((/* implicit */short) (~((~(min((var_1), (((/* implicit */long long int) var_4))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))), (((var_0) ? (var_6) : (var_10)))))));
    /* LoopNest 3 */
    for (unsigned int i_7 = 4; i_7 < 11; i_7 += 2) 
    {
        for (long long int i_8 = 1; i_8 < 13; i_8 += 1) 
        {
            for (int i_9 = 1; i_9 < 12; i_9 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((var_9), (var_2)))), (max((((/* implicit */long long int) (+(var_10)))), (max((var_1), (((/* implicit */long long int) var_2)))))))))));
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) max((((/* implicit */long long int) var_4)), (var_1))))));
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 14; i_10 += 2) 
                    {
                        for (int i_11 = 1; i_11 < 12; i_11 += 2) 
                        {
                            {
                                arr_30 [i_11] = ((/* implicit */unsigned long long int) (-(max((var_6), (((/* implicit */unsigned int) var_4))))));
                                arr_31 [i_11] [i_11] [i_11] = ((/* implicit */short) (+((~((-(((/* implicit */int) var_9))))))));
                                arr_32 [i_7] [i_8] [i_11] [i_10] [i_11 + 2] = ((/* implicit */long long int) (-(((/* implicit */int) var_5))));
                                var_22 = ((/* implicit */unsigned int) (+(min(((~(((/* implicit */int) var_2)))), (var_4)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_12 = 3; i_12 < 10; i_12 += 2) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 14; i_13 += 1) 
                        {
                            {
                                arr_37 [i_7] [i_7] [i_9] [i_12] [i_7] = ((/* implicit */unsigned char) (+(max((min((var_1), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) min((var_6), (((/* implicit */unsigned int) var_0)))))))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(max((var_7), (((/* implicit */int) var_2))))))) ? (((/* implicit */int) min((((/* implicit */short) min((((/* implicit */unsigned char) var_0)), (var_11)))), (min((((/* implicit */short) var_0)), (var_9)))))) : (((/* implicit */int) min((((/* implicit */short) var_3)), (var_2))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
