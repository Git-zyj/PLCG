/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158034
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */_Bool) (short)23407);
            var_19 += ((/* implicit */short) ((((/* implicit */int) arr_1 [8])) * (((((/* implicit */int) (short)-23407)) | (((/* implicit */int) var_6))))));
        }
        for (int i_2 = 1; i_2 < 15; i_2 += 2) 
        {
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_2 + 2] [(short)0] [i_2])) * (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) arr_4 [i_0] [(short)12] [i_0])))))))));
            arr_9 [i_0] = ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_2 [i_0]))))));
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                for (signed char i_4 = 4; i_4 < 15; i_4 += 1) 
                {
                    {
                        var_21 = ((/* implicit */short) ((((((/* implicit */int) var_18)) + (((/* implicit */int) var_7)))) * (((/* implicit */int) (short)23381))));
                        arr_14 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_2 - 1]))));
                    }
                } 
            } 
            arr_15 [i_0] [i_0] = ((/* implicit */long long int) ((short) arr_11 [i_2]));
        }
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_14)) / (((/* implicit */int) var_9))))) ^ (-2420332869477390169LL)));
    }
    for (short i_5 = 1; i_5 < 21; i_5 += 4) 
    {
        var_23 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(_Bool)1]))) < (((((/* implicit */_Bool) min(((short)23381), (arr_16 [(_Bool)0])))) ? (var_5) : (((/* implicit */unsigned long long int) max((arr_17 [0U]), (((/* implicit */long long int) (signed char)-85)))))))));
        arr_18 [i_5] = ((long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)23381))))) > (((/* implicit */int) max(((short)-23375), (arr_16 [i_5]))))));
        arr_19 [(unsigned char)20] [i_5] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5]))) >= (15952432034308360516ULL)))))));
    }
    var_24 = ((/* implicit */_Bool) var_7);
    var_25 = ((/* implicit */short) var_9);
    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) | (((/* implicit */int) var_13))))) ? ((-(((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_18))))))))))));
}
