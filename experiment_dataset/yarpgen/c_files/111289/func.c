/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111289
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
    var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) ((short) var_10))) ? (((/* implicit */unsigned long long int) ((var_3) | (var_3)))) : (((var_5) ^ (((/* implicit */unsigned long long int) var_3)))))) >> (((((/* implicit */int) var_12)) - (26959)))));
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) ((var_8) <= (var_11)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))))) : (var_8)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_1] = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1787296638)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-50))) : (10068864869148235120ULL)))) ? (((/* implicit */int) ((signed char) 8711122647769548807LL))) : (((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_9))))))));
                    var_16 -= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) var_13)) != (((/* implicit */int) var_10))))), (((var_3) << (((((((/* implicit */int) var_9)) + (24067))) - (46)))))));
                    arr_10 [(_Bool)1] [8ULL] [i_0] [i_2] = ((/* implicit */unsigned long long int) var_2);
                    var_17 -= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) var_0)) > (var_3)))) != (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_0)))))))));
                }
            } 
        } 
    } 
    var_18 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_8)))))) ? ((((_Bool)0) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)70)))) : ((-(((((((/* implicit */int) var_9)) + (2147483647))) >> (((var_5) - (10153076768076740903ULL)))))))));
    /* LoopSeq 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_19 = ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) / (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (549755813888ULL) : (1538888985476263246ULL)))) ? (((/* implicit */int) ((_Bool) var_6))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13))))))) : (max((((((/* implicit */_Bool) 16907855088233288368ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16907855088233288368ULL))), (((/* implicit */unsigned long long int) ((short) var_0))))));
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_11)) - (((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))) ? (((((/* implicit */_Bool) var_5)) ? (var_8) : (var_0))) : (var_11)));
        arr_13 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_5))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_4)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_0)))), (var_3)))));
        var_21 = ((/* implicit */_Bool) (-(((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
    }
    for (signed char i_4 = 1; i_4 < 12; i_4 += 1) 
    {
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((((/* implicit */int) (signed char)75)) <= (((/* implicit */int) (_Bool)1))))))) <= (((/* implicit */int) var_9))));
        arr_17 [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) | (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))))) ^ (((((/* implicit */_Bool) var_10)) ? (((var_11) & (var_0))) : (var_0)))));
        var_22 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (signed char)-70)))), (((((/* implicit */int) var_2)) & (((/* implicit */int) var_6))))))), (var_5)));
        var_23 ^= ((/* implicit */int) min(((!(((/* implicit */_Bool) ((var_3) / (((/* implicit */long long int) var_8))))))), (((var_8) <= (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_24 = ((/* implicit */unsigned char) var_8);
        arr_20 [i_5] [(short)3] = ((/* implicit */int) ((unsigned long long int) var_2));
        var_25 -= ((/* implicit */int) max((1538888985476263235ULL), (((/* implicit */unsigned long long int) (short)7442))));
        var_26 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_8)))))));
    }
}
