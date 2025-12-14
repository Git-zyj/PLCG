/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111928
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (~(((/* implicit */int) var_7)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) var_6);
                    var_12 = ((/* implicit */signed char) (unsigned short)34919);
                    arr_7 [i_2] [i_2] [i_2 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-60)), (var_6)))) ? ((-(((/* implicit */int) var_7)))) : (var_3)))) ? (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (unsigned char)87)))))) : (((/* implicit */int) ((((/* implicit */_Bool) (-(arr_5 [i_2] [i_0] [i_1] [i_2])))) && (((/* implicit */_Bool) var_5)))))));
                }
            } 
        } 
        var_13 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((var_3), (((/* implicit */int) var_8))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (18446744073709551599ULL)))));
    }
    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) min((var_2), (var_0)))) != (((/* implicit */int) (unsigned short)20165)))));
        var_15 = ((/* implicit */_Bool) (+((+(((/* implicit */int) ((unsigned short) arr_4 [i_3])))))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (~(min((3353273670U), (((/* implicit */unsigned int) (short)-8103))))))) ? (5ULL) : (((((/* implicit */_Bool) arr_6 [i_3])) ? (((((/* implicit */_Bool) arr_0 [i_3])) ? (arr_3 [i_3] [(signed char)5] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
    }
}
