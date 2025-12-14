/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141408
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
    var_16 = ((/* implicit */unsigned short) max((var_1), (((/* implicit */unsigned int) (~(((/* implicit */int) var_14)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_17 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)65517)), (-2093967045)))) + (min((((((/* implicit */_Bool) var_10)) ? (1332033269382562454ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [0U] [i_2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-29)) ? (2234994781U) : (arr_6 [i_0] [i_0]))))))));
                    var_18 = ((/* implicit */short) arr_7 [i_2]);
                    arr_10 [i_0] = ((/* implicit */signed char) (~(((long long int) ((((/* implicit */_Bool) 16U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1 - 2] [4U]))) : (-6996877184856806407LL))))));
                    arr_11 [i_1] [i_2] = ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]);
                }
            } 
        } 
    }
    var_19 = ((/* implicit */signed char) var_4);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_20 = ((/* implicit */long long int) ((-1) >= (755296831)));
        var_21 *= ((/* implicit */unsigned int) ((755296839) >= (((((/* implicit */_Bool) arr_0 [i_3])) ? (-755296848) : (((/* implicit */int) (signed char)12))))));
        var_22 = ((/* implicit */unsigned short) (signed char)-26);
        var_23 ^= ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (4294967269U))) - (arr_6 [i_3] [13U])));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_18 [(unsigned short)4] [i_4] = ((/* implicit */long long int) (~(((var_1) >> (((/* implicit */int) arr_7 [i_4]))))));
        arr_19 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65517)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_7 [i_4]))))) ? (((/* implicit */unsigned int) -1840541239)) : (((unsigned int) arr_6 [i_4] [i_4]))));
        arr_20 [i_4] |= ((/* implicit */unsigned int) arr_0 [i_4]);
    }
    for (unsigned int i_5 = 3; i_5 < 24; i_5 += 2) 
    {
        var_24 = (i_5 % 2 == 0) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((arr_21 [i_5]) + (2147483647))) << (((((arr_21 [i_5]) + (1813070675))) - (11)))))), (min((((/* implicit */unsigned int) (signed char)-10)), (39U)))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((((arr_21 [i_5]) - (2147483647))) + (2147483647))) << (((((((arr_21 [i_5]) - (1813070675))) - (11))) - (51522554)))))), (min((((/* implicit */unsigned int) (signed char)-10)), (39U))))));
        var_25 |= ((/* implicit */long long int) (~(((((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) (_Bool)1))))) / (arr_23 [i_5 - 2])))));
        arr_24 [6LL] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (755296833) : (((/* implicit */int) (unsigned short)6786))));
        var_26 ^= ((/* implicit */unsigned short) (+(13540221670661212719ULL)));
    }
}
