/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167704
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) var_1)) & (((/* implicit */int) (unsigned char)244)))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)29301)) ? ((((-(((/* implicit */int) arr_0 [i_0] [i_0])))) ^ (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)244)) & (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_1 [(signed char)18])) : (((/* implicit */int) arr_1 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */int) ((_Bool) (signed char)-102));
        arr_5 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)12))))) ? (max((((/* implicit */unsigned long long int) (signed char)6)), (6635198631987434906ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_2)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_0 [i_0] [i_0])), ((unsigned char)187)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)104)))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 23; i_1 += 1) 
    {
        arr_8 [i_1] [i_1 + 1] = ((/* implicit */int) max((((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (33502674U))) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) (-(((((/* implicit */int) (unsigned short)43931)) << (((/* implicit */int) arr_6 [i_1] [i_1])))))))));
        arr_9 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) max(((signed char)-5), (((/* implicit */signed char) arr_6 [i_1] [23ULL]))))) & (((((/* implicit */int) arr_7 [i_1] [i_1])) - (((/* implicit */int) arr_6 [i_1] [i_1])))))) - (((/* implicit */int) ((((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1])) > (((/* implicit */int) (_Bool)1)))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_12 [4U] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_2] [i_2])) | (((/* implicit */int) arr_0 [i_2] [i_2]))));
        arr_13 [i_2] = ((/* implicit */unsigned int) arr_7 [6ULL] [i_2]);
        arr_14 [i_2] = ((/* implicit */_Bool) (unsigned short)37127);
        arr_15 [i_2] = ((/* implicit */unsigned long long int) ((791190178U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2])))));
    }
    var_15 = ((/* implicit */unsigned int) 16998679848064191515ULL);
    var_16 |= ((/* implicit */signed char) var_5);
}
