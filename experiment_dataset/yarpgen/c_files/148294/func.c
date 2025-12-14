/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148294
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_8 [(_Bool)0] [i_2] [10LL] = ((/* implicit */int) arr_3 [i_0] [(_Bool)1] [(unsigned short)0]);
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) (signed char)-69);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 4; i_3 < 18; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            {
                arr_14 [2LL] [i_4] = ((/* implicit */unsigned int) (_Bool)1);
                arr_15 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0ULL)) ? (min((-6171562156670914243LL), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-5))))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) arr_10 [i_3 + 2] [i_3])) : (((/* implicit */int) (short)-19156))))), (((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1048171326U))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        arr_18 [(short)10] = ((/* implicit */unsigned char) 3830229676U);
        arr_19 [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) arr_17 [i_5]))));
    }
}
