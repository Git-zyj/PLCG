/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122512
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
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) max((var_17), (arr_7 [i_0] [i_1] [i_2])));
                    var_18 *= ((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 1] [(signed char)16]);
                }
            } 
        } 
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) % (arr_5 [i_0 + 2] [i_0])))) ? ((-(((/* implicit */int) arr_2 [i_0 + 2])))) : (((((/* implicit */int) arr_6 [i_0 - 1])) & (((/* implicit */int) arr_6 [i_0])))))), (((/* implicit */int) arr_6 [i_0])))))));
        var_20 *= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(signed char)10] [(signed char)10])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_7 [i_0] [12U] [i_0]))))) ? ((+(((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_0])))) : (((((/* implicit */int) arr_2 [i_0])) - (arr_5 [i_0 + 1] [(unsigned char)8])))))));
    }
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (var_2)))) ^ (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_8)))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) var_12)), (var_16)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_13))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) - (((/* implicit */int) var_0))))))) : (((/* implicit */unsigned int) var_14)))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            {
                var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3] [i_3] [i_4])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4])) ? (((/* implicit */int) arr_9 [i_4])) : (arr_5 [i_3] [i_3]))))))) : (((/* implicit */int) arr_1 [(unsigned short)12] [i_4]))));
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [(unsigned short)0])) ^ (((/* implicit */int) arr_4 [i_4] [19ULL] [i_3]))))) || (((/* implicit */_Bool) arr_5 [i_3] [i_4])))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_4])) - (((/* implicit */int) arr_1 [i_3] [i_4]))))) ? ((-(((/* implicit */int) arr_1 [i_3] [i_4])))) : (((/* implicit */int) ((arr_3 [i_3] [i_4]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4] [14U])))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [(unsigned char)2])) ? (((/* implicit */int) arr_2 [i_4])) : (((/* implicit */int) arr_0 [i_3])))) <= ((+(((/* implicit */int) arr_2 [i_4]))))))))))));
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_3]))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_3])) | (((/* implicit */int) arr_8 [i_4]))))))))));
                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) arr_12 [i_3]))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) var_8);
}
