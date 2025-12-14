/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128355
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
    var_11 *= ((/* implicit */unsigned long long int) var_10);
    var_12 = ((/* implicit */short) ((int) (!(var_4))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        arr_3 [1ULL] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)198)) && (((/* implicit */_Bool) (short)(-32767 - 1))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            arr_7 [i_0] [1] = ((/* implicit */unsigned char) var_8);
            arr_8 [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned char) ((_Bool) ((unsigned short) (short)12920)));
            var_13 = ((/* implicit */long long int) var_1);
        }
        arr_9 [i_0 + 1] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (var_5))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 5354743533027059598ULL))))));
    }
    for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_17 [i_4] [i_3] = ((/* implicit */long long int) ((int) var_10));
                    var_14 = ((/* implicit */unsigned char) var_7);
                }
            } 
        } 
        arr_18 [i_2] = ((/* implicit */long long int) var_10);
        var_15 = max((max((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (var_9))), (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) | (var_3)))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) != (var_9)))) % (((int) var_7))))));
    }
}
