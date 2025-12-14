/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147479
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (+(((/* implicit */int) var_9)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_14 ^= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1]))))), (min((min((((/* implicit */unsigned int) var_10)), (arr_1 [i_0]))), (((/* implicit */unsigned int) min((var_8), (((/* implicit */short) var_4)))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_7), ((signed char)32)))) ? (((/* implicit */int) min(((unsigned char)170), (((/* implicit */unsigned char) (signed char)8))))) : (((/* implicit */int) min((arr_9 [i_0] [i_1] [i_0]), (((/* implicit */unsigned short) (signed char)12)))))))), ((+(((((/* implicit */_Bool) 7384049415395186938ULL)) ? (var_0) : (((/* implicit */unsigned long long int) var_3))))))));
                            /* LoopSeq 3 */
                            for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                            {
                                var_15 += ((/* implicit */unsigned short) max((min((arr_0 [(_Bool)1]), (arr_0 [i_4]))), (arr_0 [i_0])));
                                var_16 = ((/* implicit */unsigned int) (unsigned char)229);
                                var_17 -= ((/* implicit */short) arr_4 [i_0] [i_3]);
                                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_14 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0])), (arr_1 [i_0]))))));
                            }
                            for (unsigned short i_5 = 1; i_5 < 18; i_5 += 3) 
                            {
                                arr_19 [i_0] [i_0] [i_2] [i_3] [(unsigned char)1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_17 [i_0] [i_1] [i_0] [i_3] [i_5] [i_0])), (var_6)))) ? (((/* implicit */int) min((arr_18 [i_0] [i_1] [i_2] [i_3] [i_0]), ((signed char)-32)))) : (((/* implicit */int) arr_16 [i_0]))))));
                                arr_20 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [i_1] = min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_8 [i_5]), (var_8))))))), (min((arr_2 [i_5 - 1] [i_5 - 1]), (((/* implicit */unsigned short) arr_17 [i_5] [i_5] [i_5 + 1] [i_5] [i_5 + 1] [i_5 - 1])))));
                            }
                            /* vectorizable */
                            for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) 
                            {
                                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_1] [i_2] [i_3] [i_6])) ? (((/* implicit */int) (short)-19588)) : (((/* implicit */int) arr_0 [i_0])))))));
                                var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [i_3] [i_3] [i_6])) : (((/* implicit */int) (unsigned char)82))));
                                arr_25 [i_3] |= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_1]))));
                                arr_26 [i_0] [5U] [i_1] [i_3] [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)186))));
                            }
                            var_20 *= ((/* implicit */signed char) min(((~(((/* implicit */int) arr_11 [i_0] [i_3] [i_0] [i_0] [i_0])))), (min((((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */int) (unsigned char)82)) : (((/* implicit */int) (signed char)-90)))), (((/* implicit */int) ((-212804114337457181LL) == (((/* implicit */long long int) ((/* implicit */int) (short)12775))))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), ((unsigned short)3541)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_11 [i_0] [i_1] [i_0] [i_0] [i_1])), ((signed char)-83))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)86))) : (2974979200263139587ULL))))))))));
                arr_27 [i_0] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) min(((short)11548), (((/* implicit */short) (signed char)98))))) ? (min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])), (17578646367910932592ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_14 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 18; i_7 += 1) 
    {
        for (signed char i_8 = 0; i_8 < 18; i_8 += 1) 
        {
            {
                var_22 |= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_31 [(_Bool)1] [i_7] [i_8])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_7])) || (((/* implicit */_Bool) arr_1 [i_7])))))) : (min((arr_1 [i_7]), (arr_1 [i_7])))));
                var_23 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_21 [i_7] [i_7] [i_7] [i_8] [i_7])))), ((+(((/* implicit */int) arr_21 [i_8] [i_8] [i_7] [i_7] [i_7]))))));
            }
        } 
    } 
}
