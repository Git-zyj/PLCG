/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125795
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
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */_Bool) (-((~(((/* implicit */int) ((((/* implicit */int) (unsigned char)254)) <= (((/* implicit */int) (signed char)-73)))))))));
                arr_7 [i_1] = ((/* implicit */unsigned int) min(((+(((/* implicit */int) (signed char)73)))), (((/* implicit */int) ((((/* implicit */int) (signed char)-97)) <= (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1])))))));
                var_14 *= ((/* implicit */unsigned char) ((long long int) min((((/* implicit */long long int) (signed char)119)), (min((1080866150414283879LL), (((/* implicit */long long int) var_0)))))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (signed char)96))));
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) min((min((min((((/* implicit */unsigned char) (signed char)72)), (arr_9 [i_0 - 2] [i_1] [i_0 - 2] [i_2]))), ((unsigned char)46))), (((/* implicit */unsigned char) arr_4 [(signed char)9] [i_2])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 4; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) arr_11 [i_0]);
                                var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                                var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) 0U)))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_5 = 1; i_5 < 21; i_5 += 3) 
                {
                    var_20 = ((/* implicit */_Bool) (+(((((/* implicit */int) min(((signed char)-14), (((/* implicit */signed char) (_Bool)1))))) / (((/* implicit */int) ((signed char) (_Bool)1)))))));
                    var_21 |= ((/* implicit */unsigned long long int) (+(((unsigned int) var_13))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 1; i_7 < 22; i_7 += 4) 
                    {
                        var_22 ^= ((/* implicit */unsigned char) ((signed char) ((long long int) ((arr_22 [i_7] [i_6] [i_1] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)230))))));
                        var_23 = ((/* implicit */int) (_Bool)1);
                    }
                    for (signed char i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned int) (!((!(((((/* implicit */_Bool) (unsigned char)12)) && (((/* implicit */_Bool) var_7))))))));
                        var_25 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-1))))) || (((/* implicit */_Bool) var_13)))))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((3044206868U) - (3044206858U)))))) && (((/* implicit */_Bool) 4788278741375838131LL))));
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) var_13))));
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)108))))) : (((10LL) | (((/* implicit */long long int) 2167100800U)))))))));
                        var_29 = ((/* implicit */signed char) ((((/* implicit */long long int) 337081134U)) + (((((/* implicit */long long int) ((/* implicit */int) (signed char)89))) + (4634170748680780587LL)))));
                    }
                    for (long long int i_10 = 2; i_10 < 20; i_10 += 3) /* same iter space */
                    {
                        var_30 = ((/* implicit */long long int) (((((-(((/* implicit */int) (signed char)73)))) + (2147483647))) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (141)))));
                        var_31 = ((/* implicit */_Bool) (signed char)100);
                        var_32 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_14 [i_0] [i_0] [i_0]))));
                    }
                    /* vectorizable */
                    for (long long int i_11 = 2; i_11 < 20; i_11 += 3) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned int) var_5);
                        var_34 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)72))))) * (2869161109U)));
                        arr_36 [i_11] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)206)) != (((/* implicit */int) (unsigned char)80)))))));
                        var_35 = ((/* implicit */long long int) min((var_35), (-4634170748680780576LL)));
                    }
                    var_36 += ((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_0] [i_0 + 1] [i_0]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        var_37 = ((/* implicit */unsigned char) ((arr_30 [i_12 - 1] [i_6] [i_1] [i_0 - 2]) ? (1086410849U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_12 - 1] [i_6] [i_1])))));
                        var_38 = ((/* implicit */long long int) (signed char)-92);
                        var_39 = ((/* implicit */long long int) var_5);
                    }
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_13 = 1; i_13 < 12; i_13 += 3) 
    {
        for (long long int i_14 = 2; i_14 < 12; i_14 += 3) 
        {
            {
                var_40 = ((/* implicit */signed char) 535822336ULL);
                var_41 = ((/* implicit */long long int) (((~(((/* implicit */int) (signed char)72)))) < (((/* implicit */int) ((((/* implicit */int) (unsigned short)15138)) > (((/* implicit */int) arr_27 [i_14 + 1] [i_14 - 1] [i_13 + 1] [i_13])))))));
                var_42 = ((/* implicit */_Bool) (-(((((/* implicit */int) ((unsigned char) 2892820946U))) - (((/* implicit */int) (unsigned short)65535))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_15 = 1; i_15 < 14; i_15 += 2) 
    {
        for (unsigned char i_16 = 3; i_16 < 15; i_16 += 2) 
        {
            {
                var_43 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_4 [i_15 + 2] [i_15 + 3])) ? ((-(4235374658637428261ULL))) : (((/* implicit */unsigned long long int) 1771659170U))))));
                var_44 = ((/* implicit */unsigned long long int) min((min((201326592U), (((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))))), (min((((/* implicit */unsigned int) arr_14 [i_15] [i_15] [i_15 + 1])), (2225921034U)))));
            }
        } 
    } 
    var_45 *= (!(((/* implicit */_Bool) ((((((/* implicit */int) var_7)) / (((/* implicit */int) (signed char)-127)))) * ((+(((/* implicit */int) (unsigned short)13220))))))));
}
