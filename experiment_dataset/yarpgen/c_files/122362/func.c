/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122362
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
    var_10 = ((/* implicit */unsigned char) (_Bool)0);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((arr_1 [i_0 + 1]) * (arr_1 [i_0 - 1]))) : (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1])))));
        var_12 = ((max((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1]))) < (((((/* implicit */_Bool) 3672155711U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0 - 1]))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) (signed char)-2)))))), (min((((/* implicit */unsigned long long int) (-(622811584U)))), (var_7)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_2 = 2; i_2 < 14; i_2 += 1) 
        {
            var_14 = ((/* implicit */_Bool) 12276111755356920880ULL);
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)27)))))));
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (((~(7727687874103432460LL))) / (arr_5 [i_3] [i_1 - 1] [i_3]))))));
                    arr_13 [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)237)) ? (3892778752U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4] [i_2])))))) + (var_8)));
                }
                for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_6 = 1; i_6 < 14; i_6 += 2) 
                    {
                        var_17 = -1393750389391795416LL;
                        var_18 = (signed char)107;
                        var_19 ^= arr_16 [i_1] [i_2] [i_3] [i_5];
                    }
                    var_20 ^= ((/* implicit */unsigned int) (-(18105611665916181788ULL)));
                }
            }
            /* LoopSeq 3 */
            for (unsigned char i_7 = 0; i_7 < 17; i_7 += 4) 
            {
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))));
                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_1 - 1])))))));
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) var_3))));
            }
            for (unsigned char i_8 = 2; i_8 < 13; i_8 += 3) 
            {
                arr_27 [i_2] [i_2 - 2] [i_1] [i_2] = ((/* implicit */signed char) ((unsigned int) arr_12 [i_2 - 2] [i_2] [i_2] [i_8] [i_2]));
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 17; i_9 += 2) 
                {
                    for (unsigned char i_10 = 1; i_10 < 13; i_10 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) arr_6 [i_1 - 1] [i_1 - 1] [i_1]))));
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */int) (signed char)98)) : (((/* implicit */int) var_9)))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned char) ((((arr_15 [i_8 - 1] [i_2 - 2] [i_1 - 1] [i_1 - 1]) + (9223372036854775807LL))) << (((((arr_32 [i_1] [i_1] [(unsigned char)0] [i_1 - 1] [i_2 - 2] [i_8 + 1]) + (2391613435074402618LL))) - (48LL)))));
            }
            for (unsigned int i_11 = 0; i_11 < 17; i_11 += 3) 
            {
                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-5)) == (((/* implicit */int) arr_26 [i_1 - 1] [(_Bool)1] [(signed char)2] [i_2])))))));
                arr_36 [8LL] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) : (arr_22 [i_1] [i_2 - 2] [8ULL])));
                var_28 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_2 + 1])) && (((/* implicit */_Bool) (unsigned char)32))));
                var_29 = ((/* implicit */signed char) arr_14 [(signed char)2] [i_2] [i_2 - 1] [i_11]);
            }
            var_30 = ((/* implicit */signed char) 6794528773055766728LL);
        }
    }
    for (unsigned int i_12 = 0; i_12 < 13; i_12 += 4) 
    {
        arr_39 [i_12] = ((/* implicit */signed char) ((max((arr_33 [i_12] [i_12] [i_12] [i_12]), (arr_33 [i_12] [i_12] [i_12] [i_12]))) / ((-(arr_33 [i_12] [i_12] [i_12] [i_12])))));
        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) max((min((var_7), (((/* implicit */unsigned long long int) (unsigned char)229)))), (((((11579054241045444528ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)83))))) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))))))))));
    }
}
