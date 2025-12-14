/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185580
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
    var_14 = ((/* implicit */short) var_11);
    var_15 = var_0;
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((-439486441) + (2147483647))) << (((4294967295U) - (4294967295U))))), (((/* implicit */int) max((arr_9 [i_0] [18U] [i_2]), (((/* implicit */unsigned short) arr_2 [i_0 + 2])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)85)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0])))))) ? (min((61841258U), (((/* implicit */unsigned int) arr_5 [i_0])))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))))) : (((/* implicit */unsigned int) -418026859))));
                    var_16 *= ((/* implicit */short) ((unsigned long long int) (-(((/* implicit */int) (signed char)-26)))));
                    arr_12 [(_Bool)1] [i_0] [i_0] [i_0 + 2] = ((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_0 + 2] [i_0 + 2] [i_0]))));
                    var_17 |= ((/* implicit */unsigned short) (+(((/* implicit */int) var_9))));
                }
            } 
        } 
        arr_13 [i_0] = ((/* implicit */_Bool) (+(((max((((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [(unsigned char)19])), (-4057938959511366909LL))) << (((min((((/* implicit */unsigned long long int) (signed char)127)), (14506504644597724291ULL))) - (114ULL)))))));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((unsigned long long int) 0LL)))));
    }
    for (unsigned char i_3 = 3; i_3 < 17; i_3 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) (((~(15882938170739053990ULL))) <= (((/* implicit */unsigned long long int) ((arr_1 [i_3] [i_3 - 2]) / (arr_1 [i_3] [i_3 - 3]))))));
        arr_16 [i_3] = ((/* implicit */unsigned long long int) arr_0 [i_3 - 1]);
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 15882938170739053990ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) 356685394U)))))));
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 19; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                {
                    var_21 += (signed char)127;
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_19 [i_4 + 1] [i_4 + 1] [i_5] [i_5])))))))));
                    var_23 *= ((/* implicit */unsigned long long int) arr_2 [i_3]);
                }
            } 
        } 
    }
}
