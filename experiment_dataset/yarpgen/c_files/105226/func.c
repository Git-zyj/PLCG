/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105226
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
    var_18 &= (+(var_12));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_19 -= ((/* implicit */unsigned int) ((1109061988) - (2147483646)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        arr_10 [i_3] [i_3] [i_2] [i_2] [5LL] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_9))) != (var_10)));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 2; i_4 < 17; i_4 += 4) 
                        {
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_15))));
                            var_21 = ((/* implicit */short) (~(((/* implicit */int) (short)-18220))));
                            var_22 -= ((/* implicit */long long int) (~(((var_13) ^ (((/* implicit */int) var_8))))));
                            var_23 = ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) var_16)))));
                            arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] [i_1] = ((/* implicit */unsigned long long int) (~((~(arr_1 [i_2])))));
                        }
                        arr_15 [1LL] [(unsigned char)1] [i_2] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) var_15))));
                    }
                } 
            } 
            arr_16 [6] [4] = ((/* implicit */unsigned char) var_14);
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    {
                        var_24 = (+(((((/* implicit */_Bool) 4236193842U)) ? (2147483646) : (1109061992))));
                        var_25 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_11 [i_5] [i_0] [i_0])))))));
                        arr_22 [i_0] [8U] [i_5] [i_6] &= ((/* implicit */_Bool) (+(((/* implicit */int) (short)32754))));
                        var_26 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_20 [(_Bool)1] [i_0] [i_1] [i_1 + 1] [i_1 + 1] [i_0])))) ? ((~(((/* implicit */int) var_17)))) : (((/* implicit */int) ((((/* implicit */_Bool) -1109061969)) && (((/* implicit */_Bool) var_9)))))));
                    }
                } 
            } 
        }
        var_27 = ((/* implicit */_Bool) min((var_27), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (0U)))));
    }
    var_28 += ((/* implicit */unsigned long long int) var_11);
}
