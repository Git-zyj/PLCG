/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159842
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
    var_18 = ((/* implicit */signed char) ((short) (+((-(1783605274))))));
    var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_0))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1 - 1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (+(2097682543)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_20 ^= ((/* implicit */unsigned int) ((unsigned char) ((short) -1783605265)));
                    var_21 = ((/* implicit */_Bool) ((unsigned short) (~(1783605272))));
                    var_22 = ((unsigned short) ((unsigned char) arr_10 [i_0] [i_1] [i_0] [i_1]));
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        arr_16 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)1))));
                        arr_17 [i_1] [i_3] [i_1] [i_1] [i_0] [i_3] = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_14 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0]))))));
                        arr_18 [(unsigned char)11] [i_0] [i_1 - 1] [i_4] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (unsigned char)245)))));
                        arr_19 [i_0] = ((/* implicit */short) ((unsigned short) (~(((/* implicit */int) var_5)))));
                    }
                    var_23 |= ((/* implicit */short) ((unsigned short) ((unsigned short) var_12)));
                    arr_20 [i_0] [i_0] = ((/* implicit */signed char) ((short) -1783605300));
                    arr_21 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) ((unsigned char) ((_Bool) (signed char)-86)));
                }
            }
        } 
    } 
}
