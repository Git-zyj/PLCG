/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185687
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)0), (((/* implicit */unsigned short) arr_3 [i_1] [i_0]))))))))));
                arr_4 [16LL] [16LL] = ((/* implicit */long long int) (unsigned short)55967);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((arr_2 [i_2] [i_2]) << (((arr_2 [i_2] [i_2]) - (5093885911741721026LL))))) / (max((arr_2 [16LL] [i_2]), (arr_2 [i_2] [i_2]))))))));
        arr_9 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned short) var_7))), (arr_6 [i_2] [i_2])))) ? (max((min((((/* implicit */unsigned long long int) (unsigned short)3836)), (arr_8 [i_2] [i_2]))), (((/* implicit */unsigned long long int) arr_6 [i_2] [i_2])))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) min(((unsigned short)65532), (((/* implicit */unsigned short) arr_5 [i_2]))))))))));
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (((+(((/* implicit */int) arr_3 [i_2] [i_2])))) | (((/* implicit */int) min((var_11), (var_11)))))))));
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */long long int) min((((((/* implicit */int) arr_5 [(unsigned char)14])) >> (((((/* implicit */int) (short)2996)) - (2986))))), (((/* implicit */int) var_2))))) + (min((((/* implicit */long long int) arr_5 [i_2])), (arr_6 [i_2] [i_2]))))))));
    }
    for (long long int i_3 = 2; i_3 < 22; i_3 += 4) 
    {
        var_16 = ((/* implicit */long long int) var_11);
        arr_12 [i_3] = ((/* implicit */signed char) min((((((((/* implicit */long long int) ((/* implicit */int) var_9))) != (arr_10 [i_3]))) ? (((((/* implicit */_Bool) 2737509755497892966ULL)) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) (unsigned char)135)))) : (((/* implicit */int) ((arr_10 [i_3]) >= (((/* implicit */long long int) var_10))))))), (((/* implicit */int) ((min((((/* implicit */long long int) arr_11 [17U])), (arr_10 [i_3]))) == ((+(var_0))))))));
        arr_13 [i_3] = ((/* implicit */unsigned short) arr_10 [i_3 + 2]);
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            for (unsigned short i_5 = 3; i_5 < 24; i_5 += 4) 
            {
                {
                    var_17 = -8224155892893779236LL;
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) max((((/* implicit */unsigned char) (signed char)126)), ((unsigned char)121)))), (arr_19 [i_3] [i_3] [11LL] [i_3])))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)12485)))))));
                }
            } 
        } 
    }
    for (long long int i_6 = 3; i_6 < 7; i_6 += 4) 
    {
        arr_22 [i_6] [i_6] = ((/* implicit */int) var_6);
        arr_23 [i_6] = ((/* implicit */unsigned long long int) var_2);
        arr_24 [i_6 + 1] = ((/* implicit */short) min(((-(((((/* implicit */_Bool) (unsigned short)5)) ? (1190233580U) : (((/* implicit */unsigned int) arr_15 [i_6])))))), (((/* implicit */unsigned int) (-(arr_18 [i_6] [i_6] [i_6]))))));
    }
}
