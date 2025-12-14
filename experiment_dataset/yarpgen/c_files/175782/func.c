/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175782
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
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((unsigned int) var_3));
        arr_5 [i_0] = ((/* implicit */long long int) (signed char)42);
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        arr_9 [(unsigned char)2] = ((/* implicit */short) (+(((/* implicit */int) arr_8 [6LL]))));
        arr_10 [0] [0] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)7))));
        arr_11 [i_1] = ((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */long long int) arr_0 [i_1] [i_1])), (arr_6 [i_1] [i_1]))));
        arr_12 [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_3 [i_1]), (((/* implicit */unsigned short) (unsigned char)248))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) < (-2567779755386167826LL))))) : (((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1]))) : (arr_7 [i_1])))))), (((((((/* implicit */_Bool) (unsigned char)6)) ? (5320411553578065982ULL) : (13126332520131485626ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)106)) > (((/* implicit */int) var_2))))))))));
    }
    for (short i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        arr_16 [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 8188374989625616038LL))));
        arr_17 [i_2] [i_2] = ((/* implicit */unsigned short) var_1);
    }
    var_13 = ((/* implicit */long long int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_12))));
    var_14 = ((/* implicit */signed char) var_12);
    var_15 = ((/* implicit */_Bool) var_4);
}
