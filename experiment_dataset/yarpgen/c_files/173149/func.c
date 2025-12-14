/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173149
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
    for (short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_2] [i_2] = (!(((/* implicit */_Bool) var_11)));
                    var_20 = arr_2 [i_0 - 1] [i_0 - 1];
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        for (short i_4 = 3; i_4 < 14; i_4 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_21 ^= ((/* implicit */unsigned char) var_0);
                            arr_19 [i_6] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)12)) ? (4452775637424363366LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)149))))));
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_17))))), (((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3]))) : (var_4)))))) ? (min((((/* implicit */unsigned long long int) max(((unsigned char)251), (var_16)))), (var_6))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)212)))))));
                            var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_16 [i_4 + 1] [i_5] [i_5] [i_5 - 1] [i_5])) > (((/* implicit */int) (unsigned short)13944)))))));
                        }
                    } 
                } 
                arr_20 [i_4 - 1] [i_3] [i_3] = ((/* implicit */short) 18446181123756130304ULL);
                var_24 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) max((var_14), (arr_11 [i_4] [i_3])))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_17)))) : (((/* implicit */int) (unsigned char)234))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 1) 
    {
        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 1) 
        {
            {
                arr_27 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)124)), (min((((/* implicit */unsigned short) arr_17 [i_7] [i_7])), ((unsigned short)64714)))));
                var_25 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((-494273810792806335LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_0)))))), ((~(18446181123756130304ULL)))));
                arr_28 [i_7] [i_7] = ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_18 [i_8] [i_7] [i_7] [i_7])))), (((((/* implicit */int) arr_18 [i_7] [i_7] [i_7] [i_7])) ^ (((/* implicit */int) arr_18 [i_7] [i_7] [i_7] [i_8]))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) ((unsigned long long int) var_7));
    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-6784))));
}
