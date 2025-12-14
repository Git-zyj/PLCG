/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172370
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
    var_20 = ((/* implicit */short) var_10);
    var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) (unsigned short)48056)) + (((/* implicit */int) (unsigned short)65519)))) : (((((/* implicit */_Bool) 5955175142324522084LL)) ? (((/* implicit */int) (unsigned short)65519)) : (((/* implicit */int) (short)8402)))))) - ((+(((((/* implicit */_Bool) -1745545710)) ? (1745545709) : (((/* implicit */int) (unsigned char)17))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned char)0)), (var_19)));
                    var_23 = ((/* implicit */unsigned char) -1745545710);
                }
            } 
        } 
        var_24 ^= ((/* implicit */unsigned short) var_11);
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)97)) : (((((/* implicit */int) (unsigned short)65534)) * (((((/* implicit */_Bool) (short)240)) ? (((/* implicit */int) (short)-23884)) : (((/* implicit */int) (short)5673))))))));
        arr_9 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned short)48056)) ? (985780106) : (arr_0 [i_0 + 1] [i_0 + 1]))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)885)), (4314459542993992281ULL)))) ? (((/* implicit */int) ((unsigned char) -5064575635465303992LL))) : (((/* implicit */int) (short)-32766))))));
    }
    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)239)) ? (var_0) : (var_8)))) ? (max((var_19), (((/* implicit */long long int) 985780106)))) : (((/* implicit */long long int) ((/* implicit */int) max((var_3), ((short)-23884))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65519)) ? (((/* implicit */int) ((((/* implicit */long long int) -1745545710)) <= (-5064575635465303992LL)))) : (((/* implicit */int) (short)(-32767 - 1))))))));
        arr_15 [i_3] = max((((((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? (arr_4 [i_3]) : (((/* implicit */long long int) var_10)))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)239))))), (((/* implicit */long long int) (unsigned char)144)));
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) 24ULL)) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) arr_2 [i_3] [4])) : (((((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_14))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [i_3] [i_3])))));
        var_26 = -759900372;
    }
}
