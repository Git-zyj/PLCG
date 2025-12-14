/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115211
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
    var_20 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */_Bool) 3329713125U)) ? (((12288001174719805281ULL) / (3369455928013741044ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7)))))));
    var_21 = ((/* implicit */short) min((((8544220466059462629ULL) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_18))))))), (((/* implicit */unsigned long long int) (unsigned char)223))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_3 [i_0 + 1]))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-11)), ((unsigned char)240)))) : (((/* implicit */int) arr_3 [i_0 + 1]))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_23 = var_9;
                            arr_13 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_10 [i_1] [i_2] [i_3 - 2])) : (((/* implicit */int) arr_3 [i_0 - 1])))) == (((/* implicit */int) (unsigned char)21)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
