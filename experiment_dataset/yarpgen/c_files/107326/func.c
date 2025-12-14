/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107326
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
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) var_12))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_16 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1]))))));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)16372)))) ? (((((/* implicit */_Bool) (short)0)) ? (arr_0 [i_0]) : (2869235811U))) : (((/* implicit */unsigned int) ((arr_2 [i_0] [i_0]) ? (((/* implicit */int) (unsigned short)48327)) : (((/* implicit */int) arr_1 [i_0])))))))) ? (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)853)) : (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */int) arr_3 [i_0] [i_0])) * (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) >= (((/* implicit */int) arr_2 [i_0] [i_0])))))))));
                var_18 = ((/* implicit */_Bool) var_14);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) arr_2 [i_0] [i_1]))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_0]))) : (arr_4 [i_0] [i_0])));
                    arr_9 [i_0] = ((/* implicit */signed char) arr_2 [i_0] [i_0]);
                }
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    var_21 = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_3])))) % ((+(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)4096))))))));
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) (((_Bool)1) ? (arr_5 [i_0] [i_0] [i_3]) : (((/* implicit */unsigned long long int) var_3)))))))))));
                }
                arr_12 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) arr_6 [i_1] [i_1] [i_0] [i_0])))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) var_5))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33152))) + (6950426665560192877ULL))))) : (((/* implicit */unsigned long long int) ((unsigned int) ((unsigned char) arr_6 [i_0] [i_0] [i_1] [i_1]))))));
            }
        } 
    } 
}
