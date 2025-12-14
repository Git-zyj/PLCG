/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180111
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
    var_20 = ((/* implicit */int) var_19);
    var_21 += ((((/* implicit */_Bool) var_7)) ? ((-(((((/* implicit */_Bool) var_14)) ? (var_8) : (var_0))))) : (var_0));
    var_22 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_17)))) ? ((-(var_13))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((short)-15085), (((/* implicit */short) (unsigned char)211))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) ((((7352516569979002239ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) ? (((/* implicit */int) arr_3 [i_1])) : ((-(((/* implicit */int) arr_3 [i_1]))))));
                arr_6 [(signed char)12] [i_0] [i_0] |= ((/* implicit */signed char) (((-(((((/* implicit */_Bool) arr_0 [(short)21])) ? (var_0) : (((/* implicit */unsigned long long int) arr_4 [10U] [i_0])))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? ((+(((/* implicit */int) (short)9218)))) : (max((arr_4 [0U] [(unsigned char)12]), (arr_4 [i_0] [i_0]))))))));
                var_24 = ((((/* implicit */_Bool) (short)9218)) ? (((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */int) (short)-9217)) : (((/* implicit */int) (unsigned char)78)))) : (-1));
                var_25 |= ((/* implicit */unsigned int) min((max((arr_4 [i_0] [i_0]), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)15))))))), (-21)));
            }
        } 
    } 
}
