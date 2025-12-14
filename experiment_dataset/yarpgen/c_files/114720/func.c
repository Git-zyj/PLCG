/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114720
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (short i_3 = 1; i_3 < 15; i_3 += 2) 
                {
                    {
                        arr_12 [(unsigned char)10] [i_0] [i_1] [i_3 + 1] = ((/* implicit */short) (~(arr_5 [(signed char)13] [(signed char)13])));
                        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) 65535)) ? (arr_5 [i_0 + 3] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3 + 1] [i_0 - 1] [i_0] [i_0])))));
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
                        {
                            var_13 = ((/* implicit */int) arr_14 [13]);
                            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (+(0U))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
                        {
                            var_15 = ((/* implicit */signed char) arr_15 [i_5] [i_0] [(unsigned char)8]);
                            var_16 = ((/* implicit */unsigned long long int) -65536);
                            var_17 = ((/* implicit */unsigned char) 18446744073709551615ULL);
                            arr_17 [i_0] [i_0] [i_0] [8] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [7ULL] [7ULL] [i_1] [i_1] [i_0 + 1]))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
                        {
                            var_18 = ((/* implicit */int) (((_Bool)1) ? (arr_16 [i_3] [i_3] [i_3] [i_3 - 1] [i_3 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))))));
                            var_19 *= ((/* implicit */unsigned long long int) (+(arr_2 [i_0 + 1] [i_1])));
                            var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_3 + 1] [i_3 - 1] [(unsigned short)12] [i_3 - 1] [i_3]))));
                            var_21 += ((/* implicit */unsigned short) (~(3638712236096176846LL)));
                            arr_20 [i_6] [i_0] = ((/* implicit */short) (+(10ULL)));
                        }
                        var_22 = ((((/* implicit */_Bool) 65535)) ? (3ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 4] [i_0] [i_2]))));
                    }
                } 
            } 
            var_23 = 4294967273U;
            /* LoopSeq 1 */
            for (short i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                var_24 = ((/* implicit */short) 4294967295U);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 16; i_8 += 2) 
                {
                    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        {
                            arr_29 [i_1] [i_1] [9LL] [i_0] [i_1] = ((/* implicit */_Bool) (~(arr_8 [i_0] [i_0] [i_0 + 4] [i_0])));
                            var_25 = ((/* implicit */_Bool) (unsigned short)26230);
                        }
                    } 
                } 
                arr_30 [i_0] = (((_Bool)1) ? (arr_11 [i_0 + 1]) : (((/* implicit */unsigned long long int) 2147483647)));
            }
            var_26 = ((/* implicit */_Bool) 0ULL);
        }
        var_27 = ((/* implicit */_Bool) (-(18446744073709551610ULL)));
        var_28 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_27 [i_0] [6LL] [i_0] [(unsigned short)10] [(unsigned short)10] [6LL] [(unsigned short)10]))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)201)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_10 = 2; i_10 < 14; i_10 += 3) 
        {
            for (unsigned long long int i_11 = 2; i_11 < 14; i_11 += 4) 
            {
                for (unsigned int i_12 = 3; i_12 < 14; i_12 += 1) 
                {
                    {
                        arr_39 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0] = (~(((/* implicit */int) arr_3 [(short)0] [i_0] [i_12])));
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_11 + 2] [(signed char)9] [i_12 - 2])) ? (((/* implicit */long long int) -65536)) : (-3638712236096176859LL))) : (((/* implicit */long long int) (-(((/* implicit */int) (short)-26816))))))))));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) 2326179722U))));
    }
    /* vectorizable */
    for (unsigned short i_13 = 0; i_13 < 25; i_13 += 3) 
    {
        var_31 = (!(((/* implicit */_Bool) arr_41 [i_13])));
        var_32 = (!(arr_40 [i_13]));
    }
    for (signed char i_14 = 1; i_14 < 19; i_14 += 3) 
    {
        arr_46 [i_14] = ((/* implicit */unsigned char) (signed char)63);
        var_33 = ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) 4294967295U)))), ((_Bool)1)));
        var_34 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(-65536)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_14 + 1])))))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967294U)))))) : (4294967289U)))));
    }
    var_35 |= ((/* implicit */unsigned int) (~(36028797018963967ULL)));
    var_36 = ((/* implicit */unsigned int) (_Bool)1);
}
