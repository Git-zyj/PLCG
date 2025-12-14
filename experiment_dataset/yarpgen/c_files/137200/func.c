/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137200
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_13)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_0 [i_0])))))));
        var_15 = ((/* implicit */long long int) -838016760);
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */short) 0ULL);
                        var_17 = ((/* implicit */long long int) ((short) (_Bool)0));
                        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) ((unsigned char) (_Bool)1))))));
                        arr_11 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_3 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3]))) : (max((((/* implicit */long long int) arr_10 [i_1] [i_3])), (arr_3 [i_0])))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) (short)512)), (var_5)))) ? (((((/* implicit */int) var_6)) & ((-2147483647 - 1)))) : (((/* implicit */int) (short)512)))) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3] [i_3]))));
                        var_19 = (_Bool)1;
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0]);
    }
    var_21 = ((/* implicit */unsigned long long int) (~(max((899424013), ((+(((/* implicit */int) (unsigned short)6005))))))));
}
