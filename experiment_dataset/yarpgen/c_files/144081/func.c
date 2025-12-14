/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144081
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
    var_14 = ((/* implicit */int) var_11);
    var_15 = ((/* implicit */short) min((((/* implicit */int) ((unsigned short) var_0))), (((((/* implicit */_Bool) ((((/* implicit */int) (short)10587)) & (((/* implicit */int) (short)-26467))))) ? (((/* implicit */int) ((var_12) == (((/* implicit */long long int) var_4))))) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)219))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)32743)) & (((/* implicit */int) (unsigned char)255))));
                    var_17 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)85))) : (arr_0 [(_Bool)1]))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0 + 1])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 2])))))))))) <= ((~(((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_2 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-71)))))))));
                }
            } 
        } 
    } 
}
