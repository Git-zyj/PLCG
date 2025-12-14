/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100968
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
    var_20 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_9 [0U] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_0] [(unsigned char)14]);
                    var_21 = ((/* implicit */long long int) min((((unsigned long long int) arr_8 [(signed char)2] [i_2 + 1] [i_2] [i_2])), ((~(arr_7 [(unsigned short)10] [i_2 + 1] [i_2 + 1])))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_0))));
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 8; i_3 += 3) 
    {
        for (long long int i_4 = 3; i_4 < 7; i_4 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned short) ((((arr_12 [i_3 - 3]) << (((arr_10 [5LL] [i_4 + 2]) + (3279340475643707735LL))))) >> (((((/* implicit */int) ((signed char) arr_12 [i_3 - 3]))) + (99)))));
                arr_15 [i_3] [i_4] [i_4] = ((/* implicit */unsigned long long int) (~(((unsigned int) arr_0 [i_3 + 2]))));
                var_24 = ((/* implicit */long long int) (-((~(((/* implicit */int) arr_0 [i_4 - 3]))))));
            }
        } 
    } 
}
