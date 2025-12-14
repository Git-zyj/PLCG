/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173008
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
    var_18 = ((/* implicit */long long int) var_1);
    var_19 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned int) var_10))) ? (12337384143997933688ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) << (((((/* implicit */int) (signed char)-61)) + (82)))))))) << (((((/* implicit */int) (short)-1)) + (12)))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 3; i_2 < 10; i_2 += 3) 
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */int) ((_Bool) (((!(((/* implicit */_Bool) arr_1 [i_0] [i_1])))) ? (((/* implicit */int) ((unsigned char) (short)13))) : (((/* implicit */int) (signed char)103)))));
                    var_20 += ((/* implicit */unsigned short) (((!(arr_2 [10LL]))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)43168)) != (((/* implicit */int) arr_2 [(short)10]))))) : (var_7)));
                }
                var_21 = ((/* implicit */signed char) var_8);
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (signed char)94)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) min((arr_8 [i_0]), (arr_8 [i_0]))))));
            }
        } 
    } 
}
