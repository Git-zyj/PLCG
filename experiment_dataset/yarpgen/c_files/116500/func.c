/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116500
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
    var_20 -= max(((signed char)50), ((signed char)-58));
    var_21 = var_11;
    var_22 = ((/* implicit */signed char) (+(((((/* implicit */int) var_11)) | (((/* implicit */int) var_9))))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_23 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_8), ((signed char)18))))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) min(((signed char)-36), ((signed char)15)))))))));
                    var_24 = (signed char)53;
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)75))));
                                var_25 *= ((/* implicit */signed char) max((((/* implicit */int) min((arr_10 [i_1 + 2] [i_3] [i_1 - 1] [i_1 - 1]), ((signed char)-38)))), (((((/* implicit */int) arr_2 [i_3])) & (((/* implicit */int) (signed char)-2))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        arr_18 [i_0 - 1] [i_0] [i_2] [i_5] = var_18;
                        arr_19 [i_0] [i_1 + 2] [i_2] [i_0] = arr_16 [i_0 - 3] [i_5] [i_2] [i_2] [i_5];
                        arr_20 [(signed char)8] [i_5] [i_2] [i_0] = (signed char)-64;
                    }
                }
            } 
        } 
    } 
    var_26 = min(((signed char)-59), ((signed char)-36));
}
