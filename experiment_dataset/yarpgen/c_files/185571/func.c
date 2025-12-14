/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185571
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_14 ^= ((/* implicit */unsigned long long int) min((min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) ((arr_2 [i_0]) - (((/* implicit */int) var_8))))))), (((/* implicit */unsigned int) var_13))));
                var_15 = ((/* implicit */short) var_0);
                var_16 += ((min((arr_5 [i_1 - 2]), (arr_5 [i_1 - 2]))) - (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_1 - 1] [i_1 - 2])), (arr_1 [i_1 - 1] [i_1 - 2]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) min((8470338681416428960LL), (5LL)));
                                var_18 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (min((((((/* implicit */_Bool) (short)10416)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2251799813685247ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2251799813685252ULL)) ? (((/* implicit */int) arr_6 [i_2] [i_6])) : (((/* implicit */int) arr_8 [i_2]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_11)))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned char)215)), (((((/* implicit */int) arr_0 [i_4])) - (((/* implicit */int) arr_3 [(short)7] [i_4]))))));
                }
            } 
        } 
    } 
    var_20 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_12))))))));
}
