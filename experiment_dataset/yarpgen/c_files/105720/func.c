/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105720
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
    var_17 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) var_15))))) ? (max((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_16))))), (((((/* implicit */int) var_15)) | (var_14))))) : (((/* implicit */int) var_13))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_2 [i_0]))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_0] = ((/* implicit */int) ((signed char) arr_8 [i_0] [i_3] [i_0] [i_0]));
                        var_18 ^= arr_9 [i_0];
                        var_19 ^= ((((/* implicit */int) arr_6 [i_2 + 2] [i_2 + 1] [i_2])) / (arr_1 [i_0] [i_3]));
                        var_20 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_5 [i_0])))) < (((((/* implicit */int) (unsigned short)19)) - (((/* implicit */int) (unsigned short)16458))))));
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) 1999522263))));
                    }
                } 
            } 
            var_22 ^= ((/* implicit */unsigned short) ((arr_3 [i_0] [(short)0]) >= (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [(short)12]))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            var_23 = ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) 1999522263)))), (max(((!(((/* implicit */_Bool) -1999522262)))), (((((/* implicit */_Bool) arr_8 [i_0] [i_4] [i_0] [i_0])) || (arr_14 [(unsigned short)16] [i_0])))))));
            arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) -725036410)) ? (-2123859332) : (((/* implicit */int) (unsigned short)16843))))) ? (((/* implicit */unsigned long long int) ((int) var_9))) : (min((((/* implicit */unsigned long long int) var_12)), (arr_13 [i_0] [i_0]))))), (max((max((((/* implicit */unsigned long long int) arr_10 [i_0] [i_4] [i_4] [i_0])), (arr_13 [i_0] [i_4]))), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_4]))))));
            var_24 -= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) min((3U), (((/* implicit */unsigned int) 1999522267)))))))), (((((/* implicit */_Bool) arr_13 [i_4] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_4] [i_4]))) : (arr_7 [i_4] [i_4])))));
        }
        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) arr_8 [i_5] [i_5] [i_0] [i_5]))));
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (min((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_1) : (var_3))), (((/* implicit */unsigned long long int) (unsigned short)50334)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
            var_27 &= ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) ^ (min((7647224136043643641ULL), (8046806542108662879ULL))));
        }
        var_28 = ((/* implicit */unsigned short) arr_18 [i_0] [i_0] [i_0]);
    }
    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            for (unsigned short i_8 = 0; i_8 < 18; i_8 += 4) 
            {
                for (signed char i_9 = 0; i_9 < 18; i_9 += 2) 
                {
                    {
                        var_29 = ((/* implicit */_Bool) arr_2 [i_8]);
                        var_30 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */int) ((unsigned short) arr_10 [i_6] [i_6] [i_8] [i_8]))) : ((~(((/* implicit */int) arr_26 [i_6] [i_7] [i_8] [i_8] [i_9] [i_9]))))));
                        var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) (+(((/* implicit */int) ((unsigned char) arr_22 [i_6] [i_7] [i_8]))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (short i_10 = 0; i_10 < 18; i_10 += 1) 
        {
            for (unsigned short i_11 = 0; i_11 < 18; i_11 += 3) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 4) 
                {
                    {
                        var_32 += ((/* implicit */unsigned char) var_2);
                        arr_38 [i_6] [i_6] [i_10] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_8) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_6] [i_10]))))))));
                    }
                } 
            } 
        } 
        var_33 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_34 [i_6] [i_6] [i_6] [i_6] [i_6])), (arr_21 [i_6]))))) >= (((((/* implicit */unsigned long long int) var_2)) ^ (18446744073709551615ULL))))))));
        var_34 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_22 [5ULL] [i_6] [i_6])) : (((/* implicit */int) arr_22 [i_6] [i_6] [i_6])))));
        var_35 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [(short)12]))))) << (((var_8) - (4097800331U))))));
    }
}
