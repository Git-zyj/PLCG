/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138058
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
    var_18 = ((/* implicit */long long int) 6683084324847774993ULL);
    var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) * (11763659748861776604ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) arr_3 [i_0]);
        arr_5 [11ULL] = ((/* implicit */unsigned char) var_6);
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 1; i_2 < 19; i_2 += 4) 
        {
            var_20 = ((/* implicit */unsigned char) var_4);
            var_21 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) min((var_11), (arr_9 [i_1] [i_2])))) * (((/* implicit */int) arr_8 [i_2 - 1] [i_2] [i_2])))));
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2266880095U)) ? (((long long int) (~(var_1)))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (min((arr_10 [16]), (1909086090U))))))));
            arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_2 - 1]))) : (2028087200U)))) >= (((((/* implicit */_Bool) 11763659748861776610ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49515))) : (6683084324847775001ULL))))))));
        }
        arr_12 [i_1] [i_1] = ((/* implicit */int) (+(((var_4) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50627)))))));
    }
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 2) 
        {
            arr_18 [i_3] [6U] [i_4] = ((/* implicit */_Bool) (+(((unsigned long long int) arr_1 [i_3] [i_3]))));
            var_23 = ((/* implicit */unsigned char) ((min((arr_7 [i_4 + 1] [i_4 - 1]), (arr_7 [i_4 - 1] [i_4 - 1]))) << (((((/* implicit */int) min((var_5), (var_5)))) - (193)))));
        }
        var_24 = ((/* implicit */unsigned long long int) var_6);
    }
    /* LoopSeq 1 */
    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) arr_20 [4]))));
        var_26 = ((/* implicit */int) 11763659748861776615ULL);
        var_27 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((int) min((((/* implicit */long long int) var_0)), (var_4))))), ((~(2145372464U)))));
    }
}
