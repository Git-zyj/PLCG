/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185169
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
    var_13 = ((/* implicit */_Bool) max((min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))))), (9223372036854775791LL))), (((/* implicit */long long int) var_3))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3148276224642860903LL)) ? (70368744177664ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-12)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), ((((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_2]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)65535)), (4294967283U)))) ? (((var_12) ? (var_0) : (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)1))))))) : (max(((+(5916427899564647850ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) / (arr_4 [i_1]))))))))));
                    arr_7 [i_0] [i_1] = ((/* implicit */long long int) var_0);
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */long long int) ((arr_0 [i_0] [i_3]) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3263032431U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19))) : (768058850015972660LL)))) ? ((-(var_9))) : (((/* implicit */int) ((8507594525363051743ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-50))))))))));
                        var_17 |= ((/* implicit */int) ((unsigned short) (!(((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_2)))))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        arr_14 [i_4] [(short)6] = ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65498))) ^ (12530316174144903750ULL)));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min(((+(17660184266140077173ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_4 [i_0]) : (arr_10 [i_4] [i_2] [i_1] [5U] [(_Bool)1])))) || (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (var_0))))))));
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) 4294967280U))));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) -7876022692618016480LL)) ? (5916427899564647850ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 782258336)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))))))));
                    }
                }
            } 
        } 
        var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)0)), (2430633643U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -7655470646595636362LL)) ? (12530316174144903773ULL) : (((/* implicit */unsigned long long int) -1436857961))))))))) : (12530316174144903766ULL)));
        var_22 *= ((/* implicit */_Bool) 0U);
        var_23 = ((/* implicit */unsigned short) var_5);
    }
    var_24 = ((/* implicit */unsigned short) ((var_7) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -24)) ? (12346333776696736005ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) var_3)) ? (130560LL) : (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) -782258313)), (3964924131U)))))))));
}
