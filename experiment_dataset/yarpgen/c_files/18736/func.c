/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18736
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) ((short) min((((/* implicit */long long int) arr_0 [i_0])), (((((/* implicit */_Bool) (unsigned char)108)) ? (-9189282100071630986LL) : (((/* implicit */long long int) ((/* implicit */int) (short)11149))))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                var_15 = ((/* implicit */long long int) arr_3 [i_2] [i_1]);
                arr_6 [i_2] = ((/* implicit */signed char) min((arr_4 [i_0] [i_0] [(_Bool)1]), (((/* implicit */int) ((((/* implicit */_Bool) (short)-11149)) || (((/* implicit */_Bool) (short)9987)))))));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 21; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        {
                            arr_14 [i_2] [(short)18] [i_3] [i_3] [i_3] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (short)11147)) ? (((/* implicit */long long int) ((int) arr_1 [i_4]))) : (((((/* implicit */long long int) ((/* implicit */int) var_2))) ^ (arr_2 [i_0]))))), (((/* implicit */long long int) min((((/* implicit */short) (_Bool)0)), (arr_10 [(unsigned char)1] [i_1] [i_2] [i_0] [i_3 + 1]))))));
                            arr_15 [i_2] = ((/* implicit */short) var_12);
                            arr_16 [i_2] [i_3 - 1] [i_0] [i_1] [i_2] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)-219)) : (arr_9 [i_0] [i_0] [i_2] [i_3] [i_4])))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (+(((((/* implicit */_Bool) (short)24709)) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) (short)11135)))) : ((-(-372677174))))))))));
            }
            arr_17 [(signed char)8] = ((/* implicit */short) ((unsigned char) 1642149936));
            var_17 = ((/* implicit */unsigned char) (signed char)44);
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_5 [i_1] [i_1] [(short)10] [i_0])), (((((/* implicit */_Bool) (short)7620)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)1))))))) ? (((/* implicit */int) var_5)) : (max((((((/* implicit */_Bool) arr_11 [i_0] [16LL] [16LL] [(unsigned char)4] [i_0])) ? (2147483632) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1] [(short)8])))), (((((/* implicit */_Bool) arr_13 [16] [16])) ? (((/* implicit */int) arr_11 [i_1] [18] [i_0] [18] [i_0])) : (arr_1 [i_1])))))));
            arr_18 [i_0] [i_0] [i_0] = (signed char)44;
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_22 [(unsigned char)21] [(short)2] = ((/* implicit */short) arr_5 [i_0] [i_0] [i_0] [i_0]);
            arr_23 [i_0] = ((/* implicit */signed char) ((min((arr_5 [i_0] [i_0] [i_5] [i_5]), ((_Bool)0))) ? (((((/* implicit */int) arr_5 [i_0] [i_0] [16LL] [i_5])) >> (((((/* implicit */int) var_7)) - (73))))) : (((/* implicit */int) min((arr_5 [i_0] [i_5] [i_0] [i_5]), (arr_5 [i_0] [i_5] [i_0] [i_0]))))));
            arr_24 [i_5] [i_5] [i_5] = ((/* implicit */signed char) (_Bool)1);
        }
        arr_25 [i_0] = ((/* implicit */signed char) arr_4 [3] [i_0] [i_0]);
    }
    var_19 = ((/* implicit */short) var_0);
    var_20 = ((/* implicit */_Bool) ((signed char) (_Bool)1));
}
