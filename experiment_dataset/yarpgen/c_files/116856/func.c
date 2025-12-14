/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116856
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
    var_12 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_0)) - (2373))))) ^ ((~(((/* implicit */int) var_9)))))) < (((/* implicit */int) (((~(((/* implicit */int) var_6)))) == (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)50503)) : (((/* implicit */int) var_6)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */short) (-(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (var_10)))));
                arr_4 [(_Bool)0] [i_0] [(_Bool)0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45708))) % ((+(max((0U), (((/* implicit */unsigned int) (short)-7764))))))));
                var_14 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) arr_0 [i_1 + 3]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) != (((/* implicit */int) var_5))))) : (-797055298))));
                var_15 = ((/* implicit */int) max((var_15), (((((/* implicit */_Bool) (~((~(((/* implicit */int) (short)8192))))))) ? (((/* implicit */int) (short)8192)) : (((/* implicit */int) (short)-23820))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) ((((/* implicit */_Bool) -7149164954795390172LL)) && (((/* implicit */_Bool) var_0))))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (4611685949707911168LL)))) ? (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) (short)-8190))))) : (((/* implicit */int) var_11))))));
    var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((var_1), (((/* implicit */int) var_6))))) ? (((var_10) / (((/* implicit */long long int) ((/* implicit */int) (short)8192))))) : (((/* implicit */long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) (signed char)-99))))))) ^ (((/* implicit */long long int) (((~(((/* implicit */int) var_6)))) | (((/* implicit */int) var_5)))))));
}
