/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181829
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
    var_16 = var_7;
    var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned char) max((3458576260468293500ULL), (((/* implicit */unsigned long long int) var_4)))))), (((((/* implicit */_Bool) ((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)43)))) : (var_4)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_18 *= (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)206))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_1] [i_0]))) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) : (arr_5 [i_0] [i_0]))))))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((unsigned char) arr_3 [i_1] [i_2]));
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) ((short) (~(((/* implicit */int) (unsigned char)203)))))))))));
                        var_22 = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_11 [i_2])), (((unsigned long long int) ((arr_11 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (8384512U))))));
                        var_23 = ((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0] [i_3] [(unsigned char)12] [i_3]);
                    }
                } 
            } 
        }
        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            var_24 = ((/* implicit */short) (signed char)43);
            var_25 = ((/* implicit */unsigned long long int) var_15);
            var_26 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (((-(((/* implicit */int) (unsigned char)63)))) + ((+(((/* implicit */int) arr_11 [i_0]))))))), (((14988167813241258115ULL) - (var_6)))));
        }
        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (unsigned char)255))));
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                for (long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    {
                        var_28 = ((/* implicit */signed char) arr_16 [i_0]);
                        var_29 = ((/* implicit */unsigned char) arr_12 [i_6] [i_5]);
                    }
                } 
            } 
        }
        var_30 -= arr_1 [i_0];
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) 
        {
            var_31 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 4194303LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_7 [i_0] [i_0])))) >> (((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)20))) : (arr_1 [i_8])))));
            var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_0] [i_8] [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_8]))))));
            /* LoopSeq 1 */
            for (int i_9 = 0; i_9 < 18; i_9 += 4) 
            {
                var_33 = ((/* implicit */signed char) ((arr_18 [i_9] [i_9] [i_9]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_9])))))))));
                var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_8]))) : (6578675261637071590LL)));
                var_35 = ((/* implicit */unsigned long long int) (signed char)127);
            }
        }
    }
    var_36 = ((/* implicit */short) var_0);
}
