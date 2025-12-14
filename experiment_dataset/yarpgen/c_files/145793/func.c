/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145793
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
    var_17 -= ((/* implicit */_Bool) max((min((3254438023U), (((/* implicit */unsigned int) (_Bool)1)))), (((((/* implicit */_Bool) ((unsigned char) -1606699682053378112LL))) ? (((var_7) ? (3254438023U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [(short)0] [i_0])))))));
        var_19 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_0] [i_0])))))));
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_20 = ((/* implicit */int) -3840901094980802158LL);
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_1] [(short)5]);
        arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) + (((((/* implicit */_Bool) 1040529286U)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (short)0))))))) > (1040529259U)));
    }
    for (short i_2 = 3; i_2 < 17; i_2 += 3) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) arr_6 [i_2 + 2])))));
        arr_9 [i_2] = ((/* implicit */long long int) ((_Bool) (((_Bool)0) ? (3254438023U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))));
    }
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (1160894290) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1040529259U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_0)))) ? (max((((/* implicit */int) (unsigned short)10028)), (1147912772))) : (((/* implicit */int) (signed char)21)))))))));
}
