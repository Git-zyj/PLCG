/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137337
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
    var_16 *= ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 18; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            arr_12 [18LL] [18LL] [i_2] [i_1 - 2] |= ((/* implicit */signed char) arr_10 [i_2 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                            var_17 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_2 [i_0])))) || (((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) % (12202152529688375278ULL))), (((/* implicit */unsigned long long int) ((signed char) var_12))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-20)) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)227)))) | (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) var_4)))))))));
                var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((arr_4 [i_0 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1LL))), (((/* implicit */long long int) arr_1 [i_1])))))));
            }
        } 
    } 
}
