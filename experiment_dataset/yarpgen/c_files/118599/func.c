/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118599
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
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_11 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) ((704903434U) == (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : (((/* implicit */int) var_2)))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) arr_2 [i_2] [i_0]))))) * (((/* implicit */int) min(((_Bool)0), (var_1))))))));
                    var_12 = ((/* implicit */short) ((_Bool) (_Bool)0));
                    var_13 = var_0;
                }
            } 
        } 
        var_14 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))));
    }
    for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        arr_11 [i_3] = ((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (arr_10 [i_3])));
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            var_15 = ((/* implicit */unsigned char) min(((_Bool)1), (((((/* implicit */unsigned long long int) var_3)) > (((unsigned long long int) arr_9 [i_3] [i_3]))))));
            var_16 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)28)) ? (((int) arr_13 [i_3] [i_4] [i_3])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_4])))))));
        }
        var_17 = ((/* implicit */unsigned char) (_Bool)1);
        arr_15 [i_3] [i_3] = ((/* implicit */_Bool) arr_9 [i_3] [i_3]);
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) arr_17 [i_5]);
                    arr_21 [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    }
    var_19 |= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) max(((unsigned char)28), (var_7)))) >> (((((((/* implicit */_Bool) (short)25636)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))) - (180))))));
    var_20 = ((/* implicit */int) var_1);
    var_21 = var_8;
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (((((-(((/* implicit */int) (short)29312)))) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))) : (5800898369762050108ULL)));
}
