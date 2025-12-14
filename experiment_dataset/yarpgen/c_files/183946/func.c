/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183946
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
    var_16 = ((/* implicit */long long int) var_4);
    var_17 = ((/* implicit */unsigned short) var_14);
    var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (max((((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) (unsigned char)142)) : (((/* implicit */int) (unsigned short)49152)))), (((/* implicit */int) (unsigned char)124)))) : (((/* implicit */int) var_14))));
    var_19 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)107))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_0] [i_1]))) == (arr_0 [i_0 + 1] [i_0 + 1]))))) <= (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */int) (unsigned short)40468)) : (((/* implicit */int) (short)32767))))), (arr_0 [i_0 - 3] [i_0 - 2])))));
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */signed char) arr_5 [i_1] [i_1] [i_1]);
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned char) max((max((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [2ULL] [4LL]))))), ((~(((/* implicit */int) arr_3 [i_0 - 3] [(signed char)6])))))), (((/* implicit */int) arr_6 [i_0] [i_0] [(_Bool)1] [(_Bool)1]))));
        var_20 ^= ((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */int) min((((((/* implicit */int) var_12)) > (((/* implicit */int) arr_3 [i_0] [(_Bool)1])))), (max((arr_2 [i_0] [i_0] [i_0]), (arr_1 [i_0 - 3])))))) : (((/* implicit */int) arr_2 [i_0] [4LL] [i_0]))));
        arr_10 [i_0] [i_0 + 1] = ((/* implicit */unsigned char) (-(arr_0 [i_0] [i_0])));
    }
}
