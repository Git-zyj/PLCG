/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131091
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
    var_17 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) var_12)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)5))) : (var_13))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_14))))) : (((/* implicit */int) (!(var_5)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-21)) & (-1812391826)))) : (var_15)));
            var_18 = ((/* implicit */int) var_6);
            arr_7 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */int) arr_5 [i_0] [i_0] [i_1 - 2])) ^ (arr_4 [i_0] [i_1]))) : (((/* implicit */int) (signed char)5))));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            for (long long int i_3 = 1; i_3 < 19; i_3 += 3) 
            {
                {
                    var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(arr_2 [i_0])))), (((((/* implicit */_Bool) (+(4194304U)))) ? (((((/* implicit */_Bool) var_13)) ? (var_1) : (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1821453603)) ? (((/* implicit */int) var_16)) : (-1821453603))))))));
                    var_20 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_2] [i_2] [(signed char)2])) < (((/* implicit */int) arr_12 [(unsigned short)18] [(_Bool)1] [i_3 + 3] [i_3 - 1])))))));
                    var_21 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_5 [i_3 + 3] [i_0] [i_3 + 2])) ? (((/* implicit */unsigned long long int) 8388607U)) : (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1821453604)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_3 + 2] [i_0]))) : (var_0))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_4 = 4; i_4 < 20; i_4 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned char) (unsigned short)47784);
                        arr_17 [i_0] [i_2] [i_3 + 2] [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_0])) : (((/* implicit */int) var_6))));
                        var_23 = ((((/* implicit */_Bool) var_1)) ? (arr_3 [i_3 + 1]) : (((/* implicit */unsigned long long int) -544875654)));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            {
                                var_24 += ((/* implicit */short) var_9);
                                var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_2 [i_0])) + (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_21 [i_0] [i_0] [i_3 + 3] [i_5] [8])), (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_20 [i_6] [i_5] [i_3] [i_2] [i_0]), (arr_0 [i_6]))))) : (min((var_11), (var_15)))))));
                                var_26 = ((/* implicit */long long int) min((min((var_11), (((/* implicit */unsigned long long int) var_3)))), ((+(var_11)))));
                                var_27 = ((/* implicit */short) ((-1821453604) * (min((((((/* implicit */_Bool) (signed char)52)) ? (((/* implicit */int) arr_10 [i_6] [i_6])) : (((/* implicit */int) arr_10 [i_3 + 1] [i_5])))), (((/* implicit */int) max((arr_21 [i_3] [i_3] [i_3] [i_3] [i_3 + 1]), (((/* implicit */unsigned short) var_9)))))))));
                                var_28 = ((/* implicit */long long int) min((((min((-1786452105), (((/* implicit */int) var_9)))) ^ (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(var_6))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_29 += ((/* implicit */short) (!(((/* implicit */_Bool) (+(-1821453604))))));
    }
}
