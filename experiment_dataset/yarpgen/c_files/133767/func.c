/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133767
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                var_11 = ((/* implicit */unsigned char) max((arr_3 [i_0] [i_0]), (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_2]))))));
                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (unsigned char)185)) ? (((((/* implicit */_Bool) (short)4794)) ? (((/* implicit */int) arr_6 [i_1] [i_2])) : (((/* implicit */int) (unsigned char)213)))) : (((/* implicit */int) min((arr_0 [i_0] [i_1]), (((/* implicit */short) arr_7 [i_0] [i_1] [i_2])))))))))));
            }
            /* LoopSeq 1 */
            for (unsigned char i_3 = 1; i_3 < 18; i_3 += 1) 
            {
                var_13 = ((/* implicit */unsigned char) ((signed char) (-(1165078528))));
                arr_10 [16] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)111))));
                var_14 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_3 + 2] [i_3 - 1])) == ((-(((/* implicit */int) (unsigned char)145))))))) <= (((int) ((((/* implicit */int) (short)-22007)) <= (((/* implicit */int) arr_1 [19])))))));
                arr_11 [(unsigned char)11] = ((/* implicit */unsigned long long int) (((!((!(((/* implicit */_Bool) (unsigned char)3)))))) ? (min(((~(((/* implicit */int) arr_2 [i_0] [(signed char)4])))), (((/* implicit */int) arr_4 [i_3 + 2] [i_3 + 2])))) : (min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) (unsigned char)52)) : (var_6)))))));
                arr_12 [(unsigned char)10] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((min((((/* implicit */unsigned long long int) (unsigned char)103)), (8346392731106992486ULL))) / (((/* implicit */unsigned long long int) min((arr_9 [i_0] [i_1] [i_0]), (((/* implicit */long long int) arr_6 [i_0] [11]))))))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) + (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])))))));
            }
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((max((((/* implicit */int) var_5)), (var_2))) < (((/* implicit */int) arr_6 [i_0] [i_0]))));
        }
        arr_14 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_0] [i_0] [(_Bool)1] [i_0])) + (max((min((((/* implicit */int) (unsigned char)1)), (-2002458280))), (((/* implicit */int) max((arr_4 [i_0] [i_0]), ((unsigned char)255))))))));
    }
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */int) min((var_0), (min((var_5), (var_1)))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) -4882399057148729037LL))))) << (((155860736) - (155860723)))))));
    var_16 = ((/* implicit */int) min((var_16), (((((/* implicit */_Bool) 26LL)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) (unsigned char)78)) : (((/* implicit */int) var_9)))))) : (((/* implicit */int) var_7))))));
}
