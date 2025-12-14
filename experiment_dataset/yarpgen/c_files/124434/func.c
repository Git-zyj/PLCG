/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124434
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-121))) > (var_14)));
    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((var_12) > (((/* implicit */long long int) ((/* implicit */int) var_3))))) ? (((/* implicit */long long int) (~(87457797)))) : (var_19))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        var_22 = ((/* implicit */_Bool) ((min((var_7), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)121))))))) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125)))));
        var_23 = ((/* implicit */signed char) var_9);
        var_24 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) && ((!(((/* implicit */_Bool) var_13))))))), ((~(((/* implicit */int) (signed char)126))))));
    }
    for (unsigned int i_1 = 3; i_1 < 21; i_1 += 2) 
    {
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_2 [i_1 - 3] [i_1 - 3]), (arr_2 [i_1 - 2] [i_1 - 2])))) ? (max((((/* implicit */unsigned long long int) var_16)), (arr_2 [i_1 - 3] [i_1 - 3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_2 [i_1 - 2] [i_1 - 1]))))));
        arr_5 [i_1] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24361))) : (arr_2 [8LL] [17LL]))), (((arr_2 [7LL] [i_1]) << (((/* implicit */int) (unsigned char)32))))))) ? (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_18))))), ((+(((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_1 - 2]), (((/* implicit */short) (_Bool)0)))))) : (arr_3 [i_1 - 1]))));
    }
    for (int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-117))) : ((-(arr_3 [i_2])))));
        var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) max(((_Bool)1), ((_Bool)1)))))));
        var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) (+(var_13)))))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        var_29 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)1016))));
        var_30 = ((/* implicit */unsigned short) ((max((4294967295ULL), (((/* implicit */unsigned long long int) var_6)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124)))));
        var_31 = ((((/* implicit */long long int) ((/* implicit */int) (short)127))) | (((((/* implicit */_Bool) max((arr_9 [i_3]), (((/* implicit */long long int) arr_8 [i_3] [i_3]))))) ? ((-(var_2))) : ((+(arr_9 [i_3]))))));
        arr_10 [i_3] = ((/* implicit */unsigned char) (_Bool)1);
    }
}
