/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103709
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
    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) 864691128455135232ULL)) || (((/* implicit */_Bool) var_15))))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) var_11);
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 2; i_4 < 16; i_4 += 1) 
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */signed char) var_11);
                            arr_17 [i_0] [(signed char)18] [(unsigned short)5] [i_0] [(signed char)18] = ((/* implicit */short) (signed char)8);
                        }
                        arr_18 [i_0] [i_1 - 1] = ((/* implicit */signed char) ((min((((var_14) / (var_1))), (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_3] [i_0] [i_0] [i_0] [i_0])) + (((/* implicit */int) arr_2 [i_0]))))))) + (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                    }
                } 
            } 
        } 
        arr_19 [i_0] [(unsigned char)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((-(((/* implicit */int) (_Bool)1)))) * ((~(((/* implicit */int) (short)127))))))) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [(signed char)10] [i_0] [(unsigned char)10] [4ULL]))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) var_11)) < (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_14)), (var_7)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_0))))));
    }
    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)127))) & (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (var_7))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
}
