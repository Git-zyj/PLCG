/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106822
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_6))))))) == (min(((-(var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) || ((_Bool)1))))))));
    var_16 = ((((/* implicit */int) var_7)) >= ((+(((/* implicit */int) (!(var_4)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_6 [i_0] = ((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (((((/* implicit */unsigned long long int) var_12)) & (var_0))))) >> (((min((7511195107689490326LL), (((/* implicit */long long int) (signed char)-8)))) + (54LL))));
                    arr_7 [i_0] = ((/* implicit */_Bool) ((281474976710656ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(1161542120395043458LL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_1] [i_0])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 1; i_3 < 12; i_3 += 3) 
    {
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            {
                arr_12 [i_3] [i_3] [(short)5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_9 [i_3 - 1]), (arr_9 [i_3 - 1])))) ? (((/* implicit */long long int) max((((/* implicit */int) var_10)), (((((/* implicit */int) arr_9 [i_3 + 1])) | (((/* implicit */int) arr_10 [i_3] [i_3]))))))) : ((~(min((arr_11 [i_3] [i_4 - 1] [i_4]), (((/* implicit */long long int) (_Bool)1))))))));
                var_17 += ((/* implicit */long long int) arr_9 [i_4]);
            }
        } 
    } 
}
