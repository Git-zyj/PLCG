/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134565
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned short) (+(min((((/* implicit */long long int) var_13)), (var_11)))));
                var_15 = ((/* implicit */signed char) ((int) min(((!(((/* implicit */_Bool) var_7)))), (((((/* implicit */long long int) ((/* implicit */int) var_0))) <= (3688593342942006257LL))))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) var_2);
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        for (int i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_4 = 1; i_4 < 19; i_4 += 2) 
                {
                    var_17 = ((/* implicit */unsigned short) max(((+(min((((/* implicit */long long int) 177010031U)), (var_2))))), (((/* implicit */long long int) min((min((((/* implicit */unsigned char) arr_5 [i_2] [(_Bool)1])), (var_5))), (((/* implicit */unsigned char) ((var_4) <= (8165749746395500740LL)))))))));
                    var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_2] [i_2]))))) ? ((+(((/* implicit */int) arr_7 [i_2] [i_2])))) : (((((var_6) + (2147483647))) << (((var_11) - (1365819588514714656LL)))))));
                    arr_13 [i_4] [i_3] [i_3] [i_2] = (~(min((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_2))))));
                    var_19 = ((/* implicit */int) ((unsigned int) ((((((/* implicit */int) (unsigned short)256)) <= (1718885256))) ? (8267716092158504102LL) : (((((/* implicit */_Bool) 3413120886U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65280))) : (7048768292643264221LL))))));
                }
                var_20 = ((/* implicit */long long int) ((unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) var_13)) & (((/* implicit */int) var_13))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_11))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_10);
}
