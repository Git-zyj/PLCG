/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123522
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) % (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-99))) <= (((7703945350967350749LL) + (var_12))))))));
    var_21 = ((/* implicit */int) max((var_7), (((((unsigned long long int) var_11)) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)57611)) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) (short)-7279)))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) (short)1564))))) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])) : (arr_4 [i_0] [i_1]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7282)))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0 - 1] = ((/* implicit */unsigned short) (((((((_Bool)0) ? (11467238171441743446ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) - (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(-1682721034)))), (((var_7) ? (var_9) : (575656364U))))))));
                                var_22 = ((/* implicit */unsigned short) var_9);
                                var_23 = ((/* implicit */unsigned int) (+(max((((long long int) (signed char)-42)), (((/* implicit */long long int) ((unsigned int) arr_11 [i_0] [i_1] [i_2 - 1] [i_3] [i_3])))))));
                                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (!(((_Bool) (signed char)83)))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [17] = ((/* implicit */long long int) var_15);
            }
        } 
    } 
}
