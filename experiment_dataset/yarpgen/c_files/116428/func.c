/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116428
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
    for (int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [(_Bool)1] = (i_1 % 2 == zero) ? (((/* implicit */short) (+(((/* implicit */int) ((((arr_0 [i_1]) << (((((/* implicit */int) arr_5 [i_1] [i_1] [i_1])) + (54))))) <= ((+(var_3))))))))) : (((/* implicit */short) (+(((/* implicit */int) ((((arr_0 [i_1]) << (((((((/* implicit */int) arr_5 [i_1] [i_1] [i_1])) + (54))) + (90))))) <= ((+(var_3)))))))));
                    var_17 = ((/* implicit */long long int) arr_1 [(unsigned short)3]);
                    arr_8 [i_1] [10U] [i_0 + 1] = ((/* implicit */unsigned int) (signed char)113);
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (unsigned char)152))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) var_10);
}
