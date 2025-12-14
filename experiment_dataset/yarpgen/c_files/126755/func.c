/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126755
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) ^ (var_1)))) ? (((/* implicit */unsigned int) (+(0)))) : ((-((~(4U)))))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? ((+(var_7))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */int) ((var_12) < (((/* implicit */int) (unsigned short)0))))) / (((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) var_8)) : (var_13))))) : (((int) ((var_8) ? (((/* implicit */unsigned long long int) var_2)) : (var_14))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (((-(((/* implicit */int) (_Bool)1)))) <= (((arr_1 [i_0]) ? (((/* implicit */int) ((unsigned short) arr_0 [i_1]))) : (((/* implicit */int) ((unsigned short) (short)-1))))))))));
            arr_5 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
            var_18 = ((/* implicit */int) (+((~(((long long int) (short)(-32767 - 1)))))));
            var_19 = ((/* implicit */unsigned short) 8935141660703064064LL);
        }
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_2 [i_0]))))) ? (127) : (((/* implicit */int) (unsigned short)0))));
        arr_6 [i_0] = ((/* implicit */short) (!((_Bool)1)));
        var_21 = ((/* implicit */int) arr_3 [i_0]);
        var_22 = ((/* implicit */signed char) min(((+(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_4 [i_0] [i_0] [(unsigned char)6]) : (((/* implicit */int) (signed char)17)))))), (((((/* implicit */int) ((unsigned short) arr_2 [17U]))) ^ ((~(((/* implicit */int) (unsigned char)8))))))));
    }
    for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        arr_11 [i_2] = min(((~(((/* implicit */int) ((((/* implicit */int) (unsigned char)96)) < (((/* implicit */int) arr_9 [i_2] [6]))))))), ((~((~(((/* implicit */int) arr_8 [i_2])))))));
        var_23 = ((/* implicit */short) var_3);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                {
                    var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) ((17179869176ULL) > (((/* implicit */unsigned long long int) ((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2]))) : (arr_12 [(unsigned char)9])))))))));
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(8935141660703064078LL)))) ? (((unsigned long long int) (!(((/* implicit */_Bool) arr_0 [3LL]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [11]))))))));
                }
            } 
        } 
    }
    for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        var_26 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_13 [i_5])) < (((/* implicit */int) ((_Bool) var_7))))) ? (arr_12 [i_5]) : (((/* implicit */unsigned int) ((int) var_6)))));
        var_27 = ((/* implicit */_Bool) (signed char)(-127 - 1));
        var_28 = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_18 [i_5] [i_5]))))));
    }
    for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        arr_23 [(short)2] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) || ((!(((/* implicit */_Bool) arr_0 [i_6]))))));
        /* LoopNest 3 */
        for (short i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            for (int i_8 = 2; i_8 < 7; i_8 += 3) 
            {
                for (long long int i_9 = 0; i_9 < 10; i_9 += 4) 
                {
                    {
                        var_29 = ((/* implicit */unsigned long long int) ((short) -23LL));
                        var_30 = (((+(((/* implicit */int) arr_15 [i_8 - 2] [16ULL] [i_7] [(_Bool)1])))) < (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_6])) >> (((18446744073709551615ULL) - (18446744073709551606ULL)))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_30 [i_6] [i_8] [(_Bool)0] [4])))))))));
                    }
                } 
            } 
        } 
        var_31 = ((((/* implicit */int) var_9)) * (((/* implicit */int) (_Bool)1)));
    }
}
