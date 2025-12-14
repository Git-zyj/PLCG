/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173184
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_10 [i_1] [i_2] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_1 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 + 1] [i_1 - 1]))) : (arr_9 [i_0 - 1] [i_1 + 2] [i_2 + 3] [i_2])));
                    var_13 = ((/* implicit */unsigned char) ((unsigned int) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]));
                }
            } 
        } 
        var_14 *= ((/* implicit */unsigned int) var_11);
    }
    for (short i_3 = 1; i_3 < 13; i_3 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) ((unsigned short) ((unsigned short) var_11)));
        arr_13 [i_3] = ((/* implicit */unsigned char) arr_12 [i_3]);
        var_16 += ((/* implicit */unsigned int) max((max((((((/* implicit */int) (signed char)115)) - (((/* implicit */int) var_2)))), (((/* implicit */int) ((_Bool) (signed char)-119))))), (((/* implicit */int) ((_Bool) 7467564679005594995LL)))));
        arr_14 [i_3] = ((/* implicit */signed char) var_10);
        var_17 = ((unsigned long long int) ((((/* implicit */_Bool) ((long long int) (signed char)-108))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)43637))));
    }
    for (short i_4 = 1; i_4 < 13; i_4 += 2) /* same iter space */
    {
        var_18 *= ((/* implicit */unsigned int) (~(((((((/* implicit */int) arr_16 [i_4] [i_4])) <= (((/* implicit */int) var_12)))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) -2018477822)) ? (var_9) : (((/* implicit */int) var_7))))))));
        arr_17 [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_5)) * (((/* implicit */int) var_7)))) * (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_12 [i_4 - 1])) : (((/* implicit */int) var_6))))));
        arr_18 [i_4] = ((/* implicit */short) ((int) ((short) (signed char)100)));
        arr_19 [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-24729))));
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        for (unsigned char i_6 = 2; i_6 < 8; i_6 += 4) 
        {
            for (unsigned int i_7 = 1; i_7 < 8; i_7 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (signed char)59)) && (((/* implicit */_Bool) var_11)))) ? (((int) var_5)) : (((/* implicit */int) ((355455555U) > (3875955854U)))))) >= (((/* implicit */int) var_7))));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 8; i_8 += 4) 
                    {
                        for (signed char i_9 = 0; i_9 < 10; i_9 += 2) 
                        {
                            {
                                arr_33 [i_5] [i_5] [i_7] [i_5] = ((/* implicit */signed char) ((_Bool) ((unsigned long long int) (signed char)100)));
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_1 [i_9] [i_5]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
