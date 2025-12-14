/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176815
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
    var_19 = ((/* implicit */unsigned char) max((var_10), (var_1)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_4 [i_3 + 1]))) ? ((((-(arr_4 [i_2]))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [(unsigned char)13] [i_3]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_16)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_3] [i_0]))))) : (((/* implicit */int) (signed char)35)))))));
                            var_21 ^= ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) ((short) var_10)))) & (((3605777187646194796LL) & (((/* implicit */long long int) 0)))))) / (((((/* implicit */_Bool) min((2114889954U), (((/* implicit */unsigned int) (short)-16096))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)-16096))))) : (((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */long long int) 2603120172U)) : (26388279066624LL)))))));
                            arr_8 [i_2] [i_2] [i_2] [(signed char)9] = ((/* implicit */unsigned char) ((((/* implicit */long long int) min((((/* implicit */int) ((unsigned char) (short)-16096))), ((-(((/* implicit */int) var_7))))))) == (((((/* implicit */long long int) var_11)) / (-5490040391450143428LL)))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_3 [i_1] [0U] [i_0])))) ? (((((/* implicit */_Bool) (unsigned short)35894)) ? (-4083154062131634016LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-50))))) : (((((/* implicit */long long int) -1988964329)) & (26388279066620LL)))))) || (((/* implicit */_Bool) (-(((long long int) -665106229)))))));
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) arr_3 [(signed char)9] [(short)10] [(signed char)11]))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_11)) / (var_1)))) ? (var_14) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_8)) : (var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (+(2180077342U)))))) : ((+(var_14)))));
}
