/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178649
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */int) var_3)) > ((-(var_2))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) max(((short)31607), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_14)), (arr_6 [(unsigned short)15] [i_2])))) && (((/* implicit */_Bool) arr_3 [(_Bool)1] [i_0] [i_0])))))));
                                arr_13 [i_2] [i_0] = ((/* implicit */int) var_1);
                                var_17 -= ((/* implicit */unsigned short) (_Bool)1);
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [(short)11] [i_1 - 1])) >> (((max((((/* implicit */unsigned int) (short)-26514)), (arr_8 [i_0] [i_1] [i_2 - 1] [i_2] [i_1 + 2] [i_0]))) - (4294940761U)))))), (((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) | (((/* implicit */int) (short)-31610))))) ^ (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-31594))) : (arr_2 [i_0] [i_0])))))));
                    var_18 = var_14;
                    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */int) (short)-31408)) < (((/* implicit */int) arr_10 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_0]))))) : (var_15))))));
                }
            } 
        } 
    } 
}
