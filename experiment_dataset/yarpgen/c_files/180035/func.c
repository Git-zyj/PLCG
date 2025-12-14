/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180035
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((arr_4 [i_0] [i_0]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) && (((/* implicit */_Bool) arr_4 [i_0] [i_0])))))));
                    var_17 += ((/* implicit */short) ((var_16) <= (((/* implicit */long long int) ((/* implicit */int) ((arr_5 [i_0] [i_0] [i_1] [i_2]) && (((/* implicit */_Bool) arr_1 [i_0] [i_2]))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((unsigned char) 254225614105680609ULL));
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */signed char) max((((((unsigned long long int) var_3)) >> (((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9780558943382722220ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)150)) % (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 2; i_5 < 16; i_5 += 4) 
    {
        for (unsigned short i_6 = 2; i_6 < 15; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 4; i_7 < 16; i_7 += 4) 
            {
                {
                    var_19 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_10)), (((unsigned long long int) 9223372036854775807LL))));
                    var_20 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((2059067447) << (((arr_2 [i_5] [i_7 - 2]) - (10121087903251601414ULL)))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_4 [i_7 - 2] [i_5])) : (((/* implicit */int) (signed char)-6)))) : (((/* implicit */int) var_12))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) var_0);
    var_22 = ((/* implicit */int) 9209652370759144990LL);
    /* LoopSeq 1 */
    for (signed char i_8 = 1; i_8 < 12; i_8 += 3) 
    {
        var_23 = ((/* implicit */short) min((((/* implicit */long long int) -1401475342)), ((~(-3LL)))));
        arr_24 [i_8] [i_8 - 1] = ((/* implicit */unsigned long long int) var_11);
        var_24 = (~(((/* implicit */int) min(((unsigned char)6), (((/* implicit */unsigned char) (_Bool)1))))));
    }
}
