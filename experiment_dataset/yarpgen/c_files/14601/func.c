/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14601
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 16; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_9 [i_4] [i_3] [i_2] [14U] [i_1] [i_0] [(signed char)4]);
                                var_16 = ((/* implicit */signed char) arr_7 [i_4] [i_3] [i_2] [12U] [i_0] [i_0]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    for (unsigned int i_6 = 2; i_6 < 16; i_6 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_5 [i_6] [i_6 - 1]), (((/* implicit */unsigned short) arr_13 [i_5] [(short)15] [i_6] [i_6 - 1]))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0])))))));
                            var_18 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [(unsigned short)0] [(unsigned short)0] [i_5] [(_Bool)1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-79)), (arr_16 [i_0] [1ULL] [11LL] [i_0] [i_0])))) ? (((/* implicit */int) min((arr_3 [i_5]), (arr_8 [i_0] [i_0] [i_1] [i_5] [i_6] [i_6])))) : (((/* implicit */int) arr_16 [i_0] [(unsigned short)7] [i_5] [i_6 + 1] [i_6]))))) : ((-(arr_15 [i_0] [i_0] [i_0] [i_0])))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */signed char) arr_12 [i_0]);
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_1);
    var_21 = ((/* implicit */unsigned char) var_9);
}
