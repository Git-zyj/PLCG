/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172959
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        arr_4 [i_0 - 2] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) ((min(((_Bool)1), (arr_1 [i_0] [i_0]))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)0)), (arr_2 [i_0] [(short)7])))))))) - ((-(((((/* implicit */_Bool) var_1)) ? (3833252865330622092LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            arr_9 [i_0] |= ((/* implicit */unsigned char) (_Bool)0);
            var_10 = ((/* implicit */_Bool) max((var_10), (((((((/* implicit */_Bool) (unsigned char)255)) ? (343770039U) : (3851783016U))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 2])))))));
            var_11 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)2811))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_12 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)121)), (arr_2 [i_0] [i_2])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_2] [i_0 + 2]))) != (var_2)))) : (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) var_3))))));
            var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [(_Bool)1]) & (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_3)) / (arr_11 [i_2] [i_0])))) : (((-7477334536515107956LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_2])) + (82)))))) ? (((((/* implicit */_Bool) 3U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_0] [i_2])))) : (((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */int) (short)-1)) : (arr_11 [i_2] [i_0]))))) : (((/* implicit */int) var_5))));
            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_5))));
        }
        var_14 = ((/* implicit */_Bool) max((var_14), (max((((arr_5 [i_0 + 2] [i_0 - 2]) >= (arr_5 [i_0 - 2] [i_0 + 1]))), (((((/* implicit */_Bool) arr_10 [i_0])) || (((/* implicit */_Bool) 343770024U))))))));
    }
    var_15 = ((/* implicit */_Bool) max((var_15), ((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))), (var_2))))))));
    var_16 = ((/* implicit */int) var_1);
}
