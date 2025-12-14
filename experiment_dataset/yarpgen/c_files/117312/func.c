/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117312
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
    var_13 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((var_7) < (((/* implicit */unsigned long long int) -5869335882565907539LL))))) : (((/* implicit */int) var_6))))));
    var_14 = ((/* implicit */unsigned int) (((~(((/* implicit */int) max((((/* implicit */unsigned short) (short)-12216)), (var_3)))))) ^ ((-(((/* implicit */int) var_10))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        arr_10 [i_0] [i_1 - 2] [i_2] [i_1 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_1 - 2] [i_1 - 2])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_0] [i_3] [i_3])) : (((/* implicit */int) (short)-2))));
                        var_15 = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_16 -= ((/* implicit */unsigned char) ((2268432860168031689LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
        } 
        var_17 -= ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_6 [i_0]))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)32767)))));
        arr_11 [i_0] = (((((_Bool)1) && (((/* implicit */_Bool) (short)32767)))) || (((/* implicit */_Bool) (short)(-32767 - 1))));
        var_18 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((short) (signed char)-83))));
    }
}
