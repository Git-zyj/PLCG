/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110082
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
    var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((var_12), (((/* implicit */long long int) -1706979970)))) * (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1))))))) ? (((unsigned long long int) 1576847063)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)19715)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : ((-(var_7))))))));
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (~(var_2))))) ? (var_2) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (2051797908682896628LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) min((var_3), (var_13)))) : (var_6)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 8; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_19 -= ((/* implicit */long long int) (signed char)17);
                                var_20 = (~(((/* implicit */int) var_8)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 9; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 9; i_6 += 4) 
                        {
                            {
                                arr_20 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) min((max((arr_13 [i_1 - 2] [i_5 + 1] [i_0 + 1] [i_0] [i_0] [i_2 - 3]), (arr_13 [i_1 + 2] [i_5 + 1] [i_0 + 1] [i_5 + 1] [i_0] [i_2 - 2]))), (((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) -1706979970))))));
                                arr_21 [i_1] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_2] [i_0] [i_1]))))) ? (-1706979970) : (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_16 [i_5])) : (((/* implicit */int) var_8)))))))));
                                arr_22 [i_1] [i_1] [i_2] [i_0] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((10429126635504263134ULL), (17422796376344757806ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) 9003071289798069281ULL))))), (min((((/* implicit */short) (_Bool)1)), (arr_1 [i_0]))))))) : (1023947697364793826ULL)));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) -1706979964)) : (4294967295U)))) * (arr_5 [i_1 - 3] [i_1] [i_2 + 1] [i_0 + 1])));
                }
            } 
        } 
    } 
}
