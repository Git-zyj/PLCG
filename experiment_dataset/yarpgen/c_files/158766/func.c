/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158766
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
    var_16 = ((/* implicit */signed char) ((unsigned int) ((((((/* implicit */int) (short)5384)) >= (((/* implicit */int) (short)-5385)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_12))))) : (var_0))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) var_5);
        arr_3 [i_0] = min((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) (signed char)-18)))))), (arr_1 [i_0]));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) ((1278449084733243044LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
        arr_8 [(signed char)8] = ((/* implicit */int) var_1);
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) max((arr_7 [i_1]), (((/* implicit */short) (_Bool)1)))))));
    }
}
