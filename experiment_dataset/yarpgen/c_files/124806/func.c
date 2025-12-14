/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124806
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)107)))))) ? (max((((var_2) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) >> (((-2668424021665750433LL) + (2668424021665750454LL)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_16))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_18 ^= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (var_12)))) ? (max((((/* implicit */unsigned long long int) (unsigned char)28)), (16365782472518385984ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-22)))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_19 = ((/* implicit */unsigned char) (((-(((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))) >> (((((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) 1074037872U)) : (11843175325258255450ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36193))))) - (29671ULL)))));
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)32607)) : (((/* implicit */int) var_0)))))))), (((((/* implicit */_Bool) (short)30940)) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */int) (short)-23833)) >= (((/* implicit */int) (unsigned char)114))))))))))));
            var_21 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned short)29344)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_14)))) : (max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) var_7))))))));
            var_22 |= ((/* implicit */signed char) arr_2 [i_1] [i_1]);
            var_23 = ((/* implicit */signed char) max((((/* implicit */long long int) (unsigned short)36193)), (((long long int) (!(((/* implicit */_Bool) arr_5 [i_0])))))));
        }
        arr_6 [i_0] = ((/* implicit */unsigned int) max((max((((/* implicit */int) (unsigned short)29343)), ((-(((/* implicit */int) var_10)))))), (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_15))))))));
        var_24 = ((/* implicit */unsigned char) (+(max((((/* implicit */long long int) var_10)), (arr_3 [i_0] [i_0] [i_0])))));
        arr_7 [i_0] [i_0] = (+(25U));
    }
}
