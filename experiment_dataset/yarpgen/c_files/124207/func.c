/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124207
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_11 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0] [(short)6])) && (((/* implicit */_Bool) 1069792950)))) || (((/* implicit */_Bool) var_7))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */int) ((arr_6 [i_2 + 3] [i_1] [i_2 - 1]) == (1069792930)));
                    var_12 = ((/* implicit */_Bool) ((((((-1069792951) + (2147483647))) >> (((1069792950) - (1069792933))))) / (((((/* implicit */int) var_6)) | (((/* implicit */int) arr_0 [i_0] [i_0]))))));
                }
            } 
        } 
    }
    var_13 = ((/* implicit */_Bool) min((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-31))) / (10875366512635561753ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((7571377561073989845ULL) << (((((/* implicit */int) var_0)) - (24056)))))) ? (((((/* implicit */int) var_1)) | (var_7))) : (((-1406717957) & (((/* implicit */int) var_5)))))))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (-493663080)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-1159128985984078895LL)))))) ? ((-(((1023U) + (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_6)))))));
}
