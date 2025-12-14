/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103290
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 ^= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) (signed char)-6))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((unsigned long long int) var_3))));
                var_12 += ((/* implicit */unsigned short) min((((var_6) << (((((/* implicit */int) var_3)) - (27519))))), (((/* implicit */unsigned long long int) ((unsigned char) (~(var_5)))))));
                arr_5 [i_0] [i_0] |= ((/* implicit */unsigned int) var_6);
                var_13 = ((/* implicit */unsigned char) max((((/* implicit */int) ((max((((/* implicit */unsigned int) (unsigned short)17986)), (1561100784U))) == (((/* implicit */unsigned int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned short) (unsigned char)30))))))))), (((((/* implicit */_Bool) 26ULL)) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) (unsigned char)249))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) 15026882480976743322ULL))));
    var_15 = ((/* implicit */unsigned int) var_3);
    var_16 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) % (((((/* implicit */_Bool) (unsigned char)246)) ? (8681367168340115166ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)193)))))));
}
