/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140213
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
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_4);
                    arr_10 [i_2] [(_Bool)1] [i_2] [(unsigned char)3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1244899768)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (unsigned char)125)))) - (((/* implicit */int) (signed char)56))));
                    var_19 = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))) + (arr_3 [i_0] [(unsigned char)11]))), (((/* implicit */long long int) max((2147483647), (((/* implicit */int) (signed char)-62)))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) var_7);
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) max(((signed char)-98), (var_14))))))) ? (-2657832607283308149LL) : (((/* implicit */long long int) 1244899768))));
    var_22 = ((/* implicit */signed char) max(((~(((((/* implicit */int) (unsigned char)122)) | (1281951655))))), ((+(((/* implicit */int) ((unsigned char) -1281951656)))))));
}
