/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103166
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
    var_20 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 6; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)255)) ? (((((/* implicit */_Bool) (unsigned short)255)) ? (385367784141459328LL) : (385367784141459328LL))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-39)))))));
                    var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)242)) ? (-3672790123091950632LL) : (17592186044415LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [0LL] [i_2] [i_0 - 1]))))) : (((/* implicit */int) (unsigned char)60)));
                }
            } 
        } 
        var_23 = ((/* implicit */short) var_14);
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                {
                    arr_16 [i_4] [i_3] [(short)0] = (unsigned short)1147;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        for (short i_6 = 1; i_6 < 9; i_6 += 1) 
                        {
                            {
                                arr_23 [8ULL] [4LL] [(unsigned char)8] [(unsigned char)8] = (+(1505275284334558609ULL));
                                var_24 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_19 [i_6] [0ULL] [i_4] [i_3] [i_0] [(unsigned char)3]))))))), ((+(68719476735ULL)))));
                                arr_24 [i_6 - 1] [i_3 - 1] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)43))));
                            }
                        } 
                    } 
                    var_25 &= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)104))) ^ (arr_1 [i_3] [i_4]))))))) == (((((/* implicit */_Bool) min((10996726058667356648ULL), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -3720447052800750811LL))))) : ((-(33554431)))))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned long long int) var_9);
    }
    /* LoopSeq 2 */
    for (unsigned short i_7 = 2; i_7 < 8; i_7 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 1) 
        {
            for (unsigned char i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                {
                    var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_0 [i_9] [7ULL]))))) ? (arr_10 [i_7] [i_8] [1ULL]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_17))))))) >= (((((/* implicit */_Bool) arr_1 [i_7] [7ULL])) ? ((~(17306596639697211824ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)220), (arr_7 [(unsigned char)5] [i_9] [(_Bool)1] [(unsigned char)5])))))))));
                    var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_15))));
                }
            } 
        } 
        arr_36 [i_7] [i_7 - 1] = ((/* implicit */long long int) min((var_6), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7)))))));
    }
    for (int i_10 = 2; i_10 < 20; i_10 += 2) 
    {
        var_29 *= ((_Bool) (!(((/* implicit */_Bool) var_6))));
        var_30 = ((/* implicit */short) (+(6986340054372339326LL)));
    }
}
