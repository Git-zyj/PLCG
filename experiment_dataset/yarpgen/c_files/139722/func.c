/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139722
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */long long int) (~(var_13)));
                        arr_13 [i_2] [i_1] [i_2] [i_3] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (short)768))) ? ((+(((unsigned int) (unsigned char)77)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])))));
                        arr_14 [i_0] [i_3] [i_2] [19U] = ((/* implicit */short) min((max((((/* implicit */long long int) arr_3 [i_0])), (((long long int) (short)-22778)))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29759)) ? (-4303876220106732014LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))) ? (((/* implicit */int) (short)11398)) : ((+(1287067314))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 1; i_4 < 23; i_4 += 2) 
                    {
                        arr_17 [i_4 + 2] [i_4 + 2] [i_4] [i_4] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_10 [i_4 + 2] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22778))) : (arr_10 [i_4 - 1] [i_4 + 2] [i_4] [i_1]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_4 + 1] [i_4] [i_4 + 2] [i_0])))))));
                        arr_18 [i_2] [i_2] [i_2] [i_2] [i_0] [i_2] |= ((/* implicit */unsigned char) (~(var_10)));
                        arr_19 [i_2] [(unsigned char)19] [i_4] [i_0] [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [i_0] [i_4 + 1] [i_2] [i_4 + 2])) ? (((/* implicit */int) var_1)) : (var_8))) >> (((max((arr_7 [i_0] [i_4 + 2] [i_2] [i_4 + 1]), (arr_7 [i_0] [i_4 + 1] [17LL] [17LL]))) + (1076467510377209256LL)))));
                    }
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((unsigned int) ((unsigned char) var_6)));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_12)))))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))));
}
