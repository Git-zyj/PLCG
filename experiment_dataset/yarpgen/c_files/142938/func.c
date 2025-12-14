/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142938
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] [5U] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
        var_13 += ((/* implicit */unsigned int) ((((/* implicit */long long int) var_10)) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (5032517554280861746ULL) : (5032517554280861736ULL)))) ? ((~(var_9))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [(unsigned char)3] [i_0])))))))));
    }
    var_14 ^= ((/* implicit */signed char) var_3);
    var_15 |= ((/* implicit */unsigned long long int) ((signed char) 4294967287U));
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        for (short i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((/* implicit */_Bool) (-((+(((/* implicit */int) var_11))))))) ? ((-((+(13844506247216059754ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                    var_17 |= ((/* implicit */unsigned char) arr_7 [i_2]);
                }
                for (long long int i_4 = 1; i_4 < 9; i_4 += 2) 
                {
                    var_18 += ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((unsigned int) arr_7 [8LL]))) & (((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */unsigned long long int) arr_12 [7] [7] [(unsigned char)9] [7]))))))));
                    arr_13 [i_1] [i_2] [i_4 + 1] = (-((+(5032517554280861746ULL))));
                }
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned short)41926)))) < (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)72))) < (4294967295U)))))))));
            }
        } 
    } 
}
