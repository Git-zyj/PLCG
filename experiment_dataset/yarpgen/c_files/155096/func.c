/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155096
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) (+(((((/* implicit */int) max(((short)18080), (((/* implicit */short) (signed char)-106))))) ^ (max((((/* implicit */int) (signed char)-97)), (var_14)))))));
                arr_6 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((max((arr_1 [(unsigned short)9] [i_1]), (((/* implicit */unsigned long long int) (unsigned char)255)))) << (((((int) 728867794U)) - (728867765))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)235)) ^ (((/* implicit */int) ((-1809412597) <= (arr_3 [i_1])))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */short) var_12);
                arr_8 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((int) arr_4 [i_0] [i_1] [i_1])));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 2; i_2 < 15; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                {
                    arr_17 [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) (-(var_0)));
                    var_19 = ((/* implicit */short) 5348155351320890990LL);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_16))))), (((signed char) var_9))))) + (((int) var_8))))));
}
