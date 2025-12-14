/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17621
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
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)29587)) && (((/* implicit */_Bool) var_12))))), (max((16310639566757052449ULL), (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) (unsigned short)35949)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)29586))));
        var_16 = ((((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) var_0)))) > (((/* implicit */int) arr_0 [i_0])));
        var_17 = ((/* implicit */short) arr_1 [i_0] [i_0]);
        /* LoopSeq 3 */
        for (long long int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_1 - 2])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 4; i_2 < 7; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_0] [(signed char)7] [i_3] [i_4] [i_3] = (-(((((/* implicit */int) (unsigned short)35949)) ^ (((/* implicit */int) (unsigned short)35949)))));
                            var_19 = 15167595602709731843ULL;
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */unsigned int) ((arr_10 [i_1 + 1] [i_1] [i_1 - 2] [i_1 - 1]) > (((/* implicit */int) ((((/* implicit */long long int) arr_4 [i_0] [i_0] [i_1])) <= (arr_12 [i_1 + 1] [7] [i_1] [i_0] [i_0] [i_0] [i_0]))))));
        }
        for (int i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        {
                            arr_29 [i_0] [i_0] [i_6] [i_7] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29587))) : (0ULL))))));
                            arr_30 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_6] [i_5] [i_5] [(unsigned char)7] [i_8] [i_5])) <= (((/* implicit */int) arr_26 [i_0] [i_5] [i_6] [(_Bool)1] [i_8] [i_8]))));
                            var_21 = ((/* implicit */signed char) ((var_2) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) 889311805)) > (3685132286198222806ULL))))));
                        }
                    } 
                } 
            } 
            arr_31 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_5] [i_0] [i_5] [9U])) ? (((/* implicit */int) arr_25 [i_0] [i_0])) : (((/* implicit */int) (_Bool)0))));
            var_22 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_15 [i_5] [i_5]) ^ (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [(_Bool)1]))));
        }
        for (int i_9 = 3; i_9 < 8; i_9 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 4) 
            {
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_14 [i_9 + 2] [i_10])) > (arr_22 [i_9 - 3] [i_9 - 1] [i_9 - 2] [i_9 - 2] [i_9 - 3] [(unsigned short)5]))))));
                arr_37 [i_0] = ((/* implicit */unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)29587))));
            }
            /* LoopNest 2 */
            for (long long int i_11 = 0; i_11 < 10; i_11 += 4) 
            {
                for (int i_12 = 0; i_12 < 10; i_12 += 2) 
                {
                    {
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1612516549U)) ? (((/* implicit */int) arr_1 [i_9 - 1] [i_9 + 2])) : (arr_15 [i_11] [i_11]))))));
                        arr_44 [i_0] [i_9] [i_0] [i_0] = ((/* implicit */long long int) ((arr_42 [i_9 + 1] [i_0] [i_0] [i_9 - 2]) ^ (((/* implicit */int) arr_5 [i_0] [i_0] [i_12]))));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 16489638866914594120ULL)) ? (15167595602709731843ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_26 = ((/* implicit */int) ((unsigned int) arr_6 [i_9] [(_Bool)1] [(_Bool)1]));
                    }
                } 
            } 
            var_27 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)29586)) == (((/* implicit */int) var_0)))) ? (((/* implicit */int) ((arr_16 [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (-139416513)));
        }
    }
}
