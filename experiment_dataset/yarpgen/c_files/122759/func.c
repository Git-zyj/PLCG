/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122759
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [16LL] [i_0] = ((/* implicit */unsigned char) max(((+((~(((/* implicit */int) arr_5 [i_0])))))), ((~(((/* implicit */int) (short)32767))))));
                    arr_12 [(signed char)11] [i_1] [i_1] [i_1 - 2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (+(((/* implicit */int) (short)32767))))), (min((min((arr_8 [i_0] [i_0] [i_2]), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)25647)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)65535)))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */int) max(((unsigned short)22653), ((unsigned short)39895)))), (((((/* implicit */int) (unsigned short)39895)) + (((/* implicit */int) var_7))))))))))));
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((-1LL), (((/* implicit */long long int) var_15))))) ? (((/* implicit */long long int) 2147483647)) : (max((var_10), (((/* implicit */long long int) var_5)))))))));
    var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((short) (+(var_14))))), (((max((((/* implicit */unsigned long long int) (unsigned char)145)), (5ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)25647)) : (((/* implicit */int) var_12)))))))));
}
