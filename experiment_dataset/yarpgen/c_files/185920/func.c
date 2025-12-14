/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185920
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_12 = ((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) arr_2 [i_0]))));
        arr_3 [i_0] = ((/* implicit */_Bool) var_1);
        var_13 = ((/* implicit */signed char) ((((arr_2 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) < (arr_2 [i_0]))))))) / (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) (_Bool)1))))))));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        arr_8 [i_1] = 4294967295U;
        var_14 = ((/* implicit */long long int) arr_2 [i_1]);
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                for (int i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    {
                        var_15 = ((/* implicit */signed char) ((var_6) > (((/* implicit */long long int) ((/* implicit */int) ((var_5) != (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (8323072))))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 1; i_5 < 15; i_5 += 3) 
                        {
                            arr_20 [i_1] [i_1] [i_1] [(signed char)1] [i_4] [(signed char)1] [i_1] = ((/* implicit */signed char) (~((~(8323072)))));
                            var_16 = (-(((/* implicit */int) arr_14 [i_2] [i_2] [i_4] [i_5 + 1])));
                        }
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned short i_6 = 1; i_6 < 19; i_6 += 2) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */long long int) (-((~(-1878966452))))))));
        var_18 ^= ((/* implicit */int) ((unsigned long long int) (!(((((/* implicit */_Bool) (unsigned short)54719)) && (((/* implicit */_Bool) arr_21 [i_6])))))));
    }
}
