/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189329
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
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        arr_4 [0ULL] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (+(var_0))))))), (((int) (-(((/* implicit */int) (unsigned char)240)))))));
        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) 3780031252U)) & (13885354370178949447ULL)));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        arr_9 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((var_0) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240)))))) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) (unsigned char)240)))) * (((((/* implicit */int) (unsigned short)16663)) + (((/* implicit */int) (unsigned short)40416))))));
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_7 [i_1])))) | (((int) ((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) (unsigned char)13)))))));
        arr_11 [(unsigned char)14] [(unsigned char)14] = var_1;
        arr_12 [i_1] = ((unsigned char) ((((((/* implicit */int) (short)32767)) & (((/* implicit */int) (unsigned char)252)))) >> (((((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) arr_1 [i_1] [i_1])))) - (230)))));
        arr_13 [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_0)) : (var_11)))) ? (((((/* implicit */_Bool) (unsigned char)23)) ? (2076995415) : (((/* implicit */int) (unsigned char)21)))) : (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)10052)))))), (((/* implicit */int) (unsigned char)31))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        arr_17 [i_2] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((_Bool) ((arr_15 [i_2] [i_2]) > (((/* implicit */int) (signed char)-103)))))), ((-(((-7282794675309816942LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-23)))))))));
        arr_18 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_2])) % (((/* implicit */int) ((short) ((signed char) 2737883640U))))));
        arr_19 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) (unsigned char)239))));
        arr_20 [i_2] [i_2] = ((/* implicit */_Bool) var_11);
    }
    var_12 = ((unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (var_9) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)12)))))));
}
