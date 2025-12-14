/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146196
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((var_12), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (var_17))))))) : (((long long int) ((((/* implicit */_Bool) var_5)) ? (1278525189127413764ULL) : (var_8))))));
    var_20 = ((/* implicit */_Bool) var_10);
    var_21 = ((/* implicit */_Bool) var_2);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        arr_2 [i_0] = var_12;
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) arr_1 [i_0]))));
    }
    for (unsigned int i_1 = 1; i_1 < 19; i_1 += 4) 
    {
        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 893660022U)) ? ((+(((/* implicit */int) var_18)))) : (((/* implicit */int) (_Bool)1))))), (((arr_4 [(_Bool)1] [(_Bool)1]) ? (min((2U), (((/* implicit */unsigned int) arr_1 [(unsigned char)18])))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
        var_25 = ((/* implicit */int) var_0);
        arr_6 [12ULL] |= ((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(_Bool)1]))) <= (7500673983370773737ULL)))), (min((((/* implicit */unsigned short) arr_4 [14ULL] [i_1])), (arr_5 [(short)5])))));
    }
}
