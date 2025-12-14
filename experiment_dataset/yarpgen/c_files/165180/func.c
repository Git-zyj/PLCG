/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165180
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)255))));
                var_12 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) min((var_8), (((/* implicit */unsigned int) (unsigned char)1))))), ((-(var_4))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        var_13 = ((/* implicit */unsigned long long int) var_10);
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (unsigned char)1))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            for (long long int i_4 = 2; i_4 < 19; i_4 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_2] [i_3] [i_3] [i_3]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_8) : (((/* implicit */unsigned int) var_3))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (0ULL)))))) ? (min(((-(2259175711808164148ULL))), (((/* implicit */unsigned long long int) (-(9223372036854775807LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_3] [i_4])))));
                    var_16 = ((/* implicit */unsigned short) (unsigned char)0);
                    var_17 = ((/* implicit */short) ((long long int) -508298239));
                    var_18 = ((((((/* implicit */int) var_10)) + (2147483647))) >> (((((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)183))) : (-9223372036854775807LL))) - (155LL))));
                }
            } 
        } 
        var_19 |= ((/* implicit */short) -2032570312);
    }
}
