/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182260
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
    var_16 = min((((/* implicit */long long int) (~(((/* implicit */int) var_7))))), (((var_3) / ((+(var_3))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_1 - 2] [i_2] [i_1 + 2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_5 [(_Bool)1] [i_3])))), (((/* implicit */int) (unsigned short)1))))) * (16140901064495857664ULL)));
                        arr_12 [i_0] [i_1 - 1] [i_2] [i_1 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-22728)) : (((/* implicit */int) var_7))))))) ? ((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) <= (arr_0 [i_2])))))) : (((/* implicit */int) (unsigned char)55))));
                        var_17 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) ((signed char) arr_10 [i_0] [i_1] [i_2] [i_0]))) == (((/* implicit */int) (unsigned char)0))))), ((+(((((/* implicit */int) arr_1 [i_3])) + (((/* implicit */int) (short)22719))))))));
                        arr_13 [i_0] [i_0] [1] [i_1] [(_Bool)1] [i_3] = ((/* implicit */int) var_12);
                        arr_14 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) max(((~(var_3))), (((/* implicit */long long int) -30437517))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) max(((short)-14), (((/* implicit */short) (signed char)75))))) * (((/* implicit */int) ((((/* implicit */_Bool) (short)-11020)) || (((/* implicit */_Bool) (unsigned short)16072)))))))) || (((/* implicit */_Bool) arr_5 [i_0] [i_0]))));
        arr_15 [i_0] = ((/* implicit */long long int) (~(((((/* implicit */int) var_15)) | (((/* implicit */int) arr_6 [i_0] [i_0] [i_0 + 1] [(signed char)13]))))));
        arr_16 [i_0 + 1] = ((/* implicit */signed char) ((_Bool) arr_7 [i_0] [i_0] [i_0 - 2]));
        var_19 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 - 1] [i_0] [i_0 - 2] [i_0]))) < (var_14))));
    }
    var_20 = ((/* implicit */unsigned long long int) (unsigned short)61534);
}
