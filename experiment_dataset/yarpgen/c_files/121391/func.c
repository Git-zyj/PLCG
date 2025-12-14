/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121391
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
    var_19 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)24))));
    var_20 = ((/* implicit */unsigned long long int) var_2);
    var_21 = ((/* implicit */unsigned long long int) var_12);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                var_22 = ((((/* implicit */int) arr_4 [i_0] [i_1])) < (((((/* implicit */_Bool) arr_3 [i_0] [(_Bool)1] [i_1 - 1])) ? (((/* implicit */int) arr_3 [i_0] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))));
                arr_5 [i_0] = ((/* implicit */signed char) ((_Bool) ((_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) var_10))))));
                arr_6 [i_1] [i_0] [i_0 + 2] = ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */long long int) arr_4 [i_0 - 1] [i_0])), (0LL)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11)))) > ((~(((/* implicit */int) ((signed char) arr_0 [i_0] [i_1])))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_2 = 3; i_2 < 11; i_2 += 4) 
    {
        arr_10 [i_2] [i_2] = ((long long int) arr_1 [i_2 - 2]);
        arr_11 [i_2] = ((signed char) arr_3 [10ULL] [i_2 - 3] [10ULL]);
    }
    for (signed char i_3 = 3; i_3 < 14; i_3 += 4) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */long long int) (unsigned char)96);
        arr_15 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3 - 1])) ? (((/* implicit */int) arr_13 [i_3])) : (((/* implicit */int) arr_13 [i_3 - 3]))))) ? (((((/* implicit */int) var_10)) + (((/* implicit */int) arr_13 [i_3])))) : (((/* implicit */int) arr_13 [i_3]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_4 = 3; i_4 < 17; i_4 += 2) 
        {
            /* LoopNest 3 */
            for (signed char i_5 = 1; i_5 < 17; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    for (signed char i_7 = 1; i_7 < 15; i_7 += 2) 
                    {
                        {
                            arr_26 [i_3 - 3] [i_3] [7] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)255))))) & (var_3)));
                            var_23 = ((/* implicit */short) ((arr_24 [i_4 - 1] [i_4 + 1] [i_4 - 3] [i_3] [2ULL]) - (arr_24 [(_Bool)1] [i_4 - 3] [i_4 - 3] [i_3] [i_3])));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_17 [1LL] [i_6] [i_3])))) == (((unsigned long long int) 0LL))));
                            arr_27 [i_3] [i_4 - 2] [i_5] [i_6] [i_7 - 1] [i_3] [i_7 + 3] = ((/* implicit */short) arr_23 [i_3] [i_7]);
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_21 [13LL] [(signed char)7] [i_3] [i_3 - 3] [i_4 - 3]))));
        }
        /* vectorizable */
        for (signed char i_8 = 0; i_8 < 18; i_8 += 4) 
        {
            arr_30 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (~((+(22LL)))));
            /* LoopNest 2 */
            for (long long int i_9 = 3; i_9 < 16; i_9 += 4) 
            {
                for (unsigned char i_10 = 0; i_10 < 18; i_10 += 1) 
                {
                    {
                        arr_35 [i_9] [i_3] [i_3] [i_3 + 4] = ((/* implicit */long long int) ((unsigned long long int) var_6));
                        arr_36 [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_28 [i_3 - 3] [i_9 + 1]))));
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 0; i_11 < 18; i_11 += 2) 
                        {
                            arr_39 [1LL] [i_3] [i_9] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) var_10)) == (((/* implicit */int) arr_25 [i_3 + 2] [i_9 - 3] [i_9] [i_9 - 1]))));
                            arr_40 [i_3] [i_3] [(signed char)10] [i_10] [i_11] = ((/* implicit */signed char) (~(((/* implicit */int) arr_25 [i_9 + 1] [i_8] [i_3 - 2] [i_3]))));
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_13 [i_3]))));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */int) arr_25 [i_8] [i_9 + 1] [i_10] [i_11])) > (((/* implicit */int) arr_25 [i_3] [i_8] [i_9 + 2] [7LL]))));
                        }
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        arr_44 [i_12] = ((/* implicit */signed char) ((_Bool) ((var_10) ? (((/* implicit */int) arr_16 [(unsigned char)12])) : (((/* implicit */int) arr_17 [(_Bool)1] [(_Bool)1] [(signed char)8])))));
        arr_45 [i_12] = ((/* implicit */signed char) ((long long int) arr_18 [4ULL] [i_12]));
        arr_46 [i_12] = ((/* implicit */unsigned int) var_0);
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        arr_50 [10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (((/* implicit */int) arr_28 [i_13] [i_13]))))) && (((/* implicit */_Bool) arr_32 [16LL] [6] [i_13] [12LL]))));
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_13] [i_13] [(_Bool)1])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-120)))))) && (((/* implicit */_Bool) max((arr_17 [i_13] [i_13] [14LL]), (arr_17 [i_13] [i_13] [(unsigned char)4]))))));
        /* LoopNest 2 */
        for (signed char i_14 = 1; i_14 < 16; i_14 += 4) 
        {
            for (unsigned char i_15 = 0; i_15 < 18; i_15 += 4) 
            {
                {
                    var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_13]))));
                    arr_58 [(signed char)15] [(signed char)3] [(_Bool)1] = ((/* implicit */long long int) arr_25 [(signed char)3] [1LL] [i_15] [1LL]);
                }
            } 
        } 
    }
}
