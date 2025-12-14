/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148630
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0]))) ? (((/* implicit */int) var_0)) : (arr_1 [i_0]))));
        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)2044)) : (-2131571558)))) ? ((-(arr_1 [i_0]))) : (arr_1 [i_0])))) ? (((/* implicit */int) ((unsigned char) arr_0 [i_0]))) : (((/* implicit */int) (unsigned short)1128))));
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) ^ (var_2)))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? ((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)0)))) : (((((/* implicit */_Bool) 4997171686491517027LL)) ? (((/* implicit */int) (unsigned short)25022)) : (arr_1 [(unsigned char)13]))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))))))));
        var_13 = ((/* implicit */long long int) var_3);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? (-4997171686491517030LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14965)))));
        var_14 = ((/* implicit */signed char) var_1);
    }
    for (unsigned short i_2 = 1; i_2 < 11; i_2 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) arr_1 [i_2]))));
        /* LoopSeq 3 */
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            var_16 = ((/* implicit */unsigned char) arr_0 [i_2]);
            var_17 = arr_10 [i_3] [i_2] [9LL];
        }
        for (int i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_10 [i_4] [i_4] [i_2])) >= (((/* implicit */int) var_8))))) ^ (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_11 [i_2 + 2] [(_Bool)1] [i_4])) : (((/* implicit */int) var_6)))), (((/* implicit */int) var_5)))))))));
            arr_14 [i_2 + 1] [i_2 + 2] [i_2 - 1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_4)) - (((/* implicit */int) arr_8 [i_2] [i_4]))))))) - (((((_Bool) (_Bool)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) : (((((/* implicit */_Bool) var_6)) ? (17977452350476878762ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_2] [i_4])))))))));
        }
        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            var_19 = ((/* implicit */long long int) var_4);
            arr_18 [i_5] [i_2] = ((/* implicit */unsigned char) var_4);
        }
    }
    for (long long int i_6 = 3; i_6 < 23; i_6 += 2) 
    {
        arr_21 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) max((16769024), (((/* implicit */int) (unsigned char)159))))) ? (arr_19 [i_6]) : (((/* implicit */long long int) arr_1 [i_6]))));
        var_20 = ((/* implicit */unsigned long long int) var_6);
    }
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
    {
        for (signed char i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            {
                var_21 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_13 [i_7] [i_7] [i_8])) ? (((/* implicit */int) arr_13 [i_7] [i_8] [i_7])) : (((/* implicit */int) arr_13 [i_7] [i_7] [i_7])))));
                /* LoopNest 3 */
                for (signed char i_9 = 3; i_9 < 9; i_9 += 1) 
                {
                    for (short i_10 = 1; i_10 < 11; i_10 += 3) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 12; i_11 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((unsigned short) min(((_Bool)1), ((_Bool)1)))))));
                                arr_34 [i_7] [(unsigned short)6] [i_7] [(unsigned char)1] [(unsigned char)10] [i_7] [i_7] = ((/* implicit */unsigned short) ((_Bool) min((max(((_Bool)1), ((_Bool)1))), (((((/* implicit */_Bool) -1683544013)) && (((/* implicit */_Bool) arr_23 [i_9] [i_11])))))));
                                arr_35 [i_7] [i_8] [i_9] [i_10 + 1] [i_11] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_7] [i_7] [i_7]))))) ? (((/* implicit */int) arr_15 [i_9] [i_9] [i_11])) : (((/* implicit */int) (_Bool)0)))) + (2147483647))) << (((max((((/* implicit */unsigned long long int) arr_3 [i_7])), (arr_12 [i_7] [i_8]))) - (14369950131410712784ULL)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
