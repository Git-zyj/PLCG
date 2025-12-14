/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104188
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
    var_14 = ((/* implicit */signed char) var_12);
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_2))))) - (((var_7) & (var_0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)4872)) : (30720)))) || (((/* implicit */_Bool) 0U))))))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)64156))));
        var_16 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_7) << (((/* implicit */int) var_6)))) * (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0])))))))) ? ((((-(0))) << (((((/* implicit */int) min((((/* implicit */short) var_6)), (arr_1 [15])))) - (53))))) : (((/* implicit */int) arr_0 [i_0]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                {
                    arr_13 [i_2] [(unsigned short)19] = ((/* implicit */unsigned int) 1165637921356670307ULL);
                    var_17 = ((/* implicit */int) ((long long int) 4294967266U));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (var_0))), (min((((/* implicit */unsigned long long int) (signed char)15)), (var_7)))))) ? (((/* implicit */unsigned long long int) var_4)) : (((((/* implicit */_Bool) ((var_1) / (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1] [i_2] [i_2] [i_5])))))) ? ((~(var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))))));
                                arr_22 [i_1] [3ULL] [i_2] [i_4] [i_5] = ((/* implicit */unsigned long long int) 288225978105200640LL);
                                arr_23 [i_1] [11U] [i_3] [2ULL] [(short)17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_13)) ? (arr_21 [i_5] [i_5] [i_5] [13] [i_5]) : (((/* implicit */unsigned long long int) -1031996522))))))) ? (((((unsigned int) (short)7455)) * (((/* implicit */unsigned int) ((/* implicit */int) (short)32761))))) : (min((var_13), (((/* implicit */unsigned int) max((arr_10 [i_1] [i_2] [i_2] [i_2]), (((/* implicit */int) arr_20 [i_1] [i_2] [i_5])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_24 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) 1151795604700004352LL)) == (((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) var_12)) : (var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(_Bool)0]))) + (var_13))) == (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)0))))))))) : (((((/* implicit */_Bool) (-(3546101669U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (11U)))));
    }
    for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        arr_28 [i_6] [(short)7] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_6]))))) ? ((-(((/* implicit */int) arr_3 [i_6])))) : (((((/* implicit */int) arr_7 [i_6] [i_6] [i_6])) >> (((((/* implicit */int) arr_3 [i_6])) + (80)))))));
        var_19 ^= ((((/* implicit */_Bool) -597136632700559508LL)) ? (((long long int) arr_27 [(_Bool)0] [i_6])) : (((long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_12)) : (6257732699409075866ULL)))));
    }
    for (int i_7 = 1; i_7 < 15; i_7 += 1) 
    {
        var_20 = ((/* implicit */int) arr_19 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]);
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (((-(((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)65535)))))) % (((((/* implicit */_Bool) (+(var_4)))) ? (((((/* implicit */_Bool) 9007199254740991ULL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)873)))) : (((/* implicit */int) var_2)))))))));
    }
}
