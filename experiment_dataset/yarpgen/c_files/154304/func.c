/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154304
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_0 - 1]), (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */int) ((var_15) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)51)))))) : (((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))))))))));
        arr_2 [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_7)))) << (((((/* implicit */int) arr_1 [i_0])) + (105)))))) ? (((((/* implicit */_Bool) ((var_0) - (((/* implicit */int) (unsigned char)139))))) ? (((((/* implicit */_Bool) 3886198550U)) ? (1874030488U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 2) 
        {
            var_18 = ((/* implicit */unsigned int) ((var_0) | (((/* implicit */int) arr_7 [i_2 - 2] [i_2]))));
            var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1] [i_2 - 2])) ? (var_0) : (((/* implicit */int) arr_1 [i_2 - 2]))));
        }
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2420936808U)) || (((/* implicit */_Bool) 2150433786U)))))) >= (((1874030488U) * (var_4)))))) >= ((-(((arr_4 [i_1] [i_1]) + (((/* implicit */int) var_7))))))));
    }
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)213)) ? ((~(((/* implicit */int) (signed char)-44)))) : (((/* implicit */int) var_3))))) ? (var_2) : (((/* implicit */unsigned int) ((var_0) << (((var_8) - (376376494U)))))))))));
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (min((var_6), (((/* implicit */unsigned int) (unsigned char)88))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 2144533509U)))) / (var_8)))));
    var_22 = ((((unsigned int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_14))))) << (((max(((~(13877648808807289276ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))) - (18446744073709551607ULL))));
}
