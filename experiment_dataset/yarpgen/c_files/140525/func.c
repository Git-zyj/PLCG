/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140525
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
    var_17 = ((/* implicit */signed char) (unsigned char)130);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */signed char) max((var_16), (((/* implicit */long long int) ((((/* implicit */int) ((96923920U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)31070)))))) << (((((/* implicit */int) (unsigned char)100)) - (80))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_3] [i_0] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] [i_4 + 1])) ? (((/* implicit */int) (short)8176)) : (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4 + 2] [i_2] [i_2])))) ? (((((/* implicit */_Bool) (signed char)12)) ? (arr_12 [i_0] [i_1 - 1] [i_2] [i_2] [i_3] [i_3] [i_4 + 2]) : (arr_12 [i_0] [i_1 + 1] [i_2] [i_3] [i_4 + 1] [i_0] [i_0]))) : (min((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_12 [i_0] [i_1 - 1] [i_4] [i_3] [i_4 + 2] [i_2] [i_0])))));
                                var_18 += ((/* implicit */unsigned short) ((signed char) ((_Bool) arr_12 [i_4] [i_4] [i_4 - 1] [i_4] [i_4 + 2] [i_4 + 1] [i_4])));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */_Bool) 18315154917721883782ULL);
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((max((((/* implicit */long long int) (signed char)-123)), (-5845589653535959433LL))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1)))))))))))));
}
