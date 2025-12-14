/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100943
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) > (arr_0 [i_0]))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 22; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            arr_14 [i_0] [i_0] [i_1] [i_2] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_4] [i_1] [i_4] [i_2 - 2] [i_1] [i_1] [i_1]))));
                            arr_15 [i_0] [i_1] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((short) arr_10 [i_0] [i_2 - 2] [i_2 - 3] [i_2 - 2]));
                            arr_16 [i_0] [i_0] [i_2 + 2] = ((unsigned long long int) 4294967279U);
                            arr_17 [i_2] [i_1] [i_2] [i_0] = 5U;
                            arr_18 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967280U)) && (((4294967295U) > (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                        }
                        var_21 = ((/* implicit */long long int) 4294967271U);
                        arr_19 [i_0] [i_0] [i_1] [i_0] [i_1] = ((arr_8 [i_2] [i_2 - 3] [i_1] [i_0]) <= (arr_8 [i_2 + 1] [i_2 - 3] [i_2 + 1] [i_2]));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) -68557038908123095LL))) ? (((long long int) 4062347059U)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54989))))))));
                            arr_23 [i_3] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 10U)) ? (5U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_17))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_23 += ((/* implicit */long long int) ((4294967295U) | (3306648243U)));
    var_24 = ((/* implicit */unsigned long long int) 4294967292U);
}
