/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123526
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
    var_18 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_15)) << ((((~(((/* implicit */int) (unsigned char)106)))) + (125)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_1] = ((/* implicit */short) (((!(((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned char)115)))))) && ((((!(((/* implicit */_Bool) var_15)))) || (((((/* implicit */_Bool) (unsigned char)115)) && (((/* implicit */_Bool) 4294967295U))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [(signed char)5] [i_3] [i_1] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 7513581468490389862ULL)))))))) + ((+(var_0)))));
                                var_19 ^= ((/* implicit */short) -1079815456);
                                var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)140))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)101)) / (var_4)));
                    var_22 = ((/* implicit */int) ((((((11LL) | (((/* implicit */long long int) var_8)))) * (((/* implicit */long long int) var_8)))) + (((/* implicit */long long int) (+((+(((/* implicit */int) (short)2494)))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) var_14);
    var_24 = ((/* implicit */unsigned int) (unsigned char)101);
}
