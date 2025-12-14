/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184460
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
    var_13 = ((/* implicit */int) ((unsigned long long int) var_6));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [13ULL] [13ULL] [i_0] [i_0] = ((((/* implicit */_Bool) ((int) arr_3 [i_0] [(unsigned char)14]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_2])) || (((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_9)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_3 [i_0] [i_0]) : (var_3)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_7 [i_1]))))))));
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */int) var_12)) << (((((/* implicit */int) arr_5 [14LL])) - (21672))))), (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (arr_4 [i_0] [(unsigned char)0] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_5 [i_2]))))) : (min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2])), ((~(arr_7 [12ULL]))))))))));
                }
            } 
        } 
    } 
}
