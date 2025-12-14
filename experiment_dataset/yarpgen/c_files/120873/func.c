/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120873
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
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        var_10 ^= ((/* implicit */short) ((int) ((var_5) + (((/* implicit */long long int) ((/* implicit */int) var_0))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            var_11 += ((/* implicit */_Bool) max((max(((~(((/* implicit */int) var_8)))), (((/* implicit */int) ((short) var_6))))), (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_3))))));
            arr_5 [i_0] [i_1 + 3] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */short) var_4)), (var_0)))), ((+(1048258082))))))));
            arr_6 [(_Bool)1] &= ((/* implicit */int) ((signed char) (short)6785));
            var_12 = (-(max((((/* implicit */long long int) min((((/* implicit */unsigned int) var_0)), (var_1)))), (max((((/* implicit */long long int) var_3)), (var_6))))));
        }
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) min((((/* implicit */short) var_8)), (var_3)))))));
            var_14 = ((/* implicit */long long int) (-(893631746953535978ULL)));
        }
    }
    var_15 = ((/* implicit */_Bool) var_8);
    var_16 *= ((/* implicit */short) (-(((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        var_17 = ((/* implicit */long long int) ((int) min((var_5), (((/* implicit */long long int) var_9)))));
        /* LoopSeq 1 */
        for (signed char i_4 = 3; i_4 < 9; i_4 += 2) 
        {
            arr_14 [i_4] [i_4] = (+(((/* implicit */int) (!(((/* implicit */_Bool) ((var_6) & (((/* implicit */long long int) var_9)))))))));
            arr_15 [i_4 - 2] [i_4] [i_3] = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) ((unsigned short) (_Bool)1))) != ((-(((/* implicit */int) (unsigned char)163))))))), ((-(((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_8)))))))));
            var_18 *= ((/* implicit */signed char) ((var_5) % ((~(((((/* implicit */long long int) ((/* implicit */int) var_0))) / (var_5)))))));
        }
    }
    /* LoopSeq 1 */
    for (unsigned int i_5 = 1; i_5 < 17; i_5 += 2) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */long long int) min((((/* implicit */int) (unsigned char)179)), (min(((-(((/* implicit */int) var_8)))), (((/* implicit */int) (unsigned short)0))))));
        arr_19 [i_5] = (~((~(((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_3))))))));
    }
}
