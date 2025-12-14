/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12840
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) ((var_2) ? (-1598924711) : (((/* implicit */int) (unsigned char)149)))))))) | (min((((var_15) << (((((/* implicit */int) var_9)) + (15942))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_15)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */long long int) 18446744073709551600ULL);
                arr_6 [(unsigned short)10] [(unsigned char)3] = ((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned char)106), (((/* implicit */unsigned char) var_4))))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)184)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 1; i_2 < 21; i_2 += 2) 
    {
        for (unsigned int i_3 = 3; i_3 < 24; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                {
                    var_19 = var_7;
                    arr_14 [i_2] [i_3 - 3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)148)), (8792044801643279116LL)))) ? (max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)76))))), (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                }
            } 
        } 
    } 
}
