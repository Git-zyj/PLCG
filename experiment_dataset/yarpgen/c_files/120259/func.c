/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120259
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
    for (short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        var_11 = ((short) (short)-23770);
                        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)8668))))))))));
                    }
                    for (short i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        var_13 |= ((/* implicit */short) max(((+(((/* implicit */int) (short)8668)))), (((/* implicit */int) ((short) ((((((/* implicit */int) (short)-30724)) + (2147483647))) >> (((((/* implicit */int) (short)-14476)) + (14501)))))))));
                        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (~(((/* implicit */int) (short)14468)))))));
                        var_15 = ((/* implicit */short) max((var_15), (((short) ((short) (short)-14491)))));
                    }
                    var_16 = ((/* implicit */short) (+(((/* implicit */int) (short)-23751))));
                    var_17 = ((/* implicit */short) min((((/* implicit */int) ((short) max(((short)13683), ((short)511))))), (min((((/* implicit */int) max(((short)4775), ((short)-11892)))), (((((/* implicit */int) (short)(-32767 - 1))) & (((/* implicit */int) (short)14503))))))));
                }
            } 
        } 
    } 
    var_18 = ((short) ((short) (!(((/* implicit */_Bool) (short)-10720)))));
    var_19 |= ((/* implicit */short) ((((/* implicit */int) (short)-14479)) < (((/* implicit */int) ((short) ((((/* implicit */int) (short)2376)) >> (((((/* implicit */int) (short)-13151)) + (13168)))))))));
}
