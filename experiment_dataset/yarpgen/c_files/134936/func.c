/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134936
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */short) ((unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)0))))) / (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_10))))));
                    var_13 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)0))))) : ((~(var_10))))), (arr_1 [i_0] [i_1 + 4])));
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        arr_10 [i_1] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned int) arr_9 [i_3 + 2] [i_1]);
                        var_14 -= ((/* implicit */_Bool) max((((/* implicit */long long int) (~(((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))), (arr_8 [i_0] [i_0] [i_0] [i_0])));
                    }
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) ((var_10) == (arr_2 [i_5]))))) & (var_10)))));
                                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) var_8))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) (-((-((~(-1414011343764972481LL)))))));
    var_17 = ((/* implicit */long long int) (short)-32181);
    var_18 = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned char) min(((short)-32181), (((/* implicit */short) var_11)))))), (((int) (-(var_10))))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((var_1) ? (var_7) : (((/* implicit */unsigned int) 1898573080)))) & ((~(601962118U)))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) min((min((((/* implicit */signed char) var_1)), (var_9))), (((/* implicit */signed char) ((_Bool) 4194304U))))))));
}
