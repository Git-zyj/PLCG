/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125715
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
    var_10 ^= ((/* implicit */short) (!(((((/* implicit */_Bool) (+(var_9)))) || (((/* implicit */_Bool) var_2))))));
    var_11 = ((/* implicit */unsigned long long int) (~(var_5)));
    var_12 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) * (var_9)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [2U] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) var_9))) && (((/* implicit */_Bool) (~(var_3))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
                        {
                            arr_15 [i_0] [i_3] [i_2 + 1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (!(var_6)));
                            var_13 = ((/* implicit */unsigned int) var_6);
                            arr_16 [i_0] [i_0] [i_2] [(signed char)7] [5ULL] [i_2] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_1))));
                        }
                        for (short i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
                        {
                            arr_19 [i_0] [i_1] [i_0] [(_Bool)1] [i_5] = ((/* implicit */unsigned int) (+(((unsigned long long int) var_9))));
                            var_14 = ((/* implicit */short) (+(((/* implicit */int) var_2))));
                        }
                        var_15 = ((/* implicit */short) ((signed char) var_2));
                    }
                } 
            } 
        } 
    }
    for (int i_6 = 0; i_6 < 20; i_6 += 3) 
    {
        arr_22 [i_6] = ((/* implicit */signed char) (-(((/* implicit */int) ((short) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_2))))))));
        var_16 = ((/* implicit */short) var_5);
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        for (unsigned short i_10 = 1; i_10 < 17; i_10 += 4) 
                        {
                            {
                                arr_35 [i_10] [i_10 + 2] [i_9] [i_6] [2U] [i_7] [i_6] = (-(((var_3) | (((/* implicit */unsigned long long int) var_9)))));
                                var_17 = ((/* implicit */signed char) var_8);
                                arr_36 [i_6] [i_7] [i_8] [i_9] [i_6] = ((/* implicit */short) max((var_0), (((/* implicit */int) ((((/* implicit */long long int) var_7)) <= (min((var_5), (((/* implicit */long long int) var_8)))))))));
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) var_5))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) >= (var_3))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) var_8);
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        for (short i_12 = 1; i_12 < 18; i_12 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) (!(max((var_8), (var_6)))));
                                var_21 = ((/* implicit */unsigned char) var_7);
                                arr_43 [i_6] [i_6] [i_6] [i_8] [i_11] [i_6] [i_12 - 1] = ((/* implicit */short) (-(max((var_3), (((/* implicit */unsigned long long int) var_5))))));
                                var_22 *= ((short) ((short) var_4));
                                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((long long int) 3310400679U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_7))));
}
