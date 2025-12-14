/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157404
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
    var_11 = ((((((/* implicit */_Bool) ((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) == (18ULL)))))) ^ (((/* implicit */int) ((short) var_10))));
    var_12 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (4294967293U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) 33ULL)) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((unsigned int) var_2)) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 2])))))))))));
        var_14 = ((/* implicit */unsigned int) min((arr_0 [i_0]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15699)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13))) : (26ULL)))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [6])) && (((/* implicit */_Bool) (unsigned char)45)))) ? (arr_5 [(signed char)12]) : (((((/* implicit */_Bool) -9223372036854775805LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) >= (max((var_2), (((/* implicit */unsigned int) var_3))))))) : (((/* implicit */int) (!((((_Bool)1) && ((_Bool)1))))))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_1]);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_13 [i_2] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (-2147483647 - 1))))))), (max(((+(((/* implicit */int) (unsigned char)3)))), (((/* implicit */int) arr_12 [i_2]))))));
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_11 [i_2])) ? (var_4) : (((/* implicit */int) var_5)))))))))));
    }
    var_16 = ((/* implicit */short) var_10);
}
