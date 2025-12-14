/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127922
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_11))));
                var_21 = ((/* implicit */unsigned char) max(((-(var_3))), (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */unsigned short) arr_0 [i_0 - 1])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 4; i_2 < 14; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            for (unsigned char i_4 = 1; i_4 < 16; i_4 += 4) 
            {
                {
                    var_22 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 + 3] [i_2 + 2]))) != ((+(950338029U))))))));
                    var_23 &= ((/* implicit */short) min((arr_1 [i_3]), (((((/* implicit */_Bool) 2147483647)) ? (2147483647) : (2147483620)))));
                    arr_11 [i_4] = ((/* implicit */_Bool) max((max((((unsigned long long int) 2147483620)), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_8 [i_2] [i_3] [i_4])), (-2147483620)))))), (((/* implicit */unsigned long long int) (+((-2147483647 - 1)))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) ((unsigned char) -2147483647))))));
}
