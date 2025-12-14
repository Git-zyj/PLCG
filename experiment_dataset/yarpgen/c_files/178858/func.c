/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178858
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 2; i_2 < 16; i_2 += 4) 
                {
                    var_16 = ((/* implicit */signed char) (+(11039725705644199919ULL)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_3))));
                                var_18 &= ((/* implicit */signed char) (+(min(((-(((/* implicit */int) var_13)))), (((/* implicit */int) ((((/* implicit */_Bool) 16379717275913021538ULL)) || (((/* implicit */_Bool) (signed char)38)))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)38)) ^ (((/* implicit */int) (signed char)38))))) ^ (var_2)));
                }
                for (unsigned char i_5 = 4; i_5 < 18; i_5 += 3) 
                {
                    arr_15 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_8 [i_5] [i_5] [i_5 - 1] [i_5]))));
                    arr_16 [i_0] [i_0] [i_1] [i_5 + 1] = ((/* implicit */unsigned long long int) arr_13 [i_0] [i_1]);
                }
                for (signed char i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 17; i_7 += 3) 
                    {
                        for (signed char i_8 = 1; i_8 < 18; i_8 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)127))));
                                var_21 = ((/* implicit */unsigned char) var_9);
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_10))));
                                arr_27 [i_0] [(unsigned char)5] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551609ULL)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (signed char)-39))));
                                arr_28 [i_0] [i_1] [i_6] [i_7] [i_6] [i_7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10ULL)) ? (((/* implicit */int) (signed char)39)) : (((/* implicit */int) (unsigned char)8))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) ((signed char) var_4))), ((unsigned char)247)))) : (((/* implicit */int) min(((!(((/* implicit */_Bool) 10ULL)))), ((!(((/* implicit */_Bool) 2ULL)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((signed char)-40), (arr_17 [i_0] [i_1] [i_9]))))))) >= ((((!(((/* implicit */_Bool) 13386425744337979076ULL)))) ? (23ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7)))))));
                        /* LoopSeq 1 */
                        for (signed char i_10 = 1; i_10 < 18; i_10 += 3) 
                        {
                            arr_34 [i_0] [i_0] [i_9] [i_0] [i_10 - 1] [i_9] [i_0] = ((/* implicit */unsigned char) var_15);
                            var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)39))));
                            var_25 &= ((/* implicit */unsigned char) var_14);
                        }
                    }
                    var_26 |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_6] [i_1] [i_1] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) arr_6 [i_0] [i_0]))))) : (((/* implicit */int) var_6))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_11 = 2; i_11 < 18; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 2; i_12 < 15; i_12 += 3) 
                    {
                        {
                            var_27 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-108))) & (5060318329371572540ULL)))) || (((/* implicit */_Bool) (signed char)(-127 - 1)))));
                            /* LoopSeq 1 */
                            for (signed char i_13 = 4; i_13 < 18; i_13 += 1) 
                            {
                                var_28 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)142))))) < (((/* implicit */int) ((min((((/* implicit */unsigned long long int) (signed char)39)), (var_2))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)41))))))));
                                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) min((15952593834298709331ULL), (((/* implicit */unsigned long long int) (unsigned char)0)))))));
                                var_30 |= ((/* implicit */signed char) arr_35 [i_0] [i_0]);
                            }
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (~((~(min((((/* implicit */unsigned long long int) var_4)), (arr_38 [i_0] [i_0] [i_11] [i_12] [i_0] [i_11 - 1]))))))))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */unsigned long long int) (signed char)-40);
            }
        } 
    } 
    var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)216))))) || (((/* implicit */_Bool) (~(0ULL))))));
    /* LoopNest 2 */
    for (unsigned long long int i_14 = 2; i_14 < 14; i_14 += 4) 
    {
        for (unsigned long long int i_15 = 1; i_15 < 16; i_15 += 4) 
        {
            {
                var_34 = ((/* implicit */signed char) min(((unsigned char)30), (((/* implicit */unsigned char) (signed char)125))));
                var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) < (((((/* implicit */_Bool) (unsigned char)225)) ? (7495731654363501235ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))))));
            }
        } 
    } 
    var_36 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)(-127 - 1)))));
}
