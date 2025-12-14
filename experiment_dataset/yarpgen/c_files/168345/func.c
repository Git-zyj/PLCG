/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168345
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (int i_3 = 4; i_3 < 21; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            arr_15 [i_1] [i_1] = ((/* implicit */int) ((short) ((signed char) 3606447228U)));
                            arr_16 [i_2] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_14 [i_3 + 2])) > (((/* implicit */int) arr_14 [i_3 + 1]))));
                        }
                        arr_17 [i_0] [i_1] [i_2] [i_1] = ((((/* implicit */int) arr_6 [i_3 + 3] [i_3 - 4] [i_1])) & (min((((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) (_Bool)1))))), (min((var_3), (((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        } 
        arr_18 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max(((short)29089), (((/* implicit */short) (_Bool)1))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ ((~(arr_13 [i_0] [5] [i_0] [i_0])))))));
        arr_19 [i_0] = ((/* implicit */long long int) (((((!((_Bool)1))) ? (((var_9) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10044))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)10044))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((var_5) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-2023))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))))))));
    }
    var_17 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_5)), (var_9)));
}
