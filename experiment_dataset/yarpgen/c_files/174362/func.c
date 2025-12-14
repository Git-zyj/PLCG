/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174362
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
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_12)), (var_11)))) ? (((int) (short)-19001)) : (-1293946709)))) ? (((/* implicit */int) ((((((/* implicit */int) var_4)) >> (((var_3) - (13509189316725344091ULL))))) <= (((var_13) ^ (((/* implicit */int) (unsigned char)29))))))) : (((/* implicit */int) max((min((var_11), (var_7))), (max(((unsigned char)227), ((unsigned char)29))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 2; i_3 < 23; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) (short)8191)) < (((/* implicit */int) var_9)))))));
                        var_20 += ((/* implicit */signed char) (((~(var_2))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116)))));
                        arr_10 [i_0 + 1] [i_1] [i_2] [i_3] [i_3] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_16))));
                    }
                }
            } 
        } 
    } 
    var_21 += ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (unsigned char i_4 = 4; i_4 < 17; i_4 += 3) 
    {
        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            {
                var_22 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)0))));
                var_23 += ((/* implicit */long long int) var_9);
                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) var_16))));
            }
        } 
    } 
}
