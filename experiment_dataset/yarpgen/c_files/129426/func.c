/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129426
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
    var_10 += ((/* implicit */unsigned char) ((int) var_5));
    var_11 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) <= (((/* implicit */int) (_Bool)1))))) << (((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (15707558956802796824ULL))) << ((((~(((/* implicit */int) var_6)))) + (56484))))) - (72057594037927912ULL)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            arr_10 [i_1] [i_0] [i_3] [i_0] [i_0] [i_3] &= ((/* implicit */signed char) 1538721127793177209LL);
                            var_12 += ((((((/* implicit */_Bool) 12823374868440930000ULL)) ? (-1885338152) : (((/* implicit */int) (_Bool)0)))) | (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_2] [i_3])));
                        }
                    } 
                } 
                arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((1885338148), (1885338157)))) ? (((/* implicit */unsigned long long int) (+(1538721127793177223LL)))) : (max((arr_8 [i_1]), (((/* implicit */unsigned long long int) (~(var_4))))))));
            }
        } 
    } 
}
