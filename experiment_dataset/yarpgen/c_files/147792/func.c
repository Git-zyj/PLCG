/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147792
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
    var_12 &= ((/* implicit */_Bool) ((((long long int) ((((/* implicit */_Bool) -1)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65533)))))) * (-1LL)));
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */unsigned long long int) ((int) var_3))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (0ULL))))) : (((/* implicit */unsigned long long int) 536870911U))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] &= ((signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) arr_1 [i_0]))))) : (536870911U)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_14 -= ((/* implicit */short) arr_7 [10] [i_0]);
                    var_15 += ((/* implicit */unsigned int) var_0);
                }
            } 
        } 
        var_16 ^= ((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_0]);
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_17 = ((/* implicit */short) 3758096384U);
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) % (arr_5 [i_5] [i_5] [(signed char)4]))))));
                        arr_18 [i_0] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_1)) < (((/* implicit */int) arr_13 [(unsigned short)3] [(unsigned short)3] [i_4])))) ? (((/* implicit */int) ((unsigned short) 3758096384U))) : (max((var_0), (((/* implicit */int) arr_1 [i_4]))))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_5] [i_3] [i_0]))));
                        /* LoopSeq 4 */
                        for (signed char i_6 = 1; i_6 < 13; i_6 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned char) (signed char)0);
                            var_20 = ((/* implicit */int) 536870910U);
                        }
                        for (int i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_7 [i_0] [i_0])))))))));
                            var_22 = (+(((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_4] [i_4])) : (((/* implicit */int) (_Bool)1)))));
                            var_23 += arr_7 [i_0] [i_0];
                        }
                        for (unsigned char i_8 = 1; i_8 < 13; i_8 += 2) 
                        {
                            var_24 |= ((((((/* implicit */_Bool) arr_27 [10] [2ULL] [i_3] [i_8 - 1] [(unsigned char)4])) ? (3758096384U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_8] [i_5] [i_4] [i_3] [i_0]))))) << (((arr_15 [i_8 - 1] [i_4] [i_4] [i_4] [i_3] [i_0]) + (764657392))));
                            var_25 += ((/* implicit */signed char) var_3);
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned char) arr_0 [2U] [i_9]);
                            arr_31 [i_0] [i_0] [i_4] [i_0] [i_5] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_3] [i_4] [(unsigned short)10] [i_0]))) : (((((/* implicit */_Bool) min(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)28))))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_4] [i_0])))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) 1302302888845969169ULL))));
            var_28 = ((/* implicit */unsigned long long int) arr_33 [(unsigned char)3] [i_10]);
        }
        for (unsigned short i_11 = 0; i_11 < 14; i_11 += 2) 
        {
            arr_37 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3758096385U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((unsigned long long int) (unsigned char)172))));
            var_29 = ((/* implicit */short) max((((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_1)) ? (arr_5 [i_11] [i_11] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_0] [(unsigned short)13] [i_0]))))))), (((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_0] [i_11]))) % (var_8)))));
            arr_38 [i_0] [i_0] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_11)))) ? (((((/* implicit */_Bool) 17089608082858778040ULL)) ? (((/* implicit */int) (short)-32767)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((_Bool) 31U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_11] [i_0])) ? (((/* implicit */int) (unsigned char)76)) : (arr_15 [i_0] [i_11] [i_11] [i_0] [i_0] [i_11])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [(unsigned short)9] [(unsigned short)9] [i_0]))) : (arr_17 [i_0] [i_0] [i_0] [i_11]))) : (((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned short) arr_9 [i_11]))))) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_14 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0]))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_0] [i_0] [i_0])))))))));
            var_30 = ((/* implicit */long long int) var_9);
            var_31 = ((/* implicit */unsigned int) var_8);
        }
    }
    for (int i_12 = 0; i_12 < 25; i_12 += 3) 
    {
        var_32 -= ((/* implicit */int) (-((+(((unsigned int) (_Bool)0))))));
        var_33 = ((/* implicit */unsigned short) var_5);
        var_34 += ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) ((short) (unsigned char)255)))))));
    }
}
