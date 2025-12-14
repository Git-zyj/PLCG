/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115963
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned char)117)) : (-1401570168))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) arr_1 [i_3]))));
                        arr_9 [i_1] [i_3] = ((((/* implicit */int) ((short) arr_7 [i_1] [i_1] [i_3 + 1] [i_3 + 1]))) + (((((/* implicit */int) arr_2 [i_1] [i_1] [i_1])) << (((((((/* implicit */int) arr_0 [i_0] [i_2])) + (35))) - (9))))));
                        arr_10 [(short)5] [i_1] = ((/* implicit */long long int) (~(15776640108882848017ULL)));
                        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [2] [2] [i_3])) > (((/* implicit */int) (short)26210)))))) > (max((5606815937410235103LL), (-2889561600256016173LL)))))) == (-1401570174))))));
                    }
                }
                for (short i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */int) max((var_14), (var_4)));
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((((/* implicit */_Bool) max((((/* implicit */signed char) arr_4 [i_1] [i_5])), (arr_0 [i_0] [i_6])))) ? (((((/* implicit */_Bool) (unsigned char)117)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_4]))) : (4195917135109886211ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)104)) != (((/* implicit */int) arr_4 [i_6] [i_5]))))))))));
                                arr_18 [i_0] [i_1] [i_1] [i_5] [i_6] [i_1] [i_4] = ((/* implicit */int) arr_16 [i_0] [i_1] [i_4] [i_5] [i_4]);
                            }
                        } 
                    } 
                    var_16 -= ((/* implicit */long long int) var_7);
                    arr_19 [i_1] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))) : (((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_4] [i_1]))));
                }
                for (unsigned long long int i_7 = 2; i_7 < 8; i_7 += 2) 
                {
                    arr_23 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) var_6);
                    var_17 = ((/* implicit */signed char) var_1);
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_27 [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_7)), ((+(arr_24 [i_8] [i_7 - 1] [i_1] [i_0])))));
                        arr_28 [i_0] [i_1] [i_0] [i_8] = arr_26 [i_7 + 3] [i_7 - 2] [i_7 + 1];
                        arr_29 [i_0] [i_0] [i_1] [i_1] [i_7 - 1] [i_8] = ((/* implicit */unsigned long long int) var_3);
                    }
                    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        arr_34 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-52)) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) (signed char)-46))));
                        var_18 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-69)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_7 - 1] [i_7 + 3] [i_7]))))))));
                        var_19 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((-(((((/* implicit */int) var_0)) + (((/* implicit */int) (short)19362)))))) : ((+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 3; i_10 < 7; i_10 += 3) 
                {
                    for (short i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        {
                            var_20 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_14 [i_10 + 3] [i_10 + 3] [i_10 + 3] [i_11]), (((/* implicit */long long int) var_10)))))));
                            arr_41 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((-1401570181) > (((/* implicit */int) (unsigned char)238)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) (((~((~(13181853406664154351ULL))))) ^ (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned char)31)))) | (((int) var_10)))))));
}
