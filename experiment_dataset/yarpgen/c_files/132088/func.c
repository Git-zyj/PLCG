/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132088
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                for (unsigned char i_3 = 1; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_10 *= ((/* implicit */unsigned int) ((long long int) var_5));
                        arr_12 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_2])) ? (arr_3 [i_3] [i_3 - 1] [i_3]) : ((-(((/* implicit */int) arr_2 [i_2]))))));
                    }
                } 
            } 
            var_11 += ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0 - 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112))) : (arr_5 [i_0] [i_0 - 1] [i_0 + 1] [i_0]));
        }
        for (long long int i_4 = 3; i_4 < 20; i_4 += 3) 
        {
            arr_16 [i_0 + 1] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) 6695377561922322993LL))));
            var_12 = ((/* implicit */unsigned int) (unsigned char)110);
        }
        var_13 = ((var_5) % (arr_10 [(signed char)13] [(signed char)13] [i_0 + 1] [i_0]));
        arr_17 [i_0] &= ((/* implicit */signed char) arr_0 [i_0]);
        var_14 &= ((/* implicit */long long int) ((signed char) arr_3 [i_0 + 1] [i_0] [i_0 + 1]));
    }
    for (signed char i_5 = 3; i_5 < 8; i_5 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) ((signed char) max((((((/* implicit */_Bool) (short)0)) ? (2529778764U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) arr_6 [i_5]))))))));
        var_16 = ((/* implicit */unsigned char) max((arr_7 [i_5] [i_5] [i_5] [i_5]), (((/* implicit */unsigned short) arr_9 [i_5 + 2] [i_5] [i_5] [i_5 - 1] [i_5] [i_5]))));
    }
    /* vectorizable */
    for (signed char i_6 = 3; i_6 < 8; i_6 += 4) /* same iter space */
    {
        arr_23 [i_6] = ((/* implicit */unsigned char) 3163363831U);
        var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)61)) ? (arr_20 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))))) ^ (arr_0 [i_6])));
        var_18 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) (signed char)12))) >= (((/* implicit */int) arr_6 [i_6]))));
        var_19 |= ((/* implicit */signed char) var_5);
        var_20 = ((/* implicit */unsigned int) (((-2147483647 - 1)) + (((/* implicit */int) arr_21 [i_6 - 2]))));
    }
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 11; i_7 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)16));
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-33))) : (var_5)))));
        arr_28 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_7]))) / (var_6)));
    }
    var_23 = ((/* implicit */unsigned short) (signed char)-45);
    var_24 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) (short)-14)) ^ (((/* implicit */int) (short)7753)))), ((-(((/* implicit */int) var_7))))));
}
