/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136705
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
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_2 [i_0 + 1] [i_0 - 1]))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [i_1] [i_1])))) ^ (var_13)))))))));
                var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0 + 2] [(unsigned char)8]))) ? (((/* implicit */int) arr_2 [i_0] [i_0 - 1])) : (((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_16 -= ((/* implicit */_Bool) ((unsigned char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)0)))) ^ ((~(arr_6 [i_2] [i_1] [i_2 - 2] [i_3]))))));
                            arr_9 [i_2] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) var_10)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) max((var_7), (var_9)))))));
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((min(((+(255LL))), (((/* implicit */long long int) (_Bool)1)))) > (((/* implicit */long long int) max((((/* implicit */int) var_5)), (var_13)))))))));
    var_19 = ((/* implicit */unsigned char) (unsigned short)35255);
}
