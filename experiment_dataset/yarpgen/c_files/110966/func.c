/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110966
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1] [(_Bool)1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (-((((_Bool)0) ? (((((/* implicit */_Bool) (unsigned char)209)) ? (249559544) : (((/* implicit */int) (signed char)-94)))) : (((/* implicit */int) (_Bool)1))))));
                            var_11 = ((/* implicit */unsigned char) arr_7 [i_0 + 1] [i_2] [i_2] [i_2]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    for (short i_5 = 1; i_5 < 20; i_5 += 2) 
                    {
                        {
                            arr_18 [i_0] [i_1 + 2] [i_4] = ((/* implicit */_Bool) arr_10 [i_5] [i_4] [i_1] [i_0]);
                            /* LoopSeq 1 */
                            for (int i_6 = 0; i_6 < 21; i_6 += 2) 
                            {
                                var_12 = ((/* implicit */long long int) ((signed char) (+(((/* implicit */int) arr_6 [i_0])))));
                                var_13 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) arr_2 [i_0])))));
                            }
                        }
                    } 
                } 
                var_14 = ((/* implicit */short) (-((-(((/* implicit */int) (!(arr_1 [i_1 + 1]))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -249559549)) ? (var_5) : (var_5)))))));
}
