/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123904
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
    var_16 = ((/* implicit */unsigned short) var_15);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */long long int) var_13);
                        arr_9 [i_0] [i_0] [10] [i_1] [i_2] [i_3] = ((/* implicit */short) min((((int) (signed char)-17)), (((/* implicit */int) (((-(((/* implicit */int) var_14)))) >= (min((((/* implicit */int) var_1)), (var_2))))))));
                        arr_10 [i_3] [i_0] [i_0] [(short)7] = ((/* implicit */long long int) ((short) arr_3 [1LL]));
                        arr_11 [(unsigned char)2] [i_1] [20] [20] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_4 [i_0] [(unsigned short)11] [i_0]))) ? (((((/* implicit */_Bool) ((short) var_8))) ? (((/* implicit */int) (unsigned short)56181)) : (((/* implicit */int) ((short) var_1))))) : ((-(((((/* implicit */int) arr_2 [i_0] [i_0])) >> (((((/* implicit */int) (unsigned short)56181)) - (56153)))))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? ((~(((/* implicit */int) arr_2 [i_0] [i_0])))) : (min((8191), (-2110984706))))), (((/* implicit */int) var_3))));
        var_19 = ((/* implicit */long long int) (~(min(((+(((/* implicit */int) arr_1 [20LL] [i_0])))), (((int) arr_3 [i_0]))))));
        var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (min((var_13), (arr_4 [(unsigned short)7] [i_0] [i_0]))))))));
        var_21 = ((/* implicit */long long int) min((arr_0 [i_0] [i_0]), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)56202)))))));
    }
    for (long long int i_4 = 0; i_4 < 22; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            var_22 = max((arr_1 [i_4] [i_5]), (arr_1 [i_4] [i_4]));
            var_23 += ((/* implicit */signed char) arr_1 [(short)21] [i_4]);
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */unsigned long long int) (signed char)-113)), (18ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_7), (((/* implicit */unsigned char) var_8)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-126))) % (((long long int) arr_7 [i_4] [i_4] [i_4])))))));
            var_25 = ((/* implicit */long long int) 8ULL);
            arr_18 [(short)4] [i_5] [i_4] = min((var_11), (min((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4] [i_4] [i_5]))) != (30ULL)))), (min((var_14), (arr_1 [i_4] [i_4]))))));
        }
        var_26 ^= ((/* implicit */int) min((((/* implicit */long long int) 503316480)), (arr_3 [i_4])));
    }
}
