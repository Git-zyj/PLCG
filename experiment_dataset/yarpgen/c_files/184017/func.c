/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184017
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
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_16 = max((6957464611105534305LL), ((((!(((/* implicit */_Bool) (signed char)-24)))) ? (-6957464611105534305LL) : (((((-6957464611105534312LL) + (9223372036854775807LL))) >> (((-1172876638027552252LL) + (1172876638027552256LL))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [8] [i_0] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((-1172876638027552252LL), (((/* implicit */long long int) arr_6 [i_1] [i_4]))))) ? (1482133960436014415ULL) : (((/* implicit */unsigned long long int) (+(2017231028286608766LL)))))), (max((((/* implicit */unsigned long long int) 6957464611105534301LL)), (var_5)))));
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) -1172876638027552252LL))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) var_7);
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            {
                                arr_20 [i_1] [i_2] [i_5] [i_6] = ((/* implicit */unsigned int) var_8);
                                var_19 = max((((((/* implicit */_Bool) (~(-693384824)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (min((arr_1 [i_0]), (((/* implicit */long long int) (_Bool)1)))))), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))));
                                arr_21 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned char) -1172876638027552236LL);
                            }
                        } 
                    } 
                    arr_22 [i_0] = ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_1 - 1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 6957464611105534311LL)) : (11551777647150653722ULL)))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) min((6957464611105534305LL), (((/* implicit */long long int) (_Bool)1))));
}
