/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12775
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
    var_17 -= ((/* implicit */unsigned short) var_12);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((int) (unsigned short)19697))) : (((((/* implicit */_Bool) var_6)) ? (arr_0 [i_0]) : (arr_0 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)19697), ((unsigned short)704))))))))) : (((((/* implicit */_Bool) min(((unsigned short)45850), (((/* implicit */unsigned short) arr_1 [i_0]))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) (unsigned short)45839))))))))));
        var_19 = (!(((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) (unsigned short)0)))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (short i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) ((arr_10 [i_0] [i_0]) ? ((-(((/* implicit */int) arr_10 [17LL] [i_0])))) : (((/* implicit */int) ((signed char) arr_10 [15LL] [i_0])))));
                            arr_15 [i_0] [i_0] [i_0] [(_Bool)1] [i_1] &= ((/* implicit */long long int) ((((/* implicit */int) ((-1677661803) == (((/* implicit */int) arr_11 [i_1] [i_2 + 1] [i_2 + 1]))))) / ((-(((/* implicit */int) arr_11 [i_1] [i_2 + 2] [i_2 - 1]))))));
                        }
                    } 
                } 
            } 
            arr_16 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((arr_0 [i_0]) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_0] [i_0] [i_0]))))))))) ? (((/* implicit */long long int) arr_13 [(unsigned short)4] [i_0] [i_0] [i_0])) : ((((+(-8195110584972171907LL))) % (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_12 [i_0] [i_0] [i_0] [i_0])))))));
        }
        arr_17 [i_0] [5U] = 1677661802;
    }
    for (unsigned short i_5 = 3; i_5 < 22; i_5 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (short)0))))));
        var_22 = (!(((/* implicit */_Bool) (unsigned short)45846)));
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) var_2))), ((~(1677661802)))))) ? (((arr_19 [i_5 - 3] [i_5]) % ((~(arr_18 [i_5] [i_5]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19706)))));
    }
    for (unsigned short i_6 = 3; i_6 < 22; i_6 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */_Bool) var_9);
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((var_10) != (((/* implicit */long long int) arr_18 [16ULL] [i_6])))))));
    }
    var_26 = ((/* implicit */_Bool) var_15);
}
