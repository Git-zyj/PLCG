/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149362
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
    var_18 = ((/* implicit */unsigned char) max(((short)445), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) var_6)) >= (var_0)))) >= (var_6))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */signed char) max((0U), (((/* implicit */unsigned int) 268434432))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_2] [i_2] [i_3] [i_0] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_3]))))) <= (((((/* implicit */_Bool) 2081991546U)) ? (13969100142873740839ULL) : (((/* implicit */unsigned long long int) -749617292)))))))) : (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1])))))) * (var_4))));
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_11 [i_0] [i_2] [i_4] [i_3] [i_2] [i_1]) | (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0])))))))) ? (var_8) : (((/* implicit */unsigned int) (~((~(((/* implicit */int) var_10)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
