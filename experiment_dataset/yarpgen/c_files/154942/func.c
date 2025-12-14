/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154942
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
    var_15 = var_9;
    var_16 &= ((/* implicit */signed char) ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) 4027395581U)) : (((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)43974))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned short) arr_0 [i_0]);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) min(((!(((/* implicit */_Bool) arr_3 [i_0] [i_1])))), ((!(((/* implicit */_Bool) 0ULL))))));
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (~(((unsigned long long int) (unsigned char)255)))))));
                            var_20 -= ((/* implicit */signed char) var_5);
                        }
                    } 
                } 
                arr_10 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_1])) != (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_3) : (18446744073709551603ULL))))))) < ((+(max((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_7 [i_1] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                /* LoopNest 3 */
                for (unsigned char i_4 = 2; i_4 < 14; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 4; i_6 < 15; i_6 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_5] [i_6] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((unsigned long long int) (signed char)13)))))));
                                arr_18 [i_6] [i_5] [i_4] [(signed char)13] [i_4] [i_0] [i_0] = ((/* implicit */signed char) arr_2 [i_4]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
