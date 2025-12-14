/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110434
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
    var_10 = ((/* implicit */unsigned char) ((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)183)))))))));
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) (-(((/* implicit */int) var_1)))))));
    var_12 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (~(var_4)))) ? (((((/* implicit */_Bool) (short)-9)) ? (var_7) : (var_8))) : (((((/* implicit */unsigned long long int) -2041459689407976522LL)) - (var_8)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_13 += ((/* implicit */long long int) ((((/* implicit */_Bool) 2041459689407976545LL)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) 3339383034941177240LL)))) > (8981020143532065552LL)))) : (((/* implicit */int) (short)-20965))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            var_14 = ((/* implicit */signed char) (~(arr_0 [i_1 - 1])));
            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) arr_1 [i_1 + 1]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (var_9)));
                var_17 = ((/* implicit */long long int) ((var_2) % (((/* implicit */unsigned long long int) arr_8 [i_1 + 2] [i_0]))));
            }
        }
        arr_11 [(_Bool)1] [(short)6] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (signed char)121)), (9588701220281629903ULL)));
    }
    /* LoopNest 3 */
    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 3) 
    {
        for (unsigned char i_4 = 1; i_4 < 15; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
            {
                {
                    arr_19 [i_3] [i_4] [i_5] = ((/* implicit */int) min(((~(max((var_6), (((/* implicit */unsigned long long int) (short)-20969)))))), (((unsigned long long int) arr_14 [i_3] [i_3]))));
                    arr_20 [i_3] [i_3] [11] = ((/* implicit */unsigned char) var_9);
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) 8623573057372832564ULL)) || (((/* implicit */_Bool) (+(arr_17 [i_3 + 3] [i_3] [i_4 - 1] [i_3 + 1]))))));
                }
            } 
        } 
    } 
}
