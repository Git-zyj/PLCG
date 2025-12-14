/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162526
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
    var_12 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (unsigned short)317))))));
    var_13 = ((/* implicit */short) ((unsigned char) var_1));
    var_14 = ((/* implicit */int) max((var_1), (3496084435U)));
    var_15 = ((unsigned char) (-(798882872U)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */int) min((arr_1 [i_0]), (((((/* implicit */_Bool) max((3496084435U), (((/* implicit */unsigned int) (unsigned char)192))))) ? (477854695U) : ((~(798882901U)))))));
                var_17 = ((/* implicit */unsigned int) min((var_17), (max((((((/* implicit */_Bool) var_2)) ? (arr_3 [4U] [i_0 + 1]) : (arr_3 [(unsigned char)12] [i_0 - 1]))), ((+(arr_3 [12U] [i_0 + 1])))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned short) arr_3 [i_0] [i_0]));
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) 798882872U);
                                var_19 = ((/* implicit */short) arr_11 [i_3] [i_2 + 1] [i_0]);
                                var_20 = ((/* implicit */short) var_1);
                                arr_18 [i_1] [i_0] [i_4] = max((((/* implicit */long long int) max((((/* implicit */unsigned int) var_8)), (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (var_2)))))), (var_5));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
