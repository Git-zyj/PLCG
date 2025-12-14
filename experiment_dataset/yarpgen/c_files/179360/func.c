/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179360
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) arr_2 [i_0]))));
        arr_3 [i_0] = ((/* implicit */int) ((((int) min((var_3), (((/* implicit */unsigned short) var_6))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (-(2868944366U)))))))));
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 182884877))))) : (-182884857)));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_15 = ((/* implicit */short) var_0);
        var_16 = ((/* implicit */unsigned char) ((signed char) var_0));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            arr_10 [i_1] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
            var_17 = ((/* implicit */signed char) 2200018299U);
            var_18 &= ((/* implicit */unsigned int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -182884866)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_5 [i_1]))))))), (((unsigned char) ((var_9) / (((/* implicit */int) (unsigned char)64)))))));
            /* LoopSeq 2 */
            for (long long int i_3 = 2; i_3 < 20; i_3 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 3; i_4 < 23; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) (-(max((((((/* implicit */int) var_8)) - (((/* implicit */int) var_4)))), (((((/* implicit */int) var_10)) - (var_12)))))));
                            arr_19 [i_2] [i_3] [i_3] [i_5] = ((/* implicit */_Bool) var_1);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_6 = 2; i_6 < 23; i_6 += 3) 
                {
                    for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        {
                            arr_24 [i_1] [i_1] [i_1] [i_1] [i_3] [i_1] [18U] = ((/* implicit */short) ((int) 2262751411U));
                            arr_25 [10LL] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) var_10);
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)252)) ? ((+(((-1228820634) - (-1786120378))))) : (((/* implicit */int) ((_Bool) var_6)))));
                        }
                    } 
                } 
                var_21 *= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && ((_Bool)1)));
                var_22 = ((/* implicit */int) arr_15 [i_1] [i_1]);
            }
            for (long long int i_8 = 2; i_8 < 20; i_8 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 24; i_9 += 3) 
                {
                    for (unsigned char i_10 = 1; i_10 < 20; i_10 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) min(((+(min((2734888498U), (((/* implicit */unsigned int) 1904963675)))))), (((/* implicit */unsigned int) (+(((((/* implicit */int) var_4)) - (((/* implicit */int) (short)0))))))))))));
                            arr_36 [i_1] [i_2] [(unsigned char)6] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 1767837610U)) ? (-3864124788795158823LL) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_1] [i_2] [i_1]))))))) != ((((+(arr_33 [i_1] [i_1] [i_1] [i_2] [i_1]))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (arr_8 [11U] [i_2] [(_Bool)1]) : (((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
                arr_37 [i_8] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 0U)), (1023ULL)));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 24; i_11 += 3) 
                {
                    for (unsigned char i_12 = 1; i_12 < 23; i_12 += 3) 
                    {
                        {
                            var_24 |= ((/* implicit */int) arr_28 [i_11] [i_12]);
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */int) (short)20724)) >= (((/* implicit */int) (short)-2791))))) >> (((131071U) - (131058U))))) | (((/* implicit */int) (unsigned char)145)))))));
                            var_26 *= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) var_8)) > ((+(var_12))))))));
                        }
                    } 
                } 
            }
        }
        /* LoopSeq 1 */
        for (signed char i_13 = 3; i_13 < 23; i_13 += 4) 
        {
            arr_46 [i_13] = ((((/* implicit */_Bool) 3364837440U)) ? ((-((-(((/* implicit */int) (short)3341)))))) : ((-(arr_4 [i_1]))));
            var_27 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(1034778895U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)118))) - (arr_21 [i_1] [i_1])))) : (min((((/* implicit */unsigned long long int) (short)24427)), (var_7))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((-223707750) >= (-360891879)))) > (((((((/* implicit */int) (short)-11394)) + (2147483647))) >> (((/* implicit */int) var_10))))))))));
            arr_47 [i_13] = ((((int) 1445504479U)) / (((/* implicit */int) ((var_5) != (((/* implicit */int) (signed char)127))))));
            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_1] [i_13] [i_1] [i_13])) ? (-977891536) : (((/* implicit */int) var_8)))))));
            var_29 &= ((/* implicit */_Bool) var_0);
        }
    }
    var_30 = ((/* implicit */unsigned int) (+(806475658)));
}
