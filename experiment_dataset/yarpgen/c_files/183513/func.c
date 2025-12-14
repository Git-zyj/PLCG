/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183513
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)0)) >> (((((/* implicit */int) (unsigned short)65535)) - (65531)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_9)))) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */int) (short)0);
                            var_12 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((arr_9 [i_0 - 1] [i_2] [i_0 - 1]), (((/* implicit */long long int) var_4))))) ? (max((arr_8 [i_1] [i_2] [i_1] [i_1] [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [0ULL])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_8 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))))));
                            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_1 - 1] [i_1 - 1] [i_3])), (var_6))))) : (var_9)));
                        }
                    } 
                } 
                var_14 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_8 [i_1] [i_0] [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 + 3] [i_0] [i_1 - 2] [(unsigned short)7]))))) : (((/* implicit */int) ((arr_0 [i_0 - 2]) < (((/* implicit */unsigned long long int) var_9))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [i_0 + 2] [i_1 + 1] [i_4] [i_1]))));
                    var_16 = var_7;
                    var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned long long int) var_0)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 3] [i_4] [i_0 + 1])))));
                }
            }
        } 
    } 
    var_18 = ((((/* implicit */_Bool) var_5)) ? ((+(((/* implicit */int) (unsigned char)121)))) : (((/* implicit */int) var_1)));
}
