/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107090
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_17 &= ((/* implicit */long long int) ((((((/* implicit */int) var_12)) + (2147483647))) << (((arr_0 [i_0] [i_0]) - (15978339922667440237ULL)))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) var_12);
        arr_3 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_6))));
    }
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_9))));
    /* LoopNest 2 */
    for (long long int i_1 = 2; i_1 < 22; i_1 += 1) 
    {
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            {
                var_19 -= ((/* implicit */unsigned short) arr_7 [i_2]);
                arr_10 [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)37)) ? (((arr_8 [i_1] [i_1 + 1] [i_1]) << (((arr_8 [i_1] [i_2] [i_2]) - (1457856545))))) : (((/* implicit */int) arr_6 [i_2]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (unsigned char)141)), (2403522108893525712ULL)));
        var_21 = ((((/* implicit */_Bool) var_15)) ? ((~(((/* implicit */int) arr_5 [i_3])))) : (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (var_13))) - (((/* implicit */int) arr_11 [(_Bool)1])))));
        arr_14 [i_3] = ((/* implicit */signed char) (-(arr_12 [i_3])));
    }
    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_4] [i_4] [i_4])) < (((/* implicit */int) var_6))))), (5898777896503327797ULL)));
        arr_17 [i_4] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_4]))))), ((-(arr_7 [(signed char)5])))));
        arr_18 [i_4] = ((/* implicit */short) (((-(((/* implicit */int) var_8)))) >> (((var_11) + (1127660046)))));
    }
}
