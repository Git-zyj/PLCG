/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158121
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
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_20 ^= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)31)), (8589672448ULL)))) ? (14839325608803682983ULL) : (7014490240504800043ULL))));
        arr_4 [i_0] [i_0] = (-((~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [8ULL] [(unsigned char)2]))) : (arr_1 [i_0]))))));
        arr_5 [(unsigned char)0] &= ((/* implicit */unsigned char) max(((+(min((18446744065119879167ULL), (var_12))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(unsigned short)8] [i_0 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))))))));
        arr_6 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) max(((unsigned short)65535), (var_13))))))), (((var_16) & (5854080181326014299ULL)))));
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) arr_7 [6ULL]);
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((((/* implicit */_Bool) min((min((arr_9 [i_2] [i_2]), (var_19))), (((((/* implicit */_Bool) arr_12 [i_2] [11ULL] [11ULL])) ? (var_12) : (var_12)))))) ? (8589672448ULL) : (arr_9 [i_2] [i_2])))));
            var_23 ^= min((max((arr_7 [i_1]), (min((arr_10 [(unsigned short)6]), (var_19))))), (min((arr_7 [i_1]), (((/* implicit */unsigned long long int) var_6)))));
        }
        for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 1) 
        {
            arr_17 [i_1] [i_3] = var_1;
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 4; i_5 < 18; i_5 += 4) 
                {
                    {
                        var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_21 [i_1] [i_3 + 1] [i_3 - 1] [i_3 + 2]) : (var_12))))));
                        arr_22 [i_1] [i_4] [(unsigned short)15] [i_1] = min((max((max((((/* implicit */unsigned long long int) var_10)), (arr_9 [i_1] [(unsigned short)8]))), (min((((/* implicit */unsigned long long int) arr_13 [i_4] [i_1])), (var_16))))), (((/* implicit */unsigned long long int) (unsigned char)180)));
                    }
                } 
            } 
        }
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            var_25 = 13148857607544824734ULL;
            arr_26 [i_6] [i_1] = min((((arr_7 [i_1]) * (((((/* implicit */_Bool) 12869278080224390718ULL)) ? (18446744073709551596ULL) : (18446744073709551615ULL))))), (max((arr_11 [i_1] [19ULL] [13ULL]), (var_2))));
        }
    }
    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
    {
        var_26 = ((/* implicit */unsigned char) max((min((var_12), ((+(var_3))))), (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)826))))), (var_3)))));
        var_27 = (-(min(((+(8589672448ULL))), (((/* implicit */unsigned long long int) ((var_16) != (8589672448ULL)))))));
    }
    var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((max((var_2), (((/* implicit */unsigned long long int) var_10)))), (var_18))))));
}
