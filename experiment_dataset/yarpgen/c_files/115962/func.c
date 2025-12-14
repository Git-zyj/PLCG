/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115962
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
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */_Bool) 7240367369170474524ULL);
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7240367369170474524ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) : (((/* implicit */int) (short)20))))) ? ((-(((/* implicit */int) (short)20)))) : (((/* implicit */int) var_6))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_10))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)5))))))));
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 16; i_2 += 4) 
    {
        for (unsigned int i_3 = 3; i_3 < 16; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                {
                    arr_16 [i_2] [9] [i_4] [i_3] = ((/* implicit */short) var_11);
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 14; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            {
                                arr_23 [i_2 - 1] [i_3] [i_3] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_2 - 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-60))))) : ((+(min((4256053192U), (((/* implicit */unsigned int) var_6))))))));
                                var_15 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)75))) - (var_5)))) ? (var_9) : (((/* implicit */int) var_2)))));
                                var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_2] [i_2 + 1] [i_2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) var_3);
    var_18 = ((/* implicit */unsigned long long int) var_7);
}
