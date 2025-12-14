/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139945
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
    var_10 |= ((/* implicit */short) (~(((((var_8) != (var_8))) ? (((((/* implicit */_Bool) 4052740144757275788LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))) : (-1174309568)))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [(signed char)20] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) ((signed char) arr_1 [16LL] [i_0])))))), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) <= (arr_1 [i_0] [15LL]))))) * ((((_Bool)1) ? (((/* implicit */long long int) var_9)) : (var_6)))))));
        var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) arr_1 [i_0] [i_0])))) && (((/* implicit */_Bool) ((4052740144757275788LL) + (((/* implicit */long long int) arr_1 [i_0] [i_0]))))))))));
        var_12 = ((/* implicit */unsigned long long int) min(((((!(((/* implicit */_Bool) arr_0 [i_0])))) || (((((/* implicit */_Bool) 4052740144757275806LL)) && (((/* implicit */_Bool) -1679485539)))))), ((!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))));
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (+(-4052740144757275818LL)))) ? (((((/* implicit */_Bool) arr_1 [i_0] [(short)12])) ? (((((/* implicit */_Bool) 841096703)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) arr_0 [i_0])))))))) : (((((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))) - (arr_1 [i_0] [i_0])))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_1]);
        var_14 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */unsigned int) arr_4 [i_1])) : (((((/* implicit */_Bool) (short)13810)) ? (((/* implicit */unsigned int) arr_4 [i_1])) : (arr_1 [i_1] [i_1]))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */int) arr_0 [i_2]);
        var_15 = ((/* implicit */short) (((~(((/* implicit */int) (unsigned short)40730)))) + (((/* implicit */int) ((unsigned char) arr_4 [i_2])))));
    }
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */_Bool) 4052740144757275796LL)) && (((/* implicit */_Bool) arr_1 [i_3] [i_3]))))), ((+(((/* implicit */int) (unsigned short)24804))))));
        var_17 ^= ((/* implicit */signed char) arr_8 [i_3]);
    }
}
