/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16279
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_0] [(unsigned char)9] [i_1] = ((/* implicit */int) arr_2 [i_0] [i_1]);
                var_16 = ((/* implicit */unsigned char) (+(((unsigned long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_3)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 3; i_2 < 13; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            {
                arr_10 [i_2 - 2] [i_3] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_2 - 3]))));
                /* LoopNest 3 */
                for (signed char i_4 = 1; i_4 < 13; i_4 += 2) 
                {
                    for (int i_5 = 2; i_5 < 12; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_9 [i_2] [i_3] [i_3]), (((unsigned int) arr_17 [i_2 - 1] [i_3] [i_4] [i_5] [i_6])))))));
                                arr_18 [i_3] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_6])) ? (1726425573198442102ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3] [i_6]))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_0), ((signed char)-82)))))))), (var_6)));
                                arr_19 [i_2] [i_3] [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (min((arr_11 [i_2] [i_2] [11]), (((/* implicit */unsigned int) arr_3 [i_6])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (arr_6 [i_5 + 2] [i_5 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-13456)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_0 [(unsigned short)3])))) : (arr_7 [i_3])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
