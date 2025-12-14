/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114023
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
    var_20 += ((/* implicit */long long int) (!(((/* implicit */_Bool) var_19))));
    var_21 = ((/* implicit */signed char) var_11);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 11; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) max((var_8), (((/* implicit */unsigned int) arr_7 [i_0] [i_1]))));
                    arr_10 [i_2] [i_1] [11U] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_2 - 3] [i_2 - 2] [i_2])) ? (((/* implicit */long long int) min((((/* implicit */int) ((var_8) > (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [10] [i_1])) : (((/* implicit */int) var_15))))))) : (((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2] [i_2])) ? (((/* implicit */long long int) 0)) : (arr_8 [i_2 - 3] [i_2 - 1] [i_2])))));
                    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) var_10))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned char) arr_12 [i_0] [2LL] [(_Bool)1] [i_3 - 1]);
                        var_25 = ((/* implicit */short) var_11);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_16 [i_0] [i_0] [i_2] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) / ((+((-(((/* implicit */int) var_17))))))));
                        var_26 = ((/* implicit */signed char) (((-(((/* implicit */int) ((3) != (((/* implicit */int) arr_13 [11ULL] [i_1] [i_1] [i_1] [i_1]))))))) - (-1482581326)));
                        arr_17 [4LL] [4LL] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_1] [(signed char)11] [(unsigned char)1]);
                        arr_18 [(unsigned short)0] [i_1] [(unsigned short)0] [i_2] = ((/* implicit */signed char) var_1);
                    }
                    arr_19 [6U] [i_2] [i_1] [6U] = ((/* implicit */signed char) var_2);
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) var_17)) < (((/* implicit */int) var_0))));
    var_28 = ((/* implicit */short) ((((/* implicit */int) ((signed char) ((((/* implicit */int) var_0)) >= (var_16))))) >> (min((((/* implicit */unsigned int) var_12)), (min((((/* implicit */unsigned int) var_9)), (0U)))))));
}
