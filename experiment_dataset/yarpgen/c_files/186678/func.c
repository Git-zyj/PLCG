/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186678
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
    for (short i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            arr_5 [i_0] [i_0 - 2] [i_1] = ((/* implicit */unsigned long long int) (signed char)127);
            arr_6 [i_1] [i_1 - 1] [i_1 + 3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) arr_1 [i_1] [i_0 - 2])))));
            var_16 = var_14;
        }
        /* LoopSeq 1 */
        for (short i_2 = 3; i_2 < 8; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (short i_3 = 1; i_3 < 10; i_3 += 3) 
            {
                for (short i_4 = 2; i_4 < 7; i_4 += 1) 
                {
                    {
                        var_17 = ((/* implicit */signed char) ((arr_12 [i_3] [i_3] [i_2 - 1] [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : ((+(3228987868U)))));
                        arr_14 [i_0 + 3] [i_0 - 2] [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) (-(5148604716845238627ULL)));
                    }
                } 
            } 
            arr_15 [i_2 - 2] [i_0 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) || (((/* implicit */_Bool) 3228987896U))));
        }
        /* LoopSeq 3 */
        for (unsigned short i_5 = 2; i_5 < 8; i_5 += 2) 
        {
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) arr_9 [i_0 - 1] [i_5 + 1] [i_5])) != (3656528603U))))));
            var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_5] [i_5 + 1] [i_0 - 2])) ? (((/* implicit */long long int) arr_9 [i_5] [i_5 + 1] [i_0 - 1])) : (-8048678576388188618LL)));
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_5 + 1] [i_5 - 1])) ? (((/* implicit */int) arr_1 [i_5 - 1] [i_5])) : (((/* implicit */int) arr_16 [i_5 + 2] [i_5 - 1]))));
        }
        for (signed char i_6 = 1; i_6 < 10; i_6 += 2) 
        {
            var_21 = ((/* implicit */signed char) (_Bool)0);
            var_22 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)18157)) == (((/* implicit */int) ((((/* implicit */_Bool) (short)28672)) && (((/* implicit */_Bool) var_13)))))));
        }
        for (unsigned char i_7 = 3; i_7 < 8; i_7 += 3) 
        {
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (!((_Bool)1)))) / (((/* implicit */int) (unsigned short)24893))));
            /* LoopSeq 2 */
            for (unsigned char i_8 = 2; i_8 < 8; i_8 += 2) 
            {
                var_24 = ((/* implicit */unsigned short) arr_2 [i_7]);
                var_25 = ((/* implicit */short) ((signed char) var_6));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                /* LoopSeq 3 */
                for (signed char i_10 = 3; i_10 < 9; i_10 += 1) /* same iter space */
                {
                    arr_33 [i_10] [i_7] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-109)) * (((/* implicit */int) ((((/* implicit */int) arr_8 [i_7 + 3] [i_9] [i_10 + 2])) == (var_7))))));
                    var_26 = ((/* implicit */unsigned char) var_11);
                    var_27 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0 + 1]);
                    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (!(((/* implicit */_Bool) 8798832918889175393LL))))))))));
                }
                for (signed char i_11 = 3; i_11 < 9; i_11 += 1) /* same iter space */
                {
                    arr_38 [i_11 - 3] [i_11] [i_9] [i_7 - 3] [i_0 - 1] = ((/* implicit */signed char) (short)15384);
                    var_29 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)34284))) == (-8048678576388188641LL)));
                    var_30 = ((/* implicit */long long int) ((_Bool) ((arr_35 [i_0 + 1] [i_7 - 2] [i_11 - 3] [i_11]) != (((/* implicit */unsigned long long int) 1112561719U)))));
                }
                for (signed char i_12 = 3; i_12 < 9; i_12 += 1) /* same iter space */
                {
                    var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) var_4))));
                    /* LoopSeq 1 */
                    for (short i_13 = 2; i_13 < 9; i_13 += 3) 
                    {
                        arr_45 [i_0] [i_7] [i_9] [i_0 + 2] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((/* implicit */int) (unsigned char)36)) : (((/* implicit */int) arr_36 [i_12] [i_7 - 1] [i_7] [i_0 - 1] [i_0] [i_0]))));
                        var_32 = ((/* implicit */unsigned long long int) ((-8444105822374556539LL) == (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_13 - 1] [i_7 - 3])))));
                        var_33 = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) : (arr_17 [i_12] [i_0])));
                        var_34 = ((/* implicit */long long int) var_0);
                    }
                    var_35 = ((/* implicit */short) var_8);
                }
                arr_46 [i_0] [i_7 + 3] [i_9] = ((/* implicit */long long int) (+(((((/* implicit */int) var_12)) << (((((/* implicit */int) arr_28 [i_0 - 2] [i_7] [i_9])) - (175)))))));
                var_36 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_0 - 1]))) != (0U))) ? (((/* implicit */int) (_Bool)1)) : (((((((/* implicit */int) (signed char)-69)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)140)) - (122)))))));
            }
            var_37 = ((/* implicit */unsigned short) (signed char)122);
        }
        arr_47 [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_24 [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_0]))) : (3614605232734488960ULL)))));
    }
    var_38 = ((/* implicit */short) var_14);
    var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) var_8))));
}
