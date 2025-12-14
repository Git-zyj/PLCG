/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153872
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_15 |= ((/* implicit */signed char) min((((-2094003777) - (((/* implicit */int) (unsigned char)83)))), (((min((-2094003777), (2094003776))) + (((int) 2094003778))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_10 [i_0] [17U] [i_2] [19U] [i_2] = ((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) arr_2 [i_3 + 3] [i_3 + 3] [i_3])), (2533427929U)))));
                                var_16 = ((/* implicit */_Bool) min((max((var_0), (var_12))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-101)))))));
                                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) min((((/* implicit */unsigned long long int) (short)5581)), (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)83)) | (((/* implicit */int) arr_0 [i_0] [i_0]))))) & (min((((/* implicit */unsigned long long int) var_10)), (arr_5 [i_0]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_11 [i_0] = ((((/* implicit */_Bool) ((2533427944U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-109)))))) ? (((/* implicit */int) (short)5581)) : (((((((/* implicit */int) (signed char)-55)) + (2147483647))) << ((((((-(((/* implicit */int) arr_7 [i_0])))) + (56096))) - (31))))));
        var_18 = ((/* implicit */signed char) min(((+(var_12))), (((/* implicit */unsigned long long int) 68841683))));
    }
    var_19 &= ((/* implicit */_Bool) ((unsigned int) var_2));
}
