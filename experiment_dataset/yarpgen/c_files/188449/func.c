/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188449
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
    var_17 = ((((/* implicit */long long int) (((!(var_3))) ? (((/* implicit */int) ((var_9) || (((/* implicit */_Bool) var_14))))) : (((/* implicit */int) var_14))))) == (var_0));
    var_18 = ((/* implicit */int) ((((((var_13) ^ (((/* implicit */long long int) ((/* implicit */int) var_9))))) % (max((-1LL), (var_12))))) >> (((((unsigned int) (+(var_7)))) - (1102557485U)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (int i_3 = 1; i_3 < 18; i_3 += 2) 
                {
                    {
                        arr_11 [i_3 - 1] [i_2] [i_1] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)9))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-21LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))))));
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) -2LL)) >= (var_4))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_0)))) : (var_7))))));
                        var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_4)))) ? (((/* implicit */int) (!(var_3)))) : (((/* implicit */int) var_14))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            arr_15 [i_4] [i_0] &= ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_7))) >= (((/* implicit */unsigned long long int) ((-24LL) | (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_2);
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_15))));
            /* LoopNest 2 */
            for (long long int i_5 = 2; i_5 < 19; i_5 += 4) 
            {
                for (signed char i_6 = 2; i_6 < 19; i_6 += 1) 
                {
                    {
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_14)))))));
                        var_23 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)255))));
                    }
                } 
            } 
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            arr_27 [i_7] [i_0] [i_0] = ((/* implicit */signed char) var_4);
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_6))) && (((/* implicit */_Bool) ((var_5) ? (var_0) : (var_0))))));
            arr_28 [i_0] [i_0] &= ((/* implicit */unsigned long long int) var_13);
            /* LoopSeq 3 */
            for (unsigned short i_8 = 1; i_8 < 17; i_8 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    for (signed char i_10 = 1; i_10 < 19; i_10 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */int) var_7);
                            var_26 &= ((/* implicit */int) (~(((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (12U)))));
                            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((var_0) >= (var_12))))));
                            arr_35 [i_0] [i_8] [i_8] [i_0] [i_10] [i_10] &= ((/* implicit */unsigned int) ((((var_12) + (9223372036854775807LL))) >> (((var_15) - (4164936652U)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_11 = 4; i_11 < 18; i_11 += 1) 
                {
                    arr_40 [i_11] [i_0] [i_0] [(short)12] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) var_16)))));
                    arr_41 [i_0] [i_7] [i_0] = ((/* implicit */signed char) (((_Bool)1) && (((/* implicit */_Bool) var_15))));
                }
                var_28 &= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) >= (var_16))) ? (((/* implicit */int) var_3)) : ((+(((/* implicit */int) var_2))))));
            }
            for (unsigned short i_12 = 1; i_12 < 17; i_12 += 2) /* same iter space */
            {
                arr_44 [i_0] [i_7] [i_0] [i_7 - 1] &= ((var_16) >> (((var_15) - (4164936633U))));
                var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((var_3) ? (((var_13) | (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 292738671)) || (((/* implicit */_Bool) var_11)))))))))));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (0U))) << (((((unsigned long long int) var_12)) - (17713906400140143799ULL))))))));
                var_31 &= ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)57866)) : (((/* implicit */int) var_3))));
            }
        }
        for (int i_14 = 0; i_14 < 20; i_14 += 1) 
        {
            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (var_11))))))));
            arr_49 [i_0] &= ((unsigned long long int) var_0);
            var_33 &= ((/* implicit */long long int) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_5))));
        }
        arr_50 [i_0] &= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (var_3))))));
        var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((var_13) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_15)))))))));
    }
    /* vectorizable */
    for (unsigned int i_15 = 0; i_15 < 18; i_15 += 4) /* same iter space */
    {
        arr_54 [i_15] &= ((((/* implicit */_Bool) var_6)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))));
        var_35 = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_2))));
    }
    for (unsigned int i_16 = 0; i_16 < 18; i_16 += 4) /* same iter space */
    {
        arr_58 [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)114)) || (((/* implicit */_Bool) (unsigned short)224)))))) ^ ((~(var_0)))))) && (((/* implicit */_Bool) (signed char)-107))));
        arr_59 [i_16] &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_5)))))) != (((var_0) | (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
    }
}
