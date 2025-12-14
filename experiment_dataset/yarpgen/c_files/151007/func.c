/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151007
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
        arr_2 [i_0] = arr_1 [i_0];
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_19 += ((_Bool) var_9);
        arr_8 [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_6 [i_1]) : (arr_6 [i_1]))) != (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1])))));
        arr_9 [i_1] [i_1] = arr_7 [i_1];
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_16 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) 2819715528746658663LL);
                    arr_17 [i_1] [i_2] [i_1] [i_2] = var_9;
                }
            } 
        } 
    }
    var_20 += ((/* implicit */long long int) var_1);
    /* LoopSeq 1 */
    for (long long int i_4 = 1; i_4 < 21; i_4 += 1) 
    {
        var_21 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_18 [i_4 + 2]) == ((~(arr_18 [i_4])))))), (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (3595541661341753819LL)))));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 1 */
        for (long long int i_5 = 2; i_5 < 24; i_5 += 4) 
        {
            var_23 = var_10;
            arr_23 [i_4] [i_5] = arr_22 [i_5] [i_5 - 1];
            var_24 = ((((/* implicit */_Bool) min((arr_19 [i_5 - 2]), (((/* implicit */long long int) (_Bool)1))))) || (((/* implicit */_Bool) (~(var_17)))));
        }
        arr_24 [i_4] = (+(arr_18 [i_4]));
    }
    var_25 += ((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */long long int) var_12)), (var_13))) : ((+(var_8))))) + ((+((((_Bool)1) ? (-4352427368150861150LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 3 */
    for (long long int i_6 = 1; i_6 < 9; i_6 += 1) 
    {
        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_6 - 1])) ? (min((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) var_9)) ? (-5722780135869091056LL) : (var_8))))) : (((arr_15 [i_6] [i_6 + 2] [i_6]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-9131077771517506295LL)))));
        arr_27 [i_6] [i_6] = ((/* implicit */_Bool) min((arr_6 [i_6 + 2]), (arr_6 [i_6 + 1])));
        var_27 = arr_15 [i_6 + 2] [i_6 + 2] [i_6];
        /* LoopSeq 1 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            arr_31 [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -4352427368150861158LL)) ? (-1874820765406366530LL) : (4352427368150861142LL)));
            arr_32 [i_6] = ((long long int) (_Bool)1);
            var_28 -= arr_7 [i_6];
        }
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_35 [i_8] [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4205778980315162761LL))))));
        arr_36 [i_8] [i_8] = (!(((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (-7139193867250522784LL)))));
    }
    for (long long int i_9 = 4; i_9 < 21; i_9 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
        {
            for (long long int i_11 = 3; i_11 < 21; i_11 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        arr_46 [i_11] [i_10] [i_11 + 1] [i_11] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                        arr_47 [i_10] [i_10] [i_10 + 1] [i_11] [i_10 + 1] [i_10] = arr_43 [i_11] [i_11];
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        arr_51 [i_11] [i_10] [i_11] [i_10] [i_11] = ((/* implicit */_Bool) ((long long int) (-(arr_18 [i_9]))));
                        var_29 = ((/* implicit */long long int) ((min((1874820765406366536LL), (((/* implicit */long long int) arr_21 [i_11 + 1])))) <= (((/* implicit */long long int) min(((~(((/* implicit */int) arr_40 [i_9] [i_9])))), ((-(((/* implicit */int) (_Bool)1)))))))));
                        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_22 [i_9 + 1] [i_11 + 1])))))));
                    }
                    var_31 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_45 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 2]))))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_45 [i_9 - 3] [i_9 + 1] [i_9 + 1] [i_9 - 1]))))));
                }
            } 
        } 
        arr_52 [i_9] [i_9] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) min((arr_38 [i_9 - 1]), (arr_38 [i_9 - 1]))))));
    }
}
