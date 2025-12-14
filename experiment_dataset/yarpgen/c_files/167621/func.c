/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167621
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
    var_16 = ((/* implicit */signed char) var_15);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 545795772)) % (5ULL)))) ? ((-(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (12711045509599872412ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))))) ? (((int) var_9)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_4 [i_1])))))))));
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_6 [i_1 - 1]) / (arr_6 [i_1 - 2])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [0])), (arr_2 [(unsigned char)4])))) ? ((~(arr_6 [i_0]))) : (arr_3 [i_1 - 1] [i_1 - 2] [i_1 - 1]))))));
                var_18 = ((/* implicit */unsigned char) ((((arr_0 [i_1 - 1]) - (((/* implicit */unsigned long long int) var_5)))) << (min((max((arr_1 [i_0] [i_0]), (((/* implicit */int) (signed char)-22)))), (((/* implicit */int) (unsigned char)27))))));
                arr_8 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)126)) ? (var_14) : (((/* implicit */int) var_6)))) < ((~(((/* implicit */int) var_1)))))))) >= (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)34))))) ? (((/* implicit */unsigned long long int) max((1532977059), (var_3)))) : (arr_0 [i_1 + 1])))));
            }
        } 
    } 
}
