/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115732
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
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_5 [i_1]) : (((/* implicit */int) var_6))))) ? (((((/* implicit */int) var_0)) % (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_3 [i_0] [i_1]) : (2099776042)))))));
                arr_7 [8] [8] = ((/* implicit */long long int) var_7);
                var_19 += ((/* implicit */int) (unsigned short)7330);
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 22; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (_Bool)1))));
                    var_21 *= ((/* implicit */int) (_Bool)1);
                    var_22 = var_4;
                }
            } 
        } 
    } 
}
