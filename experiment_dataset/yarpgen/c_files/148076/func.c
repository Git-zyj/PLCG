/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148076
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
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_8))));
                    var_20 = ((/* implicit */long long int) min((var_20), (((((arr_0 [i_1]) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)5)) - (5)))))));
                    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) + ((-(((/* implicit */int) var_18)))))))));
                }
            } 
        } 
    } 
    var_22 = (~(((/* implicit */int) (unsigned short)5)));
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        for (int i_4 = 4; i_4 < 18; i_4 += 4) 
        {
            {
                arr_12 [i_3] [i_3] = ((/* implicit */long long int) (unsigned char)29);
                var_23 = ((/* implicit */_Bool) var_14);
                /* LoopNest 3 */
                for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        for (int i_7 = 4; i_7 < 18; i_7 += 4) 
                        {
                            {
                                var_24 = arr_16 [i_3] [i_3] [i_3];
                                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((-912923009) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))) ^ (12512151578168450516ULL))))));
                                arr_19 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_7 - 3] [i_7 - 3]))) != (arr_14 [i_3] [i_4] [i_5] [i_7 - 1]))))) >= (arr_11 [i_3])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
