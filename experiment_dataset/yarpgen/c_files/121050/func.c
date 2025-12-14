/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121050
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
    for (short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        arr_13 [i_0] [i_2] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_0 [i_2])))))));
                        var_13 = ((/* implicit */long long int) var_7);
                        var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((arr_9 [i_0 - 1] [i_1] [i_2] [i_3] [i_3] [i_2]) ^ (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? ((-(arr_9 [i_3] [i_3 + 3] [i_2 - 2] [i_1] [i_0] [i_0]))) : ((~(var_2))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))))))))));
                        var_15 = ((/* implicit */long long int) max((min((((/* implicit */unsigned int) arr_6 [i_3 + 3] [i_2] [i_2] [i_0 - 1])), (var_2))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_3])))))));
                    }
                    for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        arr_16 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)19290)) | (((/* implicit */int) (unsigned char)96))));
                        var_16 -= ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_0 - 1] [i_0] [i_0 - 1]))))))) ? (((((((/* implicit */_Bool) arr_9 [i_4] [i_0] [i_2] [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_14 [i_0] [i_0] [i_2] [i_1] [i_0] [i_0]))) >> (((((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_11))) - (5837LL))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned int) ((((min(((~(((/* implicit */int) arr_11 [i_2] [i_0] [i_2])))), (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_2] [i_1])))) + (2147483647))) << (((/* implicit */int) (((-(((/* implicit */int) (unsigned short)65520)))) > (((/* implicit */int) arr_12 [i_2] [i_5] [i_2] [i_2])))))));
                        arr_19 [i_0] [i_0] [i_2] [i_2] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */signed char) var_0)), (arr_10 [i_2 + 2] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
                    }
                    /* vectorizable */
                    for (signed char i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)5211)) ? (((/* implicit */int) (short)32751)) : (((/* implicit */int) (unsigned short)60326))));
                        var_19 = ((/* implicit */signed char) (+(((/* implicit */int) var_8))));
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                    }
                    arr_23 [i_2] [i_1] [i_2] [i_2] |= ((/* implicit */unsigned char) var_10);
                    var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-32750)) ? (((/* implicit */int) (short)-32750)) : (((/* implicit */int) (signed char)-30)))) + (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32765)) ? (((/* implicit */int) (signed char)98)) : (((/* implicit */int) (short)32750))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_7 = 1; i_7 < 18; i_7 += 1) 
    {
        for (int i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                {
                    arr_31 [i_8] [i_8] [i_7] [i_8] = ((/* implicit */short) ((((/* implicit */int) var_1)) >= (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_28 [i_7]))))))));
                    var_22 = ((/* implicit */unsigned short) (((-(((var_0) ? (((/* implicit */int) arr_27 [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_28 [i_7])))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-113)) ? (-7704101690196669604LL) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_7])))))) ? (((/* implicit */int) max(((short)32739), (((/* implicit */short) (_Bool)1))))) : (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)32740)) - (32720)))))))));
                    arr_32 [i_7] [i_7] = ((/* implicit */int) ((short) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_7]))) : (var_9)))));
                }
            } 
        } 
    } 
}
