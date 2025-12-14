/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17320
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
    var_11 = ((/* implicit */long long int) ((unsigned char) ((var_4) ? (((/* implicit */int) var_7)) : (-166391985))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)31)), (arr_3 [i_0])))) ? ((+(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_0 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_12 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */int) ((unsigned short) (~(0U))));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        arr_17 [i_0] [i_1] [i_2] [(_Bool)1] = ((/* implicit */short) var_9);
                        var_12 = ((/* implicit */unsigned char) ((unsigned short) arr_1 [i_0]));
                    }
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_2] [i_2] [i_1] [i_2]))) + (8U)))))) ? (((/* implicit */int) ((short) ((-4881164476153603637LL) > (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [(unsigned char)15] [i_0]))))))) : (((/* implicit */int) var_5))));
                        var_13 = ((/* implicit */unsigned int) ((long long int) 93216699));
                        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) (unsigned short)0)))))) >= (((unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_10 [i_4])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            var_15 = ((/* implicit */_Bool) (-(arr_20 [i_0] [i_1] [i_1] [i_2] [i_4] [i_5])));
                            arr_24 [3] [i_1] [i_2] [i_2] [i_5] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1] [i_2])) ? (arr_20 [i_5] [i_4] [i_2] [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) 3898703557U))));
                            var_16 = ((/* implicit */short) ((0) == (((((/* implicit */int) arr_10 [i_2])) / (((/* implicit */int) var_10))))));
                            arr_25 [i_2] = ((/* implicit */unsigned char) (-(((long long int) var_0))));
                            var_17 = ((/* implicit */unsigned short) (-(arr_11 [i_0] [i_1] [i_5])));
                        }
                    }
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) /* same iter space */
                    {
                        arr_28 [i_0] [i_2] [i_2] [(unsigned short)2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((_Bool) (signed char)72))), (arr_20 [i_0] [i_0] [i_1] [i_1] [i_2] [i_6])));
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((9559295871034225903ULL), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */int) (short)-22301)) : (((int) arr_18 [i_2] [i_1] [i_2] [i_6]))))) ? (((((/* implicit */_Bool) ((arr_26 [i_0] [i_6] [i_2] [i_6]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(unsigned short)8] [i_0] [i_0])))))) ? (((((/* implicit */_Bool) 16777215ULL)) ? (((/* implicit */int) (unsigned char)104)) : (654133941))) : (((/* implicit */int) ((_Bool) arr_10 [(short)5]))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_11 [i_0] [i_1] [i_1]))) || (((/* implicit */_Bool) (unsigned short)47361)))))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_7 = 2; i_7 < 16; i_7 += 3) 
        {
            arr_33 [i_7] = ((/* implicit */unsigned char) arr_11 [i_0] [(short)18] [i_7]);
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 13U)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_3 [i_0]))), (((/* implicit */long long int) (short)-1))))) ? (max((((732066497) * (((/* implicit */int) arr_0 [i_0] [i_7 - 1])))), (((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_7] [i_7])) : (((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -9080201556399404782LL)) ? (((/* implicit */int) arr_18 [i_0] [i_7 + 3] [i_0] [i_0])) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)22300))))));
        }
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_38 [i_8] = ((((/* implicit */_Bool) arr_34 [i_8])) ? (((/* implicit */long long int) 654133936)) : (((long long int) ((((/* implicit */_Bool) arr_36 [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (4294967272U)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 3) 
        {
            var_20 = (i_8 % 2 == zero) ? (((((((((/* implicit */_Bool) var_3)) ? (arr_37 [i_9] [i_9]) : (((/* implicit */int) arr_39 [i_8] [i_9])))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_40 [i_8])) ? (((/* implicit */int) arr_39 [i_8] [i_8])) : (((/* implicit */int) arr_40 [i_9])))) + (931))))) : (((((((((/* implicit */_Bool) var_3)) ? (arr_37 [i_9] [i_9]) : (((/* implicit */int) arr_39 [i_8] [i_9])))) + (2147483647))) >> (((((((((/* implicit */_Bool) arr_40 [i_8])) ? (((/* implicit */int) arr_39 [i_8] [i_8])) : (((/* implicit */int) arr_40 [i_9])))) + (931))) + (7132)))));
            var_21 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_39 [i_8] [i_9])) : (((/* implicit */int) arr_34 [i_8])))));
            var_22 = ((unsigned long long int) ((((/* implicit */int) arr_40 [i_8])) > (arr_37 [i_8] [6ULL])));
        }
        arr_41 [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)12))))) ? (((/* implicit */int) (unsigned char)31)) : ((~(((/* implicit */int) (short)28949)))))) - (((int) ((((/* implicit */_Bool) (unsigned short)24576)) ? (2097152ULL) : (((/* implicit */unsigned long long int) var_2)))))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((((/* implicit */int) arr_0 [i_10] [i_10])) | (((/* implicit */int) (short)12482))))))), (((((/* implicit */_Bool) arr_40 [i_10])) ? (-9080201556399404782LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
        /* LoopNest 3 */
        for (signed char i_11 = 2; i_11 < 16; i_11 += 2) 
        {
            for (unsigned char i_12 = 0; i_12 < 18; i_12 += 3) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        arr_50 [i_11 + 1] [i_11 + 1] [i_13] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-12483))) ^ (max((((/* implicit */unsigned int) arr_8 [i_11] [i_11])), (24U)))));
                        arr_51 [i_13] [i_10] [i_12] [i_10] [i_10] = ((/* implicit */unsigned int) ((signed char) arr_5 [i_10] [i_10]));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_22 [i_10] [i_10] [i_12] [i_13] [i_13] [i_13] [i_13])), ((unsigned short)40971))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 4294967286U)))) + (max((((/* implicit */unsigned int) (unsigned char)202)), (3249587592U)))))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */int) ((_Bool) ((short) arr_27 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])));
    }
    /* vectorizable */
    for (unsigned short i_14 = 0; i_14 < 13; i_14 += 1) 
    {
        var_26 = ((/* implicit */int) ((signed char) (_Bool)1));
        var_27 = 225336050;
    }
}
