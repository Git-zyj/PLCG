/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134872
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
    var_11 = ((/* implicit */int) ((var_6) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((var_9) < (((/* implicit */unsigned long long int) 3369569546U)))))))) : (max((var_1), (var_2)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_4 [i_0] [i_1] [2ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
                    var_13 = ((/* implicit */signed char) ((_Bool) min((((/* implicit */long long int) min((arr_3 [i_0]), (((/* implicit */short) var_3))))), (arr_1 [i_0] [i_0]))));
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) max((var_9), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6)))))));
                    arr_9 [i_0] [(short)1] [(signed char)13] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_1 [i_0] [i_2])))))))));
                    arr_10 [(signed char)8] [i_1] [i_2] |= (~(min((var_1), (((/* implicit */unsigned int) ((short) var_10))))));
                }
                var_14 = ((/* implicit */unsigned char) ((min((arr_5 [i_0]), (arr_5 [i_0]))) ? (((/* implicit */int) arr_5 [i_0])) : (((arr_5 [i_0]) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_0]))))));
                arr_11 [4U] [i_1] [i_1] |= ((unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1])) ? (arr_7 [i_1] [i_0] [i_1]) : (var_8)));
                var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) var_9)))));
                var_16 += ((/* implicit */signed char) min((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-114))))), ((~(arr_4 [i_0] [i_0] [12ULL])))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_7))));
}
