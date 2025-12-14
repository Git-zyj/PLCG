/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124761
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
    var_12 = ((/* implicit */int) 2242564763U);
    var_13 = ((/* implicit */unsigned short) var_1);
    var_14 = ((/* implicit */long long int) 2052402532U);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2242564764U))))))))));
            arr_5 [(unsigned short)19] = (~(2052402534U));
            arr_6 [i_0] [i_1 - 2] = ((/* implicit */unsigned short) (unsigned char)255);
        }
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            arr_9 [i_0] [i_0] = ((/* implicit */long long int) 18226629611141753363ULL);
            var_16 = ((/* implicit */long long int) 12ULL);
        }
        for (short i_3 = 1; i_3 < 22; i_3 += 4) 
        {
            var_17 = ((/* implicit */unsigned short) 2242564764U);
            arr_13 [i_3] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(2052402531U))))));
            /* LoopNest 2 */
            for (signed char i_4 = 2; i_4 < 22; i_4 += 1) 
            {
                for (unsigned short i_5 = 1; i_5 < 21; i_5 += 4) 
                {
                    {
                        arr_19 [i_3] = ((/* implicit */_Bool) 2242564764U);
                        arr_20 [i_5 - 1] [i_3] [i_4] [i_5] [i_0 - 3] = ((/* implicit */short) 0ULL);
                    }
                } 
            } 
            arr_21 [i_0 - 2] [i_0 - 1] [i_3 + 3] = (-((+(((/* implicit */int) (_Bool)0)))));
            var_18 = ((/* implicit */long long int) 36028797018963967ULL);
        }
        var_19 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (unsigned short)1144))))));
        var_20 = ((/* implicit */unsigned long long int) (short)32767);
    }
}
