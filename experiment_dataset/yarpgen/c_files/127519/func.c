/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127519
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
    var_11 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (_Bool)1)), (((unsigned long long int) var_5))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */int) var_3);
                    arr_8 [i_0] [i_0] [i_1] = ((/* implicit */signed char) arr_0 [i_0]);
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34329)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) (_Bool)1)) : (var_8)));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_0 + 2])) ? (((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_6 [i_0 + 2] [i_0 - 1] [i_0 + 2])))), ((-(((/* implicit */int) (signed char)41))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            var_14 = ((/* implicit */signed char) ((((/* implicit */int) var_10)) < (((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_3]))))));
            var_15 = arr_10 [i_3];
        }
        for (unsigned char i_4 = 4; i_4 < 21; i_4 += 1) 
        {
            var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned int) max((((/* implicit */int) arr_2 [i_4 - 3] [i_4])), (var_8)))) != (((((/* implicit */_Bool) 3304349239467855440LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24854))) : (3312646424U)))));
            var_17 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_4] [i_4] [i_0 + 1])) > (((/* implicit */int) arr_7 [i_0] [(short)13] [i_0] [i_0 + 2])))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)10))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (2248099289U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))))));
            var_18 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) arr_11 [i_0 + 1]))) <= (((/* implicit */int) arr_14 [i_0] [i_4] [i_0]))));
        }
        /* LoopSeq 3 */
        for (unsigned short i_5 = 3; i_5 < 20; i_5 += 1) 
        {
            arr_19 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)115))))), (max((arr_0 [i_0]), (arr_0 [i_0])))));
            arr_20 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11280))) : (var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_16 [i_0] [i_0]), (arr_16 [i_5 - 1] [i_0]))))) : (((((/* implicit */_Bool) (unsigned short)57717)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3060))) : (arr_11 [i_5 + 2])))));
        }
        for (unsigned char i_6 = 3; i_6 < 22; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) ((_Bool) (~(arr_0 [i_0]))));
                        var_20 = ((/* implicit */short) arr_5 [i_0]);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    for (unsigned short i_11 = 1; i_11 < 20; i_11 += 2) 
                    {
                        {
                            arr_34 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) min((var_4), (arr_12 [i_9])))), (arr_17 [i_6] [i_11]))))));
                            var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)14)))))) : (((/* implicit */int) var_5))));
                            arr_35 [i_0] [i_6] [i_0] [i_0] [i_11] [i_9] [i_11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_7 [i_11] [i_10] [i_6 - 3] [i_0 - 1])) : (((/* implicit */int) (unsigned char)112)))))));
                            arr_36 [i_11] [i_11] [i_0] [i_0] [i_6] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */int) (_Bool)1)) >> (((var_0) - (3677755168U))))), (((int) (unsigned short)7814))));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (_Bool)0))) ? (((/* implicit */int) arr_5 [i_0])) : (((((/* implicit */_Bool) arr_3 [i_0 + 2])) ? (((/* implicit */int) arr_31 [(unsigned short)10] [i_6 + 1] [i_0])) : (((/* implicit */int) arr_31 [i_11] [i_6 - 2] [i_0]))))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */signed char) max((((int) (unsigned char)143)), (((/* implicit */int) (signed char)22))));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 24; i_12 += 4) 
            {
                for (unsigned short i_13 = 3; i_13 < 21; i_13 += 1) 
                {
                    for (unsigned char i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        {
                            arr_44 [i_14] [20ULL] [i_14] [i_14] [i_6] [i_0] &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_12])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_14]))))), (((/* implicit */unsigned long long int) ((arr_29 [i_12] [i_0 - 1] [i_0 + 1] [i_0 - 1]) >= (-3304349239467855447LL))))));
                            arr_45 [i_0] [i_12] [i_0] = ((/* implicit */unsigned long long int) ((int) max(((signed char)-120), ((signed char)-126))));
                            arr_46 [i_14] [i_14] [i_0] [i_14] = max((max((min((((/* implicit */unsigned long long int) (unsigned short)57722)), (var_6))), (((/* implicit */unsigned long long int) 3839865562U)))), (min((((/* implicit */unsigned long long int) var_4)), (var_9))));
                        }
                    } 
                } 
            } 
            var_24 -= ((/* implicit */unsigned short) max((((2249564977U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_6 - 2] [i_6 + 1] [i_6 + 1]))))), (((_Bool) arr_23 [(signed char)0]))));
        }
        for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (int i_17 = 1; i_17 < 20; i_17 += 2) 
                {
                    {
                        var_25 += min((max((((/* implicit */short) arr_37 [i_0] [i_15] [(unsigned short)13] [i_0])), (var_3))), (((/* implicit */short) max((arr_37 [i_0] [(signed char)5] [i_16] [i_17]), (arr_37 [i_0 - 1] [i_15] [i_16] [i_17])))));
                        var_26 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15013577834867989408ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (3839865574U)))), (((unsigned long long int) max((((/* implicit */signed char) var_2)), (var_1))))));
                        var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_0] [i_15] [i_16])))))))));
                        var_28 = ((/* implicit */signed char) var_7);
                    }
                } 
            } 
            arr_56 [i_0] [i_0] [i_0] = ((/* implicit */short) (unsigned char)143);
        }
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        var_29 += ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) arr_16 [i_18] [(signed char)18])), (28ULL)))));
        arr_59 [i_18] = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) max((arr_7 [i_18] [i_18] [i_18] [i_18]), ((_Bool)0)))) != (max((arr_52 [6LL] [6LL]), (var_8)))))), (max((((/* implicit */int) arr_6 [i_18] [i_18] [i_18])), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) var_10))))))));
        arr_60 [i_18] = ((/* implicit */signed char) (!(((((/* implicit */int) arr_37 [i_18] [i_18] [i_18] [i_18])) == (((/* implicit */int) arr_37 [i_18] [i_18] [i_18] [i_18]))))));
    }
    var_30 = ((/* implicit */short) var_1);
    /* LoopSeq 1 */
    for (unsigned int i_19 = 2; i_19 < 22; i_19 += 2) 
    {
        arr_63 [(short)15] [i_19] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_19 - 1] [i_19] [i_19])) ? (((/* implicit */int) arr_24 [i_19 - 2] [(unsigned char)8] [i_19])) : (((/* implicit */int) (_Bool)1))))));
        var_31 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)34)) ? (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), (((_Bool) var_8)))))) : (max((-3304349239467855437LL), (((/* implicit */long long int) arr_40 [i_19 + 1]))))));
    }
    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_1))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_6))) ? (((((/* implicit */int) var_7)) / (var_8))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_10)))))))));
}
