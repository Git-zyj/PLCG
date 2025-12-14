/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141104
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 ^= ((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned short)7)) >> (((((/* implicit */int) (short)-8731)) + (8753))))), ((-((-(((/* implicit */int) (signed char)15))))))));
        var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0]))))), (((((((/* implicit */_Bool) arr_1 [i_0])) ? (4294967295ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((max((arr_7 [i_1 + 1] [i_1 + 1] [i_1 - 1]), (arr_7 [i_0] [i_0] [i_1 + 1]))) | (((((arr_7 [i_0] [i_0] [i_1 - 2]) + (9223372036854775807LL))) >> (((arr_7 [(signed char)0] [14U] [i_1 + 1]) + (2773814010739851791LL)))))));
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (unsigned char)163))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((((/* implicit */int) var_14)) + (2147483647))) << (((4294967297ULL) - (4294967297ULL))))) << (((((/* implicit */int) var_0)) - (2265)))))) ? (min((((((/* implicit */unsigned long long int) 4294967280U)) * (var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (-8319610170827620096LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) : (((/* implicit */unsigned long long int) var_7))));
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */int) (short)16690)) >> (((/* implicit */int) (_Bool)1)))))));
    var_22 &= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) % (((/* implicit */int) var_14))))))))));
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            {
                arr_14 [i_3] = ((/* implicit */short) ((((int) (signed char)-86)) & (((((/* implicit */int) arr_13 [i_4] [i_3])) * (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-86)), ((unsigned char)233))))))));
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(8319610170827620096LL)))) * (((((/* implicit */_Bool) arr_11 [i_3] [i_4])) ? (4ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_4]))))))))));
            }
        } 
    } 
}
