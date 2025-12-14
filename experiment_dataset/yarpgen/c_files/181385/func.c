/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181385
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
    var_19 = var_11;
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (signed char)-96)))) - (((/* implicit */int) arr_2 [i_0]))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) - (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)89))))));
        arr_4 [i_0] [i_0] = ((signed char) (signed char)-66);
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)47)) - (((/* implicit */int) arr_0 [i_1]))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 2; i_2 < 12; i_2 += 4) 
        {
            for (signed char i_3 = 1; i_3 < 12; i_3 += 2) 
            {
                {
                    arr_12 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) max((((unsigned char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) var_16))))), (((/* implicit */unsigned char) (signed char)11))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        for (signed char i_5 = 2; i_5 < 13; i_5 += 2) 
                        {
                            {
                                arr_20 [(signed char)4] [(signed char)4] [i_3] [(signed char)6] [i_5] [i_5 + 2] [i_5 + 2] = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_5 [i_1])))) - (((/* implicit */int) (signed char)-99))));
                                arr_21 [i_5 - 1] [i_4] [i_3 - 1] [i_3] [i_2] [i_1] [i_1] = (unsigned char)159;
                                var_23 += ((/* implicit */signed char) (((-(((/* implicit */int) arr_10 [i_5] [i_2 + 3] [i_3])))) - (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_10 [i_4] [i_2 + 1] [(signed char)10]))))));
                                var_24 = ((/* implicit */signed char) max((var_24), (min((arr_5 [i_1]), ((signed char)-97)))));
                                var_25 = ((/* implicit */unsigned char) (signed char)92);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_22 [(signed char)0] = var_7;
        /* LoopSeq 1 */
        for (signed char i_6 = 2; i_6 < 14; i_6 += 3) 
        {
            var_26 = (signed char)57;
            var_27 = ((/* implicit */unsigned char) var_1);
            arr_27 [i_6] = ((/* implicit */signed char) max((((((/* implicit */int) var_2)) - ((~(((/* implicit */int) (signed char)-116)))))), (min((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_19 [i_1] [i_1] [i_1])))), (((/* implicit */int) min((var_4), ((unsigned char)104))))))));
            arr_28 [(signed char)3] [(signed char)3] [i_6] = ((/* implicit */unsigned char) (signed char)-71);
        }
    }
    for (signed char i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_7] [i_7])) - (((/* implicit */int) (unsigned char)185))))) ? ((-(((/* implicit */int) (signed char)-104)))) : (((/* implicit */int) arr_13 [i_7] [(unsigned char)8] [i_7] [(unsigned char)8] [i_7] [i_7])))) - (((((/* implicit */int) arr_11 [i_7] [i_7] [i_7] [i_7])) - (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))))));
        var_29 = ((/* implicit */unsigned char) (signed char)-120);
        arr_32 [i_7] = ((/* implicit */signed char) min((min((((/* implicit */int) (unsigned char)39)), (((((/* implicit */int) (signed char)-112)) - (((/* implicit */int) (signed char)104)))))), (((/* implicit */int) (signed char)-104))));
    }
    for (signed char i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 15; i_9 += 2) 
        {
            for (signed char i_10 = 0; i_10 < 15; i_10 += 2) 
            {
                {
                    var_30 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_9])) - (((/* implicit */int) (signed char)92))))) ? (((/* implicit */int) (signed char)-76)) : (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (signed char)-10))))));
                    var_31 -= ((/* implicit */unsigned char) (signed char)85);
                    arr_39 [i_8] [i_8] [(signed char)0] [(unsigned char)4] = ((/* implicit */unsigned char) ((signed char) min((((((/* implicit */int) (unsigned char)116)) - (((/* implicit */int) arr_34 [i_8])))), ((~(((/* implicit */int) arr_25 [i_8] [i_10])))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_11 = 0; i_11 < 15; i_11 += 1) 
        {
            for (signed char i_12 = 0; i_12 < 15; i_12 += 4) 
            {
                {
                    var_32 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_26 [i_8] [i_11])) : (((/* implicit */int) (unsigned char)171))));
                    var_33 = min(((signed char)3), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) (signed char)115)))))));
                }
            } 
        } 
    }
    var_34 = ((/* implicit */unsigned char) ((min((((((/* implicit */int) var_7)) - (((/* implicit */int) var_14)))), (((/* implicit */int) var_8)))) - (((/* implicit */int) (signed char)110))));
    var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_9)) - (((/* implicit */int) (signed char)-70)))) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-49))))))) ? (((/* implicit */int) var_18)) : ((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_2))))))));
}
