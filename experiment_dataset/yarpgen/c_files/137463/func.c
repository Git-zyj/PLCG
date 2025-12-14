/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137463
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
    var_14 = ((/* implicit */long long int) var_1);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 -= ((/* implicit */int) ((arr_0 [i_0]) << (((((unsigned int) 67108863)) - (67108803U)))));
        var_16 = ((/* implicit */int) (~(var_4)));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned char) ((long long int) (signed char)15));
            var_18 = ((/* implicit */_Bool) max((var_18), ((!(((_Bool) ((var_8) ? (((/* implicit */unsigned long long int) 607382262207639522LL)) : (1394977529507989447ULL))))))));
        }
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            arr_8 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)0))));
            var_19 = ((/* implicit */long long int) 3736271966014361695ULL);
            var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-15))) : (arr_2 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)27)) || (((/* implicit */_Bool) (signed char)-15)))))) : (max((((/* implicit */unsigned long long int) ((arr_2 [i_0]) > (15692353381156252804ULL)))), (arr_2 [i_2])))));
        }
        for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) max((arr_3 [i_0]), (((/* implicit */unsigned char) (signed char)12))))) - (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) (_Bool)1)))))))));
                        arr_18 [i_0] [i_0] [i_4] = min(((signed char)50), (((signed char) (~(2152471889U)))));
                        /* LoopSeq 2 */
                        for (signed char i_6 = 4; i_6 < 11; i_6 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_11))));
                            var_23 = ((/* implicit */long long int) (unsigned char)16);
                            arr_23 [i_0] [i_3] [i_4] [i_5] [i_5] [i_5] [i_6] = ((/* implicit */long long int) arr_0 [i_5]);
                            var_24 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (min((((/* implicit */int) (unsigned short)64209)), (-512499519)))))), (var_11)));
                            var_25 -= ((/* implicit */unsigned long long int) arr_6 [i_4] [i_3] [i_0]);
                        }
                        /* vectorizable */
                        for (signed char i_7 = 4; i_7 < 11; i_7 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */int) var_11);
                            arr_26 [i_0] [i_0] [i_0] [i_5] [i_5] [i_7] [i_0] = ((/* implicit */long long int) (signed char)102);
                            var_27 = ((/* implicit */int) min((var_27), ((-(((/* implicit */int) arr_5 [i_5] [i_4]))))));
                        }
                    }
                } 
            } 
            var_28 = ((/* implicit */signed char) ((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((var_8) || (((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0] [i_3]))))))));
        }
        var_29 -= ((/* implicit */signed char) max((((((/* implicit */_Bool) -715157027423260672LL)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)236))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_5 [2LL] [2LL])) : (((/* implicit */int) arr_3 [i_0])))))));
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            for (long long int i_9 = 4; i_9 < 10; i_9 += 1) 
            {
                {
                    var_30 = ((/* implicit */unsigned char) ((_Bool) arr_21 [i_9] [i_9 - 2] [i_9 + 3] [i_9 - 4] [i_9 + 1]));
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 4; i_10 < 10; i_10 += 3) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 13; i_11 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) 8389213019277327976ULL))) ? ((~(arr_14 [i_0]))) : (((/* implicit */unsigned long long int) min((-715157027423260657LL), (((/* implicit */long long int) (unsigned char)255)))))));
                                arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) 7581649862874833090ULL);
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */int) (unsigned short)25255);
                    arr_41 [i_0] = ((/* implicit */unsigned int) min((min((((unsigned long long int) arr_12 [i_8] [(_Bool)1] [i_8])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-13)) || (((/* implicit */_Bool) arr_7 [i_8] [i_9]))))))), (((/* implicit */unsigned long long int) (_Bool)1))));
                }
            } 
        } 
    }
    for (int i_12 = 0; i_12 < 16; i_12 += 1) 
    {
        arr_45 [i_12] = ((/* implicit */int) arr_43 [i_12]);
        arr_46 [i_12] = ((/* implicit */unsigned char) (+((+(arr_43 [i_12])))));
    }
    var_33 = ((/* implicit */unsigned long long int) (+((((-(((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) ((_Bool) (_Bool)1)))))));
}
