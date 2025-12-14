/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111882
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
    var_14 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_4 [(unsigned char)9] [i_0] = ((/* implicit */unsigned char) max((((unsigned short) 7626870574767463107ULL)), (((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [(unsigned char)4])) > (((/* implicit */int) min(((unsigned char)153), ((unsigned char)86)))))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)105)) ? (((/* implicit */int) (unsigned char)154)) : (((/* implicit */int) (unsigned char)101))))))) ^ (((((/* implicit */_Bool) (unsigned char)88)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)150))) : (0ULL)))));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_1]))));
        arr_10 [(unsigned char)20] = ((/* implicit */unsigned char) min((max((((((/* implicit */int) (unsigned char)109)) ^ (((/* implicit */int) arr_8 [i_1])))), (((/* implicit */int) arr_5 [i_1] [i_1])))), (((/* implicit */int) (unsigned char)162))));
        var_16 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_7 [i_1])) % (((/* implicit */int) arr_7 [i_1])))) + (((/* implicit */int) (unsigned char)0))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        var_17 += (unsigned char)105;
        var_18 = ((/* implicit */unsigned short) max((max((((((/* implicit */int) var_8)) * (((/* implicit */int) arr_12 [16ULL])))), (((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */int) (unsigned char)150)) : (((/* implicit */int) arr_8 [i_2])))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */int) arr_6 [i_2] [i_2])) : (((/* implicit */int) (unsigned short)13))))))))));
        arr_13 [i_2] = ((/* implicit */unsigned short) (unsigned char)6);
    }
}
