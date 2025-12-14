/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152371
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
    var_16 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) max(((unsigned short)36926), ((unsigned short)36926)))) ? ((+(var_9))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 380234899)) : (var_11)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned char i_3 = 3; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_2] [i_3 - 2] = ((/* implicit */int) (~(min((arr_0 [i_3 - 2]), (((/* implicit */unsigned long long int) var_2))))));
                            arr_10 [10ULL] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))), (min(((~(var_15))), (((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_1] [i_2] [i_3]) - (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_13))));
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 3) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 1) 
                        {
                            {
                                var_18 &= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_14 [i_4 - 1] [i_5 - 1])) ? (arr_14 [i_4 - 2] [i_5 - 1]) : (arr_14 [i_4 - 2] [i_5 - 1])))));
                                arr_18 [3] [3] [i_4] = ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_4] [i_4 - 1])) ? ((+(((/* implicit */int) var_13)))) : (((((/* implicit */int) ((unsigned char) arr_8 [i_6] [i_5] [i_4] [i_0] [i_0]))) + ((+(((/* implicit */int) var_10)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    for (long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        {
                            var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((var_15), (((/* implicit */unsigned long long int) (unsigned short)28610))))))) ? ((+(min((arr_20 [i_0] [i_1] [i_8]), (((/* implicit */unsigned long long int) var_13)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_1] [i_1] [i_7]))))) || (((/* implicit */_Bool) ((var_14) ^ (((/* implicit */int) arr_15 [i_0] [4LL] [i_7] [i_0] [i_1] [4LL])))))))))));
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_13 [i_1])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28208)))))))));
                            var_21 = ((/* implicit */unsigned long long int) var_1);
                            arr_24 [i_7] = ((unsigned short) max((((/* implicit */unsigned int) ((short) 2147483647))), (arr_12 [i_0] [i_7] [i_8])));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = (+(((((((/* implicit */unsigned int) -724209926)) - (var_3))) % (((/* implicit */unsigned int) max((var_14), (var_1)))))));
}
