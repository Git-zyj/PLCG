/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11017
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
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned short) var_6);
                var_11 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) arr_3 [(short)12]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_3)) : (-6414599572827178210LL))))));
                arr_4 [(unsigned char)14] [i_1] &= arr_1 [0] [0];
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */int) arr_3 [i_1]);
                            var_13 &= ((/* implicit */unsigned long long int) (!(((((6414599572827178221LL) ^ (6414599572827178198LL))) == (-6414599572827178240LL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
    {
        for (long long int i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_5]))))))))));
                var_15 = ((/* implicit */signed char) (~(((((/* implicit */int) ((unsigned char) (unsigned short)1534))) >> (((((/* implicit */int) arr_12 [i_4])) - (58484)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) var_2);
    var_17 = ((/* implicit */unsigned short) var_0);
}
