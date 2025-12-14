/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147060
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
    var_20 = ((/* implicit */unsigned int) ((unsigned long long int) (!(((((/* implicit */_Bool) 17212295142000090901ULL)) || (((/* implicit */_Bool) 1234448931709460692ULL)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) 1565507131)), (0LL)));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (+(((((/* implicit */_Bool) 18446744073709551603ULL)) ? (1234448931709460715ULL) : (10477332388382924544ULL))))))));
                        var_23 = ((/* implicit */unsigned int) var_18);
                    }
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) arr_8 [i_2 - 1] [i_1] [i_2 - 2] [i_1])) | ((~(((/* implicit */int) var_10))))))))));
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        var_25 = ((/* implicit */_Bool) max((4567543499733675047ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_14 [i_0] [i_4] [i_2] [i_4] [i_4] [i_2]), (((/* implicit */unsigned short) (signed char)-108))))))))));
                        var_26 = ((/* implicit */signed char) ((max((((/* implicit */int) (unsigned short)41306)), (((((/* implicit */int) (signed char)75)) + (((/* implicit */int) (signed char)-108)))))) - (((/* implicit */int) ((unsigned short) (-(var_8)))))));
                        var_27 = ((/* implicit */_Bool) var_15);
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            {
                var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1234448931709460692ULL))))), (((unsigned short) arr_21 [i_5]))))) & (((/* implicit */int) ((signed char) 2147483647))))))));
                var_29 ^= ((/* implicit */signed char) max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)56822))))), (((long long int) (~(((/* implicit */int) (unsigned short)8713)))))));
                arr_23 [i_5] [i_5] = ((/* implicit */_Bool) ((((max((9790661069601495466ULL), (((/* implicit */unsigned long long int) arr_17 [i_6])))) * (((/* implicit */unsigned long long int) (+(arr_17 [i_5])))))) + (((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) (short)27566)), (arr_21 [i_5]))), (((/* implicit */unsigned int) ((unsigned short) arr_20 [i_5]))))))));
                arr_24 [i_5] [i_5] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2810098399U))))), (min((((unsigned long long int) var_17)), (((/* implicit */unsigned long long int) var_2))))));
                arr_25 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 10477332388382924565ULL)) || (((/* implicit */_Bool) (short)-27567))));
            }
        } 
    } 
    var_30 = ((/* implicit */short) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65535))))) & ((~((~(0LL)))))));
}
