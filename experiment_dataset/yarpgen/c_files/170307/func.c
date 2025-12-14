/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170307
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
    var_20 |= (((((!(((/* implicit */_Bool) 7247625850355797847ULL)))) ? (7247625850355797855ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)22))))) > (((/* implicit */unsigned long long int) var_4)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((((/* implicit */int) (!(var_16)))) + (((/* implicit */int) max((arr_1 [i_0] [i_1]), (((/* implicit */short) var_0))))))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 4; i_2 < 12; i_2 += 4) 
                {
                    arr_9 [i_0] = ((/* implicit */_Bool) (+(2791355862U)));
                    arr_10 [i_0] [(short)4] = ((/* implicit */int) 11199118223353753756ULL);
                }
                for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    arr_13 [i_0] [i_0] [(_Bool)1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0 + 2] [(unsigned short)3]))))) ? (var_6) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [(_Bool)1] [i_0]))))))) - (((/* implicit */unsigned long long int) (+((-(-345648913))))))));
                    arr_14 [i_0] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((509046761U) - (696552231U))))))));
                }
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    arr_18 [i_0 + 2] [i_4] [i_0] [i_0] = ((/* implicit */short) ((arr_0 [(short)2]) > (((/* implicit */long long int) ((((/* implicit */int) (signed char)-118)) + (((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */int) ((1250398094U) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_19))) != (var_4)))))));
                        var_23 = ((/* implicit */unsigned char) arr_4 [i_0] [i_5]);
                        arr_22 [i_0] [i_1] [(unsigned short)2] [i_5] [i_5] = ((/* implicit */unsigned long long int) (-(arr_19 [i_0 + 1] [i_0 + 2] [i_0] [i_4] [(unsigned short)8])));
                    }
                    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
                    {
                        arr_26 [i_0] [i_1] [7U] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) * (arr_25 [i_0])));
                        var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)-5)) | (((/* implicit */int) arr_12 [i_1] [(signed char)8] [i_1]))))) ^ (((arr_7 [i_0] [i_4] [i_6]) & (var_17)))));
                        var_25 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                        arr_27 [i_0] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))) / (arr_21 [i_0] [12U] [4ULL] [(short)4] [i_0]));
                        var_26 = ((/* implicit */signed char) arr_24 [i_0] [i_4] [i_4] [i_4]);
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 1; i_8 < 12; i_8 += 4) 
                        {
                            var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((13715415207082125294ULL) * (((/* implicit */unsigned long long int) -1343337113606560864LL)))))));
                            var_28 = (!(((((/* implicit */_Bool) 9689720176295150050ULL)) && (((/* implicit */_Bool) (unsigned short)57925)))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 15; i_9 += 4) 
                        {
                            var_29 = ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) arr_0 [i_7])))));
                            var_30 = (!(((/* implicit */_Bool) 11199118223353753769ULL)));
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-9))) / (3895650488516763725ULL)));
                        }
                        var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807ULL))));
                    }
                }
                var_33 = ((/* implicit */long long int) (+(3598415066U)));
            }
        } 
    } 
}
