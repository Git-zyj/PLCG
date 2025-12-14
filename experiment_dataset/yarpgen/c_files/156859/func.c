/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156859
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
    for (short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)195))));
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (~((-(((/* implicit */int) var_12)))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_14 [1] [1] [5U] [(unsigned short)9] [(unsigned short)9] [i_0] [1] = min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)25346));
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) | (min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */unsigned long long int) var_0)) : (var_9)))))));
                                arr_15 [i_0] [i_0] [i_0] [i_2] [i_4] [(signed char)1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) var_10))));
                                arr_16 [i_0] [i_0] = ((/* implicit */unsigned short) -1LL);
                                var_16 = ((/* implicit */long long int) (-(((/* implicit */int) arr_3 [4] [i_0] [i_3]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            {
                                arr_24 [i_0] [i_7 + 1] [(_Bool)1] [0LL] [i_5] [i_1] [i_0] = ((/* implicit */signed char) var_1);
                                arr_25 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)206);
                                var_17 = ((/* implicit */_Bool) var_1);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 += ((/* implicit */int) var_3);
}
