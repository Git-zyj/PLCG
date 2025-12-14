/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139392
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 -= ((/* implicit */unsigned long long int) arr_2 [i_1]);
                var_14 = ((/* implicit */unsigned char) (+(min((((var_0) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 1; i_2 < 20; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) ((unsigned long long int) (short)32756));
                                var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (arr_12 [20ULL] [(_Bool)1] [(short)5] [i_6])))) ? (((/* implicit */unsigned long long int) -5863682955123787873LL)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_9 [i_2] [i_5] [i_6]))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_2])) * (((/* implicit */int) (_Bool)0)))))));
                            }
                        } 
                    } 
                } 
                var_17 *= ((/* implicit */_Bool) -7132857570178168392LL);
                arr_19 [i_2] [i_2] = arr_12 [(_Bool)1] [i_2] [i_3] [i_3];
                /* LoopNest 3 */
                for (signed char i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (!(arr_15 [i_8] [i_2] [i_2 + 3] [i_2 + 4])))), (var_4))))));
                                arr_26 [i_2] [i_3] = ((/* implicit */_Bool) var_11);
                                var_19 = ((/* implicit */int) max((var_19), ((+(((/* implicit */int) var_8))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
