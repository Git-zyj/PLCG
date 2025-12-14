/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126764
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] |= ((/* implicit */int) var_4);
        arr_5 [i_0] = ((long long int) (~(((/* implicit */int) ((arr_0 [i_0]) >= (2472496107511837217LL))))));
        arr_6 [i_0] = ((/* implicit */short) min((min((-6729041643159404948LL), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) (short)20627))));
        arr_7 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-23320)))), (((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_0]))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) >= (min((var_1), (var_8)))))) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (short)20627)) | (((/* implicit */int) arr_1 [i_0]))))) == (max((var_0), (arr_0 [i_0]))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) -8164754757094087083LL))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_9))));
    }
    for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        arr_13 [(short)1] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2]))) : (arr_11 [i_2] [i_2])))), (((((/* implicit */_Bool) (short)26781)) ? (var_6) : (((/* implicit */unsigned long long int) arr_11 [i_2] [i_2])))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20627)))));
        var_18 = (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))) / (((((/* implicit */int) arr_12 [i_2])) / (((/* implicit */int) var_9))))))));
    }
    var_19 = ((/* implicit */_Bool) max((var_11), (((/* implicit */long long int) var_13))));
    var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) >= (var_12))))) > (var_10)));
}
