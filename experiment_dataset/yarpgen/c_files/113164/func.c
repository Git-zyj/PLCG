/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113164
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
    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(var_0)))) ? (var_14) : (min((var_9), (((/* implicit */int) var_11)))))) < (((/* implicit */int) var_10))));
    var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((/* implicit */int) ((signed char) 2492009983U))) : ((+((-(var_4)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(arr_2 [i_0] [i_0 - 1]))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned short) min((arr_1 [i_0 + 1]), (((/* implicit */int) ((((/* implicit */unsigned int) arr_1 [i_0 + 1])) < (arr_6 [i_2]))))));
                        var_22 = ((/* implicit */long long int) (~(((((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0])), (arr_7 [i_0] [i_0] [i_2])))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
                        var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_2 [i_1] [i_3]) ? (((/* implicit */int) max((arr_3 [i_0]), (((/* implicit */unsigned char) (_Bool)1))))) : ((+(((/* implicit */int) arr_4 [i_0 - 1]))))))) ? (min(((-(((/* implicit */int) (unsigned short)40746)))), ((-(((/* implicit */int) (signed char)8)))))) : (((((((/* implicit */int) min((arr_5 [i_1] [i_2] [i_3]), (arr_0 [i_0 - 2])))) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))));
                        var_24 ^= ((/* implicit */unsigned int) arr_1 [i_0 - 1]);
                    }
                    for (short i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        arr_10 [i_0] [i_1] [3] [i_0] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_4 [i_2 + 1])), (max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_0] [i_2 - 2])) : (((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [(_Bool)1])) : (((/* implicit */int) arr_4 [i_1]))))))));
                        arr_11 [i_0] [i_1] [i_2] [i_1] [i_4] = (-((-(((((/* implicit */_Bool) arr_9 [i_0] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                        arr_12 [i_2] [i_4] = ((/* implicit */short) var_13);
                    }
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((1353863782U) == (((1212177650U) % (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [(unsigned char)8]))) & (2492009963U))))))))));
                }
            } 
        } 
    } 
}
