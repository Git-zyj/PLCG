/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183045
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
    var_18 = ((/* implicit */unsigned int) ((unsigned long long int) 757505133U));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 4) 
                {
                    for (unsigned char i_4 = 1; i_4 < 11; i_4 += 3) 
                    {
                        {
                            arr_14 [i_4] [i_3] [i_2] [i_3] [(unsigned short)2] = ((((/* implicit */_Bool) arr_4 [i_3 + 2])) ? (arr_6 [i_3 + 3]) : (((/* implicit */unsigned long long int) var_4)));
                            arr_15 [i_0] [i_3] [i_0] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) arr_9 [(short)12] [i_2] [i_2])))));
                        }
                    } 
                } 
            } 
            arr_16 [i_0] [i_0] = ((/* implicit */unsigned char) var_14);
        }
        /* LoopSeq 2 */
        for (unsigned char i_5 = 2; i_5 < 11; i_5 += 2) 
        {
            var_19 = ((/* implicit */unsigned char) (+(6567882553735379162LL)));
            arr_19 [(short)6] [i_5] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_17)) ? (926177333) : (var_0))));
            var_20 = ((/* implicit */unsigned long long int) (short)4207);
        }
        for (unsigned char i_6 = 1; i_6 < 11; i_6 += 3) 
        {
            var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) var_12)))));
            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) var_7))));
            /* LoopNest 3 */
            for (short i_7 = 1; i_7 < 10; i_7 += 1) 
            {
                for (unsigned int i_8 = 1; i_8 < 12; i_8 += 3) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)56495))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))));
                            arr_29 [i_7] [i_6] [i_7 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_6 + 2])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((int) arr_9 [i_0] [i_0] [i_6 + 2])))));
        }
        arr_30 [i_0] [4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (1194981097U) : (((/* implicit */unsigned int) 926177334))))) : (((((/* implicit */_Bool) var_4)) ? (var_10) : (7422119215564199439ULL)))));
    }
    for (int i_10 = 2; i_10 < 16; i_10 += 4) 
    {
        var_25 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_5)), (arr_32 [i_10 - 1] [i_10])))), (min((((/* implicit */unsigned long long int) (unsigned short)47744)), (2895368685765195876ULL)))));
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)0)))))));
        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned short)56495)) ? (((/* implicit */unsigned long long int) var_4)) : (((((/* implicit */_Bool) (unsigned short)56479)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18014398241046528ULL))))), (18428729675468505094ULL))))));
    }
    for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 4) 
    {
        var_28 -= ((/* implicit */_Bool) var_12);
        arr_37 [i_11] = ((/* implicit */unsigned int) var_16);
        /* LoopNest 2 */
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            for (long long int i_13 = 0; i_13 < 10; i_13 += 4) 
            {
                {
                    var_29 = ((/* implicit */unsigned long long int) arr_17 [i_11] [i_11] [i_13]);
                    var_30 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) ((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
                }
            } 
        } 
    }
    var_31 = ((/* implicit */unsigned long long int) min((((/* implicit */short) min(((!(((/* implicit */_Bool) var_13)))), (((var_4) != (((/* implicit */long long int) 2656148682U))))))), (var_2)));
    var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((/* implicit */int) var_8))));
}
