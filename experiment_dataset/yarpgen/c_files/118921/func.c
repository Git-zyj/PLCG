/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118921
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_10 = ((/* implicit */long long int) max((var_10), (arr_0 [i_0 - 1])));
        arr_4 [4LL] [i_0 + 1] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) ((var_8) != (((/* implicit */int) arr_2 [i_0]))))) : ((+(((/* implicit */int) (unsigned short)63358)))))));
    }
    for (unsigned int i_1 = 4; i_1 < 19; i_1 += 1) 
    {
        arr_8 [i_1 - 4] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)2173))));
        arr_9 [i_1] [i_1 - 3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-((+(((/* implicit */int) (unsigned short)63356))))))) * (((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)2151))))) * (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2178))) + (var_7)))))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 1; i_2 < 16; i_2 += 3) 
        {
            arr_12 [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned int) max((((((/* implicit */_Bool) (unsigned short)2173)) ? (((/* implicit */int) (unsigned short)63359)) : (((/* implicit */int) (unsigned short)2165)))), (((/* implicit */int) (unsigned short)63340)))));
            arr_13 [i_1] = ((/* implicit */long long int) (!(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63385))) != (arr_3 [i_1 + 1] [i_1 - 3])))));
        }
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        arr_16 [(unsigned short)13] [i_3] = ((/* implicit */int) var_5);
        arr_17 [i_3] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_1)))));
    }
    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        var_11 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (unsigned short)63385)))), (((((/* implicit */int) (unsigned short)63344)) ^ (((/* implicit */int) (unsigned short)63334))))))), (((((/* implicit */_Bool) arr_18 [i_4] [i_4])) ? (arr_18 [i_4] [i_4]) : (((((/* implicit */_Bool) arr_20 [i_4])) ? (((/* implicit */unsigned long long int) arr_20 [i_4])) : (var_0)))))));
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)63334)) << (((((((/* implicit */_Bool) ((var_7) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2149)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_1), (var_1))))) : (var_7))) - (109U))))))));
        arr_21 [i_4] = ((/* implicit */unsigned int) (((+(((((/* implicit */_Bool) (unsigned short)63344)) ? (arr_20 [i_4]) : (((/* implicit */int) var_1)))))) != (((/* implicit */int) min(((unsigned short)2149), ((unsigned short)63334))))));
        var_13 = ((/* implicit */long long int) ((unsigned int) (~(arr_19 [i_4]))));
    }
    var_14 = ((/* implicit */unsigned int) max((((/* implicit */int) ((signed char) (unsigned short)63349))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)63407)) : (((/* implicit */int) var_3))))) ? (min((var_8), (((/* implicit */int) (unsigned short)2177)))) : (((((/* implicit */int) (unsigned short)2151)) % (((/* implicit */int) (unsigned short)2151))))))));
}
