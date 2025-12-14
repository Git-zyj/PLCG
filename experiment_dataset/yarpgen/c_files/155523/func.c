/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155523
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
    var_14 ^= ((/* implicit */int) var_5);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) var_4);
                    arr_8 [i_0] [9U] = ((/* implicit */_Bool) ((unsigned short) ((((((/* implicit */_Bool) 8895913203349944882LL)) ? (var_4) : (((/* implicit */unsigned long long int) arr_0 [i_0])))) | (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2])))));
                    var_16 = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) (+(((((/* implicit */int) arr_1 [i_0])) << (((((/* implicit */int) arr_1 [i_0])) - (113)))))))) : (((/* implicit */unsigned int) (+(((((/* implicit */int) arr_1 [i_0])) << (((((((/* implicit */int) arr_1 [i_0])) - (113))) - (46))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        arr_13 [i_3] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [5U]))) : (8895913203349944874LL)))) ? (((/* implicit */unsigned int) arr_2 [8ULL])) : (((unsigned int) 8895913203349944882LL)))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((_Bool) arr_7 [i_3] [i_5] [18ULL])) && ((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_10 [i_4])) - (var_3))))))));
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) -1334935770)) ? (arr_4 [16] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [16ULL])))))))) ? (((unsigned int) (!(((/* implicit */_Bool) (unsigned short)20827))))) : (((((/* implicit */_Bool) arr_7 [i_5 + 3] [i_5 + 2] [8U])) ? (((/* implicit */unsigned int) arr_7 [i_5 + 3] [i_5 + 2] [(unsigned char)16])) : (arr_18 [i_5 + 3] [i_5 + 2] [i_5 - 1] [i_5 + 3])))));
                    arr_19 [(unsigned char)7] [(unsigned char)7] = ((/* implicit */unsigned short) (+(((int) arr_4 [i_3] [i_5 - 1]))));
                }
            } 
        } 
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_17 [i_3] [i_3] [5ULL]))) ? (((((/* implicit */_Bool) arr_16 [i_3] [i_3])) ? (((/* implicit */unsigned int) arr_0 [(_Bool)1])) : (arr_18 [i_3] [i_3] [i_3] [i_3]))) : (((arr_14 [i_3]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44709)))))));
    }
    var_20 = ((/* implicit */unsigned short) ((((((((int) var_4)) + (2147483647))) >> (((((((/* implicit */int) var_1)) + (var_13))) - (813384297))))) < (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (-8895913203349944859LL) : (((/* implicit */long long int) var_0))))))))));
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 3) 
    {
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            {
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) arr_23 [i_6] [i_7] [(unsigned char)2]))));
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) arr_21 [i_6])) : (var_0))))) ? (((/* implicit */int) (unsigned char)105)) : (max((max((((/* implicit */int) arr_1 [i_6])), (arr_2 [i_6]))), (arr_5 [i_6] [i_6] [i_6])))));
                var_23 = ((/* implicit */_Bool) ((max((arr_5 [i_7 - 1] [i_7] [i_7 - 1]), (((/* implicit */int) arr_20 [i_7 - 1] [i_6])))) / (((((/* implicit */_Bool) arr_20 [i_7 - 1] [i_6])) ? (((/* implicit */int) arr_20 [i_7 - 1] [i_6])) : (arr_5 [i_7 - 1] [i_7 - 1] [i_7 - 1])))));
            }
        } 
    } 
}
