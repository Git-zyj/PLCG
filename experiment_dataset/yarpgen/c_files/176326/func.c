/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176326
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
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        var_11 = ((((((/* implicit */int) var_3)) == (((/* implicit */int) arr_1 [i_0 + 1])))) ? (var_9) : (((unsigned int) arr_1 [i_0 + 3])));
        var_12 = ((/* implicit */short) var_6);
        var_13 *= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (var_2)))));
    }
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) var_3))))) ? (var_8) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((min((69123622U), (var_9))) != (((unsigned int) (short)-4464))))))));
    var_15 = ((/* implicit */int) var_6);
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            {
                                arr_15 [i_2] [i_3] [i_4] [i_5] &= ((/* implicit */unsigned int) arr_14 [i_3] [i_2]);
                                var_16 *= ((/* implicit */short) var_5);
                                var_17 -= ((/* implicit */unsigned long long int) arr_8 [i_3]);
                            }
                        } 
                    } 
                    arr_16 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)113)) && (((/* implicit */_Bool) var_5)))))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || ((_Bool)0)))) : (((int) var_3))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1])) ? (arr_4 [i_1] [i_3]) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) arr_7 [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_1]))) : (268435456ULL)))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), (var_2)))), (((((/* implicit */_Bool) var_10)) ? (var_7) : (var_1))))) / (((/* implicit */unsigned long long int) var_8))));
}
