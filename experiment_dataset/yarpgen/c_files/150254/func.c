/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150254
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
    var_10 -= ((/* implicit */int) ((((/* implicit */_Bool) (~(((7866651381429881649LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) || (((/* implicit */_Bool) max((min((var_0), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)2979)) ? (486723704) : (((/* implicit */int) (unsigned short)42569))))))))));
    var_11 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 5803783552987640312LL))))) << (((min((max((2305843008676823040ULL), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))))) - (2305843008676823036ULL)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) var_9);
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_13 = (!(((/* implicit */_Bool) 1410425135U)));
                                var_14 &= ((/* implicit */short) (((~(2884542165U))) == (((/* implicit */unsigned int) ((/* implicit */int) ((arr_8 [i_4] [i_3] [i_2] [i_1] [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1)))))))));
                                var_15 = ((/* implicit */int) (+(arr_1 [i_3] [i_0])));
                                arr_11 [i_1] [i_1] [i_3] = ((/* implicit */_Bool) (-((~((+(-10)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
