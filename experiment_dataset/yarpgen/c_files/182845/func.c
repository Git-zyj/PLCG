/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182845
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) var_6)) != (arr_4 [i_0 - 1] [i_1]))) ? ((~(((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 1])))) : (((/* implicit */int) (unsigned short)63088))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 2; i_3 < 15; i_3 += 4) /* same iter space */
                    {
                        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) 1810461981U))));
                        var_15 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) ((((/* implicit */int) var_10)) / (((/* implicit */int) (unsigned char)83))))) : ((-(var_2))))));
                    }
                    for (unsigned char i_4 = 2; i_4 < 15; i_4 += 4) /* same iter space */
                    {
                        var_16 ^= ((/* implicit */short) arr_0 [i_0] [i_4]);
                        var_17 = ((/* implicit */signed char) (~(min((((/* implicit */unsigned int) max((((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_4] [i_1] [i_1])), (var_12)))), (arr_13 [i_0 - 3] [i_0 + 1] [i_0 - 3] [i_4 - 1])))));
                        arr_16 [i_0 - 2] [i_2] [i_0 - 2] [i_0 - 2] [i_0 - 2] = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)192)) <= (((/* implicit */int) (signed char)87)))) ? (min((((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))) / (var_9))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)63065))))))) : (((/* implicit */unsigned int) (-((~(((/* implicit */int) (unsigned short)63088)))))))));
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_13 [i_1] [(unsigned short)4] [i_1] [i_1]), (((/* implicit */unsigned int) var_10)))))))) | ((-(((/* implicit */int) (!(arr_8 [i_4] [i_0] [i_1] [i_0])))))))))));
                        arr_17 [(short)13] [i_2] [i_1] [(short)13] = ((/* implicit */signed char) ((((/* implicit */int) (!(arr_8 [i_0 - 3] [i_1] [i_2] [i_1])))) + (((((/* implicit */int) arr_8 [i_0 - 1] [i_1] [i_1] [i_4])) + (((/* implicit */int) arr_5 [i_0 - 3] [i_1] [i_1] [i_4 - 2]))))));
                    }
                    arr_18 [i_2] [i_0] = ((/* implicit */signed char) arr_7 [(unsigned char)5] [i_0] [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_6)))) : (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-126))) : (493078514U))) | (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
    var_20 = ((/* implicit */unsigned char) min((724813915), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)76)) : (2147483639)))));
}
