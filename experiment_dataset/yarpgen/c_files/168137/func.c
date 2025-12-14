/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168137
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
    for (int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [i_2] [i_0 + 2] [i_2] = ((/* implicit */unsigned short) 795356587);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_17 [i_1] [i_2] [i_3] = ((/* implicit */int) ((min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_15 [i_2 - 1] [i_2 - 1] [i_2 - 1] [11] [i_0]))))), ((~(var_14))))) ^ (((/* implicit */unsigned int) (((((-(((/* implicit */int) (signed char)107)))) + (2147483647))) << (((arr_12 [i_2 - 1]) - (2214877525768068872LL))))))));
                                arr_18 [i_0 + 1] [i_3] [i_0 + 1] [i_0 + 1] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)12756)) <= (((/* implicit */int) (unsigned char)170))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) (-(((/* implicit */int) (_Bool)1))))))));
                        var_17 += ((/* implicit */signed char) max(((unsigned char)66), ((unsigned char)189)));
                    }
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_2 [i_2]))) - (((/* implicit */int) (_Bool)1))));
                        var_19 -= ((/* implicit */_Bool) ((unsigned short) arr_20 [i_0 + 2] [(short)5]));
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            var_20 = ((/* implicit */signed char) (short)-1);
                            var_21 = ((/* implicit */signed char) (+(2023218076)));
                        }
                        arr_27 [i_0 + 1] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                        arr_28 [i_6] [i_6] [(signed char)8] [i_6] [9ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (arr_13 [i_6] [i_2 + 1] [i_2 + 1])))) ? (((/* implicit */int) ((arr_9 [i_2 - 1] [i_2 + 1] [i_2] [i_2]) <= (arr_9 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65351)))))));
                    }
                    for (short i_8 = 3; i_8 < 9; i_8 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned short) max((((/* implicit */int) ((arr_20 [i_2 + 1] [i_0 + 2]) >= (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (var_7))))))), (max(((~(((/* implicit */int) var_13)))), (((((/* implicit */int) var_5)) | (((/* implicit */int) arr_23 [i_2] [i_1] [i_2 + 1] [i_8]))))))));
                        var_23 = (!(((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) (~(((/* implicit */int) arr_23 [(unsigned char)7] [(unsigned char)7] [i_2] [i_2 + 1])))))))));
                        var_24 = ((/* implicit */unsigned short) arr_8 [i_0]);
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */_Bool) min((var_25), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((-450852339) + (2147483647))) << (((((/* implicit */int) (unsigned char)235)) - (235)))))) ? (((/* implicit */int) (unsigned char)255)) : ((-(((/* implicit */int) (_Bool)1))))))) && (((/* implicit */_Bool) var_6))))));
    var_26 = ((/* implicit */unsigned long long int) var_4);
    var_27 = ((/* implicit */short) ((max((((((/* implicit */_Bool) (unsigned short)43468)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) (unsigned char)156)))))) == (1226772580)));
}
