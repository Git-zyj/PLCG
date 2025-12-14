/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174973
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_14 ^= min((3835066336U), (((/* implicit */unsigned int) (unsigned char)63)));
                arr_5 [i_0] = ((/* implicit */unsigned int) var_12);
            }
        } 
    } 
    var_15 += ((/* implicit */unsigned int) var_8);
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned char)183)))) - (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)192)))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        {
                            arr_15 [i_2] [i_2] [i_4] [i_5] [5] = ((/* implicit */unsigned long long int) var_9);
                            var_17 = ((/* implicit */unsigned int) min((arr_6 [i_2]), (arr_6 [i_2])));
                        }
                    } 
                } 
                var_18 *= ((/* implicit */signed char) ((unsigned long long int) max((((/* implicit */int) (unsigned char)43)), (((int) (short)-28609)))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (!(((/* implicit */_Bool) max((max(((unsigned char)192), ((unsigned char)184))), ((unsigned char)50)))))))));
}
