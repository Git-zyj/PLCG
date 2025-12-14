/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152425
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
    for (short i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1] [9U]))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (+((-(((/* implicit */int) (signed char)-49))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_9 [i_0 + 1] [i_0 - 2] [i_1]))) - (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_12 [i_3] [i_2] [i_1 - 2] [i_0 + 1])))), (((/* implicit */int) arr_11 [i_0] [i_1 + 1] [i_2] [i_3] [i_2] [i_2])))))))));
                        var_15 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_0 - 2] [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 - 1]))))) : (596546429))));
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) min((max((1629093548478003803ULL), (((/* implicit */unsigned long long int) (unsigned char)251)))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_11 [i_0] [i_1] [2] [i_2] [i_2] [i_3]))))))))))));
                        arr_13 [i_0] [i_1] [i_2] [i_1] [i_1] |= ((/* implicit */signed char) (~(((/* implicit */int) arr_11 [i_3] [i_3] [i_2] [(_Bool)1] [(_Bool)1] [(_Bool)1]))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (((~(arr_4 [i_0]))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0 - 2] [i_0]))))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-40)), ((unsigned short)65535))))))) : (((unsigned long long int) 4294967291U))));
    }
    var_18 -= ((/* implicit */_Bool) (+(var_9)));
    var_19 += ((/* implicit */long long int) ((unsigned char) var_6));
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */int) var_4)), (596546430)))))));
    var_21 -= ((/* implicit */unsigned char) (~(18446744073709551613ULL)));
}
