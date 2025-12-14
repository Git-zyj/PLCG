/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144409
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
    var_13 = ((/* implicit */unsigned int) var_5);
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (+(min((((/* implicit */int) var_0)), (((((/* implicit */int) var_11)) & (((/* implicit */int) var_8)))))))))));
    var_15 = ((/* implicit */short) var_9);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) arr_1 [i_0]))));
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) min((var_1), (((/* implicit */unsigned short) (unsigned char)41)))))) : (arr_1 [i_0 - 3])))) ? (min((min((arr_0 [4U]), (arr_0 [i_0]))), (((/* implicit */long long int) min((arr_2 [(unsigned short)2]), (((/* implicit */unsigned int) var_5))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [2])))))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_18 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((arr_6 [i_1]) % (var_6))) == (((/* implicit */long long int) arr_3 [i_1]))))) - (((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) var_10))))) < (((((/* implicit */_Bool) 8542859594566110032LL)) ? (arr_4 [i_1]) : (arr_6 [16ULL]))))))));
            arr_9 [i_2] [i_2] = ((/* implicit */short) ((var_5) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) - (arr_5 [i_1])))) ? (((/* implicit */int) (unsigned char)167)) : (((/* implicit */int) arr_8 [i_1]))))) : ((~(min((arr_6 [i_2]), (arr_5 [i_2])))))));
            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 2727506767U)))) ? (min((0ULL), (min((((/* implicit */unsigned long long int) var_7)), (12261670591534011656ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1])))))))))));
        }
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) 154151025))));
        var_21 = ((/* implicit */signed char) ((unsigned int) ((unsigned int) arr_7 [5])));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_11 [15LL] [15LL]))))));
        var_23 = ((/* implicit */unsigned char) var_6);
    }
    for (unsigned int i_4 = 2; i_4 < 18; i_4 += 3) 
    {
        var_24 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 9859805538078813991ULL)) ? (((/* implicit */long long int) arr_11 [i_4] [i_4])) : (var_6))), (((/* implicit */long long int) ((arr_10 [i_4 + 3]) >> (((arr_11 [i_4 + 1] [i_4 - 2]) - (782908822U))))))));
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
        {
            var_25 = ((/* implicit */unsigned long long int) arr_14 [10LL]);
            var_26 = ((/* implicit */long long int) (~(min((min((8191U), (((/* implicit */unsigned int) (unsigned char)234)))), (((/* implicit */unsigned int) arr_12 [i_4 - 1]))))));
        }
    }
}
