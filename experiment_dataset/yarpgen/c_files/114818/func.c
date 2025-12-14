/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114818
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
    var_11 |= ((/* implicit */short) ((((/* implicit */_Bool) 20ULL)) ? ((-(((/* implicit */int) (unsigned char)216)))) : (((((/* implicit */_Bool) (unsigned char)60)) ? (((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (short)1016)) : (((/* implicit */int) (unsigned short)31)))) : (((/* implicit */int) var_5))))));
    var_12 = ((/* implicit */signed char) var_8);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)191)) != (((/* implicit */int) (signed char)4))))) : (((((/* implicit */int) (unsigned short)40)) << (((arr_2 [i_0]) + (888208887)))))))) ? (min((max((((/* implicit */unsigned int) (signed char)25)), (2276513199U))), (((/* implicit */unsigned int) arr_1 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (short)9640);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) 2276513186U);
        var_14 &= ((/* implicit */unsigned long long int) -2147483625);
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    {
                        var_15 ^= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_6 [i_3] [i_4])) ? (3425774658U) : (2018454110U)))));
                        var_16 = ((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */_Bool) 1934368889U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(unsigned char)14] [(signed char)16] [i_3] [(signed char)16]))) : (7322082787721557869ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_3] [i_4])))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */long long int) min((var_17), (((((/* implicit */_Bool) (unsigned char)205)) ? (((((/* implicit */_Bool) arr_8 [(signed char)15] [(unsigned char)2])) ? (arr_8 [i_1] [(_Bool)1]) : (arr_8 [(short)4] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-64)))))));
    }
    var_18 = ((/* implicit */unsigned int) (unsigned char)194);
}
