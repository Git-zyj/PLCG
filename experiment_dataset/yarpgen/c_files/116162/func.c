/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116162
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_18 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32764)) ? (2147483647) : (((/* implicit */int) var_17))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (!(arr_1 [i_0])))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            arr_5 [i_1] = ((/* implicit */long long int) ((int) arr_2 [i_0] [i_1]));
            var_19 = ((/* implicit */short) arr_0 [i_1 + 2] [i_1 + 3]);
            /* LoopNest 2 */
            for (unsigned int i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                for (long long int i_3 = 4; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_20 = ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_0] [i_0]))));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((short) arr_10 [i_0] [i_1] [i_2] [i_3 + 2] [i_3 - 3] [i_0]))), ((~(((/* implicit */int) (short)32763))))))) ? (((/* implicit */unsigned long long int) var_8)) : (((((/* implicit */_Bool) (short)-32764)) ? ((~(1038729541279830636ULL))) : (var_4)))));
                    }
                } 
            } 
            var_22 += ((/* implicit */signed char) 17408014532429720970ULL);
        }
        var_23 = ((/* implicit */long long int) max((((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) <= (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_8 [i_4] [i_4] [i_4] [i_4])))) ? (((unsigned long long int) min(((_Bool)1), (arr_6 [i_4] [12] [i_4])))) : (((/* implicit */unsigned long long int) (~(arr_8 [i_4] [i_4] [i_4] [i_4]))))));
        arr_13 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) - (min((17408014532429720979ULL), (1038729541279830646ULL)))));
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_8) : (((/* implicit */int) arr_4 [i_4]))))) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) (_Bool)1))))))))))));
    }
    for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_5] [i_5])) ? (((((/* implicit */int) (unsigned short)16376)) << (((1038729541279830648ULL) - (1038729541279830644ULL))))) : (((/* implicit */int) arr_14 [i_5] [i_5]))))) ? (((/* implicit */int) max((min((((/* implicit */unsigned short) var_5)), (arr_14 [i_5] [i_5]))), (arr_14 [i_5] [i_5])))) : (((/* implicit */int) (signed char)81))));
        arr_16 [i_5] = ((/* implicit */signed char) 17408014532429720989ULL);
        var_27 = ((/* implicit */unsigned long long int) (short)0);
    }
    var_28 = ((/* implicit */_Bool) (unsigned char)255);
}
