/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169965
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) ((_Bool) arr_0 [i_0]))) | (((/* implicit */int) ((unsigned char) var_2))))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((max((-2496929861035146166LL), (((/* implicit */long long int) (unsigned char)220)))), (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)69)), (arr_1 [i_0] [i_0]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1024)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) arr_0 [i_0])))))))) : (((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned short) (short)-16980)))))));
        arr_4 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_0))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) min((arr_5 [(unsigned short)0]), (((/* implicit */long long int) ((_Bool) min((((/* implicit */unsigned short) (unsigned char)85)), ((unsigned short)64508))))))))));
        arr_8 [i_1] = ((min((arr_6 [i_1] [i_1]), (arr_6 [i_1] [i_1]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_6 [i_1] [i_1]))))))));
        var_11 ^= (((((_Bool)1) ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_1]))) > (((arr_6 [i_1] [i_1]) ^ (arr_6 [i_1] [i_1]))));
        arr_9 [(_Bool)1] [i_1] = ((/* implicit */short) arr_7 [i_1]);
        arr_10 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) && (((/* implicit */_Bool) arr_6 [i_1] [i_1]))))), (((arr_6 [i_1] [i_1]) | (arr_6 [i_1] [i_1])))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 3) 
    {
        var_12 = ((/* implicit */_Bool) (+(arr_1 [i_2] [i_2])));
        arr_13 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_5 [i_2]) + (((/* implicit */long long int) min((-1468410640), (arr_1 [i_2] [i_2])))))))));
    }
    var_13 = ((int) ((unsigned char) (unsigned short)1055));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) ((var_8) & (((/* implicit */int) (unsigned short)64512))))) ? (((17158647442221760273ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_6)) : (var_9))))) : (((/* implicit */unsigned long long int) var_8))));
    var_15 = ((/* implicit */unsigned short) var_8);
}
