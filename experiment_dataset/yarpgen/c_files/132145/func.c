/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132145
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
    var_17 = ((/* implicit */short) var_8);
    var_18 = ((/* implicit */short) (signed char)-102);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */int) (-(min((min((arr_1 [i_0] [i_0]), (14039979177969624715ULL))), (((/* implicit */unsigned long long int) (_Bool)1))))));
        var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14039979177969624735ULL)) ? (((/* implicit */int) min(((short)511), ((short)-511)))) : ((~(((/* implicit */int) var_8))))))), (((arr_1 [i_0] [i_0]) - (((((/* implicit */_Bool) (unsigned short)3)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))));
        arr_2 [i_0] = max((((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */int) arr_0 [i_0])), (-1172414612))))), (((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0] [9]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */short) arr_1 [i_1] [i_1]);
                                arr_14 [i_1] [i_1] [(unsigned short)10] [(unsigned short)10] [i_3] [i_4] = min((((/* implicit */unsigned long long int) (unsigned short)28849)), (var_0));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) <= (((/* implicit */int) ((((/* implicit */int) arr_9 [i_1] [i_2 - 1] [i_3] [i_4])) < (min((((/* implicit */int) var_15)), (1172414609))))))));
                            }
                        } 
                    } 
                    arr_15 [i_1] = ((/* implicit */unsigned short) max((((arr_10 [i_2 - 1] [i_2] [i_2 - 1] [i_1] [i_0] [i_0]) << (((var_10) - (17677606598434923757ULL))))), (((/* implicit */unsigned long long int) var_1))));
                }
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) ((((var_1) == (max((((/* implicit */int) (unsigned short)65535)), (var_7))))) ? (max((((var_10) & (9223372036854775808ULL))), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((int) (short)511)))));
        /* LoopSeq 3 */
        for (unsigned long long int i_6 = 4; i_6 < 15; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 2) 
                {
                    {
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_23 [i_5] [i_6 + 1] [i_7 + 1] [i_8]) ? (((/* implicit */int) arr_9 [i_5] [i_6 - 2] [i_5] [i_8])) : (((/* implicit */int) arr_23 [i_8] [i_6 - 1] [i_7] [(unsigned short)7]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32763))) != (var_10))))) : (((((/* implicit */_Bool) var_6)) ? (arr_10 [i_5] [i_6 - 4] [i_7] [i_8] [i_6] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))))));
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) ((((/* implicit */int) var_15)) != (((/* implicit */int) var_16)))))))) - (((long long int) arr_23 [i_8] [i_7 + 1] [i_6 - 1] [i_5])))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */signed char) max((((/* implicit */int) (unsigned char)75)), ((~(((/* implicit */int) (unsigned short)3))))));
            arr_24 [i_5] [(short)15] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_19 [i_5] [i_6 + 1]) << (((max((arr_7 [i_6]), (((/* implicit */int) var_3)))) - (725130898)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)0)), (arr_17 [i_6])))) || ((_Bool)1))))) : (var_6)));
        }
        for (int i_9 = 3; i_9 < 15; i_9 += 4) 
        {
            var_27 = ((/* implicit */unsigned long long int) (unsigned char)89);
            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_9] [i_5] [i_9])) / (min((-1336975354), (((/* implicit */int) var_11))))))) : ((((_Bool)1) ? (min((((/* implicit */unsigned long long int) var_2)), (var_10))) : (((/* implicit */unsigned long long int) (~(1172414599))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_10 = 1; i_10 < 15; i_10 += 2) 
        {
            var_29 -= ((/* implicit */unsigned long long int) 1902811164);
            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_10 - 1] [i_5])) ? (((((/* implicit */int) (signed char)127)) >> (((18446744073709551615ULL) - (18446744073709551611ULL))))) : (((/* implicit */int) ((_Bool) arr_4 [i_5] [i_10 - 1])))));
        }
    }
    var_31 = (((~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13)))))) > (min(((~(((/* implicit */int) var_16)))), (((/* implicit */int) var_12)))));
}
