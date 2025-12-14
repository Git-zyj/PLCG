/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141047
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
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 9; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) ((long long int) (~(var_16))));
                    var_18 = ((/* implicit */short) (((!(((/* implicit */_Bool) (short)32753)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1] [(short)1]))))) % ((-(-1172316861)))))) : (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_0])), (942806941U)))), (arr_0 [i_0] [i_1])))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)31534)) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (min((((/* implicit */unsigned int) ((((((/* implicit */int) (short)-15270)) + (2147483647))) >> (((var_16) - (1051125953U)))))), (min((((/* implicit */unsigned int) arr_6 [i_0] [i_2] [i_3] [i_3])), (var_2)))))));
                                var_20 = ((/* implicit */long long int) (+((+(var_4)))));
                                var_21 = max(((((_Bool)1) || (((/* implicit */_Bool) var_0)))), ((!(((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2])))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) (+(min((var_2), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_5 [i_1])))))))));
                    var_23 = ((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) ((((/* implicit */unsigned int) arr_4 [i_0])) ^ (var_2)))), (((long long int) (_Bool)1))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_13 [i_5] = ((/* implicit */int) arr_5 [(short)10]);
        var_24 = ((/* implicit */unsigned short) 21U);
        arr_14 [i_5] [i_5] &= (-(2033729756));
        var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)45283)), (9ULL)))) ? (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5] [i_5] [i_5] [i_5]))) : (var_2)))))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned short)10])))));
    }
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) ((signed char) (_Bool)0))), (945841253U)))) : (((((/* implicit */_Bool) ((0LL) >> (((((/* implicit */int) (signed char)-1)) + (18)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1)))))) : (var_6)))));
}
