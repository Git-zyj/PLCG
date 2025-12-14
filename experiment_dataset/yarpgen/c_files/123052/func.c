/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123052
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
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((unsigned long long int) min((((/* implicit */short) var_6)), (var_1)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((unsigned short) (unsigned char)0)))));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1])) && (((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0])))))) + (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1]))) : (var_5)))));
        var_14 += ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 206630097)) - (var_5))))))) >> (((((long long int) -206630098)) + (206630104LL)))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1])) | (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1])))) != (((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0])) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1]))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 4) 
    {
        arr_7 [i_1 + 1] = arr_2 [i_1];
        var_15 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_4))) : (((/* implicit */long long int) max((8916920U), (((/* implicit */unsigned int) arr_2 [i_1]))))))), (((/* implicit */long long int) -206630080))));
        arr_8 [i_1 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-27319)) ? (134217727ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((arr_2 [i_1 + 2]) & (((/* implicit */int) arr_5 [i_1 + 3])))) : ((-(arr_2 [i_1 - 2])))));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        for (int i_3 = 1; i_3 < 11; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                {
                    arr_15 [i_2] [i_3] [i_3] = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (signed char)68))))))));
                    arr_16 [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((arr_14 [i_3 + 1] [i_3 + 1] [i_3 + 1]) + (arr_14 [i_3 + 1] [i_3 + 1] [i_3 + 1])))) - (((((/* implicit */long long int) var_0)) ^ (var_7)))));
                }
            } 
        } 
    } 
}
