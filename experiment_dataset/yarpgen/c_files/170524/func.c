/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170524
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
    var_12 = ((/* implicit */_Bool) ((unsigned short) (~((~((-2147483647 - 1)))))));
    var_13 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (signed char)26)) != (((/* implicit */int) var_7))))) | (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) != (((var_4) & (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] [i_0 + 2] = ((/* implicit */short) arr_1 [i_0]);
        var_14 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        arr_5 [i_1] = ((short) ((((/* implicit */int) (signed char)26)) <= (((/* implicit */int) arr_4 [i_1]))));
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (signed char)-27))));
    }
    for (unsigned char i_2 = 1; i_2 < 14; i_2 += 4) 
    {
        var_16 ^= ((/* implicit */signed char) arr_4 [10]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_3 = 4; i_3 < 11; i_3 += 3) 
        {
            var_17 &= (signed char)-54;
            var_18 += ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) (unsigned char)9)) != (arr_8 [(signed char)12]))));
            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) (unsigned short)43386)) : (((/* implicit */int) (unsigned short)22149)))) : ((-(arr_7 [i_2] [i_2])))));
        }
    }
}
