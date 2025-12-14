/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164094
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
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                var_12 |= ((/* implicit */unsigned long long int) (_Bool)1);
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_13 |= ((/* implicit */unsigned int) var_10);
                                var_14 += ((/* implicit */short) min((((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (unsigned short)703)))))), ((+(((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_4 + 1] [i_3]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (signed char i_6 = 1; i_6 < 7; i_6 += 1) 
                    {
                        {
                            var_15 &= ((/* implicit */long long int) ((((_Bool) ((((/* implicit */int) (unsigned short)64832)) < (((/* implicit */int) (short)32767))))) ? (((arr_17 [(_Bool)1]) ? (arr_14 [i_6 + 2] [i_6 + 1] [i_6 + 1] [7U] [i_6 + 1] [i_6 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(short)8] [i_5] [(short)8]))))) : (((/* implicit */unsigned long long int) (+(((long long int) arr_7 [8U] [i_5])))))));
                            var_16 -= ((/* implicit */short) max((((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [(unsigned short)8] [(unsigned short)8] [i_5]))))) ? (((((/* implicit */_Bool) var_7)) ? (arr_18 [i_0] [i_1 - 1] [i_6 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64827))))) : (max((((/* implicit */unsigned int) (short)6502)), (4294967294U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [4ULL] [i_1 - 2] [i_1 - 3])))))));
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) ((long long int) arr_6 [i_1] [(_Bool)1] [i_1])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_10))));
}
