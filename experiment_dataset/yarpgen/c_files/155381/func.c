/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155381
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
    var_12 = ((/* implicit */unsigned short) (-((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) (short)-30721))))), (((((/* implicit */_Bool) (unsigned short)34371)) ? (var_8) : (var_8)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-17))))) : (max(((-(((/* implicit */int) (signed char)-41)))), (((/* implicit */int) (signed char)20))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2 + 1] |= ((/* implicit */unsigned short) var_7);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 2; i_4 < 13; i_4 += 4) 
                        {
                            arr_15 [i_3] [i_0] [i_1] [i_2] [i_2] [i_3 + 2] [i_4] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-8))) == (var_8))))))));
                            var_13 &= ((((/* implicit */_Bool) (~(((/* implicit */int) (short)30737))))) ? ((+(((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_3 + 2])) == (((/* implicit */int) (short)-30721))))))) : (((/* implicit */int) arr_10 [i_3 + 1] [i_0] [i_2 - 1] [i_3])));
                        }
                        var_14 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 5948729222500484903LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)105)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_3])))))) : (((((/* implicit */_Bool) (signed char)92)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45999))))))) << (((((/* implicit */int) var_2)) - (7949)))));
                    }
                    var_15 = ((/* implicit */signed char) arr_5 [i_0] [i_2 + 1]);
                    var_16 = ((/* implicit */signed char) min(((-(((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */long long int) arr_0 [i_1])))))), (((/* implicit */long long int) ((unsigned short) (-(((/* implicit */int) (unsigned short)21378))))))));
                }
            } 
        } 
    }
    var_17 = (~(var_8));
}
