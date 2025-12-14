/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119672
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_14 = ((((/* implicit */_Bool) var_1)) ? (3829424007577470173ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))));
                    arr_9 [i_2] [(unsigned short)11] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1])) : (17014950851739307351ULL))) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_0] [i_0])))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_6) & (((/* implicit */unsigned long long int) 876424801547868457LL)))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)66)) << (((((arr_7 [i_0] [i_1] [i_1] [i_0]) + (1124780563))) - (5))))))))))));
                    arr_10 [i_0] [i_1] [i_1] [(short)9] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */int) arr_3 [i_1] [i_0])) << (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_3 [i_1] [i_0])))))))));
                    var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_1] [i_1])), (arr_0 [i_0] [i_0]))))));
                    var_16 = ((/* implicit */unsigned short) var_11);
                }
            } 
        } 
    } 
    var_17 *= ((/* implicit */unsigned short) min((max(((-(var_7))), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) -783122972))));
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        for (int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            {
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)108))) & (-8606673565935420458LL))), (((/* implicit */long long int) ((short) (signed char)55)))))) ? ((~(2253359484478859831ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((var_9), (((/* implicit */short) (signed char)-71))))))))));
                arr_17 [i_3] = (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)83)))))))));
                /* LoopNest 2 */
                for (signed char i_5 = 2; i_5 < 18; i_5 += 3) 
                {
                    for (int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        {
                            var_19 -= ((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_3]);
                            arr_22 [i_5] [i_4] [i_5] [i_6] [i_6] = min(((~(max((8946550216936257356ULL), (((/* implicit */unsigned long long int) -663128974)))))), (12604394061521178417ULL));
                            /* LoopSeq 2 */
                            for (unsigned short i_7 = 0; i_7 < 20; i_7 += 1) 
                            {
                                arr_25 [i_5] [i_6] [i_5] [(short)4] [i_5] = ((/* implicit */unsigned short) max(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_18 [i_5] [14] [(unsigned short)4] [i_6]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) arr_11 [i_5 - 2])))))));
                                arr_26 [i_3] [i_5] [(short)5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) | (546451089)))), (var_0)))) ? ((~(((/* implicit */int) arr_19 [i_3] [i_3] [i_5 - 2] [i_6])))) : (((/* implicit */int) arr_14 [i_4] [i_5] [i_7]))));
                            }
                            for (short i_8 = 0; i_8 < 20; i_8 += 1) 
                            {
                                arr_29 [i_5] [i_6] [i_3] [i_3] [i_5] = ((/* implicit */_Bool) 353989614);
                                arr_30 [i_3] [i_6] [i_3] [i_3] [i_5] [i_3] = max((((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (short)6578)), (-9076193525357196381LL))), (((/* implicit */long long int) (unsigned char)89))))), ((~(arr_27 [i_3] [i_5] [i_5 + 1]))));
                            }
                            arr_31 [i_6] [i_5] [i_5] [i_3] = ((/* implicit */signed char) 1489462848);
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = min((max((max((var_1), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))))), (((/* implicit */unsigned long long int) var_13)));
    var_21 = ((/* implicit */long long int) var_10);
}
