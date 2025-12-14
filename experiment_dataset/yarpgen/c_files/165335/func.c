/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165335
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) var_10))));
                var_14 = ((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((/* implicit */unsigned short) (short)-8))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */unsigned int) ((var_8) ? (((/* implicit */int) arr_7 [i_1] [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_10 [i_0] [4U] [4U] [(signed char)3] [i_3] [i_4]))))) : (min((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_2] [19LL])), (4294967295U)))))));
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)242)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-26915))))))) || (((/* implicit */_Bool) ((((var_1) == (1564258285U))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_4] [8LL] [8LL] [i_0]))))) : (var_12)))))))));
                                arr_12 [20ULL] [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) < (var_7)))) << (((/* implicit */int) (unsigned char)11))));
                                var_17 = ((/* implicit */unsigned short) 0U);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = var_2;
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_8))));
}
