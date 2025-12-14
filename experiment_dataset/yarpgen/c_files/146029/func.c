/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146029
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
    var_11 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (7555841444056175677ULL)))) ? (((/* implicit */int) var_4)) : (((var_0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))))), (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_12 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)4))))), (min((((/* implicit */unsigned long long int) (unsigned short)32958)), (17939465106025950030ULL))));
                arr_4 [11ULL] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) ((((/* implicit */int) arr_2 [i_1])) != (((/* implicit */int) var_10))))))), (((/* implicit */int) ((arr_0 [i_0 + 1]) <= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 3]))))))));
                arr_5 [i_0 - 1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) min((var_1), (var_1)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)24)) || (var_0))))));
                arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17834)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) && (((/* implicit */_Bool) (~(arr_3 [i_0])))))) && (((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) arr_0 [i_0 - 1])))))));
                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned short)65518)))), (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((unsigned short) (unsigned char)28)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))))))))) : (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (2147483647) : (((/* implicit */int) (_Bool)0))))) : (arr_3 [i_0 - 4]))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (~(((min((((/* implicit */unsigned long long int) var_4)), (7ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) (short)-29883)))))))));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */int) var_0))))), (max((var_1), (((/* implicit */long long int) var_3))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) (short)-17841))))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)24)), ((short)32767)))) : (2147483647)))));
    var_16 = ((/* implicit */unsigned char) (_Bool)1);
}
