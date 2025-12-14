/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185859
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
    var_11 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)156))) : (4294967273U))) | (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) ((var_4) >= (var_4)))) : (((/* implicit */int) var_9)))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)189))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 22U)))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */signed char) (+(((/* implicit */int) (short)7713))));
                    arr_6 [i_0] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */int) (unsigned char)111)) - (((/* implicit */int) (unsigned char)252)))) : (((/* implicit */int) (unsigned char)65))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)566))));
                    var_14 ^= ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) * (((/* implicit */int) arr_0 [i_0]))));
                    var_15 ^= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 1]))) : (var_8)))));
                    arr_7 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (short)-17226)))) : ((-(((/* implicit */int) (unsigned char)240))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [4LL]))) / (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_1 [(_Bool)1] [(_Bool)1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) max((8144246241900708543ULL), (((/* implicit */unsigned long long int) 807191474756633200LL))))))) ? (((/* implicit */int) ((((unsigned long long int) var_8)) >= (var_0)))) : (((/* implicit */int) ((short) (!(((/* implicit */_Bool) 1885156058U))))))));
    }
}
