/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163377
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
    var_19 = ((/* implicit */unsigned long long int) var_15);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                var_20 = max(((unsigned short)14326), ((unsigned short)14326));
                arr_7 [i_1] [(unsigned char)8] [(unsigned char)8] |= ((/* implicit */signed char) max((((/* implicit */int) var_3)), ((-(((((/* implicit */_Bool) -101714185)) ? (-101714175) : (((/* implicit */int) (unsigned short)43514))))))));
            }
        } 
    } 
    var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)1303)) ? (((/* implicit */int) (short)6186)) : (((/* implicit */int) var_6)))))) >> (((min((((((((/* implicit */int) var_7)) + (2147483647))) << (((((/* implicit */int) (unsigned short)65535)) - (65535))))), (((/* implicit */int) var_16)))) - (7868)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 3) 
    {
        var_22 = ((/* implicit */signed char) ((short) arr_8 [i_2]));
        arr_12 [i_2 - 2] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_2 + 2] [(unsigned short)4]))));
    }
    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */int) (-((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned short)65535)))) : (((unsigned int) (unsigned short)63675))))));
        var_24 = min((((/* implicit */unsigned int) (unsigned short)49993)), (3689052075U));
        var_25 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_14 [i_3 + 1] [i_3])) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)13786)) | (((/* implicit */int) var_5))))) : (var_11))), (min((((((/* implicit */_Bool) (unsigned short)12642)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1867))) : (arr_14 [i_3] [i_3]))), (arr_14 [i_3 - 1] [i_3])))));
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) arr_13 [i_3])) : (((unsigned long long int) arr_13 [i_3]))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 1; i_4 < 17; i_4 += 1) /* same iter space */
    {
        var_27 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -8136952925675950130LL)) * (0ULL)))) ? (((((/* implicit */_Bool) var_1)) ? (arr_15 [i_4]) : (arr_14 [i_4 + 1] [0U]))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11364))) : (arr_14 [i_4 + 2] [(_Bool)1])))));
        arr_18 [i_4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)65525)) : (-1725790486))) - (((/* implicit */int) var_6))));
        var_28 = ((/* implicit */short) ((((/* implicit */int) var_7)) / (((/* implicit */int) arr_17 [i_4 + 2]))));
    }
}
