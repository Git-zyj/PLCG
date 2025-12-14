/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109383
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
    var_16 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)61452)) == (((/* implicit */int) (short)5970))))) == (((/* implicit */int) ((((((/* implicit */unsigned long long int) var_2)) < (var_7))) || (((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_11)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 - 4])) || (((/* implicit */_Bool) var_13)))))) % (((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65531)))))))) || (((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)255)) & (var_14))) - (((/* implicit */int) ((var_9) > (((/* implicit */unsigned int) var_13))))))))));
                    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)232)) << (((/* implicit */int) (unsigned short)15)))) != (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) % (929293649U))) != (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)250)) | (((/* implicit */int) var_1))))))))));
                }
            } 
        } 
    } 
}
