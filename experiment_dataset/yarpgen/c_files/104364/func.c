/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104364
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_9 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
                    var_10 = ((/* implicit */signed char) arr_6 [i_0]);
                    arr_10 [i_0] [i_1] [i_0] [4U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_2 [i_0]))) ? (var_2) : (((/* implicit */unsigned int) (+((-2147483647 - 1)))))));
                    arr_11 [3] [i_1 + 1] [i_0] = ((/* implicit */short) max(((~(((/* implicit */int) (!((_Bool)0)))))), ((+(((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_0]))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 1; i_3 < 18; i_3 += 2) 
    {
        for (unsigned char i_4 = 3; i_4 < 17; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                {
                    arr_20 [i_3] [i_4 - 2] [i_4] [13ULL] = ((/* implicit */unsigned int) (-(-1848029713)));
                    arr_21 [i_3] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(25)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_4)), (arr_5 [i_5]))))) : (((((/* implicit */_Bool) 1848029720)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5] [i_5] [i_5] [i_3]))) : (var_0)))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (1616356873U) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 4121595446U)))))));
}
