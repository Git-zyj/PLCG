/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186087
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
    for (signed char i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 3; i_3 < 9; i_3 += 3) 
                    {
                        arr_11 [i_1 - 1] [i_1 - 1] [i_1] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_10 [i_0 - 2] [i_1 - 1] [i_2 - 3] [i_3 + 1]))));
                        var_12 = ((/* implicit */unsigned long long int) (-(-9)));
                        var_13 += ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_8 [i_0] [2] [(unsigned char)8] [(short)10]))))));
                        arr_12 [i_0] [(signed char)4] = ((/* implicit */short) ((signed char) ((int) arr_4 [i_3] [(short)2] [i_1])));
                        arr_13 [2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-40)) ? (562949953421312LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (_Bool)1))))))));
                        arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-2147483647 - 1));
                        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((arr_15 [i_2] [(signed char)4] [i_1] [i_1] [i_1] [i_1 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [10LL] [10LL])))))) : (arr_2 [i_1] [i_2]))))));
                        arr_17 [(_Bool)1] [i_0] [2LL] [i_2] = ((/* implicit */_Bool) arr_9 [i_0]);
                        arr_18 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (!((_Bool)1)))) ^ (((/* implicit */int) arr_3 [i_1] [i_2] [(unsigned char)10]))));
                    }
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((unsigned long long int) 18259892254909460061ULL)))));
                        /* LoopSeq 3 */
                        for (long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            arr_25 [7U] [i_1] [i_0] [i_5] [2ULL] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) (signed char)-7))));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-((((_Bool)0) ? (3627701226U) : (1674451930U)))));
                        }
                        for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 1) 
                        {
                            arr_29 [i_0] [i_0] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8243526419327697357ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))))));
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_1 + 1] [i_0 + 3] [i_0] [i_0])) | (((/* implicit */int) arr_0 [i_0] [i_0]))));
                            arr_30 [i_0] [(unsigned char)6] [i_0] [i_5] |= ((/* implicit */unsigned int) ((long long int) ((18240332327147105565ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)114))))));
                            var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_24 [i_7] [i_7] [i_7] [i_5] [i_7] [i_5 - 1] [i_7]))));
                        }
                        for (long long int i_8 = 3; i_8 < 7; i_8 += 3) 
                        {
                            var_19 = (+(((/* implicit */int) ((unsigned short) 2190433320960ULL))));
                            arr_34 [i_0] [i_5] [i_2 + 1] [(unsigned char)3] [i_0] = ((/* implicit */long long int) ((signed char) 252947117U));
                            var_20 = (unsigned short)52474;
                        }
                        var_21 ^= arr_19 [i_2] [(short)6] [i_2 - 2] [8ULL] [(short)6] [i_0];
                    }
                    arr_35 [i_0] = ((/* implicit */unsigned int) (unsigned char)68);
                }
            } 
        } 
        arr_36 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28))) * (var_4)))) ? ((+(arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        arr_37 [i_0] = ((/* implicit */short) 68719476735ULL);
    }
    var_22 = ((/* implicit */int) var_8);
}
