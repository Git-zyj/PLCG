/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119760
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
    var_18 = ((/* implicit */unsigned int) var_14);
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) & (max((((/* implicit */int) min(((unsigned short)46933), ((unsigned short)18593)))), (((((/* implicit */int) (unsigned short)18610)) ^ (((/* implicit */int) (unsigned short)1637))))))));
    var_20 = ((/* implicit */_Bool) min((((((((/* implicit */int) var_9)) | (((/* implicit */int) var_13)))) + (((/* implicit */int) (unsigned short)46945)))), (((/* implicit */int) var_10))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) & (((((((/* implicit */_Bool) var_14)) || (var_2))) ? (((/* implicit */int) max(((unsigned short)18602), (((/* implicit */unsigned short) var_13))))) : ((+(((/* implicit */int) var_8))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_1] [(unsigned char)8])) << ((((((-(((/* implicit */int) var_8)))) + (214))) - (11))))))));
            var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */int) var_16)) + (((/* implicit */int) arr_3 [i_1] [i_1] [(short)4]))));
        }
        for (signed char i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
        {
            var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [(unsigned short)8] [i_0] [(unsigned short)8])) <= (((((/* implicit */int) arr_5 [i_0] [i_0])) * (((/* implicit */int) arr_5 [(short)12] [(unsigned char)4]))))));
            var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_6 [(unsigned char)15] [i_2] [(unsigned short)13])) : (((/* implicit */int) (_Bool)1)))))));
            arr_7 [i_0] = ((/* implicit */unsigned short) arr_6 [i_0] [5] [i_2]);
            arr_8 [i_2] [(unsigned char)17] [(unsigned short)1] = ((/* implicit */int) var_3);
        }
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            for (unsigned short i_4 = 1; i_4 < 17; i_4 += 4) 
            {
                for (int i_5 = 1; i_5 < 16; i_5 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 4; i_6 < 15; i_6 += 3) 
                        {
                            arr_18 [i_6 - 3] [i_3] [i_4 - 1] [(unsigned char)9] [i_3] [i_0] = ((/* implicit */int) ((((((/* implicit */int) (unsigned char)8)) + (((/* implicit */int) (unsigned short)65535)))) > (((/* implicit */int) arr_16 [i_0] [i_3] [i_4 + 1] [i_5 + 2] [i_5 + 2] [i_6 + 4]))));
                            arr_19 [(_Bool)1] [i_3] [(unsigned char)12] [i_4 - 1] [(short)18] [(short)4] [2] |= ((/* implicit */unsigned char) (unsigned short)18606);
                            var_26 *= ((/* implicit */unsigned char) ((long long int) 1158333186U));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) == (1634787368)));
                        }
                        arr_20 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_4 [(signed char)3] [i_3])) : (((/* implicit */int) arr_6 [13] [(short)11] [(unsigned short)9]))))) ? (((/* implicit */int) arr_3 [i_3] [i_5 + 1] [i_3])) : (((/* implicit */int) (short)25142))));
                    }
                } 
            } 
        } 
    }
}
