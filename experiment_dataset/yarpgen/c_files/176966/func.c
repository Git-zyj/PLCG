/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176966
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
    var_11 = var_2;
    var_12 &= ((/* implicit */signed char) var_0);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = (((+(((/* implicit */int) (signed char)-115)))) - (90829213));
                    var_14 *= 8204938034682736143ULL;
                    var_15 = ((/* implicit */_Bool) (-(((((/* implicit */int) ((11251155700962582655ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [13ULL] [i_0])))))) << (((((((/* implicit */_Bool) arr_5 [i_0 + 3] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28654))) : (1ULL))) - (18446744073709522959ULL)))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_1] [i_3 - 1] = ((/* implicit */short) var_6);
                        arr_12 [i_0] [i_1] [i_0] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21))) == (5383387494242874146ULL))))) : (((/* implicit */int) (_Bool)1))));
                        var_16 = ((/* implicit */long long int) var_3);
                        arr_13 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)218))));
                    }
                    for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        var_17 = ((/* implicit */_Bool) max((arr_8 [i_0] [i_1] [i_1] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)29))));
                        var_18 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) arr_1 [i_0 + 3])))));
                        var_19 = ((/* implicit */int) max((var_19), (((int) max(((-(((/* implicit */int) (short)3825)))), (((/* implicit */int) ((unsigned char) -698224086))))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_5 = 1; i_5 < 22; i_5 += 2) 
                        {
                            arr_19 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 8204938034682736143ULL)))) != (max((10241806039026815465ULL), (((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [i_2] [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (((((/* implicit */_Bool) arr_10 [i_0] [i_0 + 3] [i_1] [i_0 + 3])) ? (((/* implicit */unsigned long long int) arr_10 [i_5] [i_1] [i_1] [i_1])) : (arr_8 [i_5] [i_1] [16LL] [19U])))))));
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) max((((/* implicit */long long int) (+(arr_16 [i_5 + 1] [i_5] [i_4] [i_5])))), (max((-8727150479671201618LL), (((/* implicit */long long int) (unsigned short)42814)))))))));
                        }
                        for (unsigned int i_6 = 3; i_6 < 23; i_6 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((int) (unsigned char)5));
                            arr_22 [i_0 + 1] [i_1] [i_1] [i_6] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [5])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (10152743946318413271ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2)))))))));
                        }
                        for (unsigned int i_7 = 1; i_7 < 23; i_7 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) -291262886629105554LL)), (18446744073709551615ULL)));
                            var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned int i_8 = 1; i_8 < 23; i_8 += 4) /* same iter space */
                        {
                            var_24 *= ((/* implicit */int) (((_Bool)1) ? (max((((/* implicit */unsigned int) -1639952590)), ((+(4294967295U))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)5298)) - (((int) 17075230930735818122ULL)))))));
                            var_25 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_25 [i_8 - 1] [i_8 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 4])), (max((891543533U), (((/* implicit */unsigned int) arr_24 [i_8 - 1] [i_0]))))));
                            arr_29 [i_0] [i_1] [i_0] [i_1] [i_8] = ((/* implicit */short) max((((unsigned long long int) (!(((/* implicit */_Bool) (short)22139))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (arr_3 [i_0] [i_0])))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                            var_26 = var_0;
                        }
                    }
                    for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        arr_33 [i_1] [i_1] [i_1] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-126)) ? (8204938034682736159ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22924)))));
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (+(11978418088326935624ULL))))));
                        var_28 |= ((/* implicit */short) max((((/* implicit */unsigned int) var_4)), (arr_10 [i_0] [i_1] [i_9] [(unsigned char)18])));
                    }
                    for (unsigned int i_10 = 1; i_10 < 22; i_10 += 2) 
                    {
                        arr_36 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(4294967295U)))) || (((/* implicit */_Bool) (unsigned short)23294))));
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), (max((((/* implicit */unsigned long long int) ((((unsigned int) var_4)) < (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */int) var_6)), (arr_16 [i_10] [(signed char)14] [(signed char)14] [i_0])))), (max((15665501936207875024ULL), (((/* implicit */unsigned long long int) var_5))))))))));
                    }
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((_Bool) var_10)))));
}
