/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128238
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
    var_13 *= ((/* implicit */_Bool) (signed char)92);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)178)), (-413346076)));
        var_15 *= ((/* implicit */_Bool) ((((/* implicit */int) min((arr_2 [(unsigned char)7]), (arr_2 [i_0])))) >> (((/* implicit */int) ((_Bool) var_0)))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) ((arr_3 [i_1] [i_1]) % (((/* implicit */int) (signed char)-56))));
        arr_8 [i_1] = (unsigned char)173;
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) <= (((/* implicit */int) var_6))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_2 = 1; i_2 < 16; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_3 = 3; i_3 < 17; i_3 += 2) 
        {
            var_18 = ((/* implicit */int) ((unsigned char) (+(544812258))));
            var_19 = ((/* implicit */unsigned char) (+(-40503033)));
            var_20 *= ((/* implicit */signed char) (!(arr_11 [i_2] [i_2])));
        }
        for (signed char i_4 = 1; i_4 < 17; i_4 += 3) 
        {
            /* LoopSeq 3 */
            for (int i_5 = 2; i_5 < 18; i_5 += 1) 
            {
                arr_21 [i_2] [i_2] [i_2 + 3] = var_0;
                var_21 = ((/* implicit */signed char) arr_17 [i_4 + 2] [i_2 + 3]);
                var_22 = ((/* implicit */signed char) min((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (arr_10 [i_5])))), (min((((/* implicit */int) arr_19 [i_2] [i_4 + 1])), (((((/* implicit */_Bool) arr_13 [(signed char)17] [(signed char)17])) ? (((/* implicit */int) arr_16 [i_2] [i_4])) : (((/* implicit */int) var_6))))))));
            }
            /* vectorizable */
            for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) 
            {
                arr_26 [(_Bool)1] [i_4] = ((/* implicit */signed char) ((((-1228070083) + (2147483647))) >> (((/* implicit */int) arr_25 [i_2]))));
                var_23 = var_7;
                var_24 = ((((/* implicit */_Bool) (unsigned char)164)) ? (((((/* implicit */_Bool) -777572117)) ? (arr_13 [i_4] [(unsigned char)17]) : (((/* implicit */int) arr_24 [i_2] [i_4 + 2] [i_2] [i_6])))) : (((-413346070) - (((/* implicit */int) var_12)))));
            }
            for (int i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-27)), ((((_Bool)1) ? (var_11) : (((/* implicit */int) (unsigned char)177))))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) min(((signed char)107), (((/* implicit */signed char) arr_24 [i_2] [i_2] [i_2] [i_2]))))))))))));
                arr_29 [i_2] [(unsigned char)17] = ((/* implicit */int) ((((/* implicit */int) (signed char)-92)) < (((/* implicit */int) (unsigned char)144))));
            }
            var_26 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */int) (unsigned char)140)) : (var_7))) ^ (max((((/* implicit */int) (unsigned char)69)), (arr_15 [i_2] [i_2] [i_2]))))), (((/* implicit */int) max(((unsigned char)69), (((/* implicit */unsigned char) (_Bool)0)))))));
        }
        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((unsigned char) ((unsigned char) arr_25 [i_2 + 1]))))));
        var_28 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_9 [i_2]))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_11 [10] [i_2])), ((unsigned char)140)))) : (((/* implicit */int) ((-1248636685) <= (((/* implicit */int) (_Bool)0))))))), (((((/* implicit */int) arr_25 [i_2 - 1])) & (((/* implicit */int) arr_25 [i_2 + 3]))))));
        var_29 = max((min((arr_22 [14] [i_2 + 3] [i_2]), (((/* implicit */int) var_0)))), (((max((arr_13 [i_2] [i_2]), (((/* implicit */int) var_8)))) % (((/* implicit */int) ((((/* implicit */int) arr_10 [i_2])) < (var_2)))))));
    }
}
