/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183029
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
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) ((signed char) var_13));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) -1LL);
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 23; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (short i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            var_18 = ((/* implicit */short) ((((/* implicit */int) var_9)) << (((((-723406757747746731LL) + (723406757747746761LL))) - (23LL)))));
            arr_8 [(unsigned char)10] [i_2] [i_1] = ((/* implicit */_Bool) ((unsigned char) var_16));
            arr_9 [i_1] [i_1 + 1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (-1) : (((/* implicit */int) arr_4 [i_2]))));
            var_19 = ((/* implicit */_Bool) var_7);
            var_20 = ((/* implicit */_Bool) ((long long int) (+(arr_5 [i_1]))));
        }
        for (unsigned short i_3 = 1; i_3 < 21; i_3 += 1) 
        {
            arr_12 [24ULL] [i_1 - 3] [24ULL] &= ((((/* implicit */_Bool) arr_11 [i_3 + 1])) ? (((/* implicit */int) arr_3 [i_1 - 2])) : (((/* implicit */int) arr_11 [i_3 + 4])));
            arr_13 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_0 [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 2] [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))) : (arr_5 [i_1])));
            var_21 = ((/* implicit */unsigned long long int) 0);
        }
        for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 4) 
        {
            /* LoopNest 3 */
            for (short i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                for (int i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    for (long long int i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) 26);
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) -415253186280884019LL))));
                            var_24 += arr_11 [i_1 - 1];
                        }
                    } 
                } 
            } 
            arr_24 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_4 + 1])) ? (arr_1 [i_4 + 1]) : (((/* implicit */long long int) 0))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_25 = ((/* implicit */long long int) min((var_25), (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_1)) ? (-415253186280884019LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 415253186280884018LL))))))));
            arr_27 [i_1] = ((/* implicit */int) ((arr_5 [i_1]) - (arr_5 [i_1])));
            /* LoopSeq 2 */
            for (int i_9 = 1; i_9 < 21; i_9 += 4) 
            {
                var_26 = ((_Bool) ((unsigned long long int) -1));
                arr_30 [i_1] [i_8] [i_1] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_21 [i_1 - 2] [i_1 + 2] [i_1 + 2] [i_1] [i_8] [(unsigned char)22]) : (arr_1 [i_9]))));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_27 = ((/* implicit */long long int) arr_31 [i_1 - 2] [i_1 + 2] [i_1 + 2] [i_1]);
                arr_33 [(_Bool)1] [i_8] [i_1] [(_Bool)1] = ((/* implicit */long long int) (+((-2147483647 - 1))));
            }
        }
        arr_34 [i_1] [i_1] = ((/* implicit */long long int) (-2147483647 - 1));
        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) arr_26 [i_1] [i_1 + 2]))));
        var_29 = ((/* implicit */short) (-(arr_10 [i_1 - 1])));
    }
    /* vectorizable */
    for (long long int i_11 = 3; i_11 < 23; i_11 += 1) /* same iter space */
    {
        arr_38 [i_11] = ((/* implicit */int) arr_14 [i_11] [i_11] [i_11 - 3]);
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (short i_13 = 2; i_13 < 24; i_13 += 4) 
            {
                {
                    arr_44 [i_12] = ((/* implicit */unsigned short) var_13);
                    arr_45 [i_11] [i_11] [i_12] = ((/* implicit */short) -2147483619);
                    arr_46 [i_11 - 2] [i_12] [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_26 [i_11] [i_12]) ? (arr_7 [i_11] [i_12]) : (415253186280884018LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_11 - 2]))) : (arr_1 [i_11 + 1])));
                }
            } 
        } 
    }
    var_30 = ((unsigned char) max((var_7), (((unsigned char) var_1))));
}
