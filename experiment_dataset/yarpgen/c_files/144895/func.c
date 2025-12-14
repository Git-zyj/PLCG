/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144895
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
    var_17 = var_4;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */long long int) min((var_18), (var_9)));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (var_0) : (((/* implicit */unsigned int) (+((-(((/* implicit */int) var_11)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        for (signed char i_3 = 4; i_3 < 15; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        var_20 = ((/* implicit */signed char) (unsigned short)65535);
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 3; i_6 < 17; i_6 += 4) 
                        {
                            arr_18 [i_2] [i_2] [i_5] [i_5] [i_6] = ((/* implicit */signed char) (~(((/* implicit */int) ((var_4) && (((/* implicit */_Bool) (unsigned short)65535)))))));
                            arr_19 [(signed char)1] [(signed char)18] [i_4] [i_5] [i_5] = ((/* implicit */signed char) arr_17 [i_3 - 3] [i_6] [i_6 - 2] [i_6 - 2] [i_5]);
                        }
                    }
                    for (signed char i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        var_21 *= ((/* implicit */signed char) 3730117315631929747LL);
                        var_22 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_21 [i_7] [i_7]) ? (((/* implicit */int) (unsigned short)12988)) : (((/* implicit */int) arr_21 [i_2] [(signed char)3]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_2])), (arr_17 [(unsigned char)2] [i_3 - 2] [i_3 - 2] [i_7] [i_2]))))))) : (((((/* implicit */_Bool) arr_15 [i_3] [i_3 + 2] [i_3 + 2] [i_3 - 4] [i_3 + 3])) ? (((/* implicit */long long int) var_16)) : (588009926661586073LL)))));
                    }
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) min(((+((~(((/* implicit */int) arr_4 [i_2])))))), (max(((~(((/* implicit */int) (unsigned short)52547)))), (((/* implicit */int) ((arr_15 [i_2] [i_2] [i_3 + 3] [(unsigned char)13] [i_4]) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)92)))))))))))));
                    /* LoopSeq 4 */
                    for (signed char i_8 = 0; i_8 < 19; i_8 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_22 [12U] [i_3 - 2] [i_8]))))) > ((-(((/* implicit */int) (unsigned short)52548))))))))))));
                        var_25 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_23 [i_2])) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) arr_25 [i_2] [i_3] [i_3 + 1] [i_4] [i_4] [i_3 + 1])))) > ((-(1905446693))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 4294967289U)) && (((/* implicit */_Bool) 329152689U)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4])) ? (var_6) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_6)) : (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)147)))))));
                        var_26 ^= ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) > (((((/* implicit */_Bool) min((3068656170U), (arr_16 [i_2])))) ? (((/* implicit */int) arr_6 [16U])) : (((/* implicit */int) (signed char)-122))))));
                        var_27 = ((/* implicit */signed char) (~((+(((/* implicit */int) var_7))))));
                    }
                    for (signed char i_9 = 0; i_9 < 19; i_9 += 2) /* same iter space */
                    {
                        arr_29 [i_2] [i_3 - 1] [i_4] [(_Bool)1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)52547)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)0))));
                        arr_30 [i_2] [i_3 - 3] [i_3 - 3] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_2] [i_3 + 2] [i_4] [i_9] [i_3 + 3])) && (((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (signed char)88))))));
                        var_28 = ((/* implicit */unsigned char) (-((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (2180282165513201308LL)))));
                        var_29 -= (+((-(var_0))));
                    }
                    for (signed char i_10 = 0; i_10 < 19; i_10 += 2) /* same iter space */
                    {
                        var_30 += ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) -1587483377)) && (var_5))) && (((/* implicit */_Bool) (signed char)-1)))) ? ((+(((((/* implicit */_Bool) arr_6 [i_4])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)224)))))) : (((/* implicit */int) (signed char)105))));
                        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [(signed char)2] [i_3 + 3] [i_3] [i_10]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_26 [(unsigned char)6] [i_3 + 2] [i_3 + 2] [i_10]))))) && (((/* implicit */_Bool) var_16)))))) : (var_0)));
                    }
                    for (signed char i_11 = 0; i_11 < 19; i_11 += 2) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) (unsigned char)27)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_3 + 4] [i_3 + 3] [i_3 - 3] [i_11] [i_11])))))));
                        arr_36 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (((+(arr_28 [(signed char)13] [(signed char)13] [(unsigned char)5] [(signed char)13] [i_11]))) > (((/* implicit */int) var_11)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_12 = 0; i_12 < 19; i_12 += 4) 
                        {
                            arr_39 [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) (signed char)-83);
                            arr_40 [(unsigned short)2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned short)52547)) : (((/* implicit */int) (unsigned short)46872))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)58035)) > (((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) (unsigned short)65513)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)65520))))));
                            arr_41 [i_2] [i_3] [i_4] [i_11] [i_2] [i_12] [i_2] = var_7;
                        }
                    }
                }
            } 
        } 
    } 
}
