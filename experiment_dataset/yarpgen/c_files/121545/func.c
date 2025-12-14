/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121545
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
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1 - 1] [i_0] = ((/* implicit */unsigned long long int) 183225878U);
                    arr_10 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((183225878U), (4111741403U)))), (max((min((((/* implicit */unsigned long long int) var_14)), (1702739130500337662ULL))), (((/* implicit */unsigned long long int) 183225890U))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_5 = 2; i_5 < 10; i_5 += 3) 
                    {
                        var_18 = ((/* implicit */_Bool) max((min((var_14), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((((/* implicit */short) var_13)), (var_6))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min((829256667), (((/* implicit */int) (_Bool)1)))))));
                            var_20 = max((((/* implicit */int) (unsigned short)53447)), (min((var_14), (-908781655))));
                            var_21 = ((/* implicit */_Bool) 1702739130500337662ULL);
                        }
                        for (unsigned int i_7 = 1; i_7 < 9; i_7 += 3) 
                        {
                            arr_24 [i_0] [i_0] [i_0] = max((max((((/* implicit */unsigned long long int) -1LL)), (1702739130500337638ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)0)), (7625069749402788995LL)))));
                            var_22 = ((/* implicit */unsigned short) var_10);
                            var_23 = ((/* implicit */int) max((var_12), (max((183225893U), (((/* implicit */unsigned int) (_Bool)1))))));
                            arr_25 [i_0] [i_0] [i_4] [i_4] = ((/* implicit */int) (unsigned short)14219);
                        }
                        arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) min((4111741417U), (max((((/* implicit */unsigned int) min((var_7), (-2066255073)))), (4111741386U)))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        arr_30 [i_0] [(short)2] [i_3] [(signed char)9] [i_0] = ((/* implicit */_Bool) (unsigned short)0);
                        var_24 = ((/* implicit */int) (_Bool)1);
                        var_25 = ((/* implicit */unsigned short) max((-1), (((/* implicit */int) (_Bool)1))));
                    }
                    arr_31 [i_0] [i_0] [i_4] [i_0] = ((/* implicit */short) min((((/* implicit */int) min(((signed char)-101), (((/* implicit */signed char) (_Bool)0))))), (min((((/* implicit */int) (_Bool)1)), (536870912)))));
                    arr_32 [i_0] = ((/* implicit */unsigned char) (_Bool)0);
                }
            } 
        } 
        var_26 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((1631073288U), (((/* implicit */unsigned int) (_Bool)1))))), (min((max((((/* implicit */unsigned long long int) var_7)), (6269181153257123584ULL))), (((/* implicit */unsigned long long int) var_10))))));
        arr_33 [i_0] = ((/* implicit */int) min((min((4294967295U), (((/* implicit */unsigned int) var_0)))), (min((min((183225893U), (((/* implicit */unsigned int) (_Bool)1)))), (var_4)))));
    }
    /* LoopSeq 1 */
    for (int i_9 = 0; i_9 < 12; i_9 += 1) 
    {
        var_27 = (_Bool)1;
        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) max((((/* implicit */long long int) min((2147221504), (((/* implicit */int) (_Bool)1))))), (6925637452380176754LL))))));
    }
}
