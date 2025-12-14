/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135289
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0]))))))))))));
                    var_18 = ((/* implicit */unsigned char) max((max((arr_5 [i_1] [(signed char)3] [i_1]), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_15)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) max((((((/* implicit */_Bool) (short)-15608)) ? (17130757665014628559ULL) : (((/* implicit */unsigned long long int) -1699071530)))), (((/* implicit */unsigned long long int) var_2)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_3 = 1; i_3 < 21; i_3 += 4) 
    {
        arr_12 [i_3] = ((((/* implicit */int) (unsigned char)68)) >= (var_0));
        /* LoopNest 3 */
        for (signed char i_4 = 2; i_4 < 20; i_4 += 1) 
        {
            for (int i_5 = 2; i_5 < 21; i_5 += 4) 
            {
                for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((signed char) arr_14 [i_3] [(signed char)14] [i_5 - 1])))));
                        arr_20 [i_3 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_6] [i_5] [i_5] [i_4 - 2] [i_3 - 1])) ? (((((/* implicit */long long int) ((/* implicit */int) var_15))) & (var_11))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned char)30))))));
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) arr_15 [i_4] [i_5]))));
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (signed char)127))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            var_23 *= (!(((/* implicit */_Bool) (~(var_8)))));
                            arr_25 [i_7] [i_7] [i_5] [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_4 + 1] [i_5 - 2] [i_5 - 2])) ? (var_2) : (((/* implicit */int) arr_19 [i_3] [i_3] [15] [(signed char)3] [i_3 + 1] [i_3]))));
                            var_24 = ((/* implicit */int) (unsigned char)46);
                        }
                    }
                } 
            } 
        } 
    }
}
