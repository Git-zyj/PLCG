/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121418
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_6))) ? (min(((~(((/* implicit */int) (unsigned char)132)))), ((+(((/* implicit */int) var_2)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))))))));
    var_13 = ((/* implicit */long long int) max((var_13), (var_6)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)115)), (1023U)));
                                var_14 |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))) & (((((/* implicit */_Bool) min((13362926287820755625ULL), (((/* implicit */unsigned long long int) var_8))))) ? (((arr_2 [i_0]) / (3811084842277436551ULL))) : (((/* implicit */unsigned long long int) var_3))))));
                                var_15 = ((/* implicit */signed char) var_3);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    for (short i_6 = 3; i_6 < 9; i_6 += 1) 
                    {
                        {
                            var_16 = 3188489019U;
                            var_17 = min((((/* implicit */unsigned long long int) 5878052139569074016LL)), (arr_3 [i_0] [i_0] [i_0]));
                            var_18 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_6] [i_6] [i_6 - 2] [i_0]))) : (var_4))));
                            /* LoopSeq 4 */
                            for (signed char i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
                            {
                                var_19 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) 5083817785888795987ULL)) ? (arr_16 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)42))))))) + (((/* implicit */unsigned long long int) (+(max((var_6), (((/* implicit */long long int) arr_1 [i_7] [i_7])))))))));
                                var_20 = ((/* implicit */long long int) ((short) (_Bool)1));
                            }
                            /* vectorizable */
                            for (signed char i_8 = 0; i_8 < 10; i_8 += 3) /* same iter space */
                            {
                                var_21 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_6 - 2] [i_6 - 2] [i_6 + 1] [i_6 - 3])) << (((((/* implicit */int) (short)-1)) + (27)))));
                                arr_26 [i_0] [i_1] [i_6 - 3] = ((/* implicit */_Bool) arr_20 [i_1] [i_5] [i_6]);
                            }
                            for (signed char i_9 = 0; i_9 < 10; i_9 += 3) /* same iter space */
                            {
                                arr_31 [0U] [0U] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (~(var_6)))) : (((unsigned long long int) min((var_1), (arr_5 [0] [i_1]))))));
                                arr_32 [i_0] [i_0] [i_1] [i_5] [i_9] [i_9] = ((long long int) 13362926287820755628ULL);
                                var_22 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5] [i_1]))) + (((((/* implicit */_Bool) -5878052139569074041LL)) ? (13362926287820755605ULL) : (((/* implicit */unsigned long long int) 3221225472U))))));
                                arr_33 [5LL] [i_1] [i_5] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)45))) & (477006139641603260LL)))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)27816)))));
                            }
                            for (signed char i_10 = 0; i_10 < 10; i_10 += 3) /* same iter space */
                            {
                                var_23 = ((/* implicit */int) max((var_23), ((+(((((arr_25 [i_10] [i_0] [i_5] [i_5] [i_0] [i_0]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))) & (((/* implicit */int) (unsigned char)95))))))));
                                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) 13362926287820755606ULL))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
