/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116116
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
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) max((((/* implicit */long long int) var_9)), ((-((~(var_3))))))))));
    var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) min((((/* implicit */int) var_6)), (var_4)))) + (((long long int) var_10)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) (~(arr_2 [i_0] [i_0])));
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 18; i_3 += 1) 
                {
                    {
                        arr_12 [i_1] [i_3] [i_3] [i_3] [i_3] [i_3] &= ((((/* implicit */_Bool) -2046014808)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4086549971U)) || (((/* implicit */_Bool) -8770964330114681675LL)))))) : (arr_2 [i_1 + 2] [i_2]));
                        var_13 = ((arr_11 [i_3 - 3] [i_1 + 2] [i_2] [i_3] [i_0]) * (((unsigned long long int) var_0)));
                        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1] [i_3] [i_3] [i_3] [i_3 - 1])) && (((/* implicit */_Bool) (unsigned char)49))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 4; i_4 < 18; i_4 += 3) 
                        {
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) var_3))));
                            var_16 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_8 [i_3]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) - ((+(((/* implicit */int) arr_5 [i_3]))))));
                            var_17 = (+(((/* implicit */int) arr_13 [i_1 + 2] [i_3 - 1] [i_3 - 3] [i_4 - 1] [i_4])));
                            var_18 = ((/* implicit */long long int) (-(9372152759024583368ULL)));
                            arr_17 [i_2] [i_2] [i_2] [i_0] [10LL] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_5))));
                        }
                        for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned char) arr_1 [i_2] [(_Bool)1]);
                            var_20 = ((/* implicit */unsigned int) (-(arr_2 [i_1 + 1] [i_3 + 1])));
                            arr_20 [i_0] [i_0] [i_2] = ((/* implicit */short) arr_0 [i_0]);
                            var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))) + (arr_11 [i_0] [(unsigned short)6] [i_2] [i_1] [i_0])));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) (unsigned short)63664))))) <= (((/* implicit */int) var_7))));
                        }
                        arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) arr_13 [(short)0] [(short)0] [i_3 - 3] [i_3 + 1] [i_3]));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */unsigned long long int) -1029075627)) : (9074591314684968247ULL)));
    }
}
