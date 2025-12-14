/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127315
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
    var_14 = ((/* implicit */unsigned int) max((var_7), (((((/* implicit */unsigned int) ((/* implicit */int) ((var_9) >= (3568180557U))))) >= (726786738U)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_5))))))) ? (((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [(signed char)1])) - (((/* implicit */int) arr_1 [i_0] [i_0]))))) : (((arr_3 [i_0]) & (arr_3 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
        var_15 = arr_2 [i_0] [i_0 - 1];
    }
    var_16 = ((((/* implicit */_Bool) (short)32767)) && ((_Bool)1));
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            {
                var_17 = ((/* implicit */_Bool) var_6);
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 8; i_3 += 1) 
                {
                    for (short i_4 = 2; i_4 < 9; i_4 += 1) 
                    {
                        {
                            arr_16 [i_1] [i_1] = ((/* implicit */long long int) arr_3 [i_4]);
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1])))) ? (arr_5 [i_3 + 1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1]))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) max((min(((-(((/* implicit */int) arr_0 [i_1])))), (((/* implicit */int) var_7)))), (((/* implicit */int) (short)0))));
            }
        } 
    } 
}
