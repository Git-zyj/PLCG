/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143914
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
    for (long long int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                arr_5 [i_0] [(unsigned short)6] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) 11973875986850383123ULL))) << (((((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */long long int) (-(((/* implicit */int) var_4))))) : ((-(var_17))))) + (18830LL)))));
                arr_6 [(unsigned short)0] [i_1] = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) var_6);
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        arr_10 [i_2] = ((/* implicit */signed char) ((long long int) ((arr_7 [i_2]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))))));
        /* LoopNest 2 */
        for (short i_3 = 1; i_3 < 17; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(781071580U)))) ? (((/* implicit */unsigned long long int) (+(((long long int) var_1))))) : (15ULL))))));
                    var_20 = ((/* implicit */_Bool) ((signed char) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) + (9223372036854775807LL)))));
                    var_21 = ((/* implicit */long long int) (-((~(((/* implicit */int) arr_12 [i_4] [i_4 - 1] [(unsigned short)10]))))));
                    var_22 = ((/* implicit */unsigned short) (+((+(((((/* implicit */_Bool) arr_7 [i_3 + 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_12 [i_2] [i_2] [i_4]))))))));
                }
            } 
        } 
        arr_15 [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2])))))))));
    }
}
