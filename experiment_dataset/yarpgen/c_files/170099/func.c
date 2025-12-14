/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170099
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
    var_20 &= ((/* implicit */short) ((((/* implicit */int) (short)1644)) + (((/* implicit */int) ((unsigned char) (short)-1)))));
    var_21 = ((/* implicit */signed char) ((int) var_0));
    var_22 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((short) 9927925015566111937ULL))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_16)), ((unsigned char)23))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_23 ^= ((/* implicit */_Bool) (-(((unsigned long long int) min(((short)1), (arr_4 [i_0] [i_1]))))));
                    var_24 = ((/* implicit */short) min((min((min((((/* implicit */long long int) (-2147483647 - 1))), (arr_5 [i_0] [i_0] [6]))), (((/* implicit */long long int) ((short) (_Bool)1))))), (((/* implicit */long long int) 935331890))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        var_25 *= ((/* implicit */unsigned int) ((unsigned char) (_Bool)1));
        arr_10 [i_3] = ((/* implicit */_Bool) (+((-2147483647 - 1))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        arr_15 [i_4] = ((/* implicit */int) (unsigned char)255);
        arr_16 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (_Bool)0))) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) (short)19091))));
        arr_17 [i_4] = ((/* implicit */signed char) (short)19091);
        arr_18 [i_4] [i_4] = ((/* implicit */signed char) arr_8 [i_4] [12U]);
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                {
                    var_26 = ((/* implicit */unsigned char) (+(((unsigned long long int) (short)19091))));
                    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        arr_28 [i_4] [i_4] [i_5] [i_5] [i_6] [i_7] = ((((/* implicit */_Bool) ((-935331891) / (var_14)))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (short)19084))))));
                        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((signed char) ((_Bool) 2105024245))))));
                    }
                    var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) var_15))) < (var_5))))));
                }
            } 
        } 
    }
}
