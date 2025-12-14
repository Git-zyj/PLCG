/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176376
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_14 += ((/* implicit */short) ((((arr_8 [(unsigned char)18] [i_1] [i_0] [i_3] [i_4] [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_13), (((/* implicit */signed char) var_5)))))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_2 + 3] [i_3] [i_3]))))), (max((((/* implicit */unsigned char) var_6)), (arr_3 [i_1] [i_1] [i_3])))))) : (((/* implicit */int) min((((signed char) (unsigned char)30)), (((/* implicit */signed char) ((((/* implicit */int) var_3)) < (((/* implicit */int) arr_1 [i_1]))))))))));
                                var_15 = ((/* implicit */long long int) ((_Bool) ((unsigned char) (unsigned char)30)));
                            }
                        } 
                    } 
                } 
                var_16 -= ((/* implicit */unsigned long long int) ((unsigned char) min((arr_0 [i_0]), (var_9))));
                arr_11 [i_0] = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (14145568362676229634ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
                arr_12 [i_0] = ((/* implicit */unsigned int) ((((unsigned long long int) (+(((/* implicit */int) var_0))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) <= (arr_8 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 4; i_7 < 11; i_7 += 1) 
            {
                {
                    var_17 += ((/* implicit */short) var_11);
                    var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_4))))), (arr_19 [i_5])));
                    /* LoopSeq 3 */
                    for (signed char i_8 = 1; i_8 < 11; i_8 += 2) 
                    {
                        arr_23 [i_6] [(unsigned char)3] [i_7] [i_6 - 1] [i_6 - 1] [i_6] = ((/* implicit */signed char) ((35465847065542656ULL) > ((~(((unsigned long long int) (signed char)0))))));
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) arr_17 [i_5] [i_7] [i_5]))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        arr_27 [i_5] [i_9] [i_6] [(signed char)2] = ((/* implicit */unsigned long long int) 304420060898717733LL);
                        var_20 *= ((/* implicit */short) (~(((/* implicit */int) arr_17 [i_5] [i_6] [i_9]))));
                        arr_28 [i_5] [i_5] |= ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_6] [i_6 - 1])))))));
                        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [9LL] [i_7]))));
                    }
                    for (unsigned long long int i_10 = 2; i_10 < 8; i_10 += 2) 
                    {
                        var_22 = ((/* implicit */short) (signed char)32);
                        var_23 = ((/* implicit */short) min((((/* implicit */int) arr_9 [i_7 - 3] [i_6 - 1])), ((~(((/* implicit */int) (unsigned short)65518))))));
                        var_24 = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((arr_10 [i_7] [i_6]), ((signed char)-1)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0))))) : (var_7))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_5] [(signed char)0] [i_6] [i_5])) == (((/* implicit */int) (unsigned char)30)))))) - (arr_0 [i_5])))));
                    }
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned char) var_1);
        arr_32 [i_5] = ((/* implicit */unsigned int) (!(((((/* implicit */int) ((((/* implicit */int) arr_1 [i_5])) != (((/* implicit */int) var_3))))) == (((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (arr_2 [i_5] [i_5] [i_5]))))))));
        /* LoopNest 3 */
        for (long long int i_11 = 0; i_11 < 12; i_11 += 2) 
        {
            for (unsigned short i_12 = 0; i_12 < 12; i_12 += 1) 
            {
                for (int i_13 = 0; i_13 < 12; i_13 += 4) 
                {
                    {
                        arr_40 [i_12] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-33)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5] [i_5] [i_5]))) : (var_9))), (((/* implicit */unsigned long long int) (_Bool)0)))))));
                        var_26 = var_13;
                        arr_41 [i_12] [i_5] = ((/* implicit */_Bool) arr_7 [i_5] [i_11] [i_5] [i_11]);
                        var_27 &= ((/* implicit */unsigned char) (~(((unsigned long long int) (!(var_5))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_14 = 0; i_14 < 16; i_14 += 3) 
    {
        arr_44 [i_14] = ((/* implicit */unsigned char) var_2);
        arr_45 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_4), (((/* implicit */signed char) (_Bool)1))))) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))), ((-(((/* implicit */int) (short)32767)))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_4)))))))));
    }
    var_28 &= 6570153362882527473ULL;
}
