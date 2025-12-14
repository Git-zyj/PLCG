/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169460
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 &= ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
                var_17 += ((/* implicit */_Bool) arr_1 [(signed char)8] [i_1]);
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((unsigned int) (unsigned short)56328)) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)9207)) ? (((/* implicit */int) (unsigned short)9221)) : (((/* implicit */int) (unsigned short)9177)))))))) ? (((/* implicit */int) arr_1 [6] [i_1])) : (max(((+(((/* implicit */int) (unsigned short)9177)))), ((-(((/* implicit */int) var_2)))))))))));
            }
        } 
    } 
    var_19 = var_4;
    var_20 = ((/* implicit */_Bool) min((var_20), (var_2)));
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                {
                    arr_12 [i_2] = ((/* implicit */int) arr_10 [i_2]);
                    arr_13 [i_2] [(unsigned char)9] [(_Bool)1] [i_4] = ((/* implicit */unsigned char) ((unsigned short) max(((~(arr_4 [i_2]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_2]))))))));
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_8 [i_2] [(unsigned char)16])) ? (((/* implicit */int) arr_9 [i_2] [i_3])) : (((/* implicit */int) var_8)))) + ((+(((/* implicit */int) arr_5 [i_3])))))))));
                }
            } 
        } 
    } 
}
