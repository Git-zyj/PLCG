/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110314
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
    var_12 = ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) var_9)))) ? (var_1) : (((/* implicit */unsigned int) var_9)))) > (min((((/* implicit */unsigned int) var_7)), (var_1)))));
    var_13 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 3083021988U))))) > (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_10))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_0] [i_3] = arr_0 [i_2];
                            arr_11 [i_0] [i_0] [i_2] [i_3] &= ((/* implicit */short) var_11);
                            var_14 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    var_15 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) 1901528687)) ? (arr_6 [i_0] [i_0]) : (((((/* implicit */_Bool) 1211945307U)) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) var_10)))))));
                    arr_14 [i_0] [i_1] [i_4] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_0])))));
                    arr_15 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) arr_1 [i_1] [i_1]);
                }
                arr_16 [i_1] [i_0] = ((/* implicit */short) (((+(((/* implicit */int) arr_8 [i_1] [i_1] [i_0])))) + (((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))));
            }
        } 
    } 
}
