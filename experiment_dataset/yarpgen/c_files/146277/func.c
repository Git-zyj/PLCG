/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146277
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        var_10 -= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_3 [(unsigned short)2])) ? (((/* implicit */int) (unsigned short)37324)) : (((/* implicit */int) arr_6 [i_2])))), (((/* implicit */int) arr_3 [i_2]))));
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] [8U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-126)) ? (((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) (unsigned char)246))));
                            var_11 &= (_Bool)1;
                            var_12 = ((/* implicit */unsigned int) arr_7 [i_0]);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_13 ^= ((((((/* implicit */unsigned int) (-2147483647 - 1))) - (arr_5 [i_0] [i_0] [i_0]))) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)122))));
                            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) arr_4 [(unsigned char)0]))));
                            var_15 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_18 [i_0] [i_0] [i_2] [i_5])))) ? (((/* implicit */int) var_7)) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-122)))))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned short) ((((arr_14 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2]) ? (((/* implicit */unsigned int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])) : (3780684752U))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)253))))) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) (_Bool)1)))))));
                            var_17 *= ((/* implicit */unsigned char) var_8);
                            arr_22 [i_0] [i_1] [(unsigned short)11] [i_3] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) << (((arr_20 [i_0] [i_1] [(unsigned char)8] [(unsigned char)11] [i_6]) - (1482475773))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned char) (+(arr_5 [i_0] [i_1] [i_1])));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_3))));
                        }
                    }
                    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        arr_31 [(unsigned char)8] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
                        var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-1)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_5)))) <= (((/* implicit */int) (signed char)-7)))))));
                        arr_32 [i_0] [i_1] [i_2] [i_2] [(signed char)0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_8]))))) ? (min((((/* implicit */int) max((((/* implicit */unsigned short) arr_25 [(signed char)10] [i_0] [i_0] [11U] [i_0] [i_8] [i_0])), ((unsigned short)65129)))), (max((var_1), (((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_7))))) ? ((+(((/* implicit */int) arr_7 [i_1])))) : ((-(((/* implicit */int) arr_3 [i_8]))))))));
                    }
                    var_21 = ((/* implicit */unsigned char) 422998639);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (signed char i_10 = 3; i_10 < 24; i_10 += 3) 
        {
            {
                var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_37 [(signed char)4])) - (((/* implicit */int) arr_37 [i_9]))))) ? (((/* implicit */int) arr_34 [(_Bool)1] [i_10])) : (((/* implicit */int) max((arr_34 [i_9] [i_10 - 1]), (arr_33 [i_10 - 1]))))));
                var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_38 [i_10] [i_9])), (((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) (unsigned char)0))))));
                arr_39 [i_9] [i_9] &= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)48)) % ((~(((/* implicit */int) arr_35 [i_10 - 3] [i_10 - 3]))))));
            }
        } 
    } 
    var_24 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))));
}
