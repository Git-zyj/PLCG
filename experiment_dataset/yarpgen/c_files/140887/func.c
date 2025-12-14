/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140887
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    var_15 += ((/* implicit */unsigned long long int) (unsigned short)2778);
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4139006994486139173LL)) ? (((/* implicit */int) (unsigned short)22534)) : (((/* implicit */int) (unsigned short)17292))));
                    arr_7 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */long long int) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (arr_6 [i_1] [0LL] [i_1] [i_1]))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))))))), (((/* implicit */unsigned long long int) min(((_Bool)0), (var_4))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 2) 
    {
        var_17 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) 0ULL)))));
        arr_11 [i_3 + 1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (0ULL))), (min((max((9ULL), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) arr_9 [i_3]))))));
    }
}
