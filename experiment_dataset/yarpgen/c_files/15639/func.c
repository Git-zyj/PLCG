/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15639
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
    var_16 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (short)31)), (((unsigned long long int) (-(((/* implicit */int) var_14)))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned short)54865)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))) : (var_5))), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-30899)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)-32761))))) <= (min((((/* implicit */unsigned long long int) max(((short)27616), (((/* implicit */short) (_Bool)1))))), (((arr_7 [i_0] [i_1] [i_1] [(signed char)5]) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)30)))))))));
                    var_19 = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_12))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) ? (min((((((/* implicit */int) (short)30851)) | (((/* implicit */int) (signed char)126)))), (((/* implicit */int) min(((signed char)-115), (((/* implicit */signed char) (_Bool)1))))))) : (((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_10))))) ? (((((/* implicit */int) var_0)) + (((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) arr_8 [(unsigned short)7] [i_1] [8U] [i_0])) ? (((/* implicit */int) (short)-7)) : (((/* implicit */int) (short)-9744))))))));
                    var_20 ^= ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned char) (signed char)-62)))))) == (((unsigned int) 1006100894))));
                }
            } 
        } 
    }
}
