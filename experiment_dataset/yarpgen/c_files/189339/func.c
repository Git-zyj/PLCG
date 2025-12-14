/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189339
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (short)32753)) ? (((/* implicit */unsigned long long int) 4195231526U)) : (var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27619)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_3])) : (((/* implicit */int) arr_6 [i_0] [i_2] [i_2]))))) ? (var_4) : (((/* implicit */long long int) arr_4 [i_1] [i_2] [i_3]))));
                        arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */long long int) ((/* implicit */int) var_19))) + (var_11)))));
                    }
                    for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [7])), (((((/* implicit */_Bool) 780069065U)) ? (((((/* implicit */_Bool) var_3)) ? (var_6) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            var_23 += ((/* implicit */unsigned char) arr_14 [i_0] [i_5] [i_0] [i_0] [i_2] [i_4] [(signed char)8]);
                            var_24 = ((/* implicit */int) ((short) arr_4 [(unsigned char)12] [i_1] [i_2]));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_12)) == (arr_8 [i_2] [i_2] [i_2] [i_4]))))) : (arr_5 [i_2] [i_4] [i_5])));
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            var_25 = ((/* implicit */signed char) ((long long int) ((unsigned int) var_12)));
                            arr_20 [i_6] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_19))));
                            arr_21 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) arr_17 [i_0] [i_1] [i_1] [i_2] [i_4] [i_6]);
                        }
                    }
                    var_26 ^= ((/* implicit */unsigned long long int) ((unsigned char) ((signed char) (+(arr_17 [i_2] [i_0] [i_1] [i_0] [i_0] [i_0])))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */long long int) max((((((/* implicit */_Bool) max(((short)-13888), ((short)192)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_10)))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)32640))) + (599156807U))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_13)))))));
    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3405105732U)) ? (4087132521834141726ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) && (((/* implicit */_Bool) var_0))));
    var_29 = ((/* implicit */signed char) 32764ULL);
}
