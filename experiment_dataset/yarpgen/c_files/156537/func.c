/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156537
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
    var_12 = ((/* implicit */unsigned long long int) var_8);
    var_13 = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-73)) + (2147483647))) >> (((((/* implicit */int) (signed char)73)) - (72)))));
    var_14 = ((/* implicit */unsigned int) var_5);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */long long int) (!((!((!(((/* implicit */_Bool) var_11))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (signed char)72);
    }
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 2) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (int i_3 = 2; i_3 < 20; i_3 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) (short)-17015);
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((long long int) var_7)))));
                }
            } 
        } 
    } 
}
