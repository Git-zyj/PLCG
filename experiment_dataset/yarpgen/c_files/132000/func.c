/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132000
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (unsigned short i_3 = 3; i_3 < 19; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (-(arr_0 [i_1] [i_1])))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((arr_7 [i_4] [i_3] [i_2] [i_2] [i_0] [i_0]) == (arr_7 [i_2] [i_1] [i_2] [i_1] [i_2] [i_4])))))));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (var_0)))) || (((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_3] [i_3] [i_3] [i_2] [i_4]))));
                            var_20 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (arr_1 [(unsigned short)11])))) - (max((((/* implicit */long long int) (unsigned char)152)), (arr_10 [i_0] [(unsigned char)4] [i_2] [i_3 - 1] [i_4])))));
                            var_21 = ((/* implicit */signed char) ((unsigned int) (((_Bool)1) ? (arr_9 [i_0] [i_1] [i_2] [8LL] [i_3 - 2] [i_2] [i_4]) : (arr_7 [14LL] [i_3 - 1] [i_2] [i_1] [i_1] [i_0]))));
                            var_22 = ((/* implicit */_Bool) ((((arr_9 [7U] [i_2] [i_4] [i_4] [i_4] [i_2] [6U]) ^ (arr_9 [(unsigned short)12] [i_2] [(unsigned short)12] [i_4] [(unsigned short)18] [i_2] [i_3]))) & (max((arr_9 [i_3] [i_2] [i_4] [i_3 - 2] [i_3] [i_2] [i_3]), (arr_9 [i_4] [i_2] [i_4] [i_4] [i_4] [i_2] [16U])))));
                        }
                        var_23 = max((((((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_2] [2U] [i_2])) ? (-7318356320702985805LL) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) - (((((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_3 - 3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)137))) : (7318356320702985804LL))))), (((/* implicit */long long int) (((_Bool)1) && ((!(((/* implicit */_Bool) 7318356320702985804LL))))))));
                        var_24 -= var_4;
                        var_25 = ((/* implicit */unsigned char) ((signed char) (~(max((arr_10 [i_3 - 1] [i_2] [i_0] [i_2] [i_0]), (((/* implicit */long long int) var_6)))))));
                        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2150758102U)) ? (((/* implicit */int) (unsigned char)146)) : (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) (unsigned char)0)))));
    }
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */_Bool) ((unsigned char) var_9));
                            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((unsigned int) arr_3 [i_5])))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) 
                    {
                        for (long long int i_11 = 0; i_11 < 19; i_11 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_13))));
                                var_31 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [(unsigned char)8] [(unsigned char)8])) ? ((-(arr_24 [i_5] [i_10] [i_10]))) : (((((/* implicit */_Bool) arr_24 [i_9] [(unsigned char)17] [i_9])) ? (arr_5 [(_Bool)1] [0U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_5] [i_9] [i_9])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
