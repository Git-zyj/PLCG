/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15828
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
    for (unsigned char i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((1229499423286715905ULL) > (((/* implicit */unsigned long long int) arr_1 [i_0 - 3]))))) : ((~(((/* implicit */int) var_5))))));
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (+(((((((/* implicit */int) (signed char)54)) - (arr_1 [i_0 - 2]))) ^ (((/* implicit */int) ((((/* implicit */int) var_6)) >= (var_0)))))))))));
    }
    var_14 &= ((/* implicit */long long int) ((((/* implicit */int) var_8)) & (((((/* implicit */_Bool) ((1229499423286715917ULL) & (((/* implicit */unsigned long long int) var_0))))) ? (((((/* implicit */int) (unsigned char)24)) / (((/* implicit */int) var_8)))) : ((+(((/* implicit */int) (unsigned char)89))))))));
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] [(signed char)6] &= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-55))))))) & (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (1229499423286715916ULL)))))) ? (((((((/* implicit */unsigned long long int) var_0)) ^ (20ULL))) | (((((/* implicit */_Bool) 17217244650422835699ULL)) ? (17217244650422835699ULL) : (((/* implicit */unsigned long long int) -195312868859229903LL)))))) : (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (unsigned short)4594))))))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_9) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))))) ? (((/* implicit */int) max(((unsigned short)4849), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1])) >= (((/* implicit */int) var_12)))))));
        var_16 -= ((/* implicit */long long int) ((var_2) / (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_8))))) / (((/* implicit */int) (!(var_1)))))))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (((+(4294836224U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2]))))))));
            arr_8 [i_1] = ((/* implicit */signed char) ((((long long int) ((arr_4 [i_1]) && (arr_4 [i_1])))) << (((((/* implicit */int) ((unsigned short) var_9))) - (1502)))));
            var_18 -= ((/* implicit */short) (-(((/* implicit */int) arr_3 [i_2]))));
        }
    }
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            for (unsigned char i_5 = 2; i_5 < 12; i_5 += 4) 
            {
                {
                    arr_21 [i_3] [i_4] [i_5] [i_3] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((arr_0 [i_5 - 2]) & (var_3))) * (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0))))))), (((((/* implicit */_Bool) ((var_11) - (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (arr_10 [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (((-(arr_20 [i_5 - 1] [i_4]))) - (((/* implicit */long long int) max((((/* implicit */int) var_8)), (arr_18 [i_3] [i_4] [i_5 + 1] [i_5 - 1]))))))) + (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3]))) & (17217244650422835709ULL))) >> (((max((var_4), (var_11))) - (997909177U)))))));
                    arr_22 [i_5] [i_5 - 2] [i_4] [i_5] &= ((/* implicit */unsigned short) arr_11 [i_3] [i_4]);
                    arr_23 [i_3] [i_4] [i_5 - 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)189)) & (((/* implicit */int) var_5))))) ? (8972192366277248557LL) : (((/* implicit */long long int) var_3))))) & (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_3] [i_4] [i_4] [i_4]))) & (var_9))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))))))));
                }
            } 
        } 
    } 
}
