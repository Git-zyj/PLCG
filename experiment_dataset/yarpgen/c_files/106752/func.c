/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106752
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
    var_10 &= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (var_4)));
    var_11 = max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_4)) ? (134217727LL) : (-134217748LL))))));
    var_12 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) min((-8984656558679270485LL), (3674112209735140171LL)))))))));
    var_13 -= ((/* implicit */short) ((unsigned short) var_1));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1 - 3])) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(signed char)12]))))) : (arr_3 [i_1]))) & (((((/* implicit */_Bool) ((unsigned short) (signed char)(-127 - 1)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) ^ (arr_3 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                    var_15 *= ((/* implicit */short) min((((((/* implicit */_Bool) 16383LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33726))) : (2665127966U))), (((/* implicit */unsigned int) ((short) var_6)))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_6))));
        var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_0]))));
        var_18 = var_3;
        /* LoopNest 2 */
        for (unsigned int i_3 = 2; i_3 < 20; i_3 += 1) 
        {
            for (unsigned int i_4 = 3; i_4 < 20; i_4 += 1) 
            {
                {
                    arr_13 [i_0] [i_0] [i_0] &= ((/* implicit */signed char) max((((/* implicit */long long int) ((int) arr_10 [i_3 + 1] [i_3 + 1] [i_3 + 2] [i_3 + 2]))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (max((((/* implicit */long long int) 2245493328U)), (var_3))) : (((/* implicit */long long int) ((unsigned int) arr_8 [i_0] [i_0] [i_4])))))));
                    var_19 -= ((/* implicit */long long int) arr_1 [i_3]);
                    var_20 *= ((/* implicit */signed char) (~(((arr_10 [i_3] [i_3 + 2] [i_3 + 2] [21U]) | (((/* implicit */long long int) ((/* implicit */int) (signed char)63)))))));
                }
            } 
        } 
    }
}
