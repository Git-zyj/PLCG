/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159106
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
    var_15 += ((/* implicit */unsigned short) var_5);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) - (7430401271089965714ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_10))))));
                    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_2]))))) ? (((var_7) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) >= (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) & (725710045))) | (((((/* implicit */int) var_11)) | (var_5))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 19; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            {
                var_17 -= ((/* implicit */unsigned short) (~(((/* implicit */int) ((max((((/* implicit */long long int) var_4)), (var_14))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_13 [i_4])))))))));
                /* LoopNest 2 */
                for (signed char i_5 = 2; i_5 < 20; i_5 += 4) 
                {
                    for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_11))));
                            arr_19 [i_3] [i_3] = ((/* implicit */signed char) var_6);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_7 = 2; i_7 < 19; i_7 += 1) 
                {
                    arr_22 [i_3] [i_4] [i_3] = ((/* implicit */signed char) min(((~(((/* implicit */int) arr_10 [i_7 - 2])))), (((/* implicit */int) ((((/* implicit */int) arr_10 [i_3 + 2])) < (((/* implicit */int) arr_11 [i_7 - 2])))))));
                    var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((arr_9 [i_4]) / (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_9 [i_4])))))))));
                }
            }
        } 
    } 
}
