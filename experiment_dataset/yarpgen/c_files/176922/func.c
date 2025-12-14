/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176922
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) max((4ULL), (18446744073709551611ULL)));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_15 [10LL] [i_0] [(signed char)12] [i_3] [(signed char)12] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) min((-4194304), (((/* implicit */int) (unsigned char)3))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255)))));
                                arr_16 [i_0] [i_0] [(_Bool)1] [(short)10] [i_2] [i_0] [i_4 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) 5404711296185446679ULL)))) ? (((/* implicit */long long int) var_11)) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (var_8)))) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_6 [i_0] [15] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) var_11))))));
                                var_14 = ((/* implicit */unsigned short) arr_13 [i_0] [i_0] [15LL]);
                                var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)12))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))) : (var_11))) >> (((((max((((/* implicit */unsigned int) (short)-32762)), (arr_8 [(unsigned short)15] [(unsigned char)11] [i_3] [i_4 - 1]))) << (((((((/* implicit */_Bool) arr_13 [i_0] [i_3] [i_4 - 1])) ? (((/* implicit */unsigned long long int) 3536330588U)) : (arr_7 [i_0] [i_2] [i_2]))) - (3536330569ULL))))) - (3145725U)))));
                            }
                        } 
                    } 
                    var_16 -= ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [(_Bool)1] [i_2]);
                }
            } 
        } 
    }
    for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) 0)) || (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))))))));
        var_18 += ((/* implicit */signed char) arr_17 [i_5] [i_5]);
    }
    for (short i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        arr_24 [i_6] [(unsigned char)2] = ((/* implicit */unsigned int) ((unsigned long long int) arr_20 [i_6]));
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (int i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                {
                    arr_29 [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) arr_23 [5U] [i_8]);
                    arr_30 [i_6] [(unsigned char)0] [(unsigned char)0] = ((/* implicit */short) var_5);
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (-(max((((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_2)), (var_9)))))))))));
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_5)), (var_11))))));
}
