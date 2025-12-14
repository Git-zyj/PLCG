/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105442
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_17 = max((((-3121615287555513942LL) - (-6372798148138764251LL))), (((/* implicit */long long int) arr_0 [i_0] [i_0])));
        var_18 -= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) -3121615287555513943LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-69))) : (var_6)))) ? (max((-5879210252269390571LL), (((/* implicit */long long int) (signed char)13)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))))));
        arr_2 [i_0] = ((/* implicit */short) var_14);
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) -5879210252269390590LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1)))));
        var_19 = ((/* implicit */unsigned long long int) ((int) arr_3 [(signed char)16] [i_1]));
        arr_6 [i_1] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [11LL])))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2] = ((int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_2] [i_2]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_2]))) * (arr_7 [i_2]))) : ((+(arr_7 [i_2])))));
        var_20 = ((/* implicit */_Bool) max(((~(((/* implicit */int) arr_1 [i_2])))), ((~(((/* implicit */int) (short)-12878))))));
        var_21 = ((/* implicit */long long int) (+(((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) arr_4 [i_2])))) > (((((/* implicit */_Bool) (unsigned short)53067)) ? (((/* implicit */int) (unsigned short)57165)) : (((/* implicit */int) (signed char)-4)))))))));
    }
    var_22 = (signed char)(-127 - 1);
    var_23 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (min((17660514534521125629ULL), (((/* implicit */unsigned long long int) var_3)))));
    /* LoopSeq 2 */
    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        arr_13 [(_Bool)1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) (unsigned char)222)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((((_Bool)1) ? (arr_0 [i_3] [(signed char)4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [17U]))))) < (arr_11 [i_3]))))) : (max((((((/* implicit */unsigned long long int) arr_0 [i_3] [i_3])) + (17660514534521125629ULL))), (17660514534521125629ULL)))));
        var_24 = ((/* implicit */signed char) (((~(arr_0 [i_3] [i_3]))) % ((+(arr_11 [i_3])))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        for (int i_7 = 3; i_7 < 10; i_7 += 3) 
                        {
                            {
                                var_25 -= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_21 [i_7 - 3] [i_7 - 2] [i_7 - 1] [i_7 + 1] [i_7] [i_7 + 2])) ? (((/* implicit */int) arr_22 [i_3] [i_4])) : (((/* implicit */int) ((((/* implicit */int) arr_8 [i_3] [i_6])) > (-1719602144))))))));
                                arr_25 [i_5] [i_6] [i_7] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)55806))))) * (max((((/* implicit */unsigned int) (_Bool)1)), (179084108U)))));
                            }
                        } 
                    } 
                    arr_26 [i_3] |= ((/* implicit */unsigned char) (_Bool)0);
                }
            } 
        } 
    }
    for (signed char i_8 = 3; i_8 < 19; i_8 += 3) 
    {
        arr_29 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_8 - 1] [i_8])) ? (((/* implicit */int) arr_28 [i_8 + 1] [i_8 + 1])) : (((((/* implicit */_Bool) arr_28 [i_8] [i_8])) ? (((/* implicit */int) arr_27 [i_8 - 2] [i_8 - 2])) : (((/* implicit */int) arr_27 [i_8] [i_8 + 2]))))))) ? (((/* implicit */int) arr_28 [i_8] [i_8 - 2])) : (((((/* implicit */int) arr_27 [i_8 + 2] [i_8 + 1])) % (((/* implicit */int) arr_27 [i_8 + 1] [i_8 - 1]))))));
        arr_30 [i_8] [i_8 - 2] |= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_28 [i_8 - 3] [i_8 - 3])) < (((/* implicit */int) arr_28 [i_8 + 2] [i_8 + 2]))))) + ((~(((/* implicit */int) arr_28 [i_8 + 1] [i_8 + 2]))))));
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)108))) + (5791947937800082344LL))))));
        arr_31 [10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */int) (signed char)-72)) : (((/* implicit */int) (_Bool)1))));
        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((max((((/* implicit */int) (unsigned char)31)), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned short)9730), (((/* implicit */unsigned short) (signed char)4))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 9007199187632128ULL)) ? (((/* implicit */int) (signed char)-52)) : (((/* implicit */int) (_Bool)1)))))))))))));
    }
}
