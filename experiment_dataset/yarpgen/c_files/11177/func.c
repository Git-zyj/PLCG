/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11177
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0] [i_1 - 1]);
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_0] [0] [0] [i_3] [16ULL] = ((/* implicit */_Bool) ((((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])), (arr_10 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1]))) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0] [i_3])))))))) >> (((max((((/* implicit */long long int) (unsigned char)122)), (-6173621961772591058LL))) - (97LL)))));
                                var_17 = ((/* implicit */long long int) (~(max((((/* implicit */int) arr_1 [i_1 - 1])), ((-(((/* implicit */int) var_13))))))));
                            }
                        } 
                    } 
                } 
                var_18 += (~((~(((/* implicit */int) arr_13 [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_1 - 1])))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) (unsigned char)123);
    var_20 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 2 */
    for (unsigned int i_5 = 2; i_5 < 21; i_5 += 4) 
    {
        for (long long int i_6 = 2; i_6 < 20; i_6 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_7 = 2; i_7 < 21; i_7 += 4) 
                {
                    var_21 = ((/* implicit */short) max((min(((unsigned char)134), ((unsigned char)221))), ((unsigned char)176)));
                    var_22 = ((/* implicit */int) (unsigned char)3);
                    arr_26 [i_5] [i_5] [i_6] [i_5] = ((/* implicit */unsigned char) arr_20 [i_5]);
                }
                for (signed char i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    var_23 = ((/* implicit */short) (+((-(arr_19 [i_5 - 1])))));
                    var_24 = ((/* implicit */long long int) arr_21 [i_5]);
                    arr_29 [i_5 - 2] |= ((/* implicit */unsigned short) min((((/* implicit */int) ((arr_19 [i_5 + 1]) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_21 [18])))))))), (max((((/* implicit */int) (unsigned short)65535)), (arr_20 [i_5 - 2])))));
                    var_25 = (!(((/* implicit */_Bool) max((min((((/* implicit */short) var_13)), ((short)-32760))), (((/* implicit */short) var_11))))));
                }
                var_26 = ((/* implicit */unsigned int) (+((+(arr_19 [i_5 + 1])))));
            }
        } 
    } 
}
