/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162960
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
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) max((1935987823), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_15)), (514207078U))))))))))));
    var_20 = ((/* implicit */unsigned long long int) (+((~(9223372036854775787LL)))));
    var_21 = ((/* implicit */_Bool) max((-6674835285663533374LL), (((/* implicit */long long int) (short)-23565))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_0] = ((/* implicit */long long int) (_Bool)0);
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] = min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_16)), (max((((/* implicit */unsigned int) (unsigned char)3)), (514207078U)))))), (max((min((6674835285663533385LL), (6674835285663533385LL))), ((-(6674835285663533373LL))))));
                            arr_11 [i_1 - 1] [i_1] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_15)), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) -6674835285663533369LL))))), ((+(var_4)))))));
                            var_22 = ((/* implicit */unsigned char) max((var_22), (var_6)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 3; i_4 < 12; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (var_13)));
                            arr_16 [i_0] [i_0] [i_1 - 1] [i_0] [i_5] = ((/* implicit */int) (short)-32748);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    for (unsigned int i_7 = 2; i_7 < 12; i_7 += 1) 
                    {
                        for (int i_8 = 0; i_8 < 13; i_8 += 2) 
                        {
                            {
                                arr_23 [i_8] [i_7] [i_6] [i_0] [i_0] |= ((/* implicit */unsigned long long int) (_Bool)1);
                                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) max((6674835285663533385LL), (((/* implicit */long long int) min((max((((/* implicit */short) (unsigned char)24)), (var_9))), (((/* implicit */short) var_12))))))))));
                                arr_24 [i_0] [i_0 + 2] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */short) var_5);
                                arr_25 [i_0] = ((/* implicit */unsigned long long int) (~((~(-4934526775892106671LL)))));
                                arr_26 [i_0] [i_0] [11LL] [i_8] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) min((((/* implicit */short) (signed char)-32)), ((short)-29888)))), ((unsigned short)65517)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
