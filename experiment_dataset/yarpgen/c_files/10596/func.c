/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10596
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-11))))), (var_4)))) ? (11985215823152953517ULL) : (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_8)))) - ((+(((/* implicit */int) (unsigned char)181)))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 - 1])) && (((/* implicit */_Bool) arr_8 [i_0 - 1] [11U])))) || (((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1])) || (((/* implicit */_Bool) arr_8 [i_0 + 2] [i_0]))))));
                    arr_10 [(short)0] [i_1] [i_2] = (+(var_10));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            {
                var_12 = ((arr_11 [i_3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) > (((/* implicit */int) var_1)))))));
                arr_17 [i_4] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((arr_11 [i_3]) / (arr_11 [i_3])))) * (((((/* implicit */_Bool) arr_11 [i_4])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                arr_18 [i_3] [i_3] [(unsigned short)1] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_13 [i_3]) : (((/* implicit */unsigned int) var_2))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9757)))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)51483), (((/* implicit */unsigned short) var_5)))))) : (((((var_9) + (9223372036854775807LL))) >> (((var_2) - (114307113)))))))) ? (((((/* implicit */_Bool) var_8)) ? ((-(var_9))) : (((/* implicit */long long int) (+(var_10)))))) : (((/* implicit */long long int) max((var_10), (((/* implicit */int) ((var_10) == (var_10)))))))));
}
