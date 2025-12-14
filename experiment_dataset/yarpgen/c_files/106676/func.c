/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106676
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_21 = ((/* implicit */int) min((var_21), ((+(((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [i_1])), (arr_2 [i_1] [i_2]))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0])) | (((/* implicit */int) ((arr_4 [i_0] [i_1] [(short)4] [i_3]) < (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))))))) ? ((+(((long long int) arr_4 [i_0] [i_1] [i_2] [i_3 + 3])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_3 + 2] [i_3 + 3] [i_3 + 2] [i_3 + 1])) < (((/* implicit */int) ((arr_4 [i_3 + 2] [i_2] [i_1] [i_0]) > (5905206479209350941LL))))))))));
                        arr_11 [i_0] [i_1] [i_2] [10LL] [i_3] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-83)))))) : (((((/* implicit */_Bool) (unsigned short)13096)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (16996087016955916681ULL))))), (((/* implicit */unsigned long long int) ((int) arr_8 [i_0 + 1] [i_0] [i_3] [i_3] [i_3 - 1])))));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) max((max((var_16), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)99))) % (var_16))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5303857663820404496LL)) ? (850939039) : (((/* implicit */int) (_Bool)1))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-54)) != (((/* implicit */int) var_8))))))))));
    var_23 = ((/* implicit */unsigned short) ((max(((~(var_10))), (((/* implicit */long long int) var_18)))) | (((/* implicit */long long int) ((int) var_15)))));
    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) var_19))));
    var_25 = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((((var_17) ? (((/* implicit */int) var_9)) : (507095225))), (((/* implicit */int) var_18))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_19)))) : (var_10)))));
}
