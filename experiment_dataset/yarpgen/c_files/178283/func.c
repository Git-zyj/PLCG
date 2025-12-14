/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178283
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (3929097630820947983LL)));
                    arr_7 [i_2] &= ((/* implicit */unsigned int) (_Bool)1);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((arr_9 [i_3]) < (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3] [i_4] [i_3]))))) ? (((/* implicit */int) ((arr_9 [i_4]) == (((/* implicit */long long int) 3201990018U))))) : (((/* implicit */int) arr_2 [i_3] [i_3] [i_4])))))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 1; i_5 < 15; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_6)), ((short)-653))))) ^ (((((/* implicit */_Bool) var_10)) ? (arr_16 [i_3] [i_4] [i_5] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-55))))))));
                            arr_17 [i_3] [i_5] [i_5] = ((/* implicit */_Bool) (short)8077);
                            /* LoopSeq 4 */
                            for (unsigned short i_7 = 0; i_7 < 17; i_7 += 2) 
                            {
                                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((int) (~(((/* implicit */int) (signed char)54))))))));
                                var_15 &= ((/* implicit */_Bool) (+(((/* implicit */int) ((short) (-(var_11)))))));
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (+(((((unsigned long long int) (signed char)-55)) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-54))) : (var_11)))))))))));
                            }
                            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                            {
                                arr_23 [i_4] [i_4] &= ((/* implicit */_Bool) var_4);
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (unsigned char)255))));
                                arr_24 [i_3] [i_3] [i_4] [i_3] [i_3] [i_5] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10852))) : (var_7)))) ? (arr_4 [i_3] [i_3] [i_5 - 1] [i_8]) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                                var_18 = ((/* implicit */_Bool) (+(((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)8095)) : (((/* implicit */int) arr_18 [12U] [i_4] [i_5] [i_6] [i_5])))) / (((/* implicit */int) ((var_11) >= (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
                            }
                            for (unsigned int i_9 = 0; i_9 < 17; i_9 += 4) /* same iter space */
                            {
                                var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_3] [i_3] [i_3] [i_3] [i_5 + 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((-3929097630820947984LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) ? (min((((/* implicit */long long int) var_9)), (arr_13 [i_4]))) : ((-(3929097630820947980LL)))));
                                var_20 += ((/* implicit */unsigned short) arr_5 [i_9]);
                            }
                            for (unsigned int i_10 = 0; i_10 < 17; i_10 += 4) /* same iter space */
                            {
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-21583)) + (((/* implicit */int) arr_3 [i_6]))))) ? ((~(((/* implicit */int) arr_22 [i_3] [i_3] [i_3] [i_3] [i_10])))) : (((/* implicit */int) max(((unsigned short)32764), (((/* implicit */unsigned short) arr_5 [i_3])))))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_15 [i_3] [i_4] [i_6] [i_4]))))) ? ((-(var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_3] [i_3] [i_10] [i_10] [i_5 + 1] [i_3]))))))))));
                                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */int) arr_21 [i_5] [i_5 - 1] [i_4] [i_5] [(signed char)12] [i_5 + 2])) > (var_3)))) : (((/* implicit */int) ((_Bool) arr_4 [i_4] [i_5 + 2] [i_4] [i_4]))))))));
                                arr_29 [i_3] [i_5 + 2] [i_3] &= arr_14 [i_4] [i_4] [i_4] [i_4];
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) (~(-1084975410)));
}
