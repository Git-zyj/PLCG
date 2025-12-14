/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172069
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
    var_12 = ((/* implicit */_Bool) var_5);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_13 ^= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) var_5)) : (-1973155767739824364LL))), (max((8227532131416062716LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) 1973155767739824386LL)))))))));
            var_14 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)-6620)), (var_4)))) ? (((((/* implicit */_Bool) 266867908U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0])))))), (4875105829982302658ULL));
        }
        arr_8 [i_0] = ((/* implicit */short) ((arr_5 [i_0]) ? (((/* implicit */long long int) 2071609209)) : ((+(((1973155767739824364LL) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_11 [8U] [i_0] [i_3])) - (((/* implicit */int) arr_11 [i_3] [i_0] [i_0])))))));
                    arr_15 [i_0] [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) arr_4 [4U])) : (((/* implicit */int) arr_4 [i_2])))), ((+(((/* implicit */int) arr_4 [i_0]))))));
                }
            } 
        } 
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-32106))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 12293218157563324612ULL)))))) : (4032U)));
    }
    for (unsigned int i_4 = 3; i_4 < 8; i_4 += 3) 
    {
        arr_18 [i_4] [8] = ((/* implicit */long long int) ((((_Bool) arr_14 [i_4 - 2])) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (3447588872U))) : (((((/* implicit */_Bool) arr_3 [i_4 + 2] [i_4 - 2])) ? (((/* implicit */unsigned int) arr_2 [(_Bool)1])) : (847378444U)))));
        arr_19 [i_4 - 3] = ((/* implicit */int) (unsigned char)221);
    }
}
