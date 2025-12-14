/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160572
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) min((((/* implicit */int) var_3)), (var_14))))) < (var_15)));
    var_17 *= ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((unsigned char) var_8))) : (((int) var_12)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(17379479121547276227ULL)))) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((((/* implicit */int) min((arr_1 [i_0 - 1]), (arr_1 [i_0])))) / (((/* implicit */int) arr_2 [i_0]))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) ((short) ((int) var_2)));
                        var_21 = ((/* implicit */unsigned char) var_3);
                        arr_10 [i_0 - 3] [i_1] = ((/* implicit */_Bool) var_13);
                    }
                } 
            } 
            arr_11 [i_1] = ((/* implicit */_Bool) (+(((var_0) ? (((/* implicit */int) arr_9 [i_0 + 2] [i_0] [i_0] [i_1] [i_0] [i_0 + 2])) : (((/* implicit */int) var_11))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */int) arr_13 [i_0] [i_0 + 2])) : (((/* implicit */int) max((arr_16 [i_0 - 1]), (arr_16 [i_0 + 1]))))))));
                            var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_4 [i_5])), (((((((/* implicit */_Bool) arr_4 [i_0 - 3])) || (((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_10)))));
                        }
                    } 
                } 
            } 
            arr_24 [i_0] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((unsigned char) arr_19 [i_0 - 2] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_13)));
            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) arr_7 [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 1]))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            arr_27 [i_8] [i_8] [(unsigned char)7] = ((/* implicit */unsigned long long int) ((unsigned short) (((!(((/* implicit */_Bool) arr_12 [(signed char)13] [i_8] [i_8])))) ? (((3137291336U) << (((((/* implicit */int) (unsigned short)31127)) - (31123))))) : (arr_3 [i_0] [i_8] [i_8]))));
            var_25 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_3), (((/* implicit */unsigned short) arr_26 [i_8] [i_0 - 1])))))) % (var_2)));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            arr_31 [i_9] = ((/* implicit */short) ((unsigned long long int) (short)-28770));
            var_26 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) < (((((/* implicit */_Bool) min((((/* implicit */short) arr_26 [14] [(unsigned short)15])), (var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_14) : (((/* implicit */int) var_9))))) : (var_13)))));
        }
    }
    /* LoopNest 3 */
    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 4) 
    {
        for (signed char i_11 = 2; i_11 < 15; i_11 += 4) 
        {
            for (unsigned char i_12 = 1; i_12 < 16; i_12 += 3) 
            {
                {
                    arr_39 [i_12] [i_10] [i_10] [(unsigned char)10] |= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) 2040ULL)) ? (-454373301) : (((/* implicit */int) (unsigned char)0)))))));
                    var_28 = ((/* implicit */signed char) var_15);
                }
            } 
        } 
    } 
}
