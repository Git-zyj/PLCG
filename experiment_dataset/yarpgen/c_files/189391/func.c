/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189391
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
    var_19 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) ((signed char) var_18))) ? (min((var_15), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) (~(((/* implicit */int) var_14))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((((_Bool)1) ? (4524227106204868189LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)65))))), (((/* implicit */long long int) arr_1 [i_0] [i_0]))))) ? ((+((+(arr_1 [16U] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((signed char) arr_0 [i_0] [i_0])))))));
        var_20 = ((/* implicit */unsigned int) (~((~(((unsigned long long int) 17U))))));
        arr_3 [i_0] [15ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (min((((/* implicit */unsigned int) (_Bool)1)), (134217728U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)81)))))));
    }
    for (signed char i_1 = 2; i_1 < 16; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((arr_7 [i_1]), (((/* implicit */unsigned int) arr_5 [i_1] [i_1]))))) ? (arr_6 [i_1 + 3]) : (((/* implicit */long long int) 4294967278U)))), (((/* implicit */long long int) arr_5 [i_1] [i_1]))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            for (signed char i_3 = 2; i_3 < 17; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 3; i_5 < 18; i_5 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) (_Bool)0)))));
                                var_23 = (+(min((((((/* implicit */_Bool) arr_8 [i_3] [(signed char)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_5]))) : (arr_12 [i_2] [i_2] [i_2] [i_5]))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        arr_22 [i_6] [i_6] [i_6] [10U] = ((/* implicit */unsigned int) ((_Bool) arr_7 [i_1 + 1]));
                        var_24 ^= ((/* implicit */unsigned long long int) (-(454012393U)));
                        arr_23 [i_1] [i_1] [i_1] [i_3] [i_6] = ((/* implicit */signed char) arr_13 [i_6] [i_3] [i_3] [i_2] [i_1] [i_1]);
                        var_25 -= ((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_7 = 2; i_7 < 9; i_7 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 1) 
        {
            var_26 = ((long long int) arr_26 [i_7] [i_7 - 1] [i_7 + 1]);
            arr_28 [(_Bool)1] [i_8] [i_7 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) 17U))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)80))))) : (2522111944U)));
            /* LoopSeq 1 */
            for (long long int i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_10 = 4; i_10 < 9; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 2; i_11 < 6; i_11 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_11 + 3] [i_11] [i_11 + 1] [i_11] [i_11 + 4] [i_11]))));
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_8 [i_7 + 1] [i_11 + 4])))))));
                        }
                    } 
                } 
                var_29 ^= ((long long int) arr_7 [i_7 + 1]);
            }
            var_30 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_16 [i_8] [i_8] [i_7] [(signed char)0] [i_8] [(signed char)0] [i_7 + 1]))));
        }
        for (signed char i_12 = 0; i_12 < 10; i_12 += 1) 
        {
            var_31 = ((/* implicit */long long int) arr_39 [i_12] [i_12]);
            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (+((+(arr_25 [i_12]))))))));
            /* LoopNest 3 */
            for (signed char i_13 = 1; i_13 < 6; i_13 += 1) 
            {
                for (signed char i_14 = 0; i_14 < 10; i_14 += 1) 
                {
                    for (signed char i_15 = 0; i_15 < 10; i_15 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned int) arr_19 [8U]);
                            var_34 *= ((/* implicit */unsigned int) ((unsigned char) 1495047640U));
                            var_35 = arr_33 [i_12] [i_15];
                            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_13 + 1] [i_15] [i_15] [i_15])) ? (arr_46 [i_13 + 4] [i_15] [i_15] [i_15]) : (arr_46 [i_13 - 1] [i_13] [i_15] [i_15])));
                        }
                    } 
                } 
            } 
            var_37 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_7] [(signed char)2])) ? (arr_37 [i_7] [0LL]) : (arr_37 [i_7] [8U])));
            var_38 *= arr_42 [(_Bool)1];
        }
        var_39 = ((_Bool) 434633684672885880ULL);
        /* LoopNest 2 */
        for (unsigned char i_16 = 0; i_16 < 10; i_16 += 1) 
        {
            for (long long int i_17 = 0; i_17 < 10; i_17 += 1) 
            {
                {
                    arr_55 [i_16] [i_16] [8LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_49 [i_16])) ? (((/* implicit */int) arr_15 [i_7] [i_7] [i_7 + 1] [i_16] [i_16])) : (((/* implicit */int) ((signed char) arr_52 [i_7] [i_17] [i_16] [(signed char)2])))));
                    var_40 = (!(((/* implicit */_Bool) 13363799794859014726ULL)));
                }
            } 
        } 
    }
}
