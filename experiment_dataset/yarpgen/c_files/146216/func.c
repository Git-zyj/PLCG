/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146216
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
    for (unsigned char i_0 = 4; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            arr_10 [(signed char)0] [(short)10] |= ((/* implicit */unsigned char) arr_3 [i_3]);
                            var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_2) ? (((unsigned int) arr_1 [i_1])) : (((/* implicit */unsigned int) -1934174321)))))));
                            var_13 = ((/* implicit */_Bool) max((var_5), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 + 1] [i_1 + 1])))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 23; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 22; i_6 += 1) 
                        {
                            {
                                var_14 = ((arr_0 [i_0 + 2] [i_6]) ? (arr_12 [i_0] [i_0] [i_0] [i_0 - 1]) : (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1)))) % ((~(((/* implicit */int) var_8))))))));
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_4] [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_7 [i_0 + 1] [i_1 - 1] [(_Bool)1] [(short)5])))) : ((((((_Bool)1) && ((_Bool)1))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_7))))) : (arr_15 [i_0] [i_0] [i_0] [i_5] [i_6])))));
                                arr_18 [i_6] [(_Bool)1] [18U] [i_0] [i_0] = ((/* implicit */signed char) ((arr_13 [(_Bool)1] [(_Bool)1] [i_4 + 2]) < (arr_13 [i_4] [i_4] [i_4 - 2])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) var_5);
}
