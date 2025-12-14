/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176539
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
    for (unsigned long long int i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        var_19 = ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (arr_2 [i_0 - 1])))) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((13688683944671003805ULL), (arr_1 [13ULL] [i_1])))) ? (((/* implicit */int) (!(arr_4 [4ULL] [i_0] [i_1])))) : (((/* implicit */int) (_Bool)1)))) >> ((((~(max((arr_1 [i_0] [i_1]), (var_11))))) - (14297113039254182158ULL))))))));
            var_21 = ((/* implicit */_Bool) (~(max((var_6), (var_9)))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_8 [i_0] [i_0] [i_0 - 2] = (~(4485310420815072925ULL));
            var_22 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0])) * (((/* implicit */int) var_2))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) arr_7 [i_0])) << (((var_7) - (16728472146008127900ULL))))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4073976709584523011ULL)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [14ULL] [14ULL] [i_0])))))) && (((/* implicit */_Bool) var_3)))))));
            var_23 = ((/* implicit */_Bool) 18446744073709551591ULL);
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_24 = 13961433652894478685ULL;
                var_25 = ((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) ((13961433652894478690ULL) != (18446744073709551595ULL))))));
                var_26 = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) ? (18446744073709551615ULL) : (9223372036854775808ULL));
                arr_12 [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_2])) >> (((arr_11 [i_0 - 2] [i_2]) / (arr_11 [i_0 - 2] [i_0 - 4])))));
            }
            /* vectorizable */
            for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                arr_16 [i_4] [i_4] = 13961433652894478685ULL;
                var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_0 + 2] [i_4]))));
            }
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 3; i_6 < 21; i_6 += 3) 
            {
                arr_23 [i_0 - 2] [i_5] [(_Bool)1] [i_6] = var_10;
                arr_24 [i_0] [i_0] [7ULL] [i_6 - 1] = var_13;
            }
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    {
                        var_28 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!((_Bool)1))))));
                        var_29 = ((var_13) ? (6518299879303500079ULL) : (4257770494560449307ULL));
                    }
                } 
            } 
            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_10 [i_0]) : (18446744073709551588ULL)));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 3) 
            {
                for (unsigned long long int i_11 = 1; i_11 < 21; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        {
                            arr_40 [i_12] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (72057594037927934ULL))) & (arr_1 [i_0] [0ULL])));
                            var_31 = ((((((/* implicit */_Bool) ((var_9) & (4485310420815072930ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6217724186899334704ULL)) ? (((/* implicit */int) arr_29 [i_10] [i_11] [i_12])) : (((/* implicit */int) arr_27 [i_12] [i_0] [i_0]))))) : (((unsigned long long int) (_Bool)1)))) << (((var_11) - (2171262853085378053ULL))));
                            var_32 = ((6597069766656ULL) / (((((/* implicit */_Bool) arr_32 [i_0 + 1] [i_0 - 1] [i_11 + 1])) ? ((~(9223371487098961920ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_18 [i_12]) < (var_0))))))));
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */unsigned long long int) ((_Bool) (_Bool)1));
        }
        arr_41 [i_0] = ((/* implicit */_Bool) (~(72057594037927936ULL)));
    }
    var_34 = ((/* implicit */_Bool) var_1);
    var_35 += (~(var_8));
    var_36 = ((/* implicit */unsigned long long int) ((((11311486290520761445ULL) >> (((((18446744073709551615ULL) & (13489445660799416216ULL))) - (13489445660799416171ULL))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) > (18446744073709551610ULL)))))));
}
