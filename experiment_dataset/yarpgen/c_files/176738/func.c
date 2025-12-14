/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176738
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (-(-1))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)13418)) ? (2554696121U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52118))))), (((((/* implicit */_Bool) (unsigned short)13415)) ? (2115661579U) : (1270802251U)))))) : (((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 792333702622699135LL)))))) : ((+(arr_1 [i_0] [i_0])))))));
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_2 [i_0] [i_1]))), (((/* implicit */unsigned long long int) ((var_4) < (((/* implicit */int) var_2)))))))) || (((arr_1 [i_0] [i_1 + 1]) == (arr_1 [i_0] [i_0])))));
            var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_1 [i_0] [i_1 - 1]), (((/* implicit */unsigned long long int) ((unsigned short) arr_1 [i_0] [i_0]))))))));
            arr_5 [(signed char)14] |= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
            var_13 ^= ((/* implicit */short) arr_4 [i_0]);
        }
        arr_6 [i_0] = max((((/* implicit */unsigned long long int) arr_4 [i_0])), ((-(max((((/* implicit */unsigned long long int) arr_3 [i_0] [(_Bool)0] [i_0])), (arr_2 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 3; i_2 < 13; i_2 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) (+(arr_7 [i_2 - 3])));
        var_15 = ((/* implicit */unsigned int) ((arr_0 [i_2]) ? (arr_1 [i_2] [i_2 + 1]) : (((/* implicit */unsigned long long int) arr_7 [i_2 - 1]))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_16 &= ((/* implicit */short) (-((((-(((/* implicit */int) arr_10 [i_3])))) % (((/* implicit */int) min((((/* implicit */short) arr_0 [i_3])), (var_7))))))));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_3] [i_3]))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52123))) - (3024165016U))) : (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-3303)))))))) ? (max(((+(3315569948212296823ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)50)) ? (arr_7 [i_3]) : (1270802247U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_3] [i_3]) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (arr_7 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3] [i_3] [i_3]))))))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_13 [i_4] [i_4] = ((/* implicit */unsigned char) ((var_2) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_4] [i_4] [i_4]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3024165016U)))))));
        arr_14 [i_4] [i_4] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) > (arr_2 [i_4] [i_4]));
    }
    var_18 = (-((~(max((1270802247U), (((/* implicit */unsigned int) var_5)))))));
}
