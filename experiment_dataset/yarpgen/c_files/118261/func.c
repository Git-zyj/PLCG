/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118261
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
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] [4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])) ? (((/* implicit */long long int) arr_0 [1] [i_0 - 2])) : (arr_4 [i_0 + 1] [i_0 + 1])))) ? ((~(arr_4 [i_0 - 2] [i_0 - 1]))) : (((((/* implicit */long long int) arr_0 [i_0 - 1] [i_0 - 1])) % (arr_4 [i_0 + 2] [i_0 - 2])))));
            var_19 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_0 + 1] [i_0] [1])) < (((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 1] [i_0])))) ? (((((/* implicit */_Bool) 6LL)) ? (min((((/* implicit */long long int) 1319947579)), (-23LL))) : (-1LL))) : (((/* implicit */long long int) (-((-(((/* implicit */int) var_16)))))))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_20 = var_8;
                        arr_12 [i_0 + 1] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_2])), (((-5522640323740167961LL) / (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_0 - 2] [i_0])) >> (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_2])))) - (42369)))))) : (((arr_11 [i_0 + 2] [i_0 - 2] [i_0 + 2]) >> (((/* implicit */int) (_Bool)1))))));
                        arr_13 [i_2] [(short)8] [5U] [i_2] [i_3] [8ULL] = ((/* implicit */unsigned int) var_7);
                    }
                } 
            } 
        }
        arr_14 [i_0] [i_0 + 1] = ((/* implicit */short) arr_11 [i_0] [i_0] [i_0]);
    }
    for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        var_21 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_15 [9])) ? (((/* implicit */int) (unsigned short)4369)) : (((/* implicit */int) arr_15 [i_4]))))));
        /* LoopSeq 2 */
        for (int i_5 = 0; i_5 < 14; i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                for (unsigned int i_7 = 2; i_7 < 13; i_7 += 3) 
                {
                    {
                        arr_28 [9] [i_5] [i_6] [i_7] [i_7] = ((/* implicit */_Bool) max((((-14LL) - (((((/* implicit */_Bool) -4884465237762149939LL)) ? (-25LL) : (-26LL))))), ((((~(-17LL))) >> (((arr_21 [i_7 - 2] [i_7] [i_7 + 1] [i_7 - 2]) + (5604634210297414494LL)))))));
                        arr_29 [i_7] [(unsigned char)4] [i_7] [i_7] [i_7 - 1] [i_7] = ((/* implicit */unsigned long long int) (~(arr_25 [i_4] [i_7])));
                    }
                } 
            } 
            arr_30 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) 4200584014U)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (4884465237762149914LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)92)))))) | (((((arr_21 [i_4] [i_4] [(short)8] [i_4]) + (9223372036854775807LL))) << ((((~(arr_17 [i_4] [i_4] [i_5]))) - (1334966166U)))))));
            arr_31 [i_4] [i_4] [(_Bool)1] = ((/* implicit */short) arr_25 [10U] [12]);
        }
        for (int i_8 = 0; i_8 < 14; i_8 += 1) /* same iter space */
        {
            arr_34 [i_4] [i_8] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) -4884465237762149926LL))) ? (((((/* implicit */_Bool) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((-406888383) + (406888390)))))) ? (((/* implicit */int) ((_Bool) -942994363))) : (((/* implicit */int) var_12)))) : ((-(((((/* implicit */_Bool) arr_25 [i_4] [8ULL])) ? (((/* implicit */int) arr_19 [i_8])) : (((/* implicit */int) var_17))))))));
            var_22 |= ((/* implicit */_Bool) ((((/* implicit */int) max((arr_19 [i_4]), (((/* implicit */short) (signed char)(-127 - 1)))))) ^ ((~(((((/* implicit */int) (signed char)109)) ^ (((/* implicit */int) (signed char)0))))))));
        }
    }
    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
    {
        arr_38 [i_9] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) (signed char)103)))))) >> (((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)57)), ((unsigned short)61164)))) - (61158)))));
        var_23 = ((/* implicit */unsigned int) ((unsigned char) min((arr_36 [i_9 + 1]), (((/* implicit */long long int) var_2)))));
        arr_39 [i_9] [2LL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+((+(9223372036854775783LL))))))));
    }
    for (long long int i_10 = 3; i_10 < 12; i_10 += 2) 
    {
        arr_43 [i_10] = ((/* implicit */unsigned short) ((((arr_33 [i_10 - 2] [i_10 - 3] [i_10]) << (((arr_33 [i_10 - 3] [i_10 - 2] [i_10 - 3]) - (3280535879U))))) >> (((((((/* implicit */_Bool) arr_33 [(signed char)8] [(signed char)8] [i_10])) ? (arr_33 [i_10 - 3] [i_10 - 3] [i_10 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) - (3280535858U)))));
        arr_44 [i_10] = ((/* implicit */signed char) (((((~(max((((/* implicit */int) (unsigned short)43465)), (1783675684))))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_10 - 3])))))));
    }
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 1015808)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-20985))))))));
}
