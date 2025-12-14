/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134569
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */short) 117440512U);
                    arr_9 [i_2] [i_1 + 2] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(-68719476736LL)))) ? (((/* implicit */int) ((signed char) (unsigned char)166))) : (((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2] [i_2]))))) | (((/* implicit */int) (short)-32767))))));
                    arr_10 [i_1] [i_0 - 4] [i_0] = ((/* implicit */unsigned short) arr_0 [i_1 + 1]);
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        arr_14 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */int) max((((/* implicit */long long int) (unsigned char)138)), (((var_5) / (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                        arr_15 [i_1] [i_1 + 1] [i_1] [i_3] = ((/* implicit */short) 3398492589U);
                        var_19 = ((((/* implicit */_Bool) (~(((/* implicit */int) ((-80181590) < (((/* implicit */int) arr_4 [i_1])))))))) ? (min((((((/* implicit */int) (unsigned char)3)) ^ (((/* implicit */int) (unsigned short)9034)))), (((/* implicit */int) min(((unsigned short)8191), (((/* implicit */unsigned short) (_Bool)1))))))) : (1876971420));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) var_11);
}
