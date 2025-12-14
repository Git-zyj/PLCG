/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181773
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
    var_14 = ((/* implicit */signed char) 16777184);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (((((unsigned int) (unsigned short)34878)) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) (short)30109)))))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_0])) * (((((((/* implicit */int) arr_4 [i_3] [i_2] [i_1] [i_0])) == (((/* implicit */int) (unsigned short)59783)))) ? ((-(((/* implicit */int) (unsigned short)5749)))) : (((/* implicit */int) (short)2046))))));
                        var_17 = ((/* implicit */signed char) (-(((int) arr_5 [i_0] [i_2 + 1]))));
                        arr_10 [i_1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1 + 2] = ((/* implicit */unsigned short) ((int) (-(((/* implicit */int) arr_5 [i_1 - 1] [i_2])))));
                        /* LoopSeq 4 */
                        for (signed char i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            arr_14 [i_0] [i_0] [i_0] [16] [i_4 - 1] = ((/* implicit */unsigned int) arr_4 [i_1 - 2] [i_1 - 1] [i_2 + 1] [i_4 + 1]);
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_13 [i_2] [i_2 + 3] [i_2] [i_2 + 3] [i_2 + 3] [i_2 - 1]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_2] [i_2 - 1] [i_2] [i_2] [i_2 - 2] [i_2])))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [6] [i_3] [i_4])))))));
                            arr_15 [i_0] = ((/* implicit */signed char) ((short) (+(((/* implicit */int) arr_11 [i_2] [i_2 - 2] [i_2 - 1] [i_2] [i_2] [i_2] [i_2])))));
                            var_19 ^= ((/* implicit */int) ((unsigned short) ((((/* implicit */int) ((signed char) (unsigned short)59771))) & ((~(((/* implicit */int) var_8)))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            var_20 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)5772)) ? (var_11) : (1073741823U)));
                            arr_18 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_17 [i_1 - 1] [i_1 - 2]);
                        }
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            arr_21 [i_0] [i_0] = ((/* implicit */int) arr_2 [i_1 - 1]);
                            var_21 = var_6;
                            var_22 = ((/* implicit */unsigned int) (short)-30109);
                            var_23 = ((/* implicit */unsigned short) ((short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))))));
                            var_24 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_7 [i_2 - 2] [i_1 + 2])) ? (((/* implicit */int) (unsigned short)11620)) : (arr_7 [i_2 - 1] [i_1 - 2]))));
                        }
                        /* vectorizable */
                        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned int) arr_12 [(unsigned short)11] [i_1] [i_2 - 1] [i_3] [i_2 - 1] [i_0]);
                            var_26 = (unsigned short)5759;
                        }
                    }
                } 
            } 
        } 
        var_27 ^= ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (3U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))))))));
    }
}
