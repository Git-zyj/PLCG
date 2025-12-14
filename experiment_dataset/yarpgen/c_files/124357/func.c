/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124357
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
    var_10 = ((/* implicit */unsigned short) ((_Bool) ((((((/* implicit */unsigned int) var_2)) ^ (var_6))) % (((/* implicit */unsigned int) var_7)))));
    var_11 = ((/* implicit */int) ((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (unsigned int i_2 = 4; i_2 < 20; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */signed char) arr_6 [i_1 - 1] [i_2 - 3]);
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_13 = ((((11807138655345077081ULL) * (((/* implicit */unsigned long long int) 5865918749740076424LL)))) - (((/* implicit */unsigned long long int) ((arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_2 + 1] [i_2 + 2] [i_3 - 1]) / (arr_10 [i_0] [i_3 - 1] [i_4] [i_0] [i_1 + 1] [i_0])))));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (17901072908983983122ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) / (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1]))))) ? (((/* implicit */int) max((arr_3 [i_1 - 1]), (arr_3 [i_2 - 4])))) : (((/* implicit */int) var_8))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) var_0);
    var_15 = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) ((17901072908983983095ULL) == (0ULL)))) << (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) (signed char)50))))))));
}
