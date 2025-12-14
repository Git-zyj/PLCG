/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154668
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) (~(((long long int) var_4))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((var_1) ? (((var_7) >> (((var_13) + (6970520572205310039LL))))) : (((/* implicit */unsigned long long int) arr_2 [i_0]))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (signed char i_4 = 3; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) ((signed char) ((unsigned int) (_Bool)1)));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] [22LL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_13)))) ? (var_10) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_8))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(var_4)));
                    var_16 = var_2;
                    var_17 += ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) >> (((((long long int) var_9)) + (5396494034906282828LL)))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        var_18 = var_13;
        arr_19 [i_5] [i_5] = ((/* implicit */short) var_7);
    }
}
