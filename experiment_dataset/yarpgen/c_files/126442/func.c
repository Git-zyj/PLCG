/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126442
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
    var_13 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned int) var_8))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_10) ? (var_9) : (((/* implicit */int) arr_1 [i_0]))))) ? (arr_0 [i_0] [i_0]) : (((int) 872248924))))) == (var_0)));
        arr_3 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 2994036760U))) ? (((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) var_6)) : (arr_0 [i_0] [i_0]))) : (((/* implicit */int) arr_1 [i_0])))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) max((max((arr_1 [i_0]), (arr_1 [i_0]))), (max((arr_1 [i_0]), (arr_1 [i_0])))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */short) max((((((/* implicit */_Bool) -872248920)) ? (12239366902629891385ULL) : (((/* implicit */unsigned long long int) -872248931)))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_1])) ? (var_9) : (((/* implicit */int) var_8)))) / (arr_0 [i_1] [(_Bool)1]))))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            for (signed char i_3 = 1; i_3 < 17; i_3 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) max((var_7), ((~(((/* implicit */int) arr_9 [(unsigned char)1] [i_3 + 1]))))));
                    var_16 = (+(var_1));
                    arr_12 [i_3] [i_3] [i_3 - 1] = ((/* implicit */unsigned short) var_3);
                    var_17 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (+(arr_0 [i_1] [i_2])))), (max((((/* implicit */unsigned int) 872248908)), (4169123158U)))));
                }
            } 
        } 
        arr_13 [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max((var_3), (((/* implicit */unsigned char) var_5))))) : (var_1))), (max((arr_0 [i_1] [(signed char)16]), (((/* implicit */int) arr_1 [i_1]))))));
    }
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((int) (~((~(((/* implicit */int) var_12))))))))));
}
