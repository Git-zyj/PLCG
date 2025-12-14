/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15180
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) max((max((min((var_9), (var_19))), (((/* implicit */unsigned long long int) (unsigned char)112)))), (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned short) var_2)), (var_6))), (((/* implicit */unsigned short) var_11)))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)3)))) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (var_9)))) ? ((~(var_18))) : (((/* implicit */long long int) ((/* implicit */int) min((var_15), ((_Bool)1)))))))));
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~(var_8)))), (var_7))))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        arr_8 [i_1] = var_16;
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned short)3)), (var_7))))));
        var_22 = ((/* implicit */short) min((max((var_16), (var_16))), (min((var_19), (((/* implicit */unsigned long long int) var_8))))));
    }
    for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 2) /* same iter space */
    {
        arr_13 [i_2] = min((max((((/* implicit */unsigned long long int) var_6)), (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_9))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) 2147483647)) : (var_0)))) ? (min((var_9), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) (~(var_12)))))));
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) max((var_19), (((/* implicit */unsigned long long int) var_8)))))));
    }
    for (unsigned long long int i_3 = 3; i_3 < 14; i_3 += 2) /* same iter space */
    {
        var_24 &= (~(((/* implicit */int) (short)-32762)));
        arr_16 [i_3 + 3] = ((/* implicit */_Bool) min((max((((/* implicit */long long int) var_12)), (var_17))), (((/* implicit */long long int) var_2))));
        arr_17 [i_3] [15LL] = var_2;
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (~(((/* implicit */int) var_11)))))));
        arr_18 [i_3] = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) max((((/* implicit */short) (_Bool)1)), (var_11)))), ((-(var_17))))), (((/* implicit */long long int) var_2))));
    }
    var_26 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) var_1)) ? (var_0) : (min((var_16), (((/* implicit */unsigned long long int) var_17))))))));
    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_17), (((/* implicit */long long int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-4618), ((short)16378))))) : (max((var_16), (((/* implicit */unsigned long long int) var_15))))))));
    var_28 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
}
