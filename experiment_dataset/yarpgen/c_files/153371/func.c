/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153371
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
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)1540), ((short)-1540)))) ? (var_9) : (((/* implicit */long long int) max((var_7), (var_13))))))) ? (max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-1540))) != (var_9)))), (3195944160373335676LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)1540))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1] [8LL] |= ((/* implicit */long long int) (+(17781575497409764512ULL)));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_21 = (~(((/* implicit */int) (short)1517)));
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 166447736)) || (((/* implicit */_Bool) arr_7 [9LL] [i_2] [i_1] [i_0])))))) % (max((((/* implicit */unsigned long long int) (short)-4002)), (var_15))))))));
                    }
                    for (signed char i_4 = 2; i_4 < 14; i_4 += 1) 
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))), (arr_1 [i_4 - 1])))) + (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5))) & (18446744073709551615ULL))), (((/* implicit */unsigned long long int) max((2369398697U), (((/* implicit */unsigned int) var_0)))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 2; i_5 < 13; i_5 += 4) 
                        {
                            var_23 = ((/* implicit */short) 665168576299787103ULL);
                            arr_18 [i_0] [9U] [14LL] [i_0] [i_2] = ((/* implicit */unsigned short) var_6);
                            arr_19 [i_5] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_13 [i_4 - 2] [i_2] [i_5 + 1] [i_5 + 2]), (arr_13 [i_4 - 1] [i_2] [i_5 - 2] [i_5])))) ? (((((/* implicit */_Bool) arr_13 [i_4 - 2] [i_2] [i_5 - 1] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_13 [i_4 - 2] [i_2] [i_5 + 2] [i_5 + 3]))) : (((/* implicit */unsigned long long int) ((long long int) arr_13 [i_4 - 2] [i_2] [i_5 + 1] [i_5])))));
                            var_24 += ((/* implicit */unsigned int) (~(arr_12 [i_0] [i_0] [(short)13] [i_4 + 1] [i_5 - 2] [i_5 + 3])));
                            var_25 -= ((/* implicit */long long int) (-(((/* implicit */int) (!(((arr_17 [15LL] [i_2] [15]) != (16777215LL))))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned int) 15769504532600968295ULL);
    var_27 = ((/* implicit */_Bool) max(((((+(17781575497409764512ULL))) * (((/* implicit */unsigned long long int) ((5240833377345366994LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-10)))))))), (((17781575497409764518ULL) + (((/* implicit */unsigned long long int) var_11))))));
    var_28 = ((/* implicit */short) ((((((/* implicit */int) (signed char)65)) + (((/* implicit */int) ((0LL) > (((/* implicit */long long int) ((/* implicit */int) (short)-1534)))))))) > (((/* implicit */int) var_4))));
}
