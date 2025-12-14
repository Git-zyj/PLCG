/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117685
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
    var_14 &= min((((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8)))))))), (var_11));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) arr_1 [i_2]);
                                arr_13 [i_1] [i_1] [(signed char)11] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((arr_4 [i_0]) <= (((/* implicit */int) arr_1 [i_3])))))));
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) max((((((/* implicit */_Bool) arr_0 [i_4 + 2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_0 [i_4 - 2])))), (((/* implicit */int) arr_0 [i_4 - 1])))))));
                                arr_14 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((5691112786992415901ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60)))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_2] = (!(((((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_1] [i_2] [i_2] [i_2])) > (((((/* implicit */int) arr_9 [i_1] [i_1] [i_2] [i_1])) % (((/* implicit */int) var_8)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)10607)) ? (((/* implicit */int) (unsigned char)60)) : ((((!(((/* implicit */_Bool) (unsigned char)60)))) ? (((/* implicit */int) (unsigned short)54954)) : (((/* implicit */int) ((short) (_Bool)1)))))));
}
