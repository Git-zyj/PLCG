/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183226
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
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) var_11))));
    var_13 = ((/* implicit */long long int) var_0);
    var_14 = ((/* implicit */int) min((var_14), (var_10)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((-7790473592252361818LL) <= (((/* implicit */long long int) arr_1 [i_0]))))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) arr_9 [i_3] [(short)11] [i_0]);
                        arr_14 [i_3] [13U] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_0] [i_0])) ? (arr_8 [i_0] [i_1] [i_2]) : (arr_8 [i_0] [i_1] [i_3])));
                        var_16 = ((/* implicit */_Bool) min((var_16), (((arr_9 [i_0] [i_2] [i_2]) < (((((arr_9 [2LL] [i_3] [(short)1]) + (2147483647))) << (((((/* implicit */int) (signed char)16)) - (16)))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_4 = 1; i_4 < 17; i_4 += 2) 
        {
            for (unsigned short i_5 = 2; i_5 < 18; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    {
                        arr_22 [i_0] [i_6] [i_5] [i_5] = ((/* implicit */short) (-(((/* implicit */int) var_11))));
                        var_17 = ((/* implicit */unsigned char) (~(var_0)));
                        arr_23 [(_Bool)1] [4] [i_5] [4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (arr_17 [i_6] [i_5] [i_0]) : (var_6))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8)))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_13 [i_0] [i_0] [14LL] [i_0])) : (((/* implicit */int) arr_13 [18U] [i_0] [i_0] [4U])))))));
        arr_24 [i_0] [i_0] = ((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_7 = 4; i_7 < 10; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_8 = 2; i_8 < 7; i_8 += 3) 
        {
            for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                {
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_7])) && (((/* implicit */_Bool) arr_21 [i_7 - 2] [i_7 - 2] [i_9] [i_9])))))));
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_33 [(signed char)2] [(short)7] [i_7]) != (var_4))))) : (arr_29 [i_7 - 3] [i_7 - 1] [i_7 - 2])))) ? (var_1) : ((-(arr_15 [i_7] [i_8 + 3])))));
                    var_21 = (-(var_5));
                }
            } 
        } 
        arr_34 [i_7] [i_7] = ((/* implicit */unsigned int) ((min((arr_9 [i_7 - 3] [(short)8] [i_7 - 4]), (arr_9 [i_7 - 3] [i_7] [i_7 - 3]))) <= (min((arr_9 [i_7 + 1] [i_7] [i_7 - 2]), (arr_9 [i_7 - 2] [i_7 - 2] [i_7 - 2])))));
    }
}
