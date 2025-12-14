/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165690
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
    var_16 = ((/* implicit */int) var_1);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_3))));
                arr_6 [i_0] [10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) var_1)), (arr_5 [i_0] [(signed char)10]))))))));
                var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_10))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    arr_11 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) arr_7 [i_0] [(signed char)6] [i_1 + 2] [(_Bool)1]));
                    arr_12 [i_2] [5] = ((/* implicit */unsigned char) ((signed char) max(((unsigned char)15), (((/* implicit */unsigned char) (_Bool)0)))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_4 = 1; i_4 < 10; i_4 += 4) 
                    {
                        arr_19 [i_0] [i_1 + 2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((unsigned short) var_11));
                        var_19 *= ((/* implicit */unsigned int) arr_14 [i_3]);
                        var_20 = ((/* implicit */int) var_4);
                    }
                    for (int i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */_Bool) max(((signed char)-39), ((signed char)38)));
                        var_22 |= ((/* implicit */signed char) (+(((/* implicit */int) arr_20 [(short)2] [i_1] [i_1 + 3] [i_1]))));
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) max((max((((/* implicit */unsigned int) arr_15 [2] [i_0] [i_1 - 1])), (var_12))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [(signed char)0] [(unsigned char)10] [i_1 - 1]))))))))));
                    }
                    for (int i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
                    {
                        var_24 |= ((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */signed char) var_11)), (var_13))))))), (arr_22 [i_6])));
                        arr_24 [i_0] [i_1 + 3] [i_3] = ((/* implicit */unsigned long long int) ((signed char) var_13));
                        arr_25 [i_3] [1ULL] [i_3] [6] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) var_15))))));
                    }
                    var_25 = ((/* implicit */signed char) (+((-(((/* implicit */int) var_1))))));
                    var_26 -= ((/* implicit */unsigned short) max((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_9))));
                }
                arr_26 [3U] |= ((/* implicit */_Bool) var_12);
            }
        } 
    } 
}
