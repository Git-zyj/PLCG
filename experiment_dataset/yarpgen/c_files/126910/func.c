/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126910
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
    var_15 = ((/* implicit */int) ((((/* implicit */int) min((min((((/* implicit */unsigned char) var_5)), (var_6))), (((/* implicit */unsigned char) ((_Bool) var_0)))))) <= (((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (min((((/* implicit */unsigned short) var_0)), ((unsigned short)65535))))))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)24398))))) <= (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (short)32758)))))))));
        var_16 = ((/* implicit */unsigned short) var_12);
        var_17 = ((/* implicit */long long int) min((((((/* implicit */int) min((((/* implicit */unsigned short) (short)-3011)), (var_2)))) / (((/* implicit */int) arr_0 [i_0])))), ((-(((/* implicit */int) (short)24398))))));
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) ((((long long int) (unsigned char)117)) == (((/* implicit */long long int) ((/* implicit */int) var_11)))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) (short)24398))))), (min((((/* implicit */long long int) var_6)), (-3608989605378215147LL)))))) - (((arr_3 [i_1] [i_1]) - (arr_3 [(unsigned short)12] [(unsigned short)12])))));
    }
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        arr_8 [12ULL] = ((/* implicit */signed char) (_Bool)1);
        arr_9 [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2]))));
        var_20 = ((/* implicit */short) min(((signed char)48), (((/* implicit */signed char) max((arr_7 [i_2]), (arr_7 [i_2]))))));
    }
}
