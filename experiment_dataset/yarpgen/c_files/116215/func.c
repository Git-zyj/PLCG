/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116215
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
    var_17 |= ((/* implicit */int) ((long long int) min((((/* implicit */short) (_Bool)1)), ((short)32753))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_18 = ((/* implicit */signed char) (~(((/* implicit */int) arr_1 [i_0]))));
        var_19 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0])) >= ((-(((/* implicit */int) (unsigned short)54146))))));
        var_20 = ((/* implicit */long long int) (((+(((/* implicit */int) var_6)))) - (((/* implicit */int) ((short) (unsigned short)1536)))));
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_3))));
        var_22 = ((/* implicit */unsigned long long int) 9223372036854775785LL);
    }
    for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 2) 
    {
        var_23 = (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_14)) ? (var_4) : (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1]))))))));
        var_24 = ((/* implicit */short) ((long long int) (+(((((/* implicit */int) var_14)) | (((/* implicit */int) (unsigned short)65535)))))));
    }
    for (short i_2 = 1; i_2 < 12; i_2 += 2) 
    {
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (-((-((+(((/* implicit */int) var_0)))))))))));
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((((((/* implicit */_Bool) -8799649146165545914LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_15))) - (((/* implicit */long long int) max((1590054762U), (((/* implicit */unsigned int) var_0))))))) : (max((((var_0) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_2]))) : (var_7))), (((/* implicit */long long int) arr_3 [i_2] [i_2]))))));
        arr_7 [i_2 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((2366263231465997495LL), (((/* implicit */long long int) 4294967284U))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)-32753))))) : (((long long int) (short)32757))))) ? (((/* implicit */int) (short)-22870)) : ((-(((/* implicit */int) (short)15688))))));
        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) min((max((((/* implicit */int) (short)-32767)), ((-(var_2))))), (((/* implicit */int) (unsigned short)65528)))))));
        var_28 = ((/* implicit */unsigned long long int) max((((/* implicit */int) max((arr_4 [i_2 + 1] [i_2 + 3]), (arr_4 [i_2 + 3] [i_2 + 1])))), (((((/* implicit */_Bool) ((short) arr_3 [i_2] [i_2]))) ? (((/* implicit */int) arr_2 [i_2 + 2])) : (((/* implicit */int) var_9))))));
    }
    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        var_29 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) (unsigned short)65464)) * (((/* implicit */int) ((((/* implicit */int) arr_9 [i_3])) > (((/* implicit */int) (_Bool)1))))))));
        var_30 = ((/* implicit */_Bool) ((short) (short)-31288));
    }
}
