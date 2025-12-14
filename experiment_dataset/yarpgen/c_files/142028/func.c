/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142028
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
    var_18 = var_0;
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_11 [i_1] [i_1] [(signed char)7] [i_1] = ((/* implicit */unsigned int) ((unsigned char) ((short) ((3479881487081170549LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-14)))))));
                            arr_12 [i_0] [i_0] [i_0] [i_0 - 1] [(unsigned char)12] = ((/* implicit */int) var_5);
                            var_19 = ((/* implicit */_Bool) var_7);
                        }
                    } 
                } 
                var_20 &= ((/* implicit */unsigned short) ((long long int) (~(((/* implicit */int) var_15)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-11227)) >= (((/* implicit */int) (short)10371)))) ? (var_10) : (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */long long int) var_5)) : (3479881487081170554LL)));
}
