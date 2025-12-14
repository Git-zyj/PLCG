/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121861
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
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_16 |= (short)1;
                var_17 = ((/* implicit */short) arr_5 [i_0] [(_Bool)1] [14]);
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_18 |= ((/* implicit */signed char) (~(max((arr_8 [i_2 - 2] [i_2 + 1] [i_2 - 2]), (((/* implicit */long long int) min((arr_12 [(unsigned char)10] [19ULL] [(short)10] [i_3] [18LL]), (((/* implicit */int) var_14)))))))));
                                arr_16 [(_Bool)1] [i_1] [(_Bool)1] = ((/* implicit */long long int) (((_Bool)1) ? (var_13) : (((/* implicit */unsigned long long int) 16383))));
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1])) ? (((int) arr_8 [i_0] [i_1] [i_2 - 1])) : (((/* implicit */int) ((-1765831590) != (((/* implicit */int) (unsigned short)28523)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & ((-(var_13))));
    var_21 = (-((+(var_9))));
}
