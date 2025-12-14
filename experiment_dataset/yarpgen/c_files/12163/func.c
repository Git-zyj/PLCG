/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12163
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
    var_18 += ((/* implicit */int) (unsigned short)63703);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1] = ((((/* implicit */_Bool) 7680776739806313284LL)) ? (((/* implicit */int) (unsigned short)31)) : (((/* implicit */int) max(((unsigned short)31), (max((((/* implicit */unsigned short) var_11)), ((unsigned short)65517)))))));
                    arr_9 [i_1] [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1])) ? (arr_5 [i_2] [i_2] [i_1]) : (arr_5 [i_0] [i_1] [i_1]))), (((/* implicit */long long int) (-(-2128055694))))));
                    var_19 ^= ((/* implicit */unsigned short) ((max((arr_5 [i_0] [(unsigned short)0] [(unsigned short)10]), (((/* implicit */long long int) var_10)))) <= (((/* implicit */long long int) ((((((/* implicit */int) arr_6 [i_2] [i_2] [1ULL] [i_2])) ^ (((/* implicit */int) var_6)))) | (((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */int) (unsigned short)31)) : (((/* implicit */int) (unsigned short)31)))))))));
                    var_20 ^= ((/* implicit */unsigned long long int) -6470424695415152729LL);
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)228))) + (-6470424695415152729LL)))) ? (((/* implicit */int) (unsigned short)31)) : (((((/* implicit */_Bool) min((((/* implicit */int) var_13)), (arr_4 [i_0] [i_0])))) ? (arr_7 [i_0]) : (var_4)))));
        var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) 6470424695415152728LL)) : (7572577817355929654ULL)));
    }
}
