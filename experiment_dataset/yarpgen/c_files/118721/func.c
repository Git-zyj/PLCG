/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118721
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
    var_19 = ((/* implicit */int) max((var_19), (var_1)));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_0)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) var_15)) * (((/* implicit */int) var_9)))) ^ (((/* implicit */int) (unsigned char)20))))) : (((min((var_18), (var_18))) * (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)236), (var_9)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (var_2) : (arr_5 [(signed char)6])))) ? (((/* implicit */int) min(((unsigned char)20), (((/* implicit */unsigned char) (signed char)-118))))) : (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */unsigned long long int) (+(arr_5 [i_0])))) : (((((/* implicit */_Bool) min((var_17), (((/* implicit */int) (signed char)117))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) min((var_1), (2147483647)))))))))));
                arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) -876248985)) ^ (1048575U)));
                arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_3 [i_1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(unsigned char)14])) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (arr_3 [i_0])))) ? (((arr_1 [i_0] [i_1]) * (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) -1344496148))))) ? (((/* implicit */unsigned long long int) ((int) arr_0 [i_0]))) : (min((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])), (arr_1 [i_0] [(unsigned short)18])))))));
                var_22 -= min((((/* implicit */unsigned char) (signed char)-118)), (arr_4 [4LL] [4LL]));
            }
        } 
    } 
}
