/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139979
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) arr_1 [(unsigned short)7])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32210)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238))))));
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) (unsigned char)137)) - (((/* implicit */int) (short)17469))))))));
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (signed char)-61))))) ? (((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */int) (unsigned short)50668)) : (((/* implicit */int) (unsigned short)14894)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)65))))))), (((/* implicit */int) max((arr_0 [i_0] [i_0]), (((/* implicit */short) (_Bool)1))))))))));
        var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((((((/* implicit */int) (short)-1774)) + (2147483647))) >> (((arr_1 [i_0]) - (3322654003U))))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)50668)) || (((/* implicit */_Bool) (unsigned short)50670))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((unsigned char) var_0))), (((((/* implicit */_Bool) 1041204421U)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
    }
    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) / (-4356815880670482324LL)))) + (max(((+(var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)227)))))))));
}
