/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188027
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)24040))))), (arr_8 [i_2 + 1] [i_2] [i_2])))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_14 [i_0] [(_Bool)0] [i_3] [(short)7] [i_3] = ((/* implicit */int) arr_8 [i_0] [i_1] [i_2]);
                        arr_15 [i_3] [i_2] [i_1 + 3] [i_0] [i_3] = ((/* implicit */_Bool) (unsigned short)41495);
                        arr_16 [i_3] [i_2] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_1 + 1])) ? (((/* implicit */int) max(((unsigned short)24040), (((/* implicit */unsigned short) arr_4 [i_0] [i_1 + 2] [i_3]))))) : (min((((/* implicit */int) (short)13853)), (arr_5 [i_2 - 1] [i_1])))))));
                    }
                    for (unsigned short i_4 = 1; i_4 < 10; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned short) (~(((arr_12 [i_0] [i_1 - 1] [i_1 + 3] [i_1 + 2]) << (((((/* implicit */int) var_1)) - (29460)))))));
                        arr_19 [i_4 + 1] [i_2] [(signed char)2] [i_0] = ((/* implicit */unsigned char) var_15);
                        var_20 = ((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) (signed char)29)))));
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) max(((-((-(arr_8 [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */short) arr_18 [i_0] [(unsigned short)8]);
                        arr_23 [i_1] = ((/* implicit */_Bool) ((unsigned short) ((unsigned char) (short)13853)));
                        arr_24 [i_0] [i_1] [i_2 + 1] [i_2] [i_5] [i_5] = ((/* implicit */unsigned short) (short)-8056);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned short) ((short) (_Bool)1));
                            var_24 = ((/* implicit */signed char) (~((~(((/* implicit */int) var_4))))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_1 - 2] [i_1 - 2])) >= (((/* implicit */int) arr_17 [i_1 - 1] [i_6 - 1] [i_6 - 1] [i_6]))));
                        }
                    }
                    arr_28 [i_2 - 1] = ((/* implicit */short) (((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_0]))))))) ^ ((-(((/* implicit */int) arr_1 [i_1 + 1]))))));
                    /* LoopNest 2 */
                    for (short i_7 = 1; i_7 < 10; i_7 += 4) 
                    {
                        for (short i_8 = 0; i_8 < 12; i_8 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_7 + 2] [i_1 - 2])) ? (((/* implicit */int) arr_3 [i_7 + 1] [i_1 + 2])) : (((/* implicit */int) arr_3 [i_7 + 2] [i_1 + 1]))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(unsigned char)7] [i_7] [(unsigned short)8] [i_1]))) ^ (arr_30 [i_0]))) / (12673031918312644543ULL))))))));
                                var_27 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) var_8))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_25 [i_2] [i_7 - 1] [i_7 - 1] [i_7 + 2] [i_8])))))));
                                var_28 = ((/* implicit */unsigned short) arr_30 [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */short) 12673031918312644543ULL);
    var_30 |= (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) max(((unsigned short)11501), (((/* implicit */unsigned short) (short)31622))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)44960)) || (((/* implicit */_Bool) (signed char)-102)))))))));
    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((unsigned short) var_18)))));
    var_32 = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
}
