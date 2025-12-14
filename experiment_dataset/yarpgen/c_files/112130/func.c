/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112130
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
    var_13 = ((/* implicit */unsigned long long int) var_12);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_4 [i_0] [3ULL])) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1]))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_3 [i_0]), (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned int) (_Bool)1))))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) max((var_14), (max(((-(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))), (var_7)))));
    /* LoopSeq 4 */
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) max((((unsigned short) arr_9 [19LL] [i_2])), (((unsigned short) var_1))))) : ((~(((/* implicit */int) arr_9 [i_2] [i_2]))))));
        arr_12 [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)1738)), (((unsigned short) arr_7 [i_2] [i_2])))))));
        arr_13 [i_2] = ((/* implicit */unsigned short) arr_8 [i_2] [i_2]);
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_4))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((var_0) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) ? ((~(((/* implicit */int) ((unsigned short) var_8))))) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_3))))));
    }
    for (unsigned long long int i_3 = 4; i_3 < 15; i_3 += 3) 
    {
        arr_16 [i_3] [i_3 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((max((-1073741824), (((/* implicit */int) (unsigned short)44344)))) == (((((/* implicit */int) (unsigned short)48575)) | (((/* implicit */int) arr_8 [i_3] [(_Bool)1]))))))) << (((((/* implicit */int) (unsigned short)24168)) - (24153)))));
        arr_17 [i_3] = ((/* implicit */long long int) (unsigned short)16960);
    }
    for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 4) /* same iter space */
    {
        arr_21 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_19 [i_4]))) || (((/* implicit */_Bool) ((signed char) arr_20 [i_4] [i_4]))))));
        /* LoopSeq 1 */
        for (unsigned int i_5 = 1; i_5 < 10; i_5 += 2) 
        {
            arr_26 [i_5] = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) max((14101484386535415614ULL), (var_2))))))));
            /* LoopSeq 1 */
            for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) 0U))));
                var_18 *= ((/* implicit */unsigned short) ((_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18332))) / (16ULL))))));
            }
        }
        var_19 -= ((arr_8 [i_4 + 3] [i_4]) ? (arr_22 [i_4] [i_4] [(short)11]) : (((/* implicit */unsigned int) 0)));
        var_20 = ((/* implicit */unsigned int) min((var_20), ((-(max((var_12), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)38416)))))))))));
        arr_30 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((unsigned int) arr_25 [5] [i_4] [i_4 - 1]))) % (arr_15 [i_4] [i_4])));
    }
    for (unsigned long long int i_7 = 2; i_7 < 9; i_7 += 4) /* same iter space */
    {
        arr_34 [i_7 + 2] = ((/* implicit */_Bool) min(((-(((/* implicit */int) arr_24 [i_7 + 3] [6U] [i_7])))), ((-(((/* implicit */int) arr_23 [i_7 + 1]))))));
        var_21 = ((/* implicit */unsigned int) var_2);
    }
}
