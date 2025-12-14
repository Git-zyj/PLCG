/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104704
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_20 ^= ((/* implicit */short) (~(((long long int) ((long long int) (short)0)))));
                arr_6 [i_1] = ((/* implicit */short) ((int) (!(var_19))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) arr_2 [i_0]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 3; i_2 < 19; i_2 += 1) 
    {
        for (unsigned char i_3 = 1; i_3 < 22; i_3 += 3) 
        {
            for (unsigned char i_4 = 1; i_4 < 20; i_4 += 3) 
            {
                {
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((unsigned int) (~(((/* implicit */int) (short)0))))))));
                    var_22 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_9 [i_2 + 3]))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned char) ((int) var_3));
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_20 [10U] [i_2] [i_2] [i_2] [i_2] = ((unsigned short) arr_10 [i_6]);
                            var_24 += ((short) var_7);
                            var_25 = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_15 [i_6] [i_5] [i_3 - 1] [i_2]))))));
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)185)))))));
                        }
                        for (short i_7 = 3; i_7 < 22; i_7 += 3) 
                        {
                            var_27 -= ((/* implicit */signed char) (-(((/* implicit */int) ((short) arr_2 [i_3])))));
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((unsigned long long int) var_13)))));
                        }
                        var_29 = ((/* implicit */signed char) ((unsigned long long int) (~(((/* implicit */int) (unsigned char)83)))));
                    }
                    for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned char) (+((-((~(((/* implicit */int) (short)-19))))))));
                        arr_25 [i_8] [i_4 - 1] [i_8] = ((/* implicit */unsigned int) (-(((long long int) (unsigned char)71))));
                        var_31 = ((/* implicit */short) ((_Bool) ((_Bool) (unsigned short)45)));
                    }
                    for (unsigned long long int i_9 = 1; i_9 < 20; i_9 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (signed char)-61))))));
                        arr_28 [i_4] [i_3 - 1] [i_4] [i_9] = ((/* implicit */int) ((short) ((signed char) ((long long int) var_6))));
                        var_33 = ((int) (+(arr_12 [i_2 + 2] [i_3 + 1] [i_4] [i_9 + 2])));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 23; i_10 += 1) 
                        {
                            var_34 &= (-(((/* implicit */int) var_16)));
                            arr_32 [i_2] [i_3] [i_4] [i_9] [i_10] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 32767)))))));
                            var_35 = ((/* implicit */signed char) (-(((/* implicit */int) var_16))));
                            var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((int) var_11)))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_37 = ((/* implicit */int) ((unsigned short) ((signed char) (~(var_1)))));
                            var_38 = ((/* implicit */unsigned char) ((unsigned long long int) ((long long int) var_1)));
                            var_39 = ((/* implicit */unsigned char) (~((~(arr_13 [i_2 + 3] [i_3 - 1] [i_4 - 1] [i_9])))));
                            arr_36 [i_2] [i_3] [i_4] [i_9 + 3] [i_11] [i_11] [i_2] = ((/* implicit */signed char) ((long long int) ((long long int) (unsigned char)174)));
                            var_40 = ((/* implicit */unsigned int) (!(((_Bool) ((long long int) var_12)))));
                        }
                        /* vectorizable */
                        for (unsigned char i_12 = 0; i_12 < 23; i_12 += 4) 
                        {
                            var_41 = ((/* implicit */int) (!(((/* implicit */_Bool) ((short) (signed char)-16)))));
                            arr_40 [(_Bool)1] [i_12] [i_2] [i_4] [i_3] [i_2] = ((/* implicit */int) ((signed char) var_13));
                        }
                    }
                }
            } 
        } 
    } 
}
