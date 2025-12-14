/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119964
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_13 = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_1 [i_0]))))));
        var_14 = ((/* implicit */signed char) max((min(((unsigned short)39164), (var_8))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4)))))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_15 = arr_4 [i_1];
        var_16 = ((/* implicit */unsigned short) ((signed char) ((signed char) (unsigned short)39164)));
        arr_5 [i_1] = arr_3 [i_1];
    }
    for (unsigned short i_2 = 1; i_2 < 10; i_2 += 1) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((unsigned short) (signed char)43))) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2])))))))));
        var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2 - 1])))))));
        arr_10 [i_2] = (unsigned short)65527;
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        for (int i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                {
                    var_18 ^= var_12;
                    arr_19 [(signed char)14] = ((/* implicit */signed char) ((long long int) (unsigned short)65535));
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (-(arr_15 [i_4] [i_7])))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-107)) != (1586545829)))) : (((/* implicit */int) var_2))))));
                                arr_25 [i_3] = ((/* implicit */long long int) arr_21 [i_3] [(unsigned short)14] [i_5] [(signed char)6] [i_7]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
