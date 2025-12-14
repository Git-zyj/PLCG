/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17260
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
    var_10 = max((var_2), (max((((/* implicit */long long int) var_3)), (var_5))));
    var_11 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)41)) / (((/* implicit */int) (short)112))))) ? (min((var_2), (((/* implicit */long long int) var_6)))) : (var_9))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] [(unsigned short)2] = ((/* implicit */unsigned short) ((var_9) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) (_Bool)1))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) min((var_3), ((_Bool)0)))) + (((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (((/* implicit */int) arr_1 [i_0 + 4])) : (((/* implicit */int) arr_1 [i_0 - 2]))))));
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((arr_0 [i_0 + 2]) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) var_3))))) ^ ((+(-5693691270055542866LL))))))));
    }
    for (unsigned short i_1 = 1; i_1 < 20; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = (~(max((arr_4 [i_1]), (((var_3) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((-96193580948981660LL) | (var_2)));
    }
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                {
                    var_14 = ((/* implicit */_Bool) arr_8 [i_2] [i_2]);
                    var_15 &= ((/* implicit */short) (_Bool)1);
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_0 [i_3]), (arr_0 [i_2])))) & (((/* implicit */int) var_4))));
                    var_17 = ((/* implicit */unsigned char) (+((~(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (9223372036854775806LL)))))));
                }
            } 
        } 
        var_18 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)37373)) ? (3416129135668337598LL) : (arr_14 [i_2] [i_2] [(_Bool)1] [(_Bool)1]))));
        var_19 = ((/* implicit */short) (_Bool)1);
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (arr_11 [11LL] [i_2] [i_5 - 1])));
            var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_1)))))) - ((+(17043332358384195782ULL)))));
            arr_17 [i_5] = ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5 - 1] [i_5 - 1]))) ^ (var_2));
        }
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */long long int) (_Bool)1);
            /* LoopSeq 4 */
            for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                arr_22 [(unsigned short)3] [i_2] [i_6] [i_7] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)116)) - (((/* implicit */int) var_4))));
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (~(((((/* implicit */int) arr_15 [(unsigned char)3])) ^ (((/* implicit */int) (short)-27339)))))))));
                var_24 = ((((/* implicit */_Bool) ((long long int) 39805754822773225ULL))) ? (((long long int) var_5)) : (((/* implicit */long long int) ((/* implicit */int) var_1))));
                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) var_5))));
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) var_8))));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                arr_25 [i_2] [i_8] = ((/* implicit */_Bool) var_1);
                arr_26 [(unsigned char)12] [i_6] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (1403411715325355833ULL)));
            }
            for (short i_9 = 0; i_9 < 15; i_9 += 3) 
            {
                arr_29 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_2]))) : (var_0)))) ? (((/* implicit */int) (unsigned short)2287)) : (((/* implicit */int) ((unsigned short) var_2)))));
                arr_30 [i_2] [i_2] [i_9] [13LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [10ULL] [10ULL] [(unsigned char)4])) || (((/* implicit */_Bool) ((var_3) ? (4502476531904974067LL) : (var_5))))));
                var_27 = ((/* implicit */unsigned char) ((_Bool) ((long long int) var_4)));
            }
            for (short i_10 = 0; i_10 < 15; i_10 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_11 = 0; i_11 < 15; i_11 += 2) 
                {
                    arr_37 [i_2] [13LL] [i_10] [i_11] = ((/* implicit */long long int) (unsigned char)168);
                    var_28 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (8500188492413179263LL))));
                }
                var_29 = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_2] [i_2])) * (((/* implicit */int) arr_34 [i_2] [i_6] [i_6] [i_10] [i_10] [i_2]))));
            }
            arr_38 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) ((var_6) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))) : (((-2401408772882783727LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16)))))));
        }
        /* vectorizable */
        for (long long int i_12 = 0; i_12 < 15; i_12 += 2) /* same iter space */
        {
            arr_41 [14ULL] [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_2] [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) var_8))));
            arr_42 [i_12] [i_2] = ((/* implicit */unsigned short) ((_Bool) var_5));
            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) 7452836028139841543LL))));
        }
    }
    var_31 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (unsigned short)31075))))))));
}
