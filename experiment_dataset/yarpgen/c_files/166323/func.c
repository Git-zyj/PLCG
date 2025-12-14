/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166323
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_4] [i_3] [i_2] [i_1] [i_0])) | (((((/* implicit */int) (_Bool)1)) >> (((var_4) + (2063607313458867534LL)))))))) ? (((((/* implicit */_Bool) var_10)) ? (1235357488) : (-509173383))) : (((((/* implicit */int) (unsigned short)21099)) ^ (((/* implicit */int) var_7))))));
                                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? ((~(var_1))) : (((/* implicit */unsigned long long int) arr_8 [i_1] [i_3]))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) -417807420)) * (((var_6) / (((7269761975788086031LL) / (((/* implicit */long long int) 509173383)))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        for (short i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 4) 
                    {
                        {
                            arr_27 [i_5] [i_6] [i_5] [i_5] [(signed char)10] = ((/* implicit */long long int) (+(((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254)))))));
                            arr_28 [i_5] [i_6] [i_7] [i_6] [i_8] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)13752))) == (14587502512265837242ULL))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((-2147483647 - 1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1912589520U)) ? ((-(((/* implicit */int) (unsigned short)44437)))) : (((/* implicit */int) arr_22 [i_5] [i_5] [7] [i_5])))))));
                arr_29 [11] [i_6] [i_6] = ((/* implicit */unsigned int) var_7);
                arr_30 [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_23 [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21098))) : (var_4))) << (((((/* implicit */int) min((((/* implicit */unsigned short) var_7)), ((unsigned short)21099)))) - (192)))))) ? (((/* implicit */long long int) 2454816060U)) : ((-(arr_23 [i_6] [i_5])))));
            }
        } 
    } 
    var_16 = min((((/* implicit */int) ((max((((/* implicit */long long int) -1048015462)), (8439196138353858646LL))) == (((var_10) >> (((var_10) - (8164376628275535540LL)))))))), (((((((/* implicit */int) (unsigned char)194)) << (((((/* implicit */int) (unsigned short)21098)) - (21082))))) & (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || ((_Bool)1)))))));
}
