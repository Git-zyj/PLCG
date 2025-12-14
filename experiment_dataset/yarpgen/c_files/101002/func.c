/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101002
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
    var_10 = ((/* implicit */short) (((((~(((/* implicit */int) var_7)))) <= (((((/* implicit */_Bool) 1099511627775ULL)) ? (1985298404) : (-1915391712))))) && (((/* implicit */_Bool) ((((((/* implicit */int) var_9)) ^ (((/* implicit */int) (unsigned char)144)))) & (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (-1LL)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_11 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))))) ? ((+(3134033209368094159ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [6] [i_0])) && (((/* implicit */_Bool) arr_2 [(short)10])))) && (((/* implicit */_Bool) (+(12752992839761445053ULL))))))))));
                    arr_7 [i_2] = ((/* implicit */signed char) min((((((/* implicit */int) arr_3 [i_1])) - (((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) arr_6 [i_0] [i_2] [i_2] [i_0])))))), (((/* implicit */int) ((unsigned short) arr_4 [i_2])))));
                }
            } 
        } 
    } 
}
