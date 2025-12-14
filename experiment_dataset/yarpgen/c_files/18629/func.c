/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18629
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
    var_11 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) var_10))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned char) arr_2 [i_0]))))) && (((/* implicit */_Bool) var_4))))), (var_5)));
        arr_4 [i_0] = ((/* implicit */long long int) (!((!(arr_0 [i_0])))));
        var_13 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_2 [i_0])), (var_4)))), (min((((/* implicit */unsigned int) var_9)), (var_2)))))), (var_8)));
        var_14 = ((/* implicit */signed char) max(((+(3566408252763188074LL))), (((/* implicit */long long int) var_3))));
        var_15 = ((/* implicit */signed char) min((max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-66)) - (arr_1 [i_0])))), (min((var_0), (var_5))))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)221)) && (((/* implicit */_Bool) -5161251834823542455LL)))))) >= (((long long int) (unsigned char)224)))))));
    }
    for (unsigned short i_1 = 1; i_1 < 19; i_1 += 2) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) ^ ((+(min((4294967278U), (((/* implicit */unsigned int) (short)32767))))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    var_17 = ((/* implicit */int) ((max((min((((/* implicit */long long int) (short)-4109)), (-4415120527481385586LL))), (((/* implicit */long long int) min((var_5), (((/* implicit */unsigned int) arr_9 [i_1] [i_2] [i_2] [i_1]))))))) - (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_1 + 1] [i_3 - 1])) - (((/* implicit */int) max((((/* implicit */short) (signed char)-75)), ((short)25869)))))))));
                    var_18 += ((/* implicit */_Bool) min((((/* implicit */long long int) max((arr_9 [i_1] [i_1 + 1] [i_1 + 1] [(unsigned short)12]), (arr_9 [i_1] [i_1 - 1] [i_1 - 1] [(short)14])))), (((-5161251834823542455LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)58)))))));
                }
            } 
        } 
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((max(((-(var_2))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))))) + (((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_1 + 1] [i_1 - 1]))))))))));
        var_20 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) (unsigned char)7)) >= (-2147483645))));
    }
    for (unsigned char i_4 = 1; i_4 < 13; i_4 += 4) 
    {
        arr_15 [i_4] = var_9;
        var_21 = ((/* implicit */signed char) ((unsigned int) max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)87))) % (38U))), (((/* implicit */unsigned int) (unsigned char)237)))));
    }
    for (int i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        /* LoopSeq 4 */
        for (signed char i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((short) arr_18 [i_5]))), (min((((/* implicit */unsigned long long int) arr_21 [i_5] [i_5])), (var_10)))));
            var_23 = ((/* implicit */int) ((unsigned short) min((arr_21 [i_5] [i_5]), (arr_21 [i_5] [i_5]))));
            arr_22 [i_6] = ((/* implicit */int) ((long long int) var_10));
        }
        for (signed char i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
        {
            var_24 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (max((arr_21 [i_7] [i_7]), (arr_21 [i_5] [i_7]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_8))))));
            var_25 = ((/* implicit */_Bool) ((short) (-(((/* implicit */int) ((-3440990770260366196LL) >= (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
        }
        for (int i_8 = 0; i_8 < 23; i_8 += 2) 
        {
            var_26 = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */_Bool) (short)25885)) && (((/* implicit */_Bool) (short)-32745))))) / ((+(((/* implicit */int) (short)25869)))))) >= (((/* implicit */int) (unsigned char)209))));
            arr_27 [i_5] [i_8] &= ((/* implicit */long long int) -19);
            var_27 += ((/* implicit */unsigned char) var_1);
            var_28 = ((/* implicit */int) max((max((min((var_8), (((/* implicit */unsigned long long int) arr_20 [i_5] [i_8] [i_5])))), (max((((/* implicit */unsigned long long int) var_7)), (var_8))))), (((/* implicit */unsigned long long int) min((arr_25 [i_5]), (arr_25 [i_5]))))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_10 = 0; i_10 < 23; i_10 += 4) 
            {
                var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((short) arr_30 [i_5] [i_5])))));
                var_30 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((min((5161251834823542455LL), (((/* implicit */long long int) (short)-15180)))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)6)) || (((/* implicit */_Bool) 477458193))))))))), ((+(((var_10) ^ (((/* implicit */unsigned long long int) 1367259328U))))))));
                var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) ((short) (signed char)-64)))));
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 23; i_11 += 1) 
                {
                    for (long long int i_12 = 0; i_12 < 23; i_12 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned int) ((long long int) ((max((8839687732373531169LL), (((/* implicit */long long int) arr_26 [i_5] [i_10] [i_5])))) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_7)))))));
                            var_33 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-23))) <= (-3846397279686556062LL))))));
                        }
                    } 
                } 
            }
            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) min((min((((/* implicit */int) arr_37 [i_5] [i_5] [i_5] [i_5] [i_5] [i_9] [i_9])), (min((((/* implicit */int) var_6)), (arr_20 [i_5] [i_5] [i_9]))))), ((~(((/* implicit */int) (signed char)3)))))))));
            var_35 = ((/* implicit */signed char) arr_26 [i_5] [i_5] [i_9]);
        }
        arr_40 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_23 [i_5] [i_5] [i_5])), (var_8)))) || ((!(((/* implicit */_Bool) arr_23 [i_5] [i_5] [i_5]))))));
    }
}
