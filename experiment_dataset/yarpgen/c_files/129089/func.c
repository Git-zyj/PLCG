/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129089
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_10 ^= ((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)16386)) : (arr_0 [(unsigned char)4])))) <= (((arr_2 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1)))))))));
        var_11 -= ((((/* implicit */int) (unsigned short)0)) | (((/* implicit */int) (unsigned char)72)));
    }
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((unsigned char) ((unsigned short) (+(1074705738))))))));
    var_13 ^= ((/* implicit */long long int) var_4);
    var_14 -= ((/* implicit */int) ((max((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-88)), (var_7)))), (((int) var_1)))) >= (((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))));
}
