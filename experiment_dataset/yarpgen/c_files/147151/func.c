/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147151
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] [4ULL] = ((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)65535), ((unsigned short)50495))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_10 [i_1] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((arr_0 [i_2]) ? (1743576192U) : (0U)))), (((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_8)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
                    {
                        var_16 = ((/* implicit */signed char) arr_8 [i_0] [i_1] [i_2] [i_3]);
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((unsigned int) (signed char)21)) << (((((/* implicit */int) (unsigned short)43467)) - (43457)))))) ? (((((arr_13 [i_0] [i_1] [20U] [i_3]) ? (((/* implicit */int) arr_4 [13U])) : (((/* implicit */int) (signed char)105)))) * (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0]))))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)61)) <= (((/* implicit */int) (unsigned short)26958)))))));
                        arr_14 [i_0] [i_0] [i_1] = ((/* implicit */short) ((arr_1 [(short)9]) ? (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-49)))) - (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) arr_12 [i_0] [i_1] [i_2] [10LL] [i_3]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_0)))))))));
                        var_18 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (12856829892097605986ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) (unsigned short)18130)))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min(((~(((/* implicit */int) var_2)))), ((~(((/* implicit */int) (signed char)-47)))))))));
                        var_20 = ((/* implicit */unsigned short) ((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)105)))))))));
                    }
                    var_21 -= ((/* implicit */short) ((max((((/* implicit */unsigned int) arr_1 [i_1])), (0U))) == (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) ((var_12) < (4294967295U)))), (arr_15 [i_0] [i_0] [i_2])))))));
                    arr_17 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)127)))))) * ((-(var_12))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967280U)) ? (50287069) : (((/* implicit */int) (unsigned short)0)))))));
                }
            } 
        } 
        var_22 = ((/* implicit */long long int) min((max((arr_5 [i_0] [i_0]), (arr_5 [i_0] [(_Bool)1]))), (((/* implicit */unsigned short) min((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)14))))), (var_11))))));
        arr_18 [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0])) + (((/* implicit */int) min((arr_6 [i_0] [i_0]), (arr_13 [i_0] [i_0] [(_Bool)1] [(signed char)22]))))))), (min((((((/* implicit */_Bool) (signed char)100)) ? (1293396090U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) arr_11 [i_0]))))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        var_23 |= max((((/* implicit */unsigned int) (unsigned short)65535)), (max((((/* implicit */unsigned int) (unsigned char)255)), (1094164192U))));
        var_24 = var_7;
        arr_21 [i_5] = ((/* implicit */_Bool) 333341485559922814ULL);
    }
    for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        arr_25 [i_6] = ((/* implicit */signed char) max(((~(var_12))), (min((min((((/* implicit */unsigned int) (_Bool)1)), (13U))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_6] [i_6])))))))));
        var_25 = min((((((((/* implicit */int) arr_1 [i_6])) > (((/* implicit */int) (_Bool)0)))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned short) (signed char)-93)))))) : (arr_7 [i_6] [i_6] [i_6]))), (((/* implicit */long long int) (~(max((((/* implicit */int) (unsigned short)61429)), (2147483638)))))));
        var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) min((arr_1 [i_6]), (arr_1 [i_6])))) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
    }
}
