/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165927
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
    var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (_Bool)0)) : ((+(-1790262322)))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [13] [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)2047))))) ? (((/* implicit */long long int) (-(1790262330)))) : (arr_5 [i_0]))), (min((8865064033230354869LL), (((/* implicit */long long int) 991129145))))));
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_3 [(unsigned char)6]))));
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)47561)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 1] [i_2 + 2]))) : (((long long int) ((arr_1 [i_0]) / (arr_4 [i_2] [i_0]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 4; i_3 < 17; i_3 += 2) 
    {
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            {
                var_23 = ((/* implicit */short) (-(((((var_1) == (((/* implicit */int) arr_14 [i_3] [i_4] [i_4])))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))) : (max((arr_12 [i_3]), (((/* implicit */int) arr_10 [i_4]))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    var_24 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_14 [i_3] [i_4] [i_4])) : (((/* implicit */int) arr_14 [i_3] [i_3] [(short)8])))));
                    var_25 = ((/* implicit */long long int) var_18);
                    arr_18 [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_3 + 1])) << (((((/* implicit */int) arr_10 [i_3 - 3])) - (35)))));
                }
                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) var_10))));
            }
        } 
    } 
}
