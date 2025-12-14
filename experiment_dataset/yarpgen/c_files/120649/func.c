/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120649
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
    for (short i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 12; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) 2014330542);
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)10834)) : (((/* implicit */int) (_Bool)1))))) ? (((-1340619299) / (-1340619302))) : ((~(((/* implicit */int) (unsigned char)186)))))))));
                            var_20 = ((/* implicit */signed char) -1340619299);
                            var_21 = ((/* implicit */long long int) max(((+(((/* implicit */int) (unsigned char)97)))), (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1])) == (((/* implicit */int) (_Bool)0)))))));
                            var_22 = ((/* implicit */short) ((((/* implicit */int) var_0)) == (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)12564)) || (((/* implicit */_Bool) arr_5 [i_0 - 1] [i_3])))))));
                        }
                    } 
                } 
                var_23 = min((((/* implicit */int) (signed char)-119)), (2147483619));
                /* LoopSeq 2 */
                for (unsigned short i_4 = 1; i_4 < 12; i_4 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */long long int) arr_5 [i_0] [i_1]);
                    arr_12 [3U] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44002)) ? (-1340619299) : (((/* implicit */int) arr_3 [i_0]))))) ? (((unsigned int) 4398045986816ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [(unsigned char)4] [i_4 - 1] [i_0] [i_4]))))));
                    var_25 = ((/* implicit */int) min((var_25), (min(((~(((/* implicit */int) (signed char)-90)))), (((/* implicit */int) min((arr_4 [i_0 + 3] [i_1]), (((/* implicit */short) (_Bool)0)))))))));
                }
                for (unsigned short i_5 = 1; i_5 < 12; i_5 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_26 = ((/* implicit */long long int) 4013160215740275012ULL);
                        var_27 = ((/* implicit */unsigned short) min((((unsigned long long int) arr_14 [i_5])), (((/* implicit */unsigned long long int) arr_8 [(short)6] [i_1] [i_6] [i_5] [i_1]))));
                        var_28 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(4294967284U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)251), (((/* implicit */unsigned char) (_Bool)1)))))) : (((((/* implicit */_Bool) var_11)) ? (arr_5 [i_6] [i_1]) : (((/* implicit */unsigned int) min((569908304), (((/* implicit */int) (unsigned char)120)))))))));
                    }
                    for (int i_7 = 1; i_7 < 12; i_7 += 3) 
                    {
                        var_29 = ((/* implicit */signed char) ((1249658677U) - (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
                        arr_20 [i_1] [i_5] [i_5] [i_5] [i_7 - 1] [i_5] = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5848124458460816107LL)) && (((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0]))))), (((((/* implicit */unsigned long long int) 3313827474U)) | (10530776642728259820ULL))))), (((/* implicit */unsigned long long int) 2147483647))));
                    }
                    arr_21 [i_0] [i_1] [i_5] [i_5 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)26472))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-11274))) * (arr_5 [i_0] [(_Bool)1]))) : (max((((/* implicit */unsigned int) arr_2 [i_0 - 2])), (arr_5 [i_0 + 1] [i_1])))));
                }
            }
        } 
    } 
    var_30 = ((/* implicit */_Bool) var_10);
    var_31 = ((/* implicit */int) var_17);
    var_32 = ((/* implicit */long long int) ((short) var_10));
}
