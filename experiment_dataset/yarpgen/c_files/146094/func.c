/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146094
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) (signed char)87)))), ((!(var_6)))));
                arr_4 [5U] = ((/* implicit */unsigned int) arr_0 [i_1 - 2] [i_1 + 1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 3; i_2 < 17; i_2 += 4) 
    {
        for (unsigned char i_3 = 1; i_3 < 15; i_3 += 4) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (((-(((/* implicit */int) (unsigned short)9263)))) >= (((((/* implicit */_Bool) (signed char)-36)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)13))))))) ^ (((/* implicit */int) arr_3 [i_2 - 1]))));
                arr_13 [i_2] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_10))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_7);
}
