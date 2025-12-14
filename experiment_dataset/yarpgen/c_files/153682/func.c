/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153682
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
    var_18 = ((/* implicit */int) var_1);
    var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) 97574146U)) ? (((/* implicit */int) (signed char)-69)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)243))) < (((((/* implicit */_Bool) (unsigned char)254)) ? (3016858054U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)87))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 3; i_3 < 17; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32767)) * (((/* implicit */int) (unsigned short)61955))));
                        var_21 = ((/* implicit */int) ((unsigned int) 12864927623126150676ULL));
                        arr_10 [i_3] [i_1] [i_3 + 2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        arr_14 [i_0] [i_0] [i_2] [i_2] [i_4] |= ((/* implicit */short) min((((/* implicit */unsigned short) (signed char)-45)), ((unsigned short)35298)));
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 3; i_5 < 20; i_5 += 3) 
                        {
                            arr_17 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((long long int) 1153737697575823322ULL));
                            var_22 = ((/* implicit */_Bool) max((6301731768572935190ULL), (((/* implicit */unsigned long long int) (unsigned char)255))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) max((1153737697575823340ULL), (((/* implicit */unsigned long long int) (unsigned char)204))));
                        }
                        for (int i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            var_23 &= ((/* implicit */unsigned long long int) (~(3016858057U)));
                            var_24 = (+(3482026580U));
                            var_25 = ((/* implicit */int) min((3482026564U), (((/* implicit */unsigned int) -2007632794))));
                        }
                    }
                    for (short i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((4294967289U) ^ (((/* implicit */unsigned int) 1253495202)))))));
                        var_27 += ((/* implicit */unsigned short) ((1278109242U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) min((14ULL), (((/* implicit */unsigned long long int) (unsigned char)104)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 2; i_8 < 17; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 21; i_9 += 2) 
                        {
                            {
                                arr_28 [i_2] [i_1] [i_2] [i_1] [i_0] = min((((/* implicit */unsigned int) (short)28677)), (((unsigned int) 1236015161292970944LL)));
                                var_29 *= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)47581))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)217))) / (891829561022275269ULL)));
                    var_31 &= ((/* implicit */short) min((((((4ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6956))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)28681)), (4294967295U)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)92)))))));
                }
            } 
        } 
    } 
}
