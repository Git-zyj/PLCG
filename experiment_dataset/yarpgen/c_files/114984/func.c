/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114984
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
    var_10 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((var_2), (var_7)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((_Bool) var_9))))) / (((/* implicit */int) min((((/* implicit */short) ((_Bool) (_Bool)1))), (min(((short)-3475), (((/* implicit */short) var_3)))))))));
    var_11 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) min((var_1), (((/* implicit */short) var_2))))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        var_12 = ((/* implicit */short) arr_3 [(unsigned short)12]);
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */_Bool) -1131581174286297212LL)) && (((/* implicit */_Bool) (short)248))))), (arr_1 [i_0])))) && ((!((!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))));
        var_13 = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) (!(((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [7LL] [i_4])) ? (((/* implicit */int) arr_0 [i_0] [i_4])) : (((/* implicit */int) var_8))))) > (min((((/* implicit */long long int) (_Bool)1)), (6768580088343593823LL)))))));
                                var_15 = ((/* implicit */unsigned short) (+(min((((/* implicit */int) arr_6 [i_0])), ((+(((/* implicit */int) var_1))))))));
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (((-(((/* implicit */int) arr_0 [i_4] [4LL])))) << (((((((/* implicit */int) arr_12 [(_Bool)1] [i_2] [i_2] [i_4])) ^ ((~(((/* implicit */int) arr_13 [i_0] [(signed char)3] [i_2] [i_3] [(_Bool)1])))))) - (77))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0 - 3])) ? (((/* implicit */int) arr_5 [i_0 - 3] [i_0 - 2])) : (((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1])))), (((/* implicit */int) min((arr_5 [i_0 + 1] [i_0 - 2]), (arr_5 [i_0 - 1] [i_0 - 1]))))));
                }
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_19 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65527)) >= (((/* implicit */int) arr_18 [i_5]))))), (min((((/* implicit */signed char) arr_17 [i_5] [i_5])), (var_7)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) min((arr_16 [i_5] [i_5]), (arr_15 [i_5] [i_5])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) : ((~(max((((/* implicit */long long int) arr_16 [i_5] [i_5])), (-5533042642636339649LL)))))));
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-71)) | (((/* implicit */int) arr_15 [(signed char)0] [(signed char)0])))) & (((((/* implicit */int) (signed char)42)) & (((/* implicit */int) arr_15 [(_Bool)1] [i_5])))))))));
        arr_20 [i_5] = var_9;
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_5] [i_5])) % (((/* implicit */int) arr_16 [i_5] [i_5]))))) ? ((+(((/* implicit */int) ((((/* implicit */int) (unsigned short)39808)) >= (((/* implicit */int) var_1))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_3))))))))));
    }
}
