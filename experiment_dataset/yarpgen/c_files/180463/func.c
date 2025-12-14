/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180463
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)20187)) ? (((/* implicit */long long int) min((var_4), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))))))) : (min((8670806320687739017LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0 + 2] [i_1] = var_7;
                /* LoopSeq 1 */
                for (short i_2 = 3; i_2 < 17; i_2 += 2) 
                {
                    arr_8 [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)168), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */int) min(((short)32753), (((/* implicit */short) (_Bool)1))))) : ((~(((/* implicit */int) (unsigned char)66)))))))));
                    arr_9 [i_2] [i_2] [i_0 + 2] [i_2] = min((((/* implicit */long long int) (!(((/* implicit */_Bool) min(((unsigned short)23895), (((/* implicit */unsigned short) (signed char)-70)))))))), ((-(max((arr_4 [i_0] [i_1]), (((/* implicit */long long int) var_2)))))));
                }
                arr_10 [i_0] [i_0] = min((((/* implicit */long long int) (unsigned short)41743)), (((((/* implicit */_Bool) max((-2469849448570931847LL), (((/* implicit */long long int) (unsigned short)47579))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_2))))) : (min((arr_4 [i_1] [i_0]), (((/* implicit */long long int) var_7)))))));
                arr_11 [i_1] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned short)41738)), (((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */unsigned long long int) arr_7 [i_1])) : (15145294084219786987ULL)))));
                arr_12 [i_0] [i_0] = ((/* implicit */short) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1]))) / (1230896138U)))));
            }
        } 
    } 
}
