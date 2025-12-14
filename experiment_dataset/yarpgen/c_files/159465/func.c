/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159465
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
    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((var_5) <= (((/* implicit */long long int) ((/* implicit */int) var_4)))))) : (((/* implicit */int) min(((short)-15871), (((/* implicit */short) (_Bool)1))))))) * (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))) && (((var_16) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))))));
    var_18 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_19 -= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
                    var_20 -= ((/* implicit */unsigned char) ((arr_2 [i_0] [i_2] [i_2]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((arr_2 [(unsigned char)8] [i_1] [i_2]) || (arr_2 [i_2] [i_1] [i_0]))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_4 [i_0] [i_0] [6U])))))));
        var_22 ^= ((/* implicit */unsigned char) ((arr_2 [i_0] [i_0] [(unsigned char)5]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))));
    }
    var_23 *= ((/* implicit */unsigned char) var_14);
    /* LoopSeq 2 */
    for (int i_3 = 3; i_3 < 16; i_3 += 3) 
    {
        var_24 -= ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3] [i_3])) && (((/* implicit */_Bool) arr_8 [i_3] [i_3]))))) & (((((/* implicit */int) arr_8 [i_3] [i_3 - 2])) * (((/* implicit */int) arr_7 [i_3]))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? (((/* implicit */int) arr_6 [i_3] [i_3])) : (((/* implicit */int) arr_6 [i_3 - 2] [i_3])))) < (((/* implicit */int) ((_Bool) arr_7 [i_3 - 3])))))) : (((/* implicit */int) min((arr_8 [i_3 - 2] [i_3 - 1]), (arr_8 [i_3 - 3] [i_3 - 1])))));
        arr_9 [i_3] [i_3] = ((/* implicit */signed char) ((((((/* implicit */int) arr_6 [i_3] [i_3 - 3])) + (((/* implicit */int) arr_8 [i_3 - 3] [i_3 - 3])))) ^ (((/* implicit */int) arr_6 [i_3] [i_3 - 3]))));
        arr_10 [i_3] [i_3 + 2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_3] [i_3])) >> (((((/* implicit */int) arr_8 [i_3] [i_3])) - (47136)))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_3] [i_3])) / (((/* implicit */int) arr_8 [i_3] [i_3]))))))) && (((/* implicit */_Bool) ((((((/* implicit */int) arr_6 [i_3] [i_3])) | (((/* implicit */int) arr_7 [i_3 + 1])))) * (((/* implicit */int) ((2181125028U) >= (2325060585U)))))))));
    }
    /* vectorizable */
    for (short i_4 = 3; i_4 < 23; i_4 += 3) 
    {
        var_25 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_4 - 2]))));
        arr_13 [i_4 + 1] [i_4 - 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */int) arr_12 [i_4])) : (((/* implicit */int) arr_11 [i_4 + 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_4 - 1]))))) : (((/* implicit */int) arr_11 [i_4 - 1])));
        arr_14 [(signed char)0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */int) arr_11 [i_4])) : (((/* implicit */int) arr_11 [i_4])))) & (((/* implicit */int) arr_11 [i_4 + 2]))));
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned int) arr_11 [i_4]);
    }
}
