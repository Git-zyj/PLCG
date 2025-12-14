/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171570
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
    var_13 += ((((/* implicit */_Bool) (~(var_1)))) ? (16777215ULL) : (((/* implicit */unsigned long long int) var_6)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
                    {
                        var_14 = ((/* implicit */unsigned char) 884437659);
                        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) var_8))));
                        arr_10 [i_2] = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_3 [i_0 + 1] [i_0] [i_0])))) - ((+(arr_1 [i_0 + 2] [i_0 + 1])))));
                        arr_11 [i_2] [i_0] [(_Bool)1] [i_2] = ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) arr_3 [i_0 + 1] [i_0 - 1] [13]))))) ? (((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1] [5])) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_1] [i_2])) : (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 2] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 884437659))))));
                        var_16 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((var_0) >> (((/* implicit */int) (_Bool)1)))) | (max((var_6), (((/* implicit */int) (signed char)53))))))) < (arr_8 [i_0 - 1] [i_1] [i_2] [i_2])));
                    }
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
                    {
                        var_17 = ((/* implicit */_Bool) max((((/* implicit */int) ((short) min((var_3), (((/* implicit */unsigned long long int) (signed char)-127)))))), (884437659)));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 20; i_5 += 3) 
                        {
                            arr_20 [i_2] [i_1] [(unsigned char)3] [i_4] [i_5] [i_4] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)208))));
                            arr_21 [i_2] [i_2] [i_4] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_5 - 1] [i_1] [i_0 + 2] [i_4]))));
                        }
                    }
                    for (long long int i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
                    {
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) max((var_1), (((/* implicit */unsigned long long int) -90716848)))))) ? (min((((/* implicit */unsigned long long int) -1147126077568634756LL)), (min((10838325097295632416ULL), (((/* implicit */unsigned long long int) var_0)))))) : (((/* implicit */unsigned long long int) min((-1469394399), (((/* implicit */int) (signed char)15)))))));
                        var_19 = ((/* implicit */unsigned int) min(((-(min((var_10), (((/* implicit */long long int) 922251575)))))), (var_12)));
                    }
                    var_20 += ((/* implicit */short) var_4);
                    arr_26 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) 10060736102138237907ULL);
                    arr_27 [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(-884437659)))), (max((arr_16 [i_2] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1]), (arr_16 [i_2] [i_0 - 1] [i_2] [i_0 - 1] [i_0 - 1] [i_2])))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_3);
    var_22 = ((/* implicit */int) var_10);
    var_23 = ((/* implicit */short) ((int) ((var_0) * ((-(0))))));
}
