/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118222
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
    var_11 = ((/* implicit */signed char) (unsigned short)65535);
    var_12 = ((/* implicit */short) (~(var_4)));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) max((var_6), (((/* implicit */unsigned short) (signed char)57))))) << (((((min((var_7), (((/* implicit */long long int) (short)-21456)))) + (21475LL))) - (19LL)))))) + (min((((((/* implicit */_Bool) var_2)) ? (var_8) : (var_7))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_14 += ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) != (((/* implicit */int) arr_2 [i_1]))))) < (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3] [i_2] [4LL] [8ULL])) || (((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_1] [i_0])))))));
                        var_15 += ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_5 [i_0] [(unsigned short)14] [(_Bool)1])), (146216309U)));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */short) (signed char)104);
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((max((((/* implicit */unsigned int) (signed char)-1)), (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [16] [i_0]))) / (271912134U))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-84)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_8 [13LL] [i_0] [i_0] [i_0])))) - (58188))))))));
    }
}
