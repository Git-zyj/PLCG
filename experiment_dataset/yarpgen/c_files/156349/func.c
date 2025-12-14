/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156349
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        arr_10 [(short)14] [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_8 [i_2] [i_3]) ? (arr_3 [i_3] [i_0]) : (arr_3 [i_2] [(_Bool)1]))))));
                        arr_11 [i_0] [i_1 - 2] [i_2] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_9 [i_1] [i_3] [i_1] [i_2] [i_2] [i_2]))))));
                        arr_12 [i_0] [i_0] [i_0] [3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3] [i_1 + 2] [i_1] [i_1 - 1])) ? (((/* implicit */int) arr_5 [i_3] [i_0] [i_2] [i_1 + 2])) : (((/* implicit */int) arr_5 [i_3] [i_0] [i_2] [i_1 + 1])))))));
                        arr_13 [i_0] [i_1 + 1] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))))))) < (((unsigned long long int) (+(((/* implicit */int) arr_6 [i_2])))))));
                    }
                    var_19 = ((/* implicit */short) ((_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)5637)) ? (((/* implicit */int) (unsigned short)32796)) : (arr_3 [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            {
                                arr_19 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((arr_1 [i_1 + 2]), (((/* implicit */short) ((((/* implicit */int) arr_1 [i_1 - 1])) < (((/* implicit */int) arr_1 [i_1 - 2])))))));
                                var_20 = ((/* implicit */int) arr_9 [i_2] [i_2] [i_0] [i_0] [i_4] [i_4]);
                                var_21 = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1] [i_4] [i_5] [i_0])) - (((/* implicit */int) arr_4 [i_0] [i_0] [i_2] [i_0]))))));
                                arr_20 [i_0] [i_0] = ((/* implicit */unsigned int) (-(((long long int) arr_6 [i_1 - 2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_5)), (var_11)))) ? ((+(var_3))) : ((+(var_3)))))) ? (((/* implicit */int) var_4)) : ((-(((((/* implicit */int) var_0)) & (((/* implicit */int) var_5)))))))))));
}
