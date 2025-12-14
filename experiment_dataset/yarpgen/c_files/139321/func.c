/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139321
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
    var_13 &= ((/* implicit */short) (-((+(var_11)))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [8] &= ((/* implicit */long long int) ((((/* implicit */int) min((arr_2 [i_0] [1]), (var_6)))) >> (((long long int) ((unsigned char) var_11)))));
        var_14 ^= ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */long long int) var_9)) != (min((((/* implicit */long long int) var_9)), (var_12)))))), (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)124)) * (((/* implicit */int) var_7))))), (max((var_12), (((/* implicit */long long int) (_Bool)0))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_15 = ((/* implicit */long long int) (((-(((/* implicit */int) (short)-16964)))) / ((-(var_10)))));
        arr_6 [i_1] [1LL] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1])) << ((((~(var_12))) - (5574997182186066052LL)))));
        arr_7 [i_1] = ((/* implicit */unsigned char) ((short) var_11));
    }
    var_16 |= ((/* implicit */unsigned char) (((-(((long long int) var_11)))) == (((/* implicit */long long int) ((((((/* implicit */int) var_6)) * (((/* implicit */int) (short)906)))) % (var_10))))));
}
