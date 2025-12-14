/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174519
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) var_7))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_2))));
                    arr_10 [i_0] [i_1] [i_1] [(short)3] = ((/* implicit */unsigned short) arr_5 [i_2] [0U]);
                }
            } 
        } 
        arr_11 [i_0] [i_0] |= ((/* implicit */short) ((((/* implicit */int) (unsigned char)112)) & (((/* implicit */int) (short)-15799))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                {
                    arr_20 [(signed char)2] [i_5] [i_5] [i_3] = ((short) ((((/* implicit */int) var_16)) / (((((/* implicit */int) var_13)) << (((((/* implicit */int) var_8)) + (7080)))))));
                    arr_21 [i_5] [i_4] [i_5] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (short)26)), (var_14)));
                }
            } 
        } 
        var_17 -= ((/* implicit */short) 13817164703146889437ULL);
        arr_22 [i_3] [i_3] = ((/* implicit */short) var_3);
    }
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((signed char) (_Bool)1)))));
}
