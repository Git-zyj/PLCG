/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135718
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) ((signed char) max((arr_3 [i_1]), (arr_3 [i_1]))));
                var_15 ^= ((((_Bool) 19U)) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) == (((/* implicit */int) arr_0 [i_1]))))) : (max(((((_Bool)1) ? (-592076537) : (592076507))), (((/* implicit */int) ((_Bool) arr_4 [i_0] [i_1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_16 = ((/* implicit */short) arr_6 [i_3] [i_2]);
                var_17 = min((((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_8 [i_2] [i_2])), (arr_9 [i_2] [i_2])))) & (min((-1176892647), (((/* implicit */int) (unsigned short)127))))))), (((((/* implicit */_Bool) 592076530)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65414))) : (16615854004483527530ULL))));
                arr_11 [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) max(((unsigned short)29917), ((unsigned short)10156)))))));
                var_18 -= ((/* implicit */_Bool) min((arr_6 [i_3] [i_2]), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_9 [4] [4])) ? (592076517) : (592076499)))))));
            }
        } 
    } 
    var_19 |= ((/* implicit */unsigned long long int) var_4);
    var_20 = ((/* implicit */unsigned short) var_4);
}
