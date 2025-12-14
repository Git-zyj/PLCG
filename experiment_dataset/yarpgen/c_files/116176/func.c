/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116176
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
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 7; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 + 1])))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)835)) : (((/* implicit */int) (unsigned short)65535)))))));
                    arr_6 [i_1 + 1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) (-(var_5)))) * (((((/* implicit */unsigned long long int) var_7)) - (var_6))))) << ((+(((/* implicit */int) (signed char)7))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 4; i_3 < 13; i_3 += 2) 
    {
        for (int i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            {
                var_16 += ((/* implicit */_Bool) arr_7 [i_4]);
                arr_12 [i_3 - 1] [i_4] = ((/* implicit */long long int) arr_11 [i_4]);
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 12; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 2) 
                    {
                        {
                            var_17 |= ((/* implicit */long long int) arr_14 [i_3] [i_5 + 2]);
                            arr_18 [14LL] [i_6] [i_5] [i_6] [i_3] = ((/* implicit */long long int) max(((unsigned short)843), (((/* implicit */unsigned short) (signed char)62))));
                        }
                    } 
                } 
            }
        } 
    } 
}
