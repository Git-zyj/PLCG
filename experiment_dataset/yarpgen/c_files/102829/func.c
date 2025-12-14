/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102829
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
    var_14 = ((/* implicit */unsigned int) var_4);
    var_15 = (~(var_7));
    var_16 = ((/* implicit */unsigned short) min((var_6), (((/* implicit */unsigned int) var_5))));
    var_17 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_8)))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned long long int) -221804216))))) ? (((/* implicit */unsigned long long int) arr_3 [i_0 + 2])) : (((unsigned long long int) var_10)))) >> (((((((/* implicit */_Bool) 808023317)) ? (((/* implicit */int) (short)8518)) : (-304596863))) - (8508)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_2 [i_3]) > (arr_2 [i_4])))) >> ((((+(arr_2 [i_2]))) - (12880070966296162144ULL)))));
                                arr_16 [i_0 + 1] [i_1] [i_4] [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (arr_0 [i_0 + 2]) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) 13841932388980860576ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_10 [i_0 + 2])))) : ((-(arr_0 [i_0 + 2])))));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (signed char)35))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
