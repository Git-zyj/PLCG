/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130756
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
    var_18 = ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_19 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) ((signed char) (_Bool)0))) : (((/* implicit */int) ((((/* implicit */int) var_12)) < (arr_0 [i_1]))))))) ? (((min((13455389301390797932ULL), (((/* implicit */unsigned long long int) -1021055182)))) / (((unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) 4294967295U))));
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    var_20 |= ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) arr_4 [i_0 + 1])), (1976714036U))) & (var_3)));
                    arr_8 [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) (+(((/* implicit */int) var_8))))))));
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (!(((/* implicit */_Bool) -706031597)))))));
                    arr_9 [7U] [2] [i_0] = ((/* implicit */unsigned int) var_8);
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 3; i_3 < 23; i_3 += 4) 
    {
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (unsigned int i_5 = 1; i_5 < 22; i_5 += 3) 
            {
                {
                    arr_17 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_11 [i_3] [i_4 - 1])) && (((/* implicit */_Bool) arr_13 [i_3])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5] [6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [3] [i_4] [i_5] [(_Bool)1]))) : (arr_14 [i_3])))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3 - 1]))) : (arr_10 [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551609ULL)))))))))));
                    var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [20U])))));
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) (signed char)-19))))))));
                }
            } 
        } 
    } 
    var_24 = (+(-2108420557));
}
