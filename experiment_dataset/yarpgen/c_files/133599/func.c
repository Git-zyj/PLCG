/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133599
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
    var_20 = ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)0))))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned short) min(((signed char)-93), (arr_2 [(short)18] [(signed char)14] [i_1]))))))) ? (((unsigned int) max(((signed char)112), ((signed char)(-127 - 1))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1 - 1] [i_0]))))))));
            var_22 = (((((+(((/* implicit */int) var_18)))) & ((-2147483647 - 1)))) == (var_17));
        }
        var_23 = ((signed char) var_14);
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-93)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)123))));
    }
    for (short i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            arr_8 [i_2] = ((/* implicit */signed char) arr_7 [i_2] [i_2] [i_2]);
            /* LoopNest 2 */
            for (unsigned char i_4 = 3; i_4 < 24; i_4 += 2) 
            {
                for (unsigned char i_5 = 1; i_5 < 23; i_5 += 4) 
                {
                    {
                        arr_14 [i_2] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-100), (((/* implicit */signed char) (_Bool)1)))))) - ((-(((unsigned int) var_9))))));
                        arr_15 [i_2] [i_2] [i_5 - 1] [i_5 + 1] [i_5] = (i_2 % 2 == zero) ? (((_Bool) ((arr_11 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5]) >> (((arr_10 [i_5 + 2] [i_5 + 2] [i_2] [10]) - (1216807298)))))) : (((_Bool) ((arr_11 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5]) >> (((((arr_10 [i_5 + 2] [i_5 + 2] [i_2] [10]) - (1216807298))) - (213458889))))));
                    }
                } 
            } 
            var_25 = ((/* implicit */short) min((min((arr_6 [i_2] [i_2] [(_Bool)1]), (arr_6 [i_3] [i_2] [(unsigned short)3]))), ((((~(3387830976U))) - (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -1493716102))))))));
        }
        var_26 = max((((/* implicit */int) arr_7 [i_2] [(unsigned char)19] [(unsigned char)19])), (((((/* implicit */_Bool) arr_10 [(unsigned char)20] [(unsigned char)20] [i_2] [i_2])) ? (((int) var_3)) : (arr_10 [i_2] [i_2] [i_2] [i_2]))));
    }
    for (short i_6 = 0; i_6 < 12; i_6 += 3) 
    {
        arr_19 [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_5) | (arr_10 [(short)10] [(short)10] [(unsigned char)6] [(unsigned char)24])))) ? (((/* implicit */int) arr_13 [i_6])) : (((/* implicit */int) min((min((var_7), (((/* implicit */unsigned short) (signed char)92)))), (arr_17 [i_6]))))));
        var_27 = (+((-(2088706946))));
    }
    /* vectorizable */
    for (short i_7 = 1; i_7 < 15; i_7 += 3) 
    {
        var_28 &= ((/* implicit */signed char) var_11);
        var_29 ^= ((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))) < ((+(var_12)))));
        arr_23 [(short)1] [i_7 + 3] = ((/* implicit */unsigned int) (_Bool)1);
    }
    var_30 += ((/* implicit */int) var_11);
}
