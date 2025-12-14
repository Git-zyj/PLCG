/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118835
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
    var_12 *= ((((((/* implicit */_Bool) var_4)) ? (0ULL) : (min((0ULL), (((/* implicit */unsigned long long int) (unsigned char)0)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
    var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_6))));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (max((arr_0 [i_0 - 2]), (((/* implicit */unsigned long long int) arr_2 [i_0 - 1])))) : (min((18446744073709551600ULL), (((/* implicit */unsigned long long int) arr_2 [i_0 - 2]))))));
        arr_3 [i_0] = ((/* implicit */short) ((arr_2 [i_0 - 2]) ? (((/* implicit */int) arr_2 [i_0 - 2])) : ((+(((/* implicit */int) arr_1 [i_0 - 2]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) 2612738215U)) + (6652504798457418865ULL)))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 3; i_3 < 18; i_3 += 3) 
            {
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17833640352607878268ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (11732118040518838797ULL)))) || (((/* implicit */_Bool) (unsigned short)10366)))))));
                arr_16 [i_3] [i_1 + 1] = (!(((/* implicit */_Bool) arr_14 [i_3 + 2] [i_3 - 2] [i_3 - 1] [14])));
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((unsigned long long int) var_2)))));
                arr_17 [i_1 + 2] [i_2] [i_2] [i_3 - 1] = ((/* implicit */short) (~(((/* implicit */int) arr_11 [20LL] [i_3 - 3]))));
            }
            for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (long long int i_6 = 3; i_6 < 19; i_6 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1 - 1])) ? (((/* implicit */int) arr_5 [i_1 + 3])) : (((/* implicit */int) arr_10 [i_1 + 2])))))));
                            arr_27 [(short)7] [i_4] [i_4 - 2] [i_5] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8219550385013494054ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)63))))) ? (((((/* implicit */_Bool) (unsigned short)12771)) ? (var_2) : (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_24 [i_1] [i_1 - 1] [i_1] [i_1] [i_1])));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_1 + 1] [i_4 + 2] [i_4 + 2])) / (((/* implicit */int) arr_9 [i_1 + 3] [i_4 - 1] [i_4 + 2]))));
                    arr_31 [i_4] [i_2] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)54103)) : (((/* implicit */int) arr_10 [i_4 - 1]))));
                    arr_32 [i_4] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_25 [i_4] [i_2] [i_4] [i_7] [(_Bool)1])))) ? (((8336820946971831632ULL) / (5681497788931554110ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_19 [i_1] [i_4] [i_1] [i_1])) != (537930970))))));
                }
                var_19 = ((/* implicit */unsigned int) arr_12 [i_1 + 3] [(_Bool)1] [(_Bool)1]);
                arr_33 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_4 + 1] [i_4] [i_4] [i_1])) ? (((((/* implicit */_Bool) 17833640352607878268ULL)) ? (613103721101673373ULL) : (((/* implicit */unsigned long long int) 456033703U)))) : (((/* implicit */unsigned long long int) (+(arr_28 [13ULL]))))));
            }
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (0ULL)));
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (11732118040518838788ULL)));
        }
        for (int i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) 6652504798457418864ULL))));
            arr_38 [i_8] = ((/* implicit */short) arr_12 [i_1] [16LL] [i_1]);
        }
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) & (613103721101673339ULL))))));
    }
    for (short i_9 = 0; i_9 < 11; i_9 += 3) 
    {
        var_24 += ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)29859))));
        arr_42 [i_9] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_5)), (arr_30 [i_9] [i_9] [i_9] [i_9])))), (min((17892020515039567480ULL), (11732118040518838807ULL)))));
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) max(((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [4ULL] [i_9]))) ^ (957568863911262121ULL))))), (((/* implicit */unsigned long long int) arr_19 [8LL] [(short)18] [(unsigned short)6] [8LL])))))));
    }
}
