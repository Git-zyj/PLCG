/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125345
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
    for (short i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        var_10 *= ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        var_11 = ((unsigned char) ((((/* implicit */unsigned long long int) arr_0 [i_0])) | (((unsigned long long int) arr_0 [i_0]))));
    }
    /* LoopNest 3 */
    for (short i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        for (unsigned char i_2 = 2; i_2 < 18; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                {
                    arr_11 [i_1] [i_2 + 1] [i_3] = ((/* implicit */signed char) arr_6 [i_1]);
                    var_12 ^= ((/* implicit */unsigned long long int) (-(((((/* implicit */int) min((arr_10 [i_3] [i_3] [i_3]), (((/* implicit */unsigned short) arr_5 [i_1] [i_2] [(signed char)2]))))) * ((-(((/* implicit */int) arr_2 [i_3]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        for (unsigned int i_5 = 4; i_5 < 19; i_5 += 2) 
        {
            {
                var_13 = ((/* implicit */int) (~(8834171931013763671ULL)));
                arr_16 [i_4] = ((/* implicit */_Bool) arr_15 [i_4] [i_5]);
                var_14 ^= ((/* implicit */unsigned char) ((signed char) (~((~(((/* implicit */int) (unsigned short)37841)))))));
                arr_17 [i_5] [i_4] [13] = ((/* implicit */long long int) arr_15 [i_5 - 4] [i_5 - 2]);
                arr_18 [i_4] [i_5] [i_4] = ((/* implicit */unsigned char) arr_14 [i_5] [i_4]);
            }
        } 
    } 
}
