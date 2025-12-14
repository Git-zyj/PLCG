/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138119
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
    var_10 = (-(var_7));
    var_11 = ((/* implicit */_Bool) ((((_Bool) (_Bool)1)) ? ((~((~(-1187569248))))) : (((((/* implicit */_Bool) (+(-272465071)))) ? (((var_9) ? (var_6) : (var_5))) : (((/* implicit */int) var_4))))));
    var_12 |= ((/* implicit */signed char) 1834336783);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_13 = ((/* implicit */_Bool) ((-272465071) ^ (449305758)));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_5 [i_1] [i_1] [i_1])) : (arr_4 [8])))));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_15 = (+(((/* implicit */int) (_Bool)1)));
                            var_16 *= ((/* implicit */_Bool) ((int) (~(((/* implicit */int) (_Bool)0)))));
                            var_17 *= (signed char)-32;
                            var_18 = ((/* implicit */int) ((signed char) (_Bool)1));
                        }
                    } 
                } 
            } 
            arr_17 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1541661441)) && (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_1]))));
            var_19 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((((/* implicit */_Bool) -1187569244)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) (_Bool)1))))));
        }
        for (int i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 17; i_6 += 4) 
            {
                for (signed char i_7 = 3; i_7 < 17; i_7 += 3) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_20 += ((((/* implicit */int) arr_23 [i_0] [i_0] [i_6 + 1] [i_7 - 1] [i_8])) % (36528395));
                            var_21 += ((/* implicit */int) ((((-1187569261) - (((/* implicit */int) (_Bool)0)))) == (-1972109279)));
                        }
                    } 
                } 
            } 
            var_22 |= ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (_Bool)0))));
            var_23 = ((/* implicit */_Bool) arr_4 [i_5]);
        }
        var_24 = (_Bool)1;
    }
    for (signed char i_9 = 4; i_9 < 18; i_9 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_10 = 1; i_10 < 18; i_10 += 3) 
        {
            arr_37 [i_10 - 1] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (signed char)31))));
            var_25 = ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) arr_32 [i_9 - 4])) : (-337451685));
            arr_38 [i_9] [i_10 + 1] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_10])) ? (arr_33 [i_9] [(signed char)16]) : (arr_33 [(signed char)5] [(_Bool)1])))) ? (((((/* implicit */int) (signed char)57)) * (((/* implicit */int) (signed char)-61)))) : ((+(arr_34 [i_10] [i_9]))));
        }
        arr_39 [i_9 - 4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_29 [i_9 - 1])) ? (((/* implicit */int) arr_35 [i_9])) : (((/* implicit */int) arr_35 [6]))))))) ? (((((/* implicit */_Bool) (signed char)-50)) ? (1513265237) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) arr_36 [i_9] [i_9] [i_9]))))) ? (((/* implicit */int) arr_36 [i_9 - 2] [i_9 + 2] [i_9 - 2])) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))))));
    }
    var_26 = 36528384;
}
