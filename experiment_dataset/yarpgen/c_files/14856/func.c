/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14856
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
    var_16 = ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((1120188244) > (((/* implicit */int) (unsigned short)2))))), (min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)12)))))) ? ((-((+(((/* implicit */int) (_Bool)1)))))) : ((+(((/* implicit */int) var_14)))));
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (var_7)))) ? (((var_6) - (var_4))) : ((+(((/* implicit */int) var_0)))))), (min((((((/* implicit */int) var_12)) >> (((var_15) + (527064936))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)123))));
        var_19 = ((/* implicit */_Bool) ((short) min((((/* implicit */unsigned short) (unsigned char)165)), (var_0))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 4 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            var_20 = ((/* implicit */signed char) min(((+(max((((/* implicit */int) arr_2 [i_2])), (arr_0 [i_1 - 1]))))), (min((var_2), (((/* implicit */int) arr_6 [i_2 + 1]))))));
            arr_7 [i_1] [i_1] [i_2 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1] [i_2 + 1])) ? (((int) arr_2 [i_1 - 1])) : ((~(var_2)))));
            arr_8 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */int) max(((short)26087), (((/* implicit */short) var_14))))), (-983383760)));
            var_21 = ((/* implicit */int) min((min((18446744073709551598ULL), (((/* implicit */unsigned long long int) arr_2 [i_1 - 1])))), (((/* implicit */unsigned long long int) ((var_3) + (((/* implicit */int) arr_2 [i_1 - 1])))))));
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
        {
            arr_13 [i_1] [i_3] [i_3] = (~(var_5));
            var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
        }
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_5 = 1; i_5 < 10; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    {
                        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) -67266935))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_1] [i_4] [i_1] [i_5 + 2] [i_5 + 2])) ? (((/* implicit */unsigned long long int) var_5)) : (arr_3 [i_1] [i_4])));
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))));
            arr_22 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_14 [i_1] [i_1 - 1]))));
            arr_23 [(unsigned char)11] [i_4] [i_1] = ((/* implicit */short) (+(var_6)));
        }
        for (int i_7 = 1; i_7 < 9; i_7 += 1) 
        {
            arr_26 [i_1] = ((/* implicit */unsigned char) min(((short)21749), ((short)5612)));
            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) min((((int) max((var_2), (((/* implicit */int) (short)-31889))))), (((((/* implicit */_Bool) (-(arr_9 [i_1 - 1] [(_Bool)1] [6ULL])))) ? (((1526942982) / (((/* implicit */int) var_0)))) : (((/* implicit */int) max(((short)8128), (((/* implicit */short) (signed char)-79))))))))))));
        }
        arr_27 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((max((var_7), (((/* implicit */unsigned int) 1073741824)))), (((/* implicit */unsigned int) max((1073741809), (var_15))))))) || (((/* implicit */_Bool) var_3))));
        arr_28 [i_1] = ((/* implicit */unsigned long long int) var_7);
        var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_1 - 1])) & (((/* implicit */int) var_13)))))));
        var_28 = ((/* implicit */signed char) ((min((((/* implicit */int) (short)-31899)), (max((((/* implicit */int) (short)-21739)), (1120188250))))) != (min(((~(((/* implicit */int) (short)1695)))), (((/* implicit */int) arr_19 [i_1] [i_1]))))));
    }
}
