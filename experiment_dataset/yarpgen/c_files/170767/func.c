/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170767
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
    var_19 = ((/* implicit */_Bool) ((max((2003819421028935964LL), (((/* implicit */long long int) ((signed char) var_0))))) << (((/* implicit */int) (!(((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) (signed char)73)))))))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 10; i_0 += 1) /* same iter space */
    {
        var_20 &= arr_0 [i_0];
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            var_21 = ((/* implicit */int) max((var_21), ((-(((/* implicit */int) var_12))))));
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) >= (((/* implicit */int) (signed char)-1)))))));
            var_23 = ((/* implicit */signed char) (~(((((/* implicit */int) arr_1 [i_0 + 4])) | (((/* implicit */int) max((arr_5 [i_0] [i_0]), (var_12))))))));
            var_24 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)2)) << (((5048734473490159946LL) - (5048734473490159939LL)))));
            var_25 &= ((/* implicit */_Bool) max(((+(((arr_4 [i_1]) % (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_0]))))))), (((/* implicit */long long int) ((signed char) var_6)))));
        }
        var_26 = ((/* implicit */short) -534368766);
        var_27 = max(((+(((((/* implicit */int) (signed char)-15)) % (((/* implicit */int) (signed char)2)))))), (((/* implicit */int) ((((/* implicit */_Bool) (~(-2003819421028935989LL)))) && (((((/* implicit */int) (_Bool)0)) >= (arr_2 [i_0])))))));
        var_28 = ((/* implicit */_Bool) (-(arr_2 [i_0 + 1])));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 10; i_2 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_2 [i_2])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))))));
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            var_30 = (-(((/* implicit */int) arr_5 [i_3] [i_2 + 2])));
            var_31 = ((/* implicit */signed char) ((unsigned char) (+(((/* implicit */int) (signed char)36)))));
        }
        var_32 = arr_4 [i_2];
        var_33 = ((/* implicit */signed char) (+(((/* implicit */int) arr_8 [i_2] [i_2]))));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 12; i_4 += 3) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    {
                        var_34 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_11 [i_4] [i_5 - 1] [i_6]))));
                        var_35 = arr_12 [i_2] [i_2] [i_2];
                        var_36 &= ((/* implicit */_Bool) var_1);
                    }
                } 
            } 
        } 
    }
    var_37 = ((/* implicit */unsigned char) 8875028884578790417LL);
    var_38 = ((/* implicit */int) ((_Bool) (signed char)-1));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (short i_10 = 0; i_10 < 14; i_10 += 2) 
                {
                    {
                        var_39 = ((/* implicit */signed char) ((((arr_24 [i_7]) % (10491548535269989266ULL))) != (((/* implicit */unsigned long long int) ((long long int) var_12)))));
                        var_40 = ((/* implicit */signed char) var_0);
                        var_41 = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_7] [i_8] [i_9] [i_10])) ? (arr_16 [i_7] [i_8] [i_9] [i_10]) : (arr_0 [i_7])));
                        var_42 ^= (((~(var_8))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-30))) >= (15098199222355148087ULL))))));
                    }
                } 
            } 
        } 
        var_43 ^= ((/* implicit */signed char) var_9);
        /* LoopNest 2 */
        for (long long int i_11 = 1; i_11 < 13; i_11 += 1) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    var_44 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 8134008039757571774LL)) % (17181600219516773114ULL)));
                    var_45 = ((/* implicit */signed char) var_11);
                }
            } 
        } 
    }
}
