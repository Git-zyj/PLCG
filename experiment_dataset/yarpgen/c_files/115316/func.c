/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115316
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    arr_7 [i_0] [i_1] [i_0] = max((max((((/* implicit */int) (short)26365)), (575812051))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-31243))) == (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2] [i_1]))) : (2882611582552237484LL)))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) /* same iter space */
                    {
                        var_12 = ((/* implicit */unsigned char) (+((~(((var_4) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1197)))))))));
                        var_13 = (~(763203635));
                        arr_10 [i_3] [i_0] [i_0] [(signed char)15] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_0])), (arr_0 [i_0 - 1] [i_0 + 1]))) ^ (((arr_0 [i_0 - 1] [i_0]) & (arr_0 [i_0 - 1] [i_0 - 1])))));
                    }
                    for (int i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
                    {
                        var_14 = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) (unsigned short)1024)), (1889159385U))), (((/* implicit */unsigned int) (short)2461))));
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6806)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)25641))) : (3263034249U)));
                        arr_13 [i_2] |= ((/* implicit */unsigned char) max((max((((/* implicit */short) (signed char)-16)), ((short)26362))), (((/* implicit */short) ((_Bool) (short)13801)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 15; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)18043)) * (((/* implicit */int) (short)26376))))) ? (arr_1 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_5 [i_1] [i_6] [i_2]))))))) ? (arr_18 [i_2] [i_2] [i_0 - 1] [i_5 + 2] [i_6] [i_6] [i_5 + 2]) : (min(((+(arr_4 [i_2] [i_1] [i_2] [i_1]))), (min((((/* implicit */unsigned long long int) var_10)), (7441904119260706184ULL))))))))));
                                arr_21 [i_0] [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((int) arr_14 [i_0]));
                            }
                        } 
                    } 
                }
                var_17 *= ((/* implicit */unsigned char) 1765125425U);
            }
        } 
    } 
    var_18 = ((/* implicit */int) min(((~(((((/* implicit */_Bool) 3188275681U)) ? (var_2) : (((/* implicit */unsigned int) var_6)))))), (((/* implicit */unsigned int) ((unsigned short) var_5)))));
}
