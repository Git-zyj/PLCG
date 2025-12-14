/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104226
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
    var_10 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 17; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_2] [i_2 - 2] [i_3] = ((/* implicit */short) (_Bool)0);
                            var_11 = ((/* implicit */short) ((unsigned long long int) max(((unsigned short)35941), (((/* implicit */unsigned short) (signed char)31)))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] [i_1] = ((/* implicit */long long int) (((-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))) & (((/* implicit */int) (!(((/* implicit */_Bool) (short)30948)))))));
            }
        } 
    } 
}
