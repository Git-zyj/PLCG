/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111497
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
    for (short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 16; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) ((((((((/* implicit */int) var_4)) != (((/* implicit */int) var_8)))) ? (max((((/* implicit */int) (unsigned short)31285)), (1091037140))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))) << ((((((~(((/* implicit */int) arr_4 [i_0 + 3] [i_1 + 1] [i_0 + 3])))) + (98))) - (4)))));
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) 375104906U))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) min(((signed char)3), ((signed char)-12)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) arr_4 [i_0] [i_5] [i_5]);
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (((-(arr_11 [i_1 - 2]))) > (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_0)) - (((/* implicit */int) (unsigned short)8640)))) & ((+(arr_9 [i_0 - 1] [i_5] [i_5] [(unsigned char)14] [i_5] [i_5])))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 1; i_10 < 14; i_10 += 2) 
                    {
                        {
                            arr_24 [i_7] [i_9] [11LL] [15LL] [(unsigned short)5] [i_7] = ((/* implicit */short) var_19);
                            arr_25 [i_10] [i_7] [i_8] [i_7] [i_7] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_23 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) ? (arr_23 [i_7] [i_7] [i_7] [(_Bool)1] [i_7] [i_7]) : (arr_23 [i_8] [(unsigned char)14] [i_8] [(unsigned char)9] [i_7] [i_9]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (((~(arr_23 [(short)13] [0ULL] [(_Bool)1] [i_12] [i_7] [i_7]))) < (((((/* implicit */_Bool) arr_4 [i_7] [i_8] [i_7])) ? (((/* implicit */int) (signed char)-25)) : (((/* implicit */int) arr_15 [i_12] [i_7]))))))), ((-(8977523655720210110ULL)))));
                            var_26 ^= ((/* implicit */long long int) (short)16539);
                            var_27 = ((/* implicit */unsigned char) max((max(((+(((/* implicit */int) (short)7527)))), (((/* implicit */int) (unsigned char)112)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)35))) == (max((((/* implicit */unsigned long long int) arr_30 [i_7] [(signed char)7] [i_8] [i_7] [i_7])), (var_10))))))));
                            arr_31 [i_7] [i_7] [i_7] [i_8] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((unsigned long long int) arr_15 [i_11] [i_11])) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_7])))))) ? (((((/* implicit */int) arr_3 [i_7] [i_8])) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) != (0ULL)))))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_7] [i_8] [i_8] [i_12]))))) <= (((/* implicit */int) var_6)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 4) 
                {
                    for (long long int i_14 = 0; i_14 < 17; i_14 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */long long int) max((arr_17 [i_7]), (var_4)));
                            arr_38 [i_7] [i_7] [i_7] [i_14] = ((/* implicit */_Bool) 13404310048020129703ULL);
                            var_29 = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (~(((/* implicit */int) (unsigned char)217))))))));
                        }
                    } 
                } 
                var_30 = ((_Bool) arr_16 [i_7] [i_8]);
            }
        } 
    } 
}
