/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171294
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_4 [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((unsigned long long int) (!((_Bool)1))))));
        var_17 = (_Bool)1;
        var_18 = ((/* implicit */unsigned int) (_Bool)1);
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                for (unsigned char i_3 = 1; i_3 < 9; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1171642373906222547ULL)))))))));
                        arr_15 [i_3] [i_3 + 1] [i_2] [2] [2] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) var_2)), (var_8))))) / (2090476600)));
                    }
                } 
            } 
        } 
        arr_16 [i_0] [i_0] = ((/* implicit */short) (~((~(max((((/* implicit */long long int) (unsigned char)42)), (6482825050761660137LL)))))));
    }
    /* LoopNest 3 */
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        for (unsigned char i_5 = 4; i_5 < 10; i_5 += 1) 
        {
            for (unsigned short i_6 = 3; i_6 < 9; i_6 += 3) 
            {
                {
                    arr_24 [i_5] [i_5] [(unsigned char)0] [i_5] = ((/* implicit */unsigned int) max((max((((/* implicit */int) var_3)), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (signed char)-2))));
                    arr_25 [i_5] [i_5] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)3))));
                }
            } 
        } 
    } 
}
