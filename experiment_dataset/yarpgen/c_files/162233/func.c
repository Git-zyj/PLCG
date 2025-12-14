/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162233
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
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_0))));
    var_18 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_0] [(unsigned char)7] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (short)-19748)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)14)))), (((/* implicit */int) min((((/* implicit */unsigned short) (short)23215)), (var_0))))));
                arr_6 [10] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) var_4))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */long long int) var_1);
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
        {
            var_19 *= max((((/* implicit */short) var_12)), ((short)23237));
            arr_12 [i_2] = ((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned short)256)) ? (((/* implicit */int) (short)-23215)) : (((/* implicit */int) var_5))))));
            arr_13 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))));
        }
        /* vectorizable */
        for (short i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
        {
            arr_18 [i_4] [i_2] [i_4] = ((/* implicit */int) (unsigned char)247);
            arr_19 [i_2] = ((/* implicit */int) (+(((((/* implicit */_Bool) (unsigned char)14)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3)))))));
        }
    }
}
