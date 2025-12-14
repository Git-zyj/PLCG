/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181552
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) * (((((/* implicit */_Bool) 3242386136U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)27))))))) : (var_16)));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 20; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            arr_4 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-72))))) ? ((-(2147483647))) : (((/* implicit */int) arr_0 [i_0 - 1]))))));
            var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) 722743708))))), ((short)812))))));
            var_19 = ((/* implicit */unsigned char) arr_3 [i_0] [i_1] [i_1]);
            var_20 = ((/* implicit */unsigned char) (-(max((3876190588826242007LL), (((/* implicit */long long int) (short)32767))))));
        }
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            var_21 ^= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_8 [i_0] [(short)2] [i_0 + 1])) ? (((/* implicit */int) arr_8 [i_0 + 2] [(signed char)8] [i_0 + 1])) : (((/* implicit */int) var_5))))));
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((unsigned char) (-(((/* implicit */int) arr_6 [i_0] [i_2] [i_0 + 1]))))))));
            var_23 = ((/* implicit */int) min((((/* implicit */unsigned int) (signed char)63)), (max((2147479552U), (((/* implicit */unsigned int) ((short) 16777215LL)))))));
            arr_9 [i_2] [(short)12] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */int) ((((((/* implicit */_Bool) 536870912U)) ? (var_12) : (((/* implicit */int) var_11)))) != (((/* implicit */int) var_7))))), (arr_1 [i_0])));
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 19; i_3 += 2) 
        {
            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) arr_7 [i_0 + 2] [i_0])) : (((long long int) var_16))));
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-22081)) ? (722743708) : (arr_1 [i_0 + 1])));
            arr_12 [i_3] [i_3] = ((/* implicit */unsigned int) (short)-13566);
        }
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_8))))))) ? (((/* implicit */long long int) max(((+(arr_7 [i_0 + 2] [i_0]))), ((+(((/* implicit */int) var_6))))))) : (min((((((/* implicit */_Bool) (short)10090)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-2476545297601253135LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_4)))))))));
        arr_13 [i_0] = min(((((((+(((/* implicit */int) (signed char)-106)))) + (2147483647))) << (((((((((/* implicit */_Bool) (signed char)58)) ? (-3631887069932522965LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))))) + (3631887069932522966LL))) - (1LL))))), ((-(((((/* implicit */_Bool) (short)29)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)10090)))))));
        /* LoopNest 2 */
        for (long long int i_4 = 1; i_4 < 19; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                {
                    var_27 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_3 [i_4 + 1] [i_4] [i_0 + 1])))), (((/* implicit */int) max((arr_3 [i_4 + 1] [i_4 + 1] [i_0 + 2]), ((short)(-32767 - 1)))))));
                    var_28 = ((/* implicit */unsigned char) (-((-((((_Bool)0) ? (722743708) : (((/* implicit */int) (unsigned char)77))))))));
                }
            } 
        } 
        var_29 = ((/* implicit */long long int) (short)14271);
    }
    /* vectorizable */
    for (short i_6 = 2; i_6 < 20; i_6 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            arr_26 [i_6] [(short)10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_6 + 2] [i_6 + 1] [i_6 + 2])) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) arr_2 [i_6 - 1] [i_6 - 1]))));
            arr_27 [i_6] [i_6] = ((/* implicit */short) (-(((/* implicit */int) (signed char)63))));
            arr_28 [i_7] [i_6] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_17 [i_6] [i_6] [i_6])) ? (((/* implicit */int) var_3)) : (337176242)))));
        }
        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_30 = ((/* implicit */signed char) (+(638706568U)));
                        var_31 |= ((/* implicit */unsigned char) ((int) arr_36 [i_6 - 1] [9U] [i_9] [i_10] [i_10]));
                        var_32 = ((/* implicit */unsigned int) ((long long int) var_0));
                        arr_37 [i_6] [i_8] [(unsigned char)7] [0LL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_6 - 1]))));
                    }
                } 
            } 
            var_33 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_11 [i_8])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_4))))));
            arr_38 [i_6] = ((int) ((long long int) (short)15875));
            arr_39 [i_6] [i_8] [i_8] = (-(((/* implicit */int) ((short) arr_19 [i_8]))));
        }
        arr_40 [i_6] [i_6] = 2159178640U;
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 22; i_11 += 4) 
        {
            for (signed char i_12 = 1; i_12 < 20; i_12 += 3) 
            {
                {
                    var_34 = ((/* implicit */signed char) (-(((/* implicit */int) arr_6 [i_6 + 1] [i_11] [4]))));
                    var_35 = ((unsigned char) (unsigned char)0);
                    var_36 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_11 [i_6 + 1]))));
                }
            } 
        } 
        var_37 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 622559491U))));
        var_38 = ((/* implicit */signed char) (unsigned char)3);
    }
    /* vectorizable */
    for (unsigned int i_13 = 0; i_13 < 23; i_13 += 1) 
    {
        var_39 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)208))));
        var_40 &= (-(((/* implicit */int) ((4128332372U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)122)))))));
    }
}
