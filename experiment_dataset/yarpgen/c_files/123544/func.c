/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123544
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_11 -= ((/* implicit */unsigned int) max((max((((((/* implicit */int) (signed char)-18)) / (-1256449233))), ((+(((/* implicit */int) var_2)))))), (((/* implicit */int) ((short) arr_3 [i_0])))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 3; i_2 < 18; i_2 += 1) 
                {
                    var_12 *= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)92)) | (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */int) var_1))))) : (max((var_4), (((/* implicit */unsigned long long int) var_5)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) | (arr_2 [i_2 + 1] [(signed char)18]))))));
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)47)) | (((/* implicit */int) (short)-10434))));
                }
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */long long int) 0U)) | (var_8)))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (64512U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)17472))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_1 [i_0])))))));
                arr_6 [i_0] [i_1] [i_1] = max((((/* implicit */int) (!(((/* implicit */_Bool) max((148051624U), (arr_0 [i_0]))))))), (max(((~(((/* implicit */int) var_2)))), (((/* implicit */int) max((var_7), (((/* implicit */unsigned char) arr_3 [i_0]))))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (18446744073709551610ULL))))), (var_5)));
            }
        } 
    } 
    var_15 = ((/* implicit */int) var_7);
    var_16 = ((/* implicit */short) var_9);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_3 = 4; i_3 < 14; i_3 += 2) 
    {
        var_17 *= ((/* implicit */unsigned long long int) (+(arr_2 [i_3] [3LL])));
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) / (var_4)));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 4) 
    {
        arr_17 [(unsigned char)4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_4] [i_4 - 1])) ? (((/* implicit */int) var_0)) : (arr_2 [(signed char)6] [i_4 + 1])));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)77)) | (((/* implicit */int) (unsigned short)8191))));
        var_19 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)247))));
    }
}
