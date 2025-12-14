/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114850
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
    var_16 |= ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        arr_2 [(unsigned char)4] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1061637116U)) ? (3233330180U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)32)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((int) arr_0 [(short)12] [i_0])));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) arr_4 [i_2]);
                    var_18 = ((/* implicit */long long int) ((unsigned short) ((1061637116U) << (((((/* implicit */int) ((unsigned short) 1061637117U))) - (19443))))));
                    arr_10 [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1343110648U)) ? (((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_1] [i_2]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_15)) > (arr_4 [i_0])))) : (((/* implicit */int) ((short) var_0))))) : ((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [13]))) <= (var_14))))))));
                    var_19 = ((signed char) (-(((/* implicit */int) (short)15124))));
                }
            } 
        } 
    }
    for (short i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
    {
        var_20 |= ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) min(((short)-1), (((/* implicit */short) arr_9 [i_3] [i_3] [i_3] [i_3]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))) : ((+(1343110638U))))));
        /* LoopNest 2 */
        for (signed char i_4 = 1; i_4 < 15; i_4 += 4) 
        {
            for (signed char i_5 = 1; i_5 < 14; i_5 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */int) arr_4 [(short)0]);
                        arr_24 [i_6] [i_5] [i_5] [i_5] [i_5] [i_3] = ((/* implicit */int) ((arr_4 [(short)7]) < ((+(var_5)))));
                    }
                    for (short i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
                    {
                        arr_27 [i_7] [i_5] [i_5] [i_4 - 1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_5] [i_5 + 1] [i_5] [i_7]))) & (min((((/* implicit */long long int) arr_11 [i_4 - 1] [i_4 - 1])), (var_14)))));
                        arr_28 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [i_7] [(signed char)3] [(signed char)3]))))), ((short)-15385)));
                        arr_29 [i_5] [i_5] = ((/* implicit */unsigned long long int) max((arr_22 [(short)3] [i_5] [i_5] [i_7]), (((int) ((((/* implicit */_Bool) (signed char)61)) ? (var_4) : (((/* implicit */long long int) var_9)))))));
                    }
                    /* LoopSeq 2 */
                    for (int i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 16; i_9 += 4) 
                        {
                            arr_35 [i_5] [i_4 - 1] [i_5] [i_8] [i_9] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) arr_14 [i_5 - 1] [i_8] [i_5])))));
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (~(var_13))))));
                        }
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) max((((/* implicit */unsigned int) (+((-(-593078970)))))), (((((/* implicit */_Bool) var_4)) ? ((-(1343110647U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_3] [i_4] [i_3] [i_5 + 2] [i_8] [i_8])) ? (arr_12 [i_5]) : (arr_8 [i_5] [i_8])))))))))));
                    }
                    for (signed char i_10 = 1; i_10 < 15; i_10 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((long long int) arr_15 [i_3] [i_3]))))) ? (arr_23 [i_3] [1] [1] [i_10]) : (max((((/* implicit */unsigned long long int) min((6089392124679440713LL), (((/* implicit */long long int) (unsigned short)57017))))), (var_10)))));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15130))) : (-1LL)))) ? (((/* implicit */long long int) arr_16 [i_3] [i_3] [i_3])) : (8593792348728496157LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)15122)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)15141))) : (1061637116U)))) : (min((((/* implicit */unsigned long long int) arr_39 [i_3] [i_3] [i_5] [i_5] [i_3] [i_10])), (min((var_2), (((/* implicit */unsigned long long int) (short)-15097))))))));
                        var_26 ^= ((/* implicit */short) max((((/* implicit */long long int) max((1343110647U), (((/* implicit */unsigned int) arr_36 [i_5 + 2] [i_4 - 1] [i_5] [i_10 + 1] [i_5] [9U]))))), (((max((arr_17 [i_10 + 1] [i_4]), (((/* implicit */long long int) arr_36 [i_3] [i_3] [i_3] [15LL] [i_3] [i_3])))) / (((-6089392124679440713LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-15121)))))))));
                    }
                }
            } 
        } 
    }
    var_27 ^= ((/* implicit */signed char) (+(((long long int) var_12))));
    var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) (short)15097))))))));
    var_29 &= ((/* implicit */int) var_6);
}
