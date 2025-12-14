/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104555
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
    var_20 = ((long long int) ((((/* implicit */_Bool) (+(var_17)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 281474976710655ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))) : (((1270576832354053590ULL) & (14070295646070531908ULL)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) min(((_Bool)1), (var_5)));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(-1873004559)))), (max((arr_5 [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_22 -= ((/* implicit */_Bool) (-((+(((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_2] [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (arr_10 [i_0] [i_1] [i_1] [i_3] [i_4])))))));
                                var_23 = ((/* implicit */_Bool) max((min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((signed char) -776402493))))), (((/* implicit */int) max(((signed char)121), (((/* implicit */signed char) (_Bool)1)))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */unsigned int) arr_14 [i_0] [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 2; i_8 < 8; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_25 *= ((/* implicit */long long int) (~((~(((/* implicit */int) arr_26 [i_7 + 3] [(unsigned char)2] [i_8] [(_Bool)1] [i_8 + 4]))))));
                                var_26 -= ((/* implicit */unsigned long long int) (-(((((_Bool) arr_7 [i_5] [i_6] [i_9] [(unsigned char)12])) ? (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)134)), (var_3)))) : (arr_11 [i_6] [i_6] [i_7] [i_7 + 2] [i_8 + 4] [i_9])))));
                            }
                        } 
                    } 
                    arr_28 [i_5] [i_5] [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 605177048)) + (11288660561646489128ULL)));
                }
                for (unsigned char i_10 = 1; i_10 < 10; i_10 += 4) 
                {
                    arr_31 [i_5] [i_6] [i_10 - 1] [i_6] = ((/* implicit */_Bool) max((arr_16 [i_5]), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1270576832354053590ULL))))))))));
                    var_27 = (+((+(arr_11 [i_5] [i_5] [i_5] [i_6] [i_10 - 1] [i_10]))));
                }
                for (signed char i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    var_28 = (!(((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_11))) - ((-(((/* implicit */int) (_Bool)1))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 2; i_12 < 9; i_12 += 4) 
                    {
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_29 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) var_16)))))) ? (((/* implicit */unsigned long long int) (~((~(var_17)))))) : ((+(arr_5 [i_11] [i_12 - 1])))));
                                arr_41 [i_5] [4] [i_5] [i_11] = ((/* implicit */long long int) ((unsigned long long int) (~((+(((/* implicit */int) (_Bool)1)))))));
                                arr_42 [i_5] [(unsigned char)9] [(unsigned char)6] [(unsigned char)6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) max((arr_40 [2ULL] [2ULL] [2ULL] [2ULL] [2ULL] [i_13 - 1] [8U]), (var_14)))) : ((-(((/* implicit */int) arr_26 [i_11] [i_13 - 1] [i_11] [i_12 + 3] [i_13]))))));
                                arr_43 [i_5] = ((/* implicit */_Bool) var_0);
                                var_30 *= ((/* implicit */long long int) arr_17 [i_5] [i_11]);
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned long long int) max((var_31), (((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_15)) ? (arr_35 [i_6] [i_6] [i_6] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) ? (max((((/* implicit */unsigned long long int) (signed char)-1)), (1551382887305671638ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [i_11] [i_5] [i_5])))))))));
                }
                var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_23 [i_5] [i_5]))) ? ((+(7032812428841025907LL))) : (((((/* implicit */_Bool) arr_11 [i_5] [i_6] [i_6] [i_5] [i_6] [i_6])) ? (arr_25 [i_5] [i_6]) : (var_9)))))) ? ((~(arr_3 [i_6] [i_5]))) : (min((((/* implicit */long long int) (signed char)10)), (6314092598066411047LL))))))));
                arr_44 [(_Bool)1] [i_6] = ((/* implicit */_Bool) max((((/* implicit */int) ((var_9) < (((/* implicit */long long int) (~(((/* implicit */int) var_12)))))))), (((int) 1555181462))));
            }
        } 
    } 
    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */unsigned long long int) 6871252429112210565LL))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)17)) ? ((+(((/* implicit */int) (unsigned char)154)))) : (var_3)))) : (var_17)));
}
