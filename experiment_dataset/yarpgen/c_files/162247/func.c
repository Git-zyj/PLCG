/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162247
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) > (min((((/* implicit */int) var_8)), ((+(((/* implicit */int) var_6))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */signed char) arr_0 [i_1]);
                arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((long long int) (signed char)-106)) | (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)198)))))))))) || ((!(((/* implicit */_Bool) ((short) (signed char)59)))))));
                var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */int) ((unsigned char) (signed char)-74))) : (((/* implicit */int) (signed char)-62)))) + (((/* implicit */int) (unsigned char)175))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (short)24834);
    var_18 = ((/* implicit */short) ((unsigned char) var_12));
}
