/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14394
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_7)))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_2)))))) : ((((_Bool)1) ? (15745776859116526004ULL) : (((/* implicit */unsigned long long int) 1894961908))))))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (max((var_9), (((/* implicit */unsigned long long int) var_8))))));
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_12))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_1 [i_0])), ((~(8U)))));
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)22)), (arr_6 [i_0])))), (min((((/* implicit */unsigned long long int) var_0)), (2700967214593025611ULL))))) & (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_9 [i_0] [(unsigned char)10])) ? (((/* implicit */int) arr_1 [4ULL])) : (((/* implicit */int) arr_4 [i_3])))) : (((/* implicit */int) arr_1 [i_0])))))));
                        var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((var_8), (arr_8 [i_2] [i_0] [(unsigned char)6]))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        var_18 |= ((/* implicit */signed char) (~(((3377438285U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-30)))))));
                        /* LoopSeq 2 */
                        for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            arr_14 [i_5] [(_Bool)0] [i_2] [(_Bool)0] [(unsigned short)6] &= ((/* implicit */unsigned long long int) var_2);
                            var_19 += ((/* implicit */unsigned char) arr_1 [i_0]);
                        }
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            var_20 += ((/* implicit */int) arr_15 [i_0] [(unsigned short)10] [i_2] [i_4] [(_Bool)1]);
                            var_21 = ((/* implicit */unsigned short) ((int) ((_Bool) (-(((/* implicit */int) var_10))))));
                        }
                        arr_17 [i_0] [i_0] [(unsigned short)7] = ((/* implicit */unsigned short) arr_16 [i_4]);
                    }
                    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        arr_20 [(unsigned short)2] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                        arr_21 [i_0] [9ULL] [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_2] [i_7] [i_7])) ? (((/* implicit */int) arr_9 [i_2] [i_7])) : (((/* implicit */int) arr_1 [i_1])))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0])), (min((((/* implicit */unsigned int) arr_5 [i_0] [i_2])), (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (((((((/* implicit */_Bool) 902985806)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (0ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)11930)) : (arr_6 [i_0]))))))));
                    }
                    for (int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4))) == (4294967288U)));
                        arr_26 [i_0] [i_1] [i_0] [i_8] = ((/* implicit */signed char) ((arr_12 [i_8] [i_2] [10ULL] [i_0] [(_Bool)1]) & (((/* implicit */int) arr_9 [i_0] [i_1]))));
                        var_23 &= ((/* implicit */_Bool) var_2);
                    }
                }
            } 
        } 
    } 
}
