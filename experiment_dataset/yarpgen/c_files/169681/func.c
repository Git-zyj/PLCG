/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169681
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            arr_5 [(unsigned char)9] = ((/* implicit */short) (~(min((5ULL), (((/* implicit */unsigned long long int) (unsigned char)168))))));
            var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)207))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [i_1]))))))))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) (-(arr_8 [i_0] [i_1] [i_2] [7ULL] [7ULL] [3])))))));
                        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)65535), (arr_1 [i_0] [i_0]))))) <= (((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_3]))) : (arr_6 [i_0] [i_1] [i_2])))));
                    }
                } 
            } 
        }
        /* LoopSeq 4 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_16 += min((((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) var_3))))))), (((var_6) ? (max((arr_7 [0U] [i_4] [0U]), (4891642807183840968ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [(unsigned char)3])) ? (arr_6 [i_0] [i_0] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
            var_17 = ((/* implicit */_Bool) max(((+(var_9))), (max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (235373373U)))), ((~(((/* implicit */int) var_4))))))));
            var_18 |= ((/* implicit */long long int) ((unsigned long long int) ((unsigned char) 18446744073709551615ULL)));
            var_19 = ((/* implicit */signed char) var_10);
        }
        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_6 = 1; i_6 < 9; i_6 += 4) 
            {
                for (int i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) min((var_20), (((((/* implicit */int) min((min((var_4), ((short)1))), (((/* implicit */short) var_5))))) <= ((~(((/* implicit */int) arr_11 [i_0]))))))));
                        var_21 = ((/* implicit */int) (+(18446744073709551613ULL)));
                        var_22 = ((/* implicit */unsigned long long int) (((~(((unsigned long long int) var_5)))) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_5] [i_6] [i_5])) || (((/* implicit */_Bool) var_3))))))))));
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(18446744073709551611ULL)))) || (((/* implicit */_Bool) min((var_9), (((/* implicit */int) var_4))))))) ? (((int) (_Bool)1)) : (((/* implicit */int) var_7))));
            arr_21 [i_0] [(unsigned short)8] [(unsigned short)8] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 3971439959548107289ULL)) ? (((/* implicit */unsigned long long int) var_11)) : (arr_17 [i_0] [i_5] [i_5] [i_5]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned char)154), (var_8)))) ? (((/* implicit */unsigned int) (+(var_9)))) : ((+(arr_6 [i_0] [i_5] [(unsigned short)7]))))))));
        }
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
        {
            arr_26 [i_0] = (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_23 [3U])) : (((/* implicit */int) arr_11 [i_0])))));
            var_24 = ((/* implicit */unsigned long long int) arr_24 [i_0]);
        }
        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned char) (+(min((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_17 [(unsigned short)0] [i_9] [i_9] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2026441740)) && (((/* implicit */_Bool) arr_2 [i_0] [i_9])))))))));
            arr_29 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) ((_Bool) arr_6 [i_9] [i_9] [i_9]))), (((((/* implicit */_Bool) arr_19 [i_0] [i_9] [i_0])) ? (((/* implicit */int) (short)-5437)) : (arr_19 [0LL] [i_9] [i_0])))));
        }
        /* LoopSeq 1 */
        for (short i_10 = 0; i_10 < 10; i_10 += 1) 
        {
            arr_32 [i_0] [i_10] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (((/* implicit */int) (unsigned short)5266)))))));
            var_26 ^= ((int) 14475304114161444327ULL);
            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) min((((/* implicit */unsigned int) min(((~(((/* implicit */int) (unsigned short)65535)))), (max((((/* implicit */int) var_8)), (arr_10 [i_0])))))), (((unsigned int) (+(330567203736838934ULL)))))))));
        }
        var_28 = ((/* implicit */unsigned long long int) arr_15 [i_0] [3] [i_0]);
    }
    var_29 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((((~(var_9))) + (2147483647))) << (((((((/* implicit */_Bool) 2147483647)) ? (var_11) : (((/* implicit */int) var_6)))) - (780102038)))))) ? (var_2) : (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 17; i_11 += 2) 
    {
        for (unsigned long long int i_12 = 3; i_12 < 15; i_12 += 3) 
        {
            {
                var_30 = ((/* implicit */unsigned long long int) (unsigned short)65507);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_13 = 1; i_13 < 14; i_13 += 1) 
                {
                    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) (!(((/* implicit */_Bool) arr_35 [i_13 + 2])))))));
                    arr_42 [i_12] [i_13] = ((/* implicit */unsigned long long int) var_8);
                    var_32 = 264241152;
                }
            }
        } 
    } 
}
