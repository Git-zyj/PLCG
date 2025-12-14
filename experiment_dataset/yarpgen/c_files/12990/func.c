/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12990
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
    var_14 = ((/* implicit */short) var_7);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) min((1227106324), ((~(((int) arr_2 [i_0] [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_16 = (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [i_2] [i_2 + 1] [i_2 - 2] [i_2 - 2])), (arr_2 [(unsigned char)7] [i_2 - 2] [i_2 + 1])))));
                                var_17 = arr_3 [(unsigned char)4];
                                arr_10 [i_0] [i_0 - 2] [i_0] [i_0] [1] = ((/* implicit */int) ((((unsigned long long int) arr_7 [i_0 + 1] [i_3 - 1] [(unsigned char)2] [i_3 + 1] [8] [i_0 + 1])) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_2 - 1] [i_2 - 1] [i_3])) ? (((/* implicit */int) arr_6 [i_0] [i_2 + 1] [i_2] [i_2])) : (((/* implicit */int) arr_6 [3] [i_2 - 1] [12LL] [i_2])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) (~(((/* implicit */int) var_3))));
}
