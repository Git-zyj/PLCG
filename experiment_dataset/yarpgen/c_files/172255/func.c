/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172255
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_10 = arr_1 [i_0] [i_0];
        /* LoopSeq 2 */
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_5)), (arr_5 [i_0] [i_1])))) && (((/* implicit */_Bool) arr_4 [i_1 + 3] [i_1 - 2] [8U])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1 + 3])) ? (((((/* implicit */_Bool) arr_1 [(signed char)12] [i_1 - 3])) ? (((/* implicit */int) var_2)) : (arr_4 [(unsigned short)14] [i_0] [(unsigned short)14]))) : (((/* implicit */int) (unsigned char)85))))) : (((((/* implicit */_Bool) (signed char)127)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(short)4]))) : (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_2 [4LL]), (((/* implicit */short) var_7)))))))))))));
            var_12 = ((/* implicit */short) max((((((((/* implicit */int) (signed char)-22)) / (((/* implicit */int) var_7)))) / (((/* implicit */int) arr_2 [i_0])))), (((((_Bool) arr_2 [i_0])) ? (min((((/* implicit */int) var_6)), (1854002140))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)10))))))));
            arr_6 [i_0] [i_0] = ((/* implicit */_Bool) min((min(((~(((/* implicit */int) arr_3 [i_0])))), (((((/* implicit */int) var_0)) | (((/* implicit */int) arr_3 [i_0])))))), (arr_4 [i_0] [i_0] [i_0])));
        }
        for (signed char i_2 = 1; i_2 < 13; i_2 += 4) 
        {
            var_13 ^= ((/* implicit */_Bool) (~(arr_1 [(unsigned short)2] [(unsigned short)2])));
            var_14 = ((/* implicit */short) ((max((((/* implicit */int) (signed char)-3)), (1475264481))) / (((/* implicit */int) (signed char)127))));
            var_15 ^= ((/* implicit */signed char) var_3);
            var_16 ^= ((/* implicit */short) 16383U);
            var_17 = ((/* implicit */short) arr_3 [i_0]);
        }
    }
    var_18 = ((/* implicit */int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (var_9)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) var_2))));
    var_19 = ((/* implicit */unsigned short) min((max((((/* implicit */int) var_6)), ((~(((/* implicit */int) var_4)))))), (((((/* implicit */int) (unsigned short)9269)) ^ (((/* implicit */int) max((var_4), (var_2))))))));
    var_20 &= ((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_4))));
}
