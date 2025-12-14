/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103154
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
    var_14 = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) var_8)), (min((var_9), (((/* implicit */long long int) var_5)))))) <= (min((min((2686262653648979930LL), (1178653136240071708LL))), (((/* implicit */long long int) ((_Bool) var_10)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_9 [(_Bool)1] [i_1] [(short)14] = ((/* implicit */unsigned long long int) ((_Bool) min((arr_4 [i_2] [i_1]), (((/* implicit */unsigned int) (unsigned char)173)))));
                    var_15 = ((/* implicit */unsigned char) ((int) var_10));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_15 [i_1] [(_Bool)1] [i_2] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((((((/* implicit */_Bool) (unsigned char)173)) || (((/* implicit */_Bool) 0LL)))) || (((/* implicit */_Bool) (unsigned char)173)))) || ((!(((((/* implicit */_Bool) arr_13 [i_0] [i_1] [(unsigned char)11] [i_2] [i_3] [i_4])) || (((/* implicit */_Bool) (unsigned char)246))))))));
                                arr_16 [i_0] [i_1] = ((/* implicit */unsigned int) (unsigned char)246);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) var_0)))) ? (min((524287ULL), (2651871670876177230ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_3)))))) < (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13863))) : (0ULL)))))));
    var_17 = ((/* implicit */long long int) ((unsigned char) min((((/* implicit */long long int) ((unsigned char) var_3))), ((-(-1178653136240071709LL))))));
    var_18 = ((/* implicit */unsigned long long int) var_0);
}
