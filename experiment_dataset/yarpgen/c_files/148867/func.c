/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148867
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
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) var_0))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-89)), (4294967294U)))) ? (min((((/* implicit */long long int) var_5)), (arr_1 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) min((var_8), (((/* implicit */unsigned char) var_10))))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */signed char) (_Bool)0);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (unsigned char i_3 = 1; i_3 < 10; i_3 += 3) 
                {
                    for (short i_4 = 4; i_4 < 10; i_4 += 4) 
                    {
                        {
                            arr_15 [i_4] [i_2] [i_0] [i_0] = ((/* implicit */signed char) max((((unsigned int) (unsigned char)114)), (((/* implicit */unsigned int) min((arr_11 [5U] [i_1] [i_3 - 1] [i_3 - 1]), (arr_11 [i_0] [i_1] [i_3 - 1] [i_3]))))));
                            arr_16 [i_4 - 1] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) var_7);
                        }
                    } 
                } 
            } 
        }
        arr_17 [i_0] = ((/* implicit */long long int) var_10);
        arr_18 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((signed char) arr_14 [i_0] [i_0] [(_Bool)1] [i_0] [i_0]))) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) var_6);
        arr_23 [i_5] [i_5] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) arr_20 [i_5] [(short)15]))))), ((~(((/* implicit */int) var_8))))))) ? (arr_21 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5] [i_5])))));
        var_16 ^= ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_12))))))));
        arr_24 [i_5] = var_7;
    }
    for (unsigned char i_6 = 2; i_6 < 17; i_6 += 2) 
    {
        arr_27 [i_6] = ((/* implicit */signed char) min((var_6), (((/* implicit */short) ((signed char) 2434288733U)))));
        arr_28 [i_6] [i_6] = ((/* implicit */unsigned int) -1136671761);
    }
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_12)) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) var_2))))));
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 11; i_7 += 3) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                arr_34 [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */long long int) (((_Bool)1) ? (((((/* implicit */_Bool) 1136671761)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)0))))) ^ (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_8] [i_7])))));
                arr_35 [i_7] [i_8] = ((/* implicit */short) var_11);
            }
        } 
    } 
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((unsigned char) var_4)))));
}
