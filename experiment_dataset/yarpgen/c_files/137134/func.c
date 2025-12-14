/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137134
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(signed char)0] [(_Bool)1])) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) arr_1 [13LL])))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */int) var_11)) ^ (1584843027))))))));
        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            arr_11 [(unsigned short)7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -6541051061721267489LL)) && (((/* implicit */_Bool) (signed char)-100))));
            arr_12 [(unsigned short)0] [(unsigned short)0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)162)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-100))) : (6541051061721267488LL)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)65535))))) | (((arr_2 [(unsigned char)11] [i_2]) ? (((/* implicit */long long int) arr_3 [i_1] [i_2])) : (arr_8 [i_1] [i_1])))));
        }
        var_20 = ((/* implicit */short) min((((/* implicit */int) (!(arr_2 [i_1] [i_1])))), ((~(((/* implicit */int) ((short) arr_8 [(unsigned char)8] [i_1])))))));
    }
    var_21 = ((/* implicit */signed char) var_17);
}
