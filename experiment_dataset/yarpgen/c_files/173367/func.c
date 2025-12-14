/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173367
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
    var_20 = ((/* implicit */unsigned long long int) (~(((int) var_9))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) 1293432156));
                    arr_8 [i_0] [i_1 - 3] = ((long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 1] [i_1 - 1])) ? (arr_4 [(unsigned short)9] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((var_6) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) ? (max((((/* implicit */long long int) (~(var_16)))), (6025191191801731763LL))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (max((((/* implicit */long long int) (_Bool)0)), (6025191191801731776LL)))))));
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                {
                    arr_17 [(unsigned char)2] [i_3] [(unsigned char)2] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_17))))) <= (((/* implicit */int) ((unsigned char) var_8))))))));
                    arr_18 [i_3] [i_3] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_3])), (max((6025191191801731763LL), (((/* implicit */long long int) var_8)))))))));
                    arr_19 [i_3] = ((/* implicit */short) arr_2 [i_5] [i_3] [i_3]);
                    arr_20 [i_3] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 6025191191801731750LL)) ? (((/* implicit */long long int) 834381416)) : (-6025191191801731769LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_14 [i_3] [i_4] [(unsigned short)1] [i_3])))) : (max((((/* implicit */long long int) arr_2 [i_3] [i_3] [(unsigned char)12])), (var_10))))), (max((((/* implicit */long long int) ((int) 843654817))), (max((((/* implicit */long long int) 834381416)), (6025191191801731766LL)))))));
                }
            } 
        } 
    } 
}
