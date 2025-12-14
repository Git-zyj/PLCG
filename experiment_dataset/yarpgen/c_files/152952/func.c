/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152952
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
    var_17 = var_10;
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_15))));
    var_19 = ((/* implicit */short) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_0))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_20 -= ((/* implicit */unsigned short) ((((/* implicit */int) (short)-19501)) & (((/* implicit */int) (!(arr_2 [i_0]))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (unsigned short i_3 = 2; i_3 < 21; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 2; i_4 < 21; i_4 += 4) 
                        {
                            var_21 = ((/* implicit */signed char) (short)19501);
                            var_22 -= ((/* implicit */short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32765))))), (((unsigned long long int) (short)(-32767 - 1)))));
                            arr_11 [i_0] [i_0] [i_1] [(short)14] [i_3] [i_3] [i_3] = ((/* implicit */short) (((~(((/* implicit */int) var_6)))) ^ (((/* implicit */int) max(((unsigned short)3780), (((/* implicit */unsigned short) (short)19518)))))));
                            var_23 = ((/* implicit */short) max((var_23), (var_16)));
                        }
                        var_24 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (short)-19518))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) (short)-32753)) ? (((/* implicit */int) (short)32753)) : (((/* implicit */int) (_Bool)1))))))));
                        var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-19518)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-19518))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */short) ((_Bool) max((((/* implicit */int) ((short) (short)32757))), (var_10))));
    }
    /* vectorizable */
    for (signed char i_5 = 3; i_5 < 16; i_5 += 4) 
    {
        var_26 = (~(((/* implicit */int) arr_4 [i_5 - 2] [i_5])));
        var_27 -= ((/* implicit */unsigned long long int) (_Bool)1);
        var_28 = var_12;
    }
}
