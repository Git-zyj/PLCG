/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10374
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
    var_11 = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)7837))))))), ((!(((/* implicit */_Bool) ((var_5) >> (((((/* implicit */int) (unsigned short)57698)) - (57679))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (unsigned int i_3 = 1; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */long long int) (~((~(((var_9) + (((/* implicit */int) var_6))))))));
                        var_13 = ((/* implicit */unsigned long long int) (~((~((~(((/* implicit */int) var_6))))))));
                        var_14 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) 2147483630)))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (-((+(var_1))))))));
            /* LoopSeq 3 */
            for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((((-(473554255))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                arr_16 [i_0] [i_0] [i_4] [i_5] = (((~(((/* implicit */int) arr_4 [i_0] [i_4] [i_5] [i_5])))) - (((/* implicit */int) (!(((/* implicit */_Bool) -1342654781))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)20555)) << (((var_9) + (1291168736))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57698))))))))));
                            arr_22 [i_0] [12LL] [16LL] [i_0] [i_6] [i_0] [(unsigned short)7] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_10))))));
                            arr_23 [i_6] [(unsigned short)16] [i_5] [6] [i_7] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [16ULL] [i_6])) <= (var_10))))) | ((~(arr_21 [i_0] [i_0] [13LL] [i_0] [i_0]))));
                        }
                    } 
                } 
            }
            for (unsigned short i_8 = 1; i_8 < 18; i_8 += 3) 
            {
                /* LoopSeq 1 */
                for (long long int i_9 = 0; i_9 < 19; i_9 += 2) 
                {
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (-((~(((/* implicit */int) var_6)))))))));
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 19; i_10 += 3) 
                    {
                        var_18 &= ((/* implicit */unsigned char) (~((~(((/* implicit */int) (unsigned short)44989))))));
                        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_8] [i_8] [i_4])))))));
                    }
                    arr_33 [i_0] [i_4] [i_8] [i_4] = ((/* implicit */long long int) (-((~(((/* implicit */int) arr_29 [16U] [2LL] [i_8] [i_8] [6ULL] [i_9]))))));
                    arr_34 [i_0] [i_4] [i_8] = ((/* implicit */unsigned long long int) (-((-(var_9)))));
                }
                var_20 -= ((/* implicit */long long int) ((((/* implicit */int) ((var_9) >= (var_5)))) << (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_8] [i_0])))))));
                var_21 = ((/* implicit */long long int) (~((~(var_9)))));
                /* LoopSeq 1 */
                for (long long int i_11 = 4; i_11 < 18; i_11 += 2) 
                {
                    /* LoopSeq 4 */
                    for (short i_12 = 0; i_12 < 19; i_12 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */int) max((var_22), ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                        var_23 ^= (~(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))));
                        arr_40 [i_0] [i_0] [i_0] [i_8] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_8] [i_8] [10ULL] [i_8]))))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_8] [i_4] [i_8] [i_8])))))));
                        var_24 = ((/* implicit */int) (!(((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_32 [i_0] [i_4] [i_8] [i_8] [i_12]))))));
                    }
                    for (short i_13 = 0; i_13 < 19; i_13 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_38 [i_4])))))));
                        arr_43 [i_0] [i_8] = (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)41165))))));
                        arr_44 [(unsigned short)6] [i_8] [8] [i_11] [i_13] [1] = ((/* implicit */int) ((((/* implicit */int) ((var_2) < (((/* implicit */long long int) var_3))))) > ((~(((/* implicit */int) arr_18 [i_0] [(unsigned short)11] [i_0] [i_8] [i_8]))))));
                        arr_45 [i_0] [i_8] [(unsigned short)17] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(arr_24 [i_8] [i_4]))))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 19; i_14 += 1) 
                    {
                        arr_49 [18] [i_8] [i_11] = ((/* implicit */int) (~(((((/* implicit */long long int) ((/* implicit */int) arr_4 [16] [i_11] [i_8] [i_11]))) - (arr_47 [i_0] [i_8] [i_8] [(unsigned char)16] [i_11] [18LL])))));
                        arr_50 [i_0] [i_8] [i_8] [1U] [i_11] [i_14] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (unsigned short)7105))))));
                        arr_51 [i_8] [i_8] [i_8] [i_11] [i_14] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                    }
                    for (int i_15 = 0; i_15 < 19; i_15 += 2) 
                    {
                        arr_56 [(unsigned short)18] [i_4] [i_8 - 1] [i_4] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_0] [i_0] [1] [i_11] [i_15])) && (((/* implicit */_Bool) arr_8 [i_8] [i_4] [i_4] [i_4]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_8] [i_4] [i_0] [i_11])))))));
                        arr_57 [i_0] [3LL] [i_8] [i_11] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_7))))));
                        var_26 += ((/* implicit */long long int) (+((-(-361599987)))));
                    }
                    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */unsigned int) (~(473554245)))) ^ ((+(2173447798U))))))));
                }
            }
            for (long long int i_16 = 0; i_16 < 19; i_16 += 1) 
            {
                arr_60 [2] [i_4] [i_16] = ((/* implicit */short) (-(((/* implicit */int) ((var_2) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65518))))))));
                var_28 = (+((~(arr_32 [i_0] [i_4] [i_16] [i_16] [(short)7]))));
            }
        }
        for (unsigned short i_17 = 0; i_17 < 19; i_17 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_18 = 0; i_18 < 19; i_18 += 1) 
            {
                for (int i_19 = 0; i_19 < 19; i_19 += 4) 
                {
                    {
                        arr_71 [i_19] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                        var_29 += ((/* implicit */unsigned long long int) min(((+((+(var_10))))), (min(((~(((/* implicit */int) var_8)))), ((-(-2147483620)))))));
                    }
                } 
            } 
            var_30 = ((/* implicit */unsigned short) (~((+(max((((/* implicit */unsigned int) arr_70 [i_0] [i_0] [i_0] [i_17] [i_17])), (3778485854U)))))));
        }
        for (int i_20 = 0; i_20 < 19; i_20 += 3) 
        {
            arr_74 [11ULL] [i_20] [11ULL] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)174)), (var_0)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
            /* LoopNest 3 */
            for (int i_21 = 0; i_21 < 19; i_21 += 4) 
            {
                for (unsigned int i_22 = 0; i_22 < 19; i_22 += 4) 
                {
                    for (unsigned char i_23 = 0; i_23 < 19; i_23 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */int) min((var_31), (min(((~((-(0))))), ((-(max((((/* implicit */int) var_8)), (var_10)))))))));
                            arr_82 [(unsigned short)10] [(unsigned short)10] [6] [i_23] [9U] [i_20] = ((/* implicit */unsigned short) (-(((min((-2147483620), (((/* implicit */int) arr_80 [14] [14] [i_23])))) / (((-1443505806) / (((/* implicit */int) arr_68 [i_0] [i_20] [i_21] [i_22] [i_0] [i_23]))))))));
                            arr_83 [i_23] [(unsigned short)12] [i_21] [i_20] [i_23] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) >= ((~(1553279271)))))) & (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)23))))))))));
                        }
                    } 
                } 
            } 
        }
    }
    var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) max((min(((~(2147483631))), ((-(1342654781))))), ((((~(var_10))) - ((-(361600003))))))))));
    var_33 += (-((~((~(((/* implicit */int) var_0)))))));
}
