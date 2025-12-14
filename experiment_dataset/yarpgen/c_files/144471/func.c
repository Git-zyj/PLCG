/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144471
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
    var_15 = ((/* implicit */unsigned char) ((((((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (var_9)))) << (((((/* implicit */int) ((unsigned char) var_14))) - (22))))) != (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_12))))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_16 = ((unsigned char) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))))), (arr_2 [i_0] [i_1] [i_0])));
            var_17 = arr_0 [i_0];
        }
        for (unsigned char i_2 = 2; i_2 < 22; i_2 += 4) 
        {
            arr_6 [i_2] &= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_0] [i_0] [i_2]))));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_2 - 2] [(unsigned short)20] [i_2])) - (((/* implicit */int) arr_3 [i_2 - 2] [i_0] [i_0]))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0]))))))) : ((-(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))));
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) ((unsigned short) (unsigned char)40)))))) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) min(((unsigned short)16772), (((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) (unsigned short)18376))))))))));
        }
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) / (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))));
        var_19 = ((/* implicit */unsigned short) min(((((+(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) | (((/* implicit */int) ((unsigned short) arr_0 [i_0]))))), (((/* implicit */int) max((max((var_11), (((/* implicit */unsigned short) var_14)))), (((/* implicit */unsigned short) arr_2 [i_0] [i_0] [i_0])))))));
        arr_9 [i_0] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))));
    }
    for (unsigned char i_3 = 3; i_3 < 10; i_3 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) (unsigned short)15768)) ? (((/* implicit */int) arr_5 [(unsigned short)22])) : (((/* implicit */int) var_8)))) >> (((((/* implicit */int) var_4)) - (190))))), (((/* implicit */int) arr_5 [(unsigned char)14]))));
        /* LoopSeq 1 */
        for (unsigned short i_4 = 2; i_4 < 10; i_4 += 4) 
        {
            arr_14 [i_3 - 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)3))))) ? ((~(((/* implicit */int) arr_0 [i_3 - 3])))) : (((((/* implicit */int) arr_10 [(unsigned short)5])) | (((/* implicit */int) (unsigned short)25336))))))) ? (((/* implicit */int) max((((unsigned short) arr_1 [i_4])), (((unsigned short) arr_10 [i_3 + 1]))))) : (((((((/* implicit */int) arr_1 [i_4])) & (((/* implicit */int) var_10)))) ^ (((/* implicit */int) max((var_4), (arr_3 [i_3] [i_3] [(unsigned char)20]))))))));
            var_21 = ((/* implicit */unsigned short) max((((((/* implicit */int) var_14)) / (((/* implicit */int) arr_13 [i_3 - 3])))), (((/* implicit */int) ((unsigned char) (unsigned char)92)))));
        }
        var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_11 [i_3]))));
        var_23 = ((/* implicit */unsigned char) arr_10 [i_3]);
    }
}
