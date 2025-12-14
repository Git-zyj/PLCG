/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137676
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
    var_11 *= ((/* implicit */unsigned int) var_6);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */int) (unsigned short)16850)) : (((/* implicit */int) (unsigned short)16870))));
        arr_4 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [(unsigned short)9])), (var_2)))) ? (((((/* implicit */long long int) arr_1 [i_0])) | (-4926960556389594486LL))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)16860), (((/* implicit */unsigned short) (_Bool)1))))))))) ? (((((/* implicit */_Bool) ((unsigned long long int) (short)0))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) - (arr_1 [i_0]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (arr_1 [i_0])))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) max(((short)-32739), ((short)-1))))))));
        arr_5 [i_0] = (unsigned short)48666;
        var_12 &= ((/* implicit */signed char) arr_2 [i_0]);
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) max((((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) var_5))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_13 *= ((/* implicit */unsigned short) (~(min((-4926960556389594486LL), (((/* implicit */long long int) (unsigned short)48666))))));
        var_14 = ((/* implicit */unsigned short) ((((((_Bool) var_2)) ? ((~(var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1])) && (((/* implicit */_Bool) 18446744073709551599ULL)))))))) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)47)))));
        arr_10 [i_1] = ((/* implicit */unsigned char) ((((_Bool) arr_9 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (arr_8 [i_1]))))) : (((long long int) var_7))));
        var_15 ^= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (short)-1)), ((unsigned short)48702)));
        arr_11 [i_1] = ((((((/* implicit */_Bool) (unsigned short)24)) || (((/* implicit */_Bool) (unsigned short)16870)))) && ((_Bool)1));
    }
}
