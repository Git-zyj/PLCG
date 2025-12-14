/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181038
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
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    var_15 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2] [i_0 - 3])) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_1 + 2])) : (((/* implicit */int) (signed char)63)))));
                    arr_6 [i_0] = ((/* implicit */signed char) ((_Bool) arr_5 [i_0] [i_0 + 2] [i_0]));
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) 9223372036854775807LL))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_17 = (~(((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_8 [i_0 + 2] [i_0] [i_3])) : (12619831512798601705ULL)))));
                    var_18 = ((/* implicit */_Bool) max(((-(var_4))), (((/* implicit */long long int) arr_1 [i_0 + 1] [i_0]))));
                    arr_9 [i_0] [i_1 - 1] [i_1 - 1] &= ((/* implicit */int) (signed char)63);
                }
                for (int i_4 = 4; i_4 < 9; i_4 += 4) 
                {
                    var_19 = ((/* implicit */_Bool) arr_5 [i_0 + 1] [i_1] [i_1 + 1]);
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) / (((/* implicit */int) ((unsigned char) arr_8 [i_4 + 1] [i_1 + 3] [i_0 - 1])))));
                }
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [i_0 - 4] [i_0 - 2] [i_0 + 1] [i_0 - 1])) ? ((+(((/* implicit */int) (signed char)-63)))) : ((-(((/* implicit */int) arr_7 [i_0 - 2] [i_0])))))) >= ((-(((/* implicit */int) (short)14720)))))))));
            }
        } 
    } 
    var_22 |= ((/* implicit */long long int) (+(((((/* implicit */_Bool) (-(var_14)))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) 7424528531909211352ULL)) ? (((/* implicit */int) var_5)) : (1917837750)))))));
    /* LoopSeq 4 */
    for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                {
                    var_23 ^= ((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_5] [i_5]))));
                    var_24 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) (!(((/* implicit */_Bool) 12619831512798601726ULL))))))), (((/* implicit */int) var_12))));
                }
            } 
        } 
        var_25 = ((/* implicit */_Bool) max((var_25), (arr_13 [i_5] [i_5])));
        var_26 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_19 [0LL] [i_5]))))), (((((/* implicit */_Bool) (signed char)62)) ? ((-(7424528531909211363ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)52)))))))));
        arr_20 [i_5] [i_5] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)123))) < (7424528531909211352ULL)))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (-8437437516091619186LL) : (6822587715529681136LL)))));
    }
    for (long long int i_8 = 1; i_8 < 16; i_8 += 4) 
    {
        var_27 += ((unsigned long long int) ((signed char) arr_14 [i_8] [i_8 - 1]));
        var_28 = ((/* implicit */long long int) min((((/* implicit */short) (signed char)123)), ((short)-14719)));
        var_29 = arr_22 [i_8] [i_8];
    }
    /* vectorizable */
    for (unsigned char i_9 = 1; i_9 < 20; i_9 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_10 = 0; i_10 < 24; i_10 += 4) 
        {
            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_9] [i_9] [i_10]))))) ? (((/* implicit */long long int) 3169179053U)) : ((+(6154139058561289757LL)))));
            arr_28 [i_9] [i_9 + 4] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_9 + 2] [i_9 + 2])) ? (((/* implicit */int) arr_18 [i_9 + 2] [i_9 + 2])) : (((/* implicit */int) arr_18 [i_9 + 2] [i_9 + 2]))));
            var_31 = ((((/* implicit */_Bool) var_9)) ? (arr_16 [i_9 + 1]) : (arr_16 [i_9 - 1]));
        }
        for (int i_11 = 0; i_11 < 24; i_11 += 4) 
        {
            var_32 = ((/* implicit */short) (!(((((/* implicit */_Bool) arr_29 [i_9] [i_9])) && (((/* implicit */_Bool) (unsigned short)38972))))));
            arr_33 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_9] [i_11]))))) ? (((/* implicit */long long int) ((int) arr_30 [i_9] [i_9]))) : (((long long int) (short)14719))));
        }
        var_33 = ((/* implicit */unsigned short) (~(arr_23 [i_9 - 1])));
        /* LoopSeq 1 */
        for (signed char i_12 = 0; i_12 < 24; i_12 += 4) 
        {
            var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) var_10))));
            var_35 = ((/* implicit */signed char) ((((/* implicit */int) arr_32 [i_9 + 2])) - (((/* implicit */int) arr_32 [i_9 + 2]))));
        }
    }
    /* vectorizable */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_36 &= (-(arr_38 [i_13] [i_13]));
        var_37 -= ((/* implicit */signed char) (-(1125788257U)));
        /* LoopNest 3 */
        for (long long int i_14 = 0; i_14 < 25; i_14 += 3) 
        {
            for (long long int i_15 = 0; i_15 < 25; i_15 += 4) 
            {
                for (unsigned short i_16 = 1; i_16 < 22; i_16 += 3) 
                {
                    {
                        var_38 = ((/* implicit */unsigned char) (signed char)-80);
                        var_39 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-63)) ? (((((/* implicit */int) (short)(-32767 - 1))) & (arr_38 [i_13] [i_14]))) : (((/* implicit */int) (short)-1))));
                        /* LoopSeq 1 */
                        for (short i_17 = 0; i_17 < 25; i_17 += 2) 
                        {
                            var_40 = ((/* implicit */short) (~(var_13)));
                            var_41 = arr_46 [i_16 + 1] [i_16 + 1] [i_16 + 2] [i_16 + 2];
                            var_42 = ((/* implicit */short) 9223372036854775807LL);
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_18 = 0; i_18 < 25; i_18 += 3) 
        {
            for (unsigned char i_19 = 0; i_19 < 25; i_19 += 3) 
            {
                for (unsigned long long int i_20 = 0; i_20 < 25; i_20 += 4) 
                {
                    {
                        var_43 = ((/* implicit */short) arr_43 [i_20] [i_19] [i_13]);
                        var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)31)) || (((/* implicit */_Bool) arr_57 [i_13] [i_20]))));
                        var_45 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
                    }
                } 
            } 
        } 
    }
    var_46 = ((/* implicit */unsigned char) var_13);
}
