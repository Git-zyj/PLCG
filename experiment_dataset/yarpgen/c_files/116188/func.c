/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116188
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
    var_19 = ((/* implicit */unsigned int) ((var_5) > (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) < (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) -12315393)) : (4294967295U)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned int) arr_2 [6ULL] [i_1 - 1]);
                    var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(unsigned char)11])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_5 [(unsigned short)8] [i_1] [i_2])))))))), (max((((arr_4 [i_0] [i_0] [i_2]) ? (13267843228776844971ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))), ((+(13267843228776844974ULL)))))));
                    arr_8 [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) var_14)), (((((/* implicit */int) ((unsigned short) var_4))) ^ (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_5 [i_0] [(signed char)8] [i_0]))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) max((((((/* implicit */_Bool) 13267843228776844974ULL)) ? (143457986911918777ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))))), (min((((/* implicit */unsigned long long int) var_16)), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) var_5)) : (var_13)))))));
}
