/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146667
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
    var_11 = ((/* implicit */signed char) (((-(((/* implicit */int) ((_Bool) var_8))))) == (((/* implicit */int) (_Bool)0))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) ((8789259894001987827LL) >= (max((((/* implicit */long long int) var_4)), (8789259894001987827LL))))))));
        var_14 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (var_0)))), (max(((+(1986773281162753115ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_0 [i_0]))))))));
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_5))));
    }
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) (short)14665);
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (short i_3 = 3; i_3 < 9; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    for (unsigned short i_5 = 1; i_5 < 11; i_5 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */short) ((max((var_4), (((/* implicit */int) arr_9 [i_3 + 2] [i_5 - 1] [i_5 - 1])))) + (min((-2050576411), (((/* implicit */int) arr_9 [i_3 + 2] [i_5 - 1] [i_5 + 1]))))));
                            var_18 = ((/* implicit */signed char) var_4);
                        }
                    } 
                } 
            } 
            var_19 = max(((-(((/* implicit */int) (short)1886)))), (arr_10 [i_1] [0ULL] [i_1] [0ULL] [4U]));
        }
        var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((arr_15 [i_1] [(unsigned short)8] [i_1] [i_1] [(unsigned short)10] [i_1] [i_1]), (arr_15 [i_1] [(_Bool)1] [(unsigned char)2] [i_1] [i_1] [(_Bool)1] [i_1])))), (2068794234U)));
    }
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        var_21 = var_7;
        var_22 += ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_18 [i_6])) ? (-804396487) : (((/* implicit */int) (short)11387)))), (((/* implicit */int) (unsigned short)0))));
        var_23 = var_2;
    }
    var_24 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (short)-11362))) << (((((unsigned int) ((((/* implicit */_Bool) (short)-28147)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))) - (40658U)))));
    var_25 ^= ((/* implicit */short) var_2);
}
