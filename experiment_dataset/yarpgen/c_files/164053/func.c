/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164053
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
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((signed char) arr_0 [i_0])))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_3 [i_0] [i_2]))))));
                                var_14 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_3] [i_4] [i_4 + 1] [i_4 - 2])) ? (((unsigned int) (signed char)2)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))) < (min(((~(var_2))), (((unsigned long long int) arr_3 [10U] [i_3]))))));
                                var_15 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) (signed char)(-127 - 1))), (3617087780U))), (((/* implicit */unsigned int) max(((unsigned short)64849), (((/* implicit */unsigned short) arr_8 [i_1] [8] [(unsigned short)7])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (+(min((min((((/* implicit */unsigned int) var_7)), (var_8))), (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (var_8))))))))));
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                {
                    arr_25 [8] [i_6] = min((max((((/* implicit */unsigned int) arr_14 [i_5] [i_5] [i_7] [11ULL] [i_5])), (min((((/* implicit */unsigned int) arr_3 [(short)8] [(short)8])), (arr_1 [i_6] [i_5]))))), (((/* implicit */unsigned int) ((short) (-(((/* implicit */int) arr_2 [i_7])))))));
                    arr_26 [(unsigned short)1] [i_6] [i_5] = ((/* implicit */unsigned int) (~(min((arr_24 [i_5]), (arr_24 [i_6])))));
                    arr_27 [i_6] = min((((long long int) ((((/* implicit */int) (unsigned char)94)) <= (var_1)))), (((/* implicit */long long int) ((short) arr_22 [(_Bool)1]))));
                    var_17 *= ((/* implicit */unsigned int) var_9);
                }
            } 
        } 
    } 
}
