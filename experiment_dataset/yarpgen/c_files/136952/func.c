/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136952
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
    var_11 = ((/* implicit */int) 3791562201U);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_12 -= ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 - 1]))));
        var_13 = ((/* implicit */_Bool) arr_2 [i_0 + 2]);
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */int) ((short) arr_3 [i_0 + 2]))) : ((+(((/* implicit */int) (short)-30321)))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((short) (+((-(((/* implicit */int) arr_3 [i_1])))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_15 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)701)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-25311))) : (3211076025U)));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            {
                                arr_16 [i_5] [i_2] [(_Bool)1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_0 [i_4])) : (((/* implicit */int) (unsigned short)46873))))))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_2]))) + (3211076025U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_10 [i_1] [i_2] [i_4] [i_5])) < (1997713922952301078LL))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_2])) ? (1568802871) : (((/* implicit */int) var_3)))))))))));
                                var_16 = ((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [4U]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_6 = 1; i_6 < 23; i_6 += 3) 
    {
        var_17 = ((/* implicit */unsigned int) ((unsigned short) var_5));
        var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_9) >> (((((/* implicit */int) arr_19 [14U])) - (32)))))) ? (((unsigned int) var_4)) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
    }
    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) ((unsigned int) var_3)))) + (((/* implicit */int) var_8))));
}
