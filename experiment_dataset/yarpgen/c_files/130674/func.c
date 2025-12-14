/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130674
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
    var_14 = (-(var_12));
    var_15 |= ((/* implicit */short) var_4);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [(unsigned char)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */short) arr_5 [(short)4])), (var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) ^ ((~(((/* implicit */int) arr_2 [(short)3]))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(signed char)1]))) : (((5ULL) >> (((((/* implicit */int) var_10)) + (158)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        var_16 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551611ULL)))))));
                        arr_12 [i_0] [7ULL] = ((/* implicit */unsigned int) var_1);
                        arr_13 [i_3] [i_3] [(_Bool)1] [14ULL] [i_1] [(unsigned short)11] |= ((/* implicit */int) (short)-4891);
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            arr_19 [0ULL] [8ULL] [(unsigned short)8] [(unsigned char)6] [i_2] |= ((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [(signed char)0] [i_5] [i_5] [i_5] [(short)15]))));
                            arr_20 [i_4] = ((unsigned long long int) arr_15 [(unsigned char)8] [i_2] [i_0]);
                        }
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))))));
                        var_18 = ((/* implicit */signed char) var_7);
                    }
                    /* vectorizable */
                    for (signed char i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        var_19 ^= ((/* implicit */short) ((((/* implicit */int) (short)4921)) << (((((arr_14 [i_0] [i_1] [i_1] [i_2] [i_6] [i_6]) + (1204728989))) - (16)))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [(short)12] [i_1] [14] [i_6] [5U] [(unsigned char)0])) ? (arr_14 [i_6] [(_Bool)0] [i_2] [4ULL] [i_1] [i_1]) : (((/* implicit */int) arr_21 [6ULL] [i_2] [1ULL])))))));
                    }
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) max(((short)4861), (((/* implicit */short) (_Bool)1)))))));
                }
            } 
        } 
    } 
}
