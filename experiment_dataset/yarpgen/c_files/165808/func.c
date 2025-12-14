/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165808
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
    var_10 = ((/* implicit */long long int) ((int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (signed char)-65)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            arr_11 [11] [i_2] [i_2] [i_2] [i_0] = (-(((((/* implicit */long long int) var_2)) / (((((/* implicit */_Bool) arr_1 [i_0] [i_3])) ? (7023078066154835992LL) : (((/* implicit */long long int) arr_4 [i_0])))))));
                            var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2013869307)) ? (((/* implicit */int) arr_5 [i_2] [i_2] [i_1] [i_2])) : (((/* implicit */int) (unsigned short)1022))));
                            var_12 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_6 [i_2] [i_2] [(_Bool)1])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)64513)) : (((/* implicit */int) (unsigned short)27466)))) : (((/* implicit */int) (_Bool)1)))), (((var_6) % (((/* implicit */int) ((var_5) != (((/* implicit */long long int) var_6)))))))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (1792U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) var_0)) ? (arr_8 [i_0] [i_0] [i_0] [i_1]) : (arr_8 [i_0] [i_0] [i_0] [1]))) : (min((arr_8 [i_1] [i_1] [i_0] [i_0]), (arr_8 [0] [i_1] [i_0] [i_1])))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_2)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_3)))) : (max((var_2), (((/* implicit */int) (unsigned short)49319))))))) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */_Bool) (unsigned short)32638)) ? (16646144ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
    var_15 = ((/* implicit */long long int) var_0);
}
