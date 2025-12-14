/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180236
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) (+(min((arr_2 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-118))))))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) (-((+(((((/* implicit */_Bool) 131071U)) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) arr_0 [i_0]))))))));
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)123))) == (((((/* implicit */long long int) arr_1 [2LL])) & (-9192029808920307771LL))))) ? (((/* implicit */unsigned long long int) (~(arr_5 [4U])))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((((/* implicit */int) var_0)) - (84)))))) ? ((+(144115188075724800ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_4)), (var_9))))))))))));
        arr_6 [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) var_9);
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) (((+((-(arr_2 [i_1]))))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_5)))))));
    }
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        arr_11 [(_Bool)1] = ((/* implicit */unsigned char) ((((((((/* implicit */int) min((arr_9 [(_Bool)1]), (((/* implicit */short) (signed char)109))))) + (2147483647))) << (((((/* implicit */int) var_9)) - (124))))) != (((/* implicit */int) max(((!(((/* implicit */_Bool) var_1)))), (((131071U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2]))))))))));
        arr_12 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 134217727U))))) : (((/* implicit */int) (signed char)120))));
    }
    var_12 = ((/* implicit */_Bool) var_9);
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 1; i_3 < 7; i_3 += 4) 
    {
        for (long long int i_4 = 4; i_4 < 6; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_23 [i_3] [i_3] [i_3] [1ULL] = ((/* implicit */signed char) (-(((/* implicit */int) arr_4 [i_4 + 4]))));
                    arr_24 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) arr_15 [i_3]);
                }
            } 
        } 
    } 
}
