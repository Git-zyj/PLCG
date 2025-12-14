/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103084
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) var_0);
                var_13 = (((~(((/* implicit */int) var_9)))) - (max((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_2)) + (88))))), ((~(((/* implicit */int) var_10)))))));
                /* LoopSeq 3 */
                for (signed char i_2 = 2; i_2 < 20; i_2 += 3) 
                {
                    var_14 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_6 [i_2] [i_2] [i_2 - 2]))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_2] [i_3] = ((((/* implicit */_Bool) var_0)) || (((((/* implicit */_Bool) var_2)) || ((!(((/* implicit */_Bool) (unsigned char)38)))))));
                        var_15 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((unsigned char)211), ((unsigned char)78))))));
                        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)11)))) ? (((/* implicit */unsigned int) ((arr_7 [i_3] [(signed char)18] [i_1] [6]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))))) : ((-(var_6)))))))))));
                    }
                    var_17 |= ((/* implicit */signed char) (+((-(((/* implicit */int) ((_Bool) (unsigned char)211)))))));
                }
                for (unsigned long long int i_4 = 2; i_4 < 17; i_4 += 4) 
                {
                    var_18 = max((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), ((-(((/* implicit */int) (_Bool)0)))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            {
                                var_19 -= ((/* implicit */_Bool) var_1);
                                var_20 -= ((/* implicit */_Bool) (((((_Bool)0) && (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_5 - 1])))) ? (71613982) : (((/* implicit */int) (unsigned char)45))));
                                var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_8 [i_0] [i_0] [i_4] [i_5] [i_6]))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) max((((/* implicit */int) (signed char)-4)), (((((/* implicit */_Bool) arr_15 [i_4] [i_4 - 1] [i_4 + 4] [i_4 + 3] [i_4 + 2] [i_4 + 2])) ? (((/* implicit */int) arr_15 [i_4 + 2] [i_4 - 1] [i_4 + 4] [i_4 + 4] [i_4 + 2] [i_4 + 2])) : (((/* implicit */int) (signed char)-12))))));
                }
                for (unsigned int i_7 = 4; i_7 < 19; i_7 += 3) 
                {
                    arr_19 [i_7] = ((/* implicit */unsigned short) (-((+(((int) var_10))))));
                    var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))));
                    arr_20 [i_0] [i_0] [(_Bool)1] [i_7] = ((/* implicit */int) var_8);
                    arr_21 [i_0] [i_7] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_7] [i_7 + 1] [i_0] [i_0] [(_Bool)1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */unsigned long long int) ((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0])))))), (var_3)))));
                    arr_22 [i_7] = ((/* implicit */unsigned int) (-(((arr_18 [i_0] [i_0] [i_0] [i_7 - 2]) ? (((/* implicit */int) arr_18 [i_0] [i_7] [i_0] [i_7 - 2])) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_7] [i_7 + 2]))))));
                }
                var_24 = ((/* implicit */_Bool) (~((~(1073217536)))));
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) ((min((var_11), (((/* implicit */unsigned long long int) (~(var_0)))))) - (((/* implicit */unsigned long long int) var_7))));
}
