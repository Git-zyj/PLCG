/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12976
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
    for (int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((var_7) % ((+(((/* implicit */int) var_11))))));
            arr_5 [i_0] = ((/* implicit */short) ((unsigned short) arr_1 [i_0 + 3]));
        }
        for (unsigned int i_2 = 1; i_2 < 15; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    {
                        arr_13 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 2] = ((/* implicit */int) ((signed char) arr_9 [i_0 + 3] [i_0 - 1] [i_0 + 2] [i_0 + 1]));
                        arr_14 [i_0] [i_2 + 1] [i_0] [i_4] = ((unsigned char) ((((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_3] [i_4])) ? (arr_1 [i_0]) : (arr_1 [(short)3])));
                    }
                } 
            } 
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_1 [i_2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : ((+(arr_7 [i_0] [i_2 - 1] [(unsigned char)8]))))))));
            var_19 = ((/* implicit */unsigned long long int) (-(((long long int) var_16))));
            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_12))));
        }
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_6 = 3; i_6 < 15; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (short i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        {
                            var_21 -= ((/* implicit */unsigned char) (~(((/* implicit */int) var_6))));
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(var_3)))))))));
                            arr_26 [i_0 + 2] [i_0] [i_6] [i_7] [12ULL] = ((/* implicit */unsigned long long int) ((unsigned int) var_13));
                            var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) var_9))));
                        }
                    } 
                } 
            } 
            arr_27 [i_0] [i_5] = ((/* implicit */short) (-(((/* implicit */int) var_14))));
        }
        /* LoopSeq 3 */
        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 3) /* same iter space */
        {
            arr_30 [i_0] [15] = ((/* implicit */short) 3572790942U);
            var_24 = (~(((/* implicit */int) var_12)));
        }
        for (unsigned char i_10 = 0; i_10 < 16; i_10 += 3) /* same iter space */
        {
            arr_33 [i_0] = (-(arr_1 [i_0 + 3]));
            arr_34 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_0 + 1] [i_10] [i_0 + 3] [i_0])) ? (((/* implicit */int) arr_19 [i_0 - 1] [i_0 - 1] [i_10] [i_0])) : (((/* implicit */int) arr_19 [i_0 - 1] [i_0 + 3] [i_0 - 1] [i_0]))));
            /* LoopNest 3 */
            for (short i_11 = 0; i_11 < 16; i_11 += 2) 
            {
                for (unsigned char i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    for (unsigned char i_13 = 1; i_13 < 15; i_13 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_15 [i_0] [i_0 - 1]))));
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_13))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) var_9)) - (((/* implicit */int) var_14)))))))));
                            arr_41 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [(unsigned short)3] [i_0 + 1])) ? (arr_7 [i_0] [i_0] [i_0 - 1]) : (var_16)));
                            var_27 ^= ((/* implicit */short) arr_11 [i_0] [i_0 + 2] [i_0 + 2] [i_13 + 1]);
                            arr_42 [i_0] [i_10] [i_0] [i_11] [i_12] [i_12] [i_13 - 1] = ((/* implicit */unsigned long long int) ((((arr_3 [i_0]) ? (((/* implicit */int) var_17)) : (1668037571))) > (((/* implicit */int) var_4))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 4) 
        {
            /* LoopNest 2 */
            for (int i_15 = 2; i_15 < 15; i_15 += 2) 
            {
                for (unsigned short i_16 = 0; i_16 < 16; i_16 += 2) 
                {
                    {
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_13)))))));
                        /* LoopSeq 2 */
                        for (short i_17 = 0; i_17 < 16; i_17 += 1) 
                        {
                            arr_53 [i_0] = ((/* implicit */unsigned short) ((int) var_13));
                            var_29 = ((/* implicit */unsigned int) ((((_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_4)))))) : (((((/* implicit */_Bool) arr_48 [i_0] [i_0] [i_15] [i_0])) ? (arr_23 [i_15] [i_16] [i_17]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                        }
                        for (int i_18 = 2; i_18 < 13; i_18 += 3) 
                        {
                            var_30 = ((/* implicit */_Bool) 18446744073709551608ULL);
                            arr_56 [i_0] [i_15] = ((/* implicit */_Bool) ((((/* implicit */int) arr_47 [i_0])) + (((/* implicit */int) var_5))));
                        }
                    }
                } 
            } 
            var_31 = ((/* implicit */unsigned int) arr_48 [i_0] [i_0] [i_14] [i_14]);
        }
        var_32 = ((/* implicit */signed char) (-(((/* implicit */int) var_8))));
    }
    var_33 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_0))))))));
}
