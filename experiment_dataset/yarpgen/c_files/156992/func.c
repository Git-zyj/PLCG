/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156992
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) ((arr_1 [(unsigned short)0] [(unsigned short)0]) > ((-(((/* implicit */int) (unsigned short)18))))))), ((+((-(((/* implicit */int) (unsigned short)56813))))))));
        var_10 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (var_7)));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) ((((-4052037572416535134LL) == (((/* implicit */long long int) 1569922951U)))) ? (((/* implicit */int) arr_9 [i_0 - 3] [i_0 - 1] [i_1 + 1] [i_3])) : (arr_1 [i_0] [i_0 - 1])));
                                var_12 = ((/* implicit */signed char) var_1);
                            }
                        } 
                    } 
                    arr_17 [i_0 - 1] [i_0] [i_2] = ((/* implicit */signed char) 1356453928145317220LL);
                    var_13 *= ((/* implicit */unsigned long long int) arr_4 [4U] [i_2]);
                }
            } 
        } 
    }
    for (unsigned short i_5 = 3; i_5 < 11; i_5 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) arr_13 [2LL]);
        arr_20 [i_5] [i_5 - 1] = arr_8 [i_5 - 3] [(signed char)2] [10U];
    }
    var_15 *= ((/* implicit */unsigned int) (signed char)-23);
    var_16 = ((/* implicit */_Bool) 2725044338U);
}
