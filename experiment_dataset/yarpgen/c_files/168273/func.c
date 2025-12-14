/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168273
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
    for (signed char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [i_0 + 1] = ((/* implicit */long long int) -1623458540);
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_16))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                {
                    arr_11 [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) ((short) min(((!(((/* implicit */_Bool) var_17)))), (((-1623458540) < (((/* implicit */int) var_3)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 3; i_5 < 15; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) min((1623458539), (((/* implicit */int) var_7))));
                                var_21 = ((/* implicit */unsigned short) (((-(((/* implicit */int) var_15)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_2] [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 1] [i_6])))))));
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) max(((+((-(var_12))))), (((((/* implicit */int) ((_Bool) var_2))) >> (((var_9) - (10786831759394796073ULL))))))))));
                                var_23 &= ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [i_5 + 1]) == (arr_17 [i_2] [i_4] [i_6] [i_5 + 1] [14ULL]))))) : (min((arr_10 [i_5 - 2] [i_5] [i_5] [i_5]), (((/* implicit */unsigned long long int) var_18)))));
                            }
                        } 
                    } 
                    var_24 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_7)) ? (var_16) : (((/* implicit */unsigned int) -1623458548))))))), ((~(var_9)))));
                    arr_18 [i_3] = ((/* implicit */short) arr_8 [i_2] [i_3]);
                }
            } 
        } 
    } 
}
