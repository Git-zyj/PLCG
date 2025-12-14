/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173809
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
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_9))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) var_3)))))))) || (((/* implicit */_Bool) var_4))));
    var_17 = max((((/* implicit */unsigned short) (short)-30949)), (var_9));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_1 [i_0]))) != (max((((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) (short)15439)))), (((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (unsigned short i_3 = 1; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) >= (((/* implicit */int) arr_3 [i_1]))))) ^ (((/* implicit */int) ((short) (-(((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_3]))))))));
                        arr_9 [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */short) max((((min((((/* implicit */long long int) var_2)), (arr_6 [i_0] [i_1] [i_0] [i_0]))) * (((/* implicit */long long int) (-(((/* implicit */int) (short)-15440))))))), (((/* implicit */long long int) max((((4294967295U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51697))))), (16U))))))) : (((/* implicit */short) max((((min((((/* implicit */long long int) var_2)), (arr_6 [i_0] [i_1] [i_0] [i_0]))) / (((/* implicit */long long int) (-(((/* implicit */int) (short)-15440))))))), (((/* implicit */long long int) max((((4294967295U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51697))))), (16U)))))));
                        var_19 = ((/* implicit */unsigned long long int) (short)15423);
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_3 + 1] [i_3])), (arr_8 [i_0] [i_0] [i_3 + 2] [i_3])))) ? (((/* implicit */long long int) (-((-(((/* implicit */int) (short)-15429))))))) : (((-7058976041652049460LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-15428)))))));
                    }
                } 
            } 
            arr_10 [i_0] [7ULL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_6 [i_0] [i_0] [i_0] [i_1])))) || (((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */short) arr_7 [i_1] [i_0] [i_0] [i_0]))))))))));
            arr_11 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (((~((~(var_13))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0] [i_0])) || (((/* implicit */_Bool) var_3))))))));
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_0] [i_1])) ? (arr_6 [i_0] [i_0] [i_0] [i_1]) : (arr_6 [i_0] [i_0] [i_0] [i_1])))) ? (((long long int) arr_6 [i_0] [i_1] [i_0] [i_0])) : (arr_6 [i_0] [i_0] [i_0] [i_0])));
            var_22 *= ((/* implicit */short) arr_8 [i_0] [i_0] [i_0] [i_0]);
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_4])))) + (((/* implicit */int) ((((/* implicit */int) (short)-16064)) >= (((/* implicit */int) (short)(-32767 - 1))))))));
            var_24 = arr_12 [i_0] [i_4];
            arr_15 [i_0] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_3 [i_0]))));
            var_25 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_4] [i_4])) ? (-7058976041652049457LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
        }
        for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            var_26 = ((/* implicit */short) min((var_26), ((short)5822)));
            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((((((/* implicit */_Bool) arr_12 [i_5] [i_5])) && (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) != (((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))) : (max((18446744073709551590ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
            var_28 = (short)17201;
            /* LoopNest 2 */
            for (short i_6 = 1; i_6 < 12; i_6 += 3) 
            {
                for (unsigned short i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    {
                        var_29 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)23)) || (((/* implicit */_Bool) -7058976041652049460LL))));
                        var_30 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_12 [i_0] [i_6 - 1]))))));
                    }
                } 
            } 
        }
        arr_25 [i_0] = ((/* implicit */_Bool) (-((((_Bool)0) ? (5259702885427793322ULL) : (max((18446744073709551582ULL), (((/* implicit */unsigned long long int) (short)-1))))))));
    }
}
