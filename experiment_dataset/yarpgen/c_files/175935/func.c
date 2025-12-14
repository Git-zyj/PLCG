/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175935
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) 4271997826175477551ULL);
                var_21 = ((/* implicit */int) (((!(((/* implicit */_Bool) (short)0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_0 [i_0])));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_2] [i_2] [i_3] = min((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)8002)))))))), ((-(((/* implicit */int) (signed char)115)))));
                            var_22 = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))))) < (min((arr_0 [i_3 + 2]), (arr_0 [i_3 - 1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) var_15);
}
