/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165616
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
    var_16 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((int) 18446744073709551615ULL)))))));
    var_17 = ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) ((int) var_9))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_6 [i_0 + 3] [i_1] [i_0] = ((/* implicit */_Bool) (-((-(0LL)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) -540687795))))))));
                                var_19 += ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0])))))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1 - 1] [i_1 - 1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (_Bool)1))))))));
                    arr_15 [i_0] = ((signed char) (~((~(((/* implicit */int) var_2))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        for (long long int i_6 = 1; i_6 < 23; i_6 += 2) 
                        {
                            {
                                var_20 += ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) arr_2 [i_0] [i_0]))))))));
                                var_21 = ((/* implicit */unsigned short) ((long long int) (-(((unsigned int) -2472043106700106712LL)))));
                                arr_22 [(unsigned short)5] [i_0] [i_0] [i_0] = (~(((/* implicit */int) ((_Bool) (+(((/* implicit */int) (signed char)0)))))));
                                arr_23 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) (~(((unsigned long long int) ((unsigned long long int) arr_10 [i_0 - 1] [i_0] [i_6])))));
                                arr_24 [(_Bool)1] [(_Bool)1] [i_0] [(_Bool)1] [(_Bool)1] [i_5] [i_5] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_13 [i_0] [i_5] [i_0] [i_0] [i_0] [i_0])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) ((unsigned int) var_2))))));
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        for (signed char i_8 = 1; i_8 < 11; i_8 += 1) 
        {
            {
                var_23 *= ((short) ((_Bool) (~(var_10))));
                var_24 |= ((/* implicit */unsigned int) ((signed char) ((int) (!(((/* implicit */_Bool) 302022777))))));
                arr_31 [i_7] [i_7] [i_8] = ((/* implicit */unsigned short) (+(9007199254736896LL)));
            }
        } 
    } 
}
