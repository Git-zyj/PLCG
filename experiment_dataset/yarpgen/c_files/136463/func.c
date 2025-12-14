/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136463
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
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_11 *= min(((unsigned char)146), (((/* implicit */unsigned char) (_Bool)0)));
                    var_12 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (int i_4 = 1; i_4 < 10; i_4 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) 
                        {
                            {
                                arr_18 [i_4] [i_3] [i_4] [i_4] [i_3] [i_4] [i_3] = ((/* implicit */_Bool) arr_9 [i_7] [i_6]);
                                var_13 = ((/* implicit */unsigned long long int) arr_5 [i_3] [14] [i_3]);
                                var_14 *= ((/* implicit */_Bool) 729093459623147015ULL);
                                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) min((1828633463), (1828633463)))), (min((arr_3 [i_4 + 2]), (((/* implicit */unsigned int) 1828633463)))))))));
                                var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1055230149)) ? (((((/* implicit */int) (unsigned short)47276)) - (arr_16 [i_4 + 3] [i_4 + 3] [i_4 + 3] [i_4 - 1] [i_4]))) : (((/* implicit */int) (unsigned char)50))));
                            }
                        } 
                    } 
                } 
                arr_19 [i_3] [i_3] = ((/* implicit */unsigned int) max((arr_7 [i_4 + 2]), (arr_7 [i_4 + 3])));
            }
        } 
    } 
}
