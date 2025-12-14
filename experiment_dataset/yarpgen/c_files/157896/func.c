/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157896
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) var_0)))))) + (4503599560261632LL)));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [(short)12] |= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (+(8500809146908542538ULL)))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) arr_1 [i_0]))))), (min((var_12), (arr_0 [i_0])))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                {
                    arr_10 [i_1] [i_2] [i_2] [2ULL] = ((((/* implicit */_Bool) arr_3 [i_1] [i_3])) ? (arr_4 [i_1] [i_2]) : (var_8));
                    arr_11 [i_1] [i_1] [i_3] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 4132465216U))));
                    arr_12 [i_1] [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_3])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))))) > (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))));
                }
            } 
        } 
        arr_13 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((var_4) << (((var_9) - (8554924179538038464ULL)))))) : ((+(arr_7 [i_1])))));
        /* LoopNest 3 */
        for (long long int i_4 = 4; i_4 < 10; i_4 += 2) 
        {
            for (signed char i_5 = 1; i_5 < 10; i_5 += 3) 
            {
                for (long long int i_6 = 3; i_6 < 8; i_6 += 4) 
                {
                    {
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (18446744073709551601ULL))))));
                        var_18 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_4])))))));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_3)));
                        var_20 = ((/* implicit */unsigned char) ((8500809146908542538ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-55)) ? (arr_21 [i_4 + 1] [i_5] [i_6 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))))));
                        arr_22 [i_1] [i_1] [(signed char)5] [i_6] [i_5] [i_5] = ((/* implicit */signed char) ((long long int) var_8));
                    }
                } 
            } 
        } 
    }
    var_21 *= ((/* implicit */signed char) max(((~((-(var_7))))), (((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) 0ULL))))))));
}
