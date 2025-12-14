/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101012
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
    var_17 = ((/* implicit */unsigned short) 10066766621825168476ULL);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_11 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                    arr_12 [i_1] [i_1] [i_2 + 3] = ((/* implicit */unsigned int) (unsigned short)0);
                    var_18 = 10066766621825168476ULL;
                }
            } 
        } 
    } 
    var_19 = var_11;
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            {
                arr_19 [i_3] [i_4] [i_4] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (_Bool)1))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 3) 
                {
                    var_20 *= ((((/* implicit */_Bool) 0U)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63946))));
                    var_21 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4027884621U)) ? (((((/* implicit */_Bool) 264072591U)) ? (8379977451884383140ULL) : (0ULL))) : (((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned long long int) 2599157037U))))))));
                }
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((unsigned long long int) ((unsigned short) 3369889273473811179ULL))))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 4; i_6 < 21; i_6 += 2) 
                {
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) 2220624929627453020ULL);
                            arr_29 [i_3] [i_4] [i_6] [i_7] = ((/* implicit */unsigned long long int) (~(((unsigned int) arr_3 [i_3]))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned long long int) 1299980915U)));
            }
        } 
    } 
    var_25 = var_15;
}
