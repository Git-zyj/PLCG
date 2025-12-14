/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180079
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
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((arr_6 [i_0] [i_0] [i_2] [i_2]) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_1] [i_0 + 3])))))));
                    var_21 = ((/* implicit */long long int) (+(((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_15))) | (var_4))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_19))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (((-(max((72057559678189568LL), (((/* implicit */long long int) (_Bool)0)))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 72057559678189579LL))))))));
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 3; i_4 < 12; i_4 += 2) 
        {
            {
                var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */int) (short)-19375)) : (((/* implicit */int) arr_5 [i_3])))) < (min((max((arr_3 [i_3]), (var_12))), (((/* implicit */int) (_Bool)1))))));
                arr_12 [i_4] = ((unsigned char) 2261599306U);
                arr_13 [i_4] = ((/* implicit */short) (_Bool)1);
            }
        } 
    } 
}
