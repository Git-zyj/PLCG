/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132910
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */_Bool) min((var_15), (((((/* implicit */int) ((short) arr_3 [i_0]))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
                    arr_7 [i_0] = 2279788417U;
                    var_16 = ((var_6) >= (4128009072U));
                    arr_8 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_0 [i_0] [i_2]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned int i_4 = 3; i_4 < 8; i_4 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        {
                            arr_17 [i_4] [i_4] = ((/* implicit */unsigned char) max((max(((+(4ULL))), (((/* implicit */unsigned long long int) arr_14 [i_6] [i_6] [i_6])))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) < (1602204495U))))));
                            var_17 &= ((/* implicit */short) (+(((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3]))) : (4ULL))) : (18446744073709551594ULL)))));
                            var_18 -= ((/* implicit */signed char) max((max((arr_13 [i_4 + 2] [i_4 + 2]), (((/* implicit */unsigned int) (_Bool)1)))), (((max((var_1), (arr_3 [i_6]))) & (var_2)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_19 = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) ((var_8) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), (((/* implicit */int) var_9))));
                    arr_22 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) arr_0 [i_4 + 2] [i_4 + 2])) > (((/* implicit */int) arr_21 [i_4 + 1] [i_4 - 2] [i_4 - 1])))));
                    arr_23 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) 11059241197137268925ULL);
                }
            }
        } 
    } 
}
