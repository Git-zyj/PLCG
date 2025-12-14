/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184191
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
    var_15 *= ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) min((((/* implicit */signed char) (((-(arr_3 [i_0] [i_1] [0U]))) != (arr_4 [i_0] [i_0] [i_1] [i_2])))), (var_4))))));
                    var_17 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) ((2611083120U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5090)))))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
                }
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    arr_9 [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) min((((unsigned short) min((3742789635U), (3742789629U)))), ((unsigned short)20917)));
                    var_18 ^= (-(max((3742789635U), (max((var_5), (((/* implicit */unsigned int) (short)11198)))))));
                }
                arr_10 [i_0] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0])) * (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_1]))))), (min(((-(552177667U))), (((/* implicit */unsigned int) ((var_0) < (((/* implicit */long long int) 0U)))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 3; i_4 < 11; i_4 += 4) 
                {
                    for (unsigned char i_5 = 1; i_5 < 10; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min(((short)-5554), ((short)5530))))));
                                var_20 *= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)5565)) ? (((/* implicit */int) arr_5 [i_4 - 3])) : (((/* implicit */int) arr_5 [i_4 - 3]))))), (((4658875611245487851LL) / (((/* implicit */long long int) var_2))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
