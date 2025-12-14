/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146027
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
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)24)) && (((/* implicit */_Bool) (unsigned short)55093)))))) % (((var_7) >> (((((/* implicit */int) var_8)) - (79)))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)96))) & (4156856892U)))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 2])) / (((/* implicit */int) arr_1 [i_0 - 1])))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_0 + 2] [(unsigned short)6] [i_0 + 2])) < (arr_8 [i_0 - 1] [(signed char)10] [10])))) >= (((/* implicit */int) ((((/* implicit */unsigned int) arr_8 [i_0] [i_0 - 1] [8U])) >= (var_5))))));
                    arr_11 [5U] [i_0] [i_1] [(unsigned char)5] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-118)) || (((/* implicit */_Bool) (short)-95))))) ^ (((((/* implicit */int) ((((/* implicit */int) (short)-97)) <= (((/* implicit */int) (short)-87))))) << (((((/* implicit */int) (signed char)-32)) + (49)))))));
                }
            } 
        } 
        var_17 -= ((/* implicit */unsigned short) ((((((/* implicit */int) (short)81)) / (((/* implicit */int) (unsigned short)65524)))) <= (((((((/* implicit */int) (signed char)-40)) + (2147483647))) << (((arr_4 [i_0 + 1] [i_0 - 1]) - (1534175242U)))))));
        arr_12 [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)32764))) - (3534828516U))) + (((501636176U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-79)))))));
    }
    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((260096U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)5962)))))) << (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_0))))))) * (((/* implicit */int) ((var_7) < (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
    var_19 = ((/* implicit */signed char) var_3);
    var_20 = ((((/* implicit */int) var_9)) & (((/* implicit */int) var_1)));
}
