/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147820
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
    for (long long int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1434070850)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (min((((/* implicit */long long int) var_5)), (arr_6 [i_0] [(_Bool)1] [i_0])))))))))));
            var_17 = -1434070847;
        }
        arr_7 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) (!((!(var_7)))))) >= (((((/* implicit */int) min((var_5), (((/* implicit */signed char) var_6))))) | (max((1434070850), (((/* implicit */int) (_Bool)1))))))));
        var_18 = ((/* implicit */signed char) (-(((arr_0 [i_0 - 2] [i_0 - 3]) - (arr_0 [(short)11] [i_0 + 1])))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 1; i_3 < 13; i_3 += 3) 
        {
            for (long long int i_4 = 2; i_4 < 13; i_4 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) arr_11 [i_2] [(unsigned char)1] [i_2]);
                    arr_15 [(unsigned short)12] [i_3] [i_3] = ((/* implicit */unsigned char) arr_3 [i_2]);
                    var_20 = ((/* implicit */signed char) arr_6 [i_3] [(signed char)8] [i_3]);
                    var_21 ^= ((/* implicit */short) ((arr_13 [i_3] [i_3] [i_3 - 1]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3])))));
                }
            } 
        } 
        arr_16 [(signed char)0] [i_2] = -1434070829;
    }
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_3)) | (((/* implicit */int) (_Bool)1)))))))))));
}
