/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179736
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
    var_20 = ((int) (((~(((/* implicit */int) (unsigned short)65522)))) ^ (((/* implicit */int) var_6))));
    var_21 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) ^ (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                var_22 -= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)204)), (((((((/* implicit */int) (unsigned short)26)) >= (((/* implicit */int) (unsigned short)32270)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15))) : (0LL)))));
                var_23 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)3))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) 970866651)))))) >> (((((/* implicit */int) (unsigned short)65532)) - (65514)))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            {
                var_25 = ((/* implicit */unsigned int) var_6);
                var_26 = ((/* implicit */int) 294907312U);
            }
        } 
    } 
}
