/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130875
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
    var_14 = ((/* implicit */unsigned short) min((10127021812279144639ULL), (((/* implicit */unsigned long long int) var_0))));
    var_15 = ((/* implicit */unsigned int) var_4);
    var_16 = ((/* implicit */unsigned char) (_Bool)1);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned char)243)))), (((/* implicit */int) arr_2 [i_0] [i_1]))));
                        var_17 *= ((/* implicit */unsigned char) (-((+(((/* implicit */int) ((_Bool) (unsigned char)198)))))));
                    }
                } 
            } 
        } 
        arr_11 [(short)1] [(short)8] = ((/* implicit */short) (((-(arr_4 [i_0]))) / (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))));
        var_18 = ((/* implicit */unsigned int) 10127021812279144657ULL);
        var_19 += ((/* implicit */unsigned short) arr_0 [i_0]);
    }
}
