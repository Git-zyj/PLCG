/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113096
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [8] = ((/* implicit */unsigned char) (signed char)119);
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_2)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0] [i_0])))));
                }
            } 
        } 
    } 
    var_20 = -1LL;
    var_21 = ((/* implicit */int) min((var_21), (((int) 1502844596660542865ULL))));
    var_22 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) 4160749568U)) : (-8959540835272178261LL))) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-25)) : (((/* implicit */int) var_10))))))) ? (((min((var_19), (((/* implicit */unsigned long long int) var_7)))) - (((/* implicit */unsigned long long int) ((int) 4714828800324363588LL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3 - 1])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_15)))))));
        arr_11 [i_3] = ((/* implicit */signed char) ((unsigned char) arr_1 [i_3 - 1]));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 1) 
    {
        var_24 = ((/* implicit */unsigned char) ((arr_13 [i_4]) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) arr_13 [i_4]))));
        var_25 = ((/* implicit */signed char) ((unsigned long long int) arr_14 [i_4 + 4]));
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) -8867372289900597860LL)) ? (((/* implicit */int) arr_14 [i_4 + 4])) : (((/* implicit */int) arr_13 [10LL]))));
        arr_15 [i_4] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) -1))));
    }
}
