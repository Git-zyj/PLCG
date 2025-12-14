/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163612
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) 32760U)) ? (((((/* implicit */_Bool) 1948182144)) ? (((/* implicit */unsigned long long int) -1948182145)) : (0ULL))) : (((((/* implicit */unsigned long long int) 2063471911)) | (18446744073709551615ULL))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((18446744073709551593ULL) / (((/* implicit */unsigned long long int) -1948182173))))) ? (max((11483198996101973131ULL), (((/* implicit */unsigned long long int) (unsigned char)122)))) : (((/* implicit */unsigned long long int) -1948182138))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((-1948182138) / (2117088674)))) * (((((/* implicit */_Bool) -1948182138)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)49), (((/* implicit */signed char) (_Bool)0)))))) : (((((/* implicit */_Bool) (unsigned short)28765)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                    var_20 = (unsigned short)36770;
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)187)) ? (5290000659606159133LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned short)36751)) : (((/* implicit */int) (unsigned short)36770)))))));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)36770)) - (((/* implicit */int) (unsigned char)187))))) ? (((((/* implicit */_Bool) 1146093057)) ? (14097669666462649304ULL) : (((/* implicit */unsigned long long int) -2129854878)))) : (((((/* implicit */_Bool) (signed char)2)) ? (((((/* implicit */_Bool) -1948182138)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36770))) : (18ULL))) : (((/* implicit */unsigned long long int) -1948182138))))));
                    arr_11 [i_0] [i_0] = ((/* implicit */long long int) (signed char)64);
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((((/* implicit */_Bool) 4231918623U)) ? (3047867009U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)61))))) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (((7LL) / (((/* implicit */long long int) 1839951969U))))));
        arr_12 [i_0] = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) (unsigned short)28766)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16336))) : (31ULL))), (((/* implicit */unsigned long long int) -8869838452490412995LL)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28779)))));
    }
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)36767)) != (((/* implicit */int) var_8))));
}
