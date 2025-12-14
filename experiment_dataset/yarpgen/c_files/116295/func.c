/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116295
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
    var_15 = ((/* implicit */int) -6932254898779435865LL);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 4; i_2 < 19; i_2 += 3) 
            {
                {
                    var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) -5462191018430137276LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(6652288779339834451ULL))))))) : (((((/* implicit */int) (!(var_11)))) >> ((((~(arr_2 [(short)2]))) + (682750921)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_2] [4U] |= var_1;
                        var_17 += ((/* implicit */unsigned long long int) var_0);
                    }
                    for (unsigned int i_4 = 1; i_4 < 19; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (int i_5 = 1; i_5 < 20; i_5 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+((+(arr_2 [(unsigned short)4])))))) - (((unsigned long long int) max((4087121341740204728ULL), (13274340823459832919ULL)))))))));
                            var_19 += ((/* implicit */short) (+((-(10789506661226154640ULL)))));
                        }
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) max(((+(arr_6 [20ULL]))), (((/* implicit */unsigned long long int) 5462191018430137275LL))))) ? (((((/* implicit */_Bool) (+(var_2)))) ? (((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((var_1) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26138)))))))) : (((/* implicit */unsigned long long int) ((((unsigned int) (unsigned char)86)) * (((/* implicit */unsigned int) (+(((/* implicit */int) var_11)))))))))))));
                    }
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)14557)) || (((/* implicit */_Bool) 2016394753U)))))))) ? (4087121341740204728ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 14359622731969346887ULL)) ? (((/* implicit */int) arr_3 [16])) : (((/* implicit */int) var_12)))))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max(((~(var_3))), (((/* implicit */long long int) ((unsigned int) var_12)))))), (var_4)));
}
