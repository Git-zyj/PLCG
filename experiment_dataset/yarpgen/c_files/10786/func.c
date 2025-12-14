/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10786
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)29114))))) ? ((+(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_1 [i_0]))));
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) max(((unsigned char)142), (arr_3 [i_1] [i_1])))) == (((/* implicit */int) ((unsigned char) (_Bool)1)))))) < (((/* implicit */int) (((-(var_2))) == (((/* implicit */unsigned long long int) 1957715954)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        for (signed char i_3 = 1; i_3 < 7; i_3 += 1) 
        {
            {
                arr_9 [i_2] [i_3 + 1] = (!(((/* implicit */_Bool) ((arr_2 [i_3 - 1] [i_3 + 1] [i_3 + 1]) ? (((/* implicit */int) arr_2 [i_3 + 3] [i_3 + 1] [i_3 - 1])) : (((/* implicit */int) (signed char)112))))));
                arr_10 [i_2] [i_2] [(signed char)9] = ((/* implicit */short) var_7);
                arr_11 [i_2] = ((/* implicit */_Bool) (unsigned char)192);
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))));
}
