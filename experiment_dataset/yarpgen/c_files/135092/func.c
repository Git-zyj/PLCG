/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135092
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
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        {
                            arr_14 [i_4] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) 4294967295U)) & (519918390607053984ULL)))));
                            arr_15 [i_0] [i_4] [i_1] [i_2] [2ULL] = var_7;
                        }
                    } 
                } 
            } 
            var_10 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : (arr_10 [i_1] [i_1] [i_1] [i_0]))));
        }
        arr_16 [i_0] &= ((/* implicit */short) min(((-(((/* implicit */int) arr_6 [(_Bool)1] [i_0] [i_0] [i_0])))), (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
        var_11 = (!(((/* implicit */_Bool) ((((min((((/* implicit */long long int) arr_12 [i_0] [4LL] [i_0] [i_0])), (arr_5 [i_0]))) + (9223372036854775807LL))) << (((min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])), (17926825683102497631ULL))) - (17926825683102497631ULL)))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_5])) - (((/* implicit */int) arr_19 [i_5])))))))), ((-(((/* implicit */int) var_1))))));
        var_13 = ((/* implicit */unsigned short) min(((+((+(((/* implicit */int) var_8)))))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_5] [i_5]))))))))));
    }
    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((min((17926825683102497642ULL), (((/* implicit */unsigned long long int) (short)32767)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26362))))))));
}
