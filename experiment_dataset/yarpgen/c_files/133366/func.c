/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133366
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [6U] |= ((/* implicit */unsigned int) var_14);
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned int) var_7)) : (var_12)));
            var_20 *= ((((/* implicit */int) (unsigned char)26)) <= (((/* implicit */int) var_4)));
        }
    }
    for (int i_2 = 3; i_2 < 21; i_2 += 1) 
    {
        arr_8 [i_2] [i_2] = ((-1354908336) % (1821055206));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                {
                    var_21 = ((((/* implicit */_Bool) (unsigned short)27179)) ? (-8748299475059704165LL) : (((/* implicit */long long int) -761685960)));
                    arr_13 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2] = ((/* implicit */int) (((+(arr_12 [i_2 - 1] [i_2 - 2] [i_4]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_11))))));
                    var_22 = ((/* implicit */_Bool) var_12);
                    arr_14 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (-(min((arr_11 [i_2 + 2] [i_2 + 1]), (((/* implicit */long long int) (short)24726))))));
                }
            } 
        } 
    }
    var_23 &= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(675393732U)))))))));
}
