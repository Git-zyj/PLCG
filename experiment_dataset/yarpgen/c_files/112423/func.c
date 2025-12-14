/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112423
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
    var_15 += min((((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_4)) / (((/* implicit */int) var_7))))))), (((max((var_2), (((/* implicit */unsigned long long int) var_1)))) >> (((var_9) - (2131689210))))));
    var_16 = ((/* implicit */short) (~((-(((((/* implicit */_Bool) 1185652816)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_2)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned short) (+(min((((unsigned long long int) var_3)), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1)))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) max((-6887074107281490548LL), (min((6887074107281490548LL), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) < (var_2))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_10))))))), (var_14)));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) >> ((((-(var_3))) - (4291757370U)))))) ? (min((((/* implicit */long long int) var_8)), (6887074107281490548LL))) : (var_13)));
                            arr_11 [i_0] [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned int) var_2))), (((6741898356064229291ULL) >> (((var_3) - (3209851U)))))))) ? ((((!((_Bool)1))) ? ((((_Bool)0) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) 1933050025U))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 11; i_4 += 4) 
    {
        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)8052)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % ((~(var_3))))) : (((/* implicit */unsigned int) ((int) (-(var_0)))))));
                var_21 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_2), (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-8074)))))) : (min((2043972607U), (((/* implicit */unsigned int) var_4))))))), (min((((/* implicit */unsigned long long int) ((var_12) & (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4 - 1])))))), (((((/* implicit */_Bool) 307590538)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_14)), (((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))))) & (((((/* implicit */_Bool) 2250994695U)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)101)))))))));
}
