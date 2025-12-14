/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125700
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
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) arr_2 [i_0 - 2] [i_1])), ((-(var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (var_11))))));
                var_16 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (min((((/* implicit */unsigned long long int) -1509430727)), (min((((/* implicit */unsigned long long int) (short)2047)), (var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_14) > (((long long int) var_9))))))));
                var_17 += ((/* implicit */unsigned char) max((((/* implicit */long long int) min((arr_5 [i_1] [i_0 - 3]), (var_8)))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0])) ? (1072345018) : (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) -1509430718)) ? (arr_3 [i_0] [i_0] [4U]) : (((/* implicit */long long int) 1509430732))))))));
                var_18 = ((/* implicit */unsigned int) (((!(arr_0 [i_0 + 1]))) && (((/* implicit */_Bool) arr_5 [i_0] [i_0]))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_6);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 2; i_3 < 21; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    {
                        var_20 = ((/* implicit */short) -1509430720);
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_17 [i_2] [i_3] [i_3] [i_5] [i_6] = ((/* implicit */unsigned int) ((unsigned long long int) (-(1509430732))));
                            arr_18 [16U] [i_6] [i_4] [i_6] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
                            var_21 = ((/* implicit */int) arr_13 [i_3 + 1]);
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2] [i_3 - 2])) ? (((/* implicit */int) arr_6 [i_3 - 1])) : (((/* implicit */int) arr_6 [i_3 - 2]))));
                        }
                        var_23 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) arr_16 [(short)5] [i_3] [i_4] [(_Bool)1] [i_4] [i_5] [(short)4])))));
                    }
                } 
            } 
            arr_19 [i_2] = ((/* implicit */long long int) ((_Bool) (-(1509430705))));
        }
        arr_20 [i_2] &= ((/* implicit */signed char) (-(arr_11 [i_2] [i_2])));
        arr_21 [i_2] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) (unsigned char)186))))));
        var_24 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_2])) - (((/* implicit */int) arr_6 [i_2]))));
    }
    for (unsigned int i_7 = 1; i_7 < 15; i_7 += 3) 
    {
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))), ((+(arr_15 [i_7 - 1] [20] [i_7 + 1] [(unsigned char)6] [20] [i_7])))))))));
        arr_24 [i_7 + 1] [0ULL] |= arr_11 [i_7] [i_7];
        arr_25 [i_7] [i_7 - 1] = ((/* implicit */short) ((_Bool) (((-(-582077551))) << (((((((int) arr_14 [10U] [i_7 + 1])) + (1449458128))) - (29))))));
        arr_26 [i_7] = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_7] [i_7] [i_7] [i_7 + 1] [i_7]))))), ((-(((/* implicit */int) arr_12 [i_7 - 1] [3ULL] [i_7 - 1] [i_7 + 1] [i_7 - 1]))))));
    }
    for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_9 = 3; i_9 < 20; i_9 += 4) 
        {
            for (unsigned int i_10 = 1; i_10 < 23; i_10 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 24; i_12 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_35 [i_11 + 1] [i_10 + 1] [i_10] [i_9 + 2])))) || (((/* implicit */_Bool) ((-1509430758) & (1509430726))))));
                                var_27 = ((/* implicit */long long int) arr_36 [i_8] [i_9] [i_10 - 1] [i_11 + 1] [i_11 + 1] [i_11]);
                            }
                        } 
                    } 
                    arr_41 [i_9] [i_9] [i_10] [i_10] = ((/* implicit */unsigned char) ((((arr_37 [i_9] [i_9] [i_9 + 3] [i_10 - 1] [i_10] [(signed char)16]) / (arr_37 [i_10] [i_10] [i_9 + 3] [i_10 - 1] [i_10 - 1] [i_9]))) * (min((arr_37 [i_8] [i_9] [i_9 - 1] [i_10 - 1] [i_8] [i_8]), (arr_37 [12] [(signed char)1] [i_9 + 2] [i_10 + 1] [(signed char)1] [i_8])))));
                }
            } 
        } 
        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((min((((/* implicit */long long int) ((((/* implicit */int) arr_32 [i_8] [i_8] [i_8])) << (((arr_28 [i_8] [i_8]) + (7299231484985926735LL)))))), (min((var_14), (((/* implicit */long long int) arr_33 [7U] [i_8] [i_8])))))) + (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_27 [i_8] [i_8])), (arr_40 [i_8] [i_8])))))))));
    }
}
