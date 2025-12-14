/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118416
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_14 *= ((/* implicit */short) 4107611453U);
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)6)) ? (187355843U) : (4107611474U)));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_16 -= ((/* implicit */unsigned int) (+(((arr_4 [i_0] [i_0] [i_0]) ? (1549661765) : (((/* implicit */int) arr_4 [i_2] [i_1] [i_0]))))));
                                var_17 *= ((/* implicit */unsigned char) var_0);
                                var_18 = ((/* implicit */unsigned int) max((((arr_10 [i_0] [i_3] [i_2] [i_3] [0U]) * (((/* implicit */int) (_Bool)0)))), (arr_10 [i_0] [i_3] [i_0] [i_3] [19])));
                                arr_12 [i_3] [i_3] [i_2] [5ULL] [i_3] [i_3] = ((/* implicit */_Bool) ((var_4) >> (((arr_3 [i_1] [i_3]) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_1]))))));
                                var_19 ^= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_0)) ? (4107611453U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4] [i_2] [i_2] [i_2] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-18805))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (var_13)))) : ((~(((/* implicit */int) (unsigned char)192)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((_Bool) ((((/* implicit */_Bool) (unsigned char)49)) ? (590411692U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-71)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)77))) : (((((/* implicit */unsigned int) var_4)) - (min((((/* implicit */unsigned int) var_13)), (var_3)))))));
}
