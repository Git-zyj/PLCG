/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121233
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
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) 15578351);
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        var_19 &= ((/* implicit */unsigned short) ((arr_6 [(unsigned short)4] [i_1]) % (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_6 [i_0 + 1] [i_0 + 1]))))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [i_3] [i_3] [i_0] [i_1] [i_3])) ^ (((int) arr_7 [i_2])))))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            arr_15 [i_3] = (i_3 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0 + 1] [i_3] [i_1] [i_3 + 1] [i_4] [i_0]))))) % (((((/* implicit */int) arr_12 [i_0 + 1] [i_3 + 1] [i_2] [i_3 + 1] [i_4] [i_0 + 1])) << (((((/* implicit */int) arr_10 [i_0 + 1] [i_3] [i_3] [i_3] [i_0 + 2] [i_0])) - (18904)))))))) : (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0 + 1] [i_3] [i_1] [i_3 + 1] [i_4] [i_0]))))) % (((((/* implicit */int) arr_12 [i_0 + 1] [i_3 + 1] [i_2] [i_3 + 1] [i_4] [i_0 + 1])) << (((((((/* implicit */int) arr_10 [i_0 + 1] [i_3] [i_3] [i_3] [i_0 + 2] [i_0])) - (18904))) + (43892))))))));
                            var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_5 [i_0 + 1])) % (((/* implicit */int) arr_2 [i_0])))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4933575332343648388LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [(_Bool)1] [i_0] [i_0 + 2] [i_0]))) : (arr_1 [i_3])))) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            arr_18 [i_0] [i_0] [i_2] [i_3] [i_5] = ((/* implicit */unsigned char) (unsigned short)19254);
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_6 [i_0 - 1] [i_3])))) : (min((arr_6 [i_0 - 1] [i_0 - 1]), (arr_6 [i_0 - 1] [i_0])))));
                        }
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_17 [i_0 - 1])) : ((~(((/* implicit */int) ((unsigned short) arr_14 [i_0] [i_0] [i_0 - 1] [i_0] [i_0])))))));
    }
    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_2))) + ((((-(((/* implicit */int) var_11)))) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_1)))))))))));
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_16)))), (((((/* implicit */_Bool) -2093526608)) ? (2093526614) : (((/* implicit */int) var_9))))))) ? ((+(((((/* implicit */int) var_3)) >> (((993479750033614221LL) - (993479750033614211LL))))))) : ((((!(var_18))) ? ((+(((/* implicit */int) var_16)))) : (var_8)))));
}
