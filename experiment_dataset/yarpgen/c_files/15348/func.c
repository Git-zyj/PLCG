/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15348
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) arr_2 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned char) ((-1953517192) - (((/* implicit */int) (_Bool)1))));
        var_16 = ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) arr_1 [i_0]))));
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-1)) | (((/* implicit */int) (unsigned char)155))));
        var_17 = ((/* implicit */unsigned short) var_9);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) -1953517192))));
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                for (unsigned char i_4 = 1; i_4 < 11; i_4 += 4) 
                {
                    {
                        arr_16 [i_1] [i_2] [i_2] = ((/* implicit */_Bool) max(((-(((258642642) & (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (unsigned short)57955))));
                        arr_17 [i_2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)248)))) % (arr_7 [i_1])));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_21 [i_1] [0] [i_2] [i_3] [i_4 + 2] [i_5] [i_5] &= ((/* implicit */_Bool) ((((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-34))))) & (((/* implicit */int) (!(((/* implicit */_Bool) 988813656))))))) << (((((/* implicit */int) var_0)) - (117)))));
                            arr_22 [i_2] [i_2] [(_Bool)1] [i_5] [i_5] = ((/* implicit */unsigned short) ((unsigned char) var_0));
                        }
                    }
                } 
            } 
        } 
    }
    var_19 = ((/* implicit */_Bool) ((unsigned char) -1256433644));
    var_20 = ((/* implicit */_Bool) max((((/* implicit */int) (short)14433)), (31)));
}
