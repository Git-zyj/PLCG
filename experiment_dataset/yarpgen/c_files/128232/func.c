/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128232
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
    var_12 = ((/* implicit */unsigned int) ((((17592186044288LL) | (((/* implicit */long long int) ((/* implicit */int) (short)9342))))) + (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) <= (var_5)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((unsigned char) min((((/* implicit */long long int) ((((/* implicit */unsigned int) var_0)) + (var_9)))), ((~(var_2)))))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        arr_9 [i_0] [i_2 + 1] = (short)-9343;
                        arr_10 [i_2 + 1] [i_0] = ((/* implicit */long long int) var_3);
                        var_14 = ((/* implicit */long long int) max((var_14), ((+(((((/* implicit */_Bool) arr_1 [i_1])) ? (((var_5) & (var_6))) : (arr_1 [i_3])))))));
                        arr_11 [i_0] [i_0] [i_2] [(unsigned short)12] [(unsigned short)6] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((2145386496U) % (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_10))))))));
                    }
                    arr_12 [i_2] [(short)3] [(short)3] = ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned int) (short)9324)), (2145386513U))));
                    var_15 = ((/* implicit */long long int) (~(((/* implicit */int) var_4))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) min(((!(((/* implicit */_Bool) 7747744058992716827LL)))), ((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)212))) / (2145386496U))))))));
}
