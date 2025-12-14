/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1321
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
    var_15 = ((/* implicit */unsigned int) (signed char)-21);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)6)))))));
                    arr_8 [i_0] [i_2 + 2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 396643818U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-6))))) : (481133129464644256ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)110))) : (((((/* implicit */_Bool) (unsigned char)244)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-15)) + (2147483647))) << (((((((/* implicit */_Bool) (short)9021)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) var_9)))) - (6))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_0] [14U] [(signed char)17] = ((/* implicit */unsigned int) 18446744073709551615ULL);
                        arr_12 [i_0] [i_0] [i_1] [i_2] [(signed char)18] = ((/* implicit */unsigned int) var_11);
                        arr_13 [i_0] [i_2 - 1] [i_0] = ((/* implicit */unsigned long long int) (!((!(((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (signed char)93))))))));
                    }
                    for (short i_4 = 4; i_4 < 21; i_4 += 2) 
                    {
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((unsigned int) (~(var_11)))))));
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)2200))))) ? (((var_13) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6)))))))))));
                    }
                }
            } 
        } 
    } 
}
