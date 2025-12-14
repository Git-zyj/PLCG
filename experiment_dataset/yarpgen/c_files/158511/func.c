/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158511
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
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((var_7) * (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65535))))))))));
    var_20 = ((/* implicit */unsigned char) min((1073741823), (-1)));
    var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31)))))) ? (((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */int) (unsigned short)10078)) : (((/* implicit */int) var_12)))) : ((((_Bool)1) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (signed char)46))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1574264849)) ? (((/* implicit */int) (unsigned short)2199)) : (((/* implicit */int) (_Bool)1))));
        arr_4 [i_0] = ((/* implicit */short) (+(var_9)));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 3730192683U)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (signed char)0))));
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) -2051123694))));
    }
}
