/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126895
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
    var_11 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((((((/* implicit */_Bool) max((arr_0 [(signed char)0] [(_Bool)1]), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (min((var_5), (arr_0 [i_0] [(_Bool)1]))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [(_Bool)1])) ? ((~(var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) var_1))));
        var_13 = max((((/* implicit */unsigned long long int) ((255) >= (((/* implicit */int) (signed char)-88))))), (arr_0 [1] [15ULL]));
        arr_3 [8LL] [i_0] = ((/* implicit */unsigned short) var_8);
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 3; i_2 < 21; i_2 += 3) 
        {
            arr_11 [i_2] [(signed char)11] = ((/* implicit */unsigned long long int) ((((int) (+(((/* implicit */int) (signed char)-88))))) / (((int) (_Bool)1))));
            arr_12 [i_2] [i_2] = ((/* implicit */unsigned int) ((((_Bool) var_6)) ? (arr_6 [(unsigned short)0] [i_1]) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (var_5)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_6 [(signed char)20] [(unsigned char)19]))))) : (((/* implicit */int) var_6))))));
            arr_13 [i_2] = ((/* implicit */unsigned char) ((unsigned int) arr_8 [i_2 - 1] [i_2]));
            arr_14 [7] [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_5 [(unsigned short)12]))) >> (((/* implicit */int) ((((/* implicit */int) arr_5 [(unsigned char)7])) >= (((/* implicit */int) var_0)))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (min((var_9), (var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((var_5), (var_9))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) <= (var_5))))))))));
            var_14 ^= ((/* implicit */signed char) min((var_2), (var_7)));
        }
        var_15 = ((/* implicit */int) max((((/* implicit */long long int) max(((~(((/* implicit */int) var_4)))), (((/* implicit */int) ((var_10) <= (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))), (arr_10 [i_1])));
    }
}
