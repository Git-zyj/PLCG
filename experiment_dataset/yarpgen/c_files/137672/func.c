/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137672
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
    var_13 = ((/* implicit */unsigned short) ((long long int) ((unsigned char) var_11)));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) var_11);
        arr_2 [(unsigned short)5] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned short) (unsigned char)119));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_15 = ((/* implicit */long long int) (short)12897);
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) arr_6 [i_0] [i_3]);
                        arr_14 [11U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (unsigned short)54220))))))));
                        arr_15 [(unsigned char)11] [12] [(_Bool)1] = ((/* implicit */_Bool) 9223372036854775807LL);
                    }
                } 
            } 
            var_17 = ((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)99)) - (((/* implicit */int) arr_5 [i_0]))))));
        }
    }
    for (short i_4 = 1; i_4 < 12; i_4 += 3) /* same iter space */
    {
        arr_20 [i_4] = ((/* implicit */unsigned int) ((int) min((3), (((/* implicit */int) var_11)))));
        arr_21 [i_4 - 1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_4 - 1])))))));
    }
    for (short i_5 = 1; i_5 < 12; i_5 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            var_18 = ((/* implicit */unsigned short) var_11);
            arr_26 [i_6] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3471753896591889431ULL)) ? (arr_24 [i_5 - 1] [i_5] [i_6]) : (((arr_24 [i_6] [i_5] [i_6]) << (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) ((signed char) var_8))) : (((/* implicit */int) min((arr_6 [i_5] [i_5]), (((/* implicit */short) arr_13 [i_5] [i_5] [10] [(unsigned char)4])))))));
            arr_27 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (unsigned char)99))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) var_2)) + (8823070397364488967ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_5 + 1])))))));
        }
        arr_28 [i_5] [i_5] = (short)10639;
    }
    var_19 = var_0;
}
