/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158285
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                var_18 += ((/* implicit */unsigned long long int) min((arr_0 [(_Bool)1]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)30111)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17937)) ? (((/* implicit */int) (unsigned char)42)) : (((/* implicit */int) (short)192))))))))));
                arr_6 [(unsigned short)10] [(short)4] = ((/* implicit */_Bool) (~(arr_4 [i_1] [i_1 - 1] [(short)1])));
                var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (+(((((arr_2 [(short)13]) + (9223372036854775807LL))) >> (((arr_4 [i_0] [i_0] [(unsigned short)13]) - (9611122010186689730ULL)))))))), (((((/* implicit */unsigned long long int) var_14)) + (arr_4 [i_0] [i_1] [i_1])))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_4);
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12288))) : (var_12)))))) ? (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (short)183)) : (((/* implicit */int) (unsigned char)255))))) : (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_14)) : (var_17))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)19509)), ((unsigned short)53248))))))));
}
