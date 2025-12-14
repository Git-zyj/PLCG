/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188984
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
    for (long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_14 = ((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) ((arr_2 [9ULL]) == (arr_2 [10ULL]))))) | (arr_2 [i_0 + 1]))), (((/* implicit */long long int) ((int) arr_0 [i_0 - 1] [i_0 + 1])))));
        arr_3 [i_0] = ((((/* implicit */_Bool) (-((~(arr_2 [i_0])))))) ? (max((((/* implicit */long long int) arr_1 [i_0 - 1] [i_0 - 1])), (((long long int) arr_2 [(unsigned short)6])))) : (((/* implicit */long long int) (+(var_6)))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */long long int) 1222090548)), (2643353973790068608LL))) == (((((/* implicit */_Bool) arr_0 [i_0] [9])) ? (((/* implicit */long long int) var_0)) : (-1115281679971116337LL))))))) >= (((((/* implicit */_Bool) (~(arr_0 [i_0] [i_0])))) ? (((/* implicit */long long int) 16777088)) : (arr_2 [i_0 + 4])))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_16 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_6 [i_1])) ? (min((((/* implicit */long long int) arr_6 [i_1])), (arr_4 [i_1] [i_1]))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (4862155079959481913LL) : (((/* implicit */long long int) arr_5 [i_1] [i_1])))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) | (((((/* implicit */_Bool) 4862155079959481912LL)) ? (3098610554U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)21586))))))))));
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (+(((int) ((-1115281679971116337LL) >= (4611686018427387904LL)))))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            arr_9 [i_1] = ((/* implicit */unsigned long long int) (((+(((((/* implicit */_Bool) 2147483632U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) : (12496500388640780882ULL))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) arr_5 [i_1] [i_1])) == (var_4)))) << ((((+(arr_4 [i_1] [i_1]))) - (9206380423174736358LL))))))));
            var_18 = ((/* implicit */unsigned int) max((arr_7 [i_1] [i_2] [i_1]), (((((/* implicit */_Bool) (-(-61523018)))) ? (((/* implicit */long long int) ((0U) >> (((-4862155079959481913LL) + (4862155079959481917LL)))))) : (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_3))))))));
        }
        var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)19233)) << (((((/* implicit */int) (short)4825)) - (4823)))));
    }
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(var_7))))));
    var_21 = ((/* implicit */int) (+(var_5)));
}
