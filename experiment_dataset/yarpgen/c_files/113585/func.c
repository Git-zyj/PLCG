/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113585
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
    var_13 = ((/* implicit */signed char) max((((/* implicit */long long int) var_11)), (1306272770264752309LL)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) max((var_0), (((/* implicit */long long int) ((signed char) max((((/* implicit */unsigned short) (signed char)-27)), ((unsigned short)57327)))))));
        var_15 = ((/* implicit */_Bool) max((2452682692872198154LL), (((/* implicit */long long int) (unsigned short)0))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)47904))))) ? (((/* implicit */int) (unsigned char)0)) : (((((/* implicit */_Bool) var_11)) ? (max((2147483647), (((/* implicit */int) arr_2 [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_2 [(signed char)8] [i_0])) ? (((/* implicit */int) (unsigned short)47904)) : (-49754023)))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((max((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_5 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)93))))), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) -2147483647)) : (arr_5 [i_1] [(unsigned short)1]))))) < (((((/* implicit */_Bool) arr_4 [(unsigned char)6])) ? (max((((/* implicit */unsigned int) (unsigned short)65528)), (arr_5 [i_1] [(_Bool)1]))) : (((/* implicit */unsigned int) arr_4 [(_Bool)1])))))))));
        var_17 ^= ((/* implicit */signed char) ((((((((/* implicit */_Bool) (unsigned short)51437)) ? (((/* implicit */int) (unsigned short)65521)) : (((/* implicit */int) (unsigned char)240)))) >> (((-2147483639) + (2147483644))))) != (arr_4 [(_Bool)1])));
        arr_6 [i_1] = ((/* implicit */int) arr_5 [i_1] [i_1]);
        arr_7 [i_1] = ((/* implicit */_Bool) 5241505519414558054LL);
    }
}
