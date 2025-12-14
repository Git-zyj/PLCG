/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108979
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
    var_15 = ((/* implicit */unsigned short) var_4);
    var_16 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */long long int) arr_3 [i_0 + 3] [i_0 + 2]);
                var_17 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) (+(-1963682936)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_11), (var_9))))) * (((unsigned long long int) var_0))))));
                var_18 = ((/* implicit */signed char) (((~(((/* implicit */int) var_1)))) % (max((arr_3 [i_0 - 1] [i_0 + 3]), (arr_1 [i_0 + 1])))));
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) (~(max((((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) (unsigned short)47782)))), ((+(((/* implicit */int) var_3))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 22; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (short i_5 = 1; i_5 < 23; i_5 += 3) 
                    {
                        {
                            arr_18 [i_2] [i_2] [(unsigned char)20] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(((((/* implicit */int) (unsigned short)43459)) % (((/* implicit */int) (signed char)-25))))))), ((+(arr_14 [i_2 - 3] [i_2] [i_2])))));
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_14 [i_2] [i_2] [i_4]))));
                            var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */int) var_9)) | (((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((/* implicit */int) (unsigned char)118)) : (((/* implicit */int) arr_8 [i_2 + 2]))))))));
                            arr_19 [i_2] [i_2] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */_Bool) var_9);
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) arr_13 [i_3] [i_3] [i_2] [i_3]))));
            }
        } 
    } 
}
