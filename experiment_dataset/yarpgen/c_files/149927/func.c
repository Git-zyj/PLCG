/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149927
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_14 -= ((unsigned long long int) 16148409479784744172ULL);
        var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) var_10)))) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_16 = ((/* implicit */short) var_13);
        var_17 = ((/* implicit */signed char) max((max((arr_3 [i_1]), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) ((_Bool) ((short) var_1))))));
        var_18 = arr_3 [i_1];
    }
    /* LoopSeq 1 */
    for (int i_2 = 1; i_2 < 7; i_2 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min((((/* implicit */int) (short)0)), (235678800))))));
            var_20 = ((/* implicit */_Bool) max((arr_8 [i_2 + 1]), (((/* implicit */unsigned long long int) arr_5 [i_2 + 3] [i_2]))));
        }
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            var_21 = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) (unsigned short)55355)), (max((((/* implicit */unsigned long long int) var_8)), (16148409479784744189ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) (short)17745)) : (((/* implicit */int) arr_11 [i_2]))))) ? (((/* implicit */int) arr_9 [i_4])) : (((/* implicit */int) ((((/* implicit */_Bool) 1862894138713695428LL)) || (((/* implicit */_Bool) arr_2 [i_2] [i_2]))))))))));
            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((signed char) min((max((arr_1 [i_2]), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) var_2))))))));
            var_23 = ((/* implicit */long long int) arr_6 [i_4]);
            var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) 2298334593924807451ULL))))), ((short)8))))));
        }
        for (short i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            var_25 = ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_2 - 1] [i_2 + 2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 5741316020093517492LL)) ? (-1862894138713695428LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) : (max((((/* implicit */unsigned long long int) arr_4 [i_2 - 1])), (arr_8 [i_2 + 2]))));
            /* LoopSeq 1 */
            for (short i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) arr_3 [i_2 + 2])))));
                var_27 = max((((/* implicit */unsigned long long int) ((unsigned char) arr_4 [i_2]))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_14 [i_2 + 1] [i_2 + 3]))));
                var_28 = ((/* implicit */_Bool) var_11);
                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_18 [i_2 + 1] [i_2] [i_2]), (arr_18 [i_2 + 1] [i_2] [i_2 + 2])))) ? (arr_8 [i_2 + 2]) : (var_10)));
            }
            var_30 = ((/* implicit */_Bool) (-(-1938666707)));
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    {
                        var_31 = ((/* implicit */_Bool) min((((/* implicit */short) ((signed char) arr_18 [(short)5] [i_7] [i_8]))), (max((arr_18 [i_2] [i_7] [i_7]), (((/* implicit */short) var_1))))));
                        var_32 += ((/* implicit */short) min((((((/* implicit */_Bool) arr_12 [i_2 + 2] [i_2 + 2])) ? (((/* implicit */int) arr_12 [i_2 - 1] [i_7])) : (((/* implicit */int) arr_12 [i_2 + 1] [i_2 + 1])))), (((/* implicit */int) arr_12 [i_2 + 2] [i_5]))));
                    }
                } 
            } 
        }
        var_33 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((short) arr_15 [i_2] [i_2])))));
        var_34 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(max((9223372036854775807LL), (((/* implicit */long long int) var_11))))))), (arr_16 [i_2] [i_2])));
    }
    var_35 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))));
    var_36 = ((/* implicit */unsigned char) ((((2298334593924807444ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)30228), (((/* implicit */unsigned short) var_9)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) max((var_12), (((/* implicit */unsigned long long int) (unsigned short)8268))))))) : (((long long int) var_5))));
}
