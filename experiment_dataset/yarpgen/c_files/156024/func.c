/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156024
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */short) var_2);
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    var_15 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0])) % (((/* implicit */int) arr_4 [i_1])))))));
                    var_16 = ((/* implicit */unsigned int) arr_2 [(unsigned char)0] [i_2]);
                    var_17 = max((max((((/* implicit */long long int) var_5)), ((-(2080180852149937795LL))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (var_3)))) ? (var_11) : (((/* implicit */long long int) ((arr_0 [(short)12] [(_Bool)1]) >> (((arr_0 [i_0] [i_1]) - (836160222U)))))))));
                }
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    var_18 *= ((min((((/* implicit */unsigned int) ((((/* implicit */int) (short)18259)) % (((/* implicit */int) (unsigned short)2032))))), ((~(var_12))))) << (((((arr_8 [i_3] [i_0] [i_3] [i_1]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(short)12]))))) ? (((/* implicit */int) arr_4 [(short)9])) : (((/* implicit */int) min(((_Bool)1), (arr_9 [i_0] [i_0])))))));
                    var_19 = ((/* implicit */_Bool) (unsigned short)3393);
                    var_20 = ((/* implicit */unsigned int) ((signed char) (short)27746));
                }
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (!(((((/* implicit */int) arr_9 [i_0] [i_0])) != (((/* implicit */int) arr_9 [i_0] [i_1])))))))));
                var_22 *= ((/* implicit */unsigned int) ((short) ((unsigned int) arr_8 [i_0] [i_0] [i_0] [i_0])));
            }
        } 
    } 
    var_23 &= var_1;
    var_24 = ((/* implicit */short) var_0);
}
