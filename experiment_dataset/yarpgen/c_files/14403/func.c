/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14403
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
    var_18 = (+(((/* implicit */int) var_14)));
    var_19 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_11))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_20 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0 - 1] [i_0] [i_0 - 1]))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1] [i_0 - 1])) ? (3509242919U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0 - 1])) : (((/* implicit */int) var_14)))))));
                var_21 = ((/* implicit */unsigned char) (~(((long long int) arr_0 [i_0 - 1] [i_0]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                {
                    arr_11 [i_2] [i_2] [i_4] = ((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) > (var_9)))) != ((~(((/* implicit */int) var_10)))))) ? (((/* implicit */int) ((unsigned short) arr_2 [i_2] [i_4]))) : (((/* implicit */int) var_0))));
                    var_22 = ((max((((/* implicit */unsigned int) arr_6 [i_2] [i_2] [i_4])), (arr_0 [i_2] [i_2]))) << (((785724360U) - (785724332U))));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) 785724394U)) ? (2513672699882560040ULL) : (17825414871705912206ULL)));
                }
            } 
        } 
    } 
}
