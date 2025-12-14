/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124497
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
    var_20 = ((/* implicit */short) (~(min((((/* implicit */long long int) ((short) (unsigned char)255))), (((((/* implicit */_Bool) (unsigned char)23)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_4 [i_1] [i_0]))))));
                var_22 = ((/* implicit */unsigned char) max((var_22), (arr_4 [19LL] [19LL])));
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */short) (~(((long long int) arr_3 [i_0]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_5 = 1; i_5 < 10; i_5 += 3) 
                    {
                        var_23 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)251)) ? (-8135048403361138296LL) : (-8135048403361138296LL)))) ? (max((arr_13 [i_5 + 3] [i_5 + 3] [i_5 + 3] [i_5]), (var_8))) : (((((/* implicit */_Bool) var_11)) ? (var_8) : (arr_13 [i_5 + 1] [i_5 + 1] [7LL] [i_5 + 1]))));
                        arr_15 [i_2] [i_3] &= ((/* implicit */long long int) var_2);
                        var_24 |= arr_0 [i_4];
                        var_25 -= ((/* implicit */short) arr_0 [i_2]);
                    }
                    var_26 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_8 [i_2]), (arr_8 [i_3])))) ? (((/* implicit */int) arr_9 [i_2] [i_4])) : ((~(((/* implicit */int) arr_9 [i_3] [i_4]))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */long long int) (+(((/* implicit */int) var_15))));
}
