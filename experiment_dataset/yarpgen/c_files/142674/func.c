/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142674
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
    var_13 = ((/* implicit */unsigned short) 1879048192U);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) arr_3 [i_0] [i_0 + 1] [i_1]);
                var_14 = ((/* implicit */_Bool) (unsigned char)113);
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)142)) - (((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)113)) ^ (((/* implicit */int) (unsigned short)34168))))) : ((-(-6233268781006859804LL))))) + (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_1)), (arr_1 [i_0 - 1])))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_12 [(signed char)6] [(signed char)6] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */unsigned short) (~(arr_2 [(signed char)0] [i_3] [i_2])));
                            arr_13 [i_3] [i_1] [i_2] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 979029596)) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) (unsigned char)148)))) * (((/* implicit */int) (unsigned short)4032))))) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) arr_10 [i_0 - 1] [i_1] [i_1] [i_2] [i_2] [i_3]))));
                        }
                    } 
                } 
                var_15 = (short)-21800;
            }
        } 
    } 
}
