/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168981
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
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) min(((unsigned short)64045), (((/* implicit */unsigned short) (_Bool)1)))))))) ? (((/* implicit */int) var_3)) : ((-(((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_5 [17] [i_0]) : ((((((-(((/* implicit */int) arr_4 [i_2] [i_1 - 2] [i_0 - 2])))) + (2147483647))) << ((((((-(((/* implicit */int) arr_2 [i_2] [i_1])))) + (224))) - (4)))))));
                    var_16 -= ((/* implicit */long long int) min((min((min((arr_6 [i_2] [i_2]), (((/* implicit */short) (unsigned char)199)))), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)16320)))))));
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_0 + 1] [i_1 - 2] [i_2]))) ? ((-(((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1))))))) : (((/* implicit */int) (unsigned short)60039))));
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((7848408813511521316LL), (((/* implicit */long long int) arr_6 [i_0] [i_0 + 1]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (max((min((((/* implicit */unsigned int) arr_3 [i_0])), (0U))), (((/* implicit */unsigned int) arr_5 [i_0 + 2] [(unsigned char)8])))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        for (unsigned int i_4 = 2; i_4 < 8; i_4 += 4) 
        {
            {
                var_19 = ((/* implicit */long long int) var_10);
                var_20 = (+(min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65521))) : (var_13))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)17593)) ? (((/* implicit */int) (unsigned short)60039)) : (((/* implicit */int) (unsigned short)32768))))))));
                var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10))))), (((arr_1 [i_3] [i_4]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14)))))))) ? (((/* implicit */int) arr_2 [i_3] [i_4])) : (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (short i_5 = 2; i_5 < 8; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        {
                            var_22 = ((((/* implicit */_Bool) (((((_Bool)1) ? (10848035949071024380ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) * (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (1104879813625049092LL))))))) ? (((/* implicit */int) (_Bool)1)) : ((-(((((/* implicit */_Bool) (unsigned short)5507)) ? (((/* implicit */int) arr_20 [i_3])) : (((/* implicit */int) arr_18 [9LL] [i_4 - 1] [i_5] [i_5])))))));
                            arr_21 [i_3] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((unsigned char) var_9)))) ? (((/* implicit */int) (_Bool)0)) : (((((((/* implicit */int) var_2)) | (var_0))) & (((/* implicit */int) (_Bool)1))))));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned short)17576), (((/* implicit */unsigned short) (signed char)-118)))))))) ? (((((_Bool) 10379883038494040684ULL)) ? ((+(((/* implicit */int) (unsigned short)24961)))) : (((/* implicit */int) arr_11 [i_4 - 1] [i_5 + 1] [i_5 - 2])))) : (((((/* implicit */_Bool) ((arr_12 [i_3] [i_4] [i_5]) / (((/* implicit */int) (short)-19005))))) ? (max((((/* implicit */int) arr_4 [i_6] [i_5] [i_3])), (var_0))) : (((((/* implicit */_Bool) 2959911320U)) ? (((/* implicit */int) arr_19 [i_6] [i_5] [i_4] [i_3])) : (((/* implicit */int) var_8))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */short) (-(((/* implicit */int) var_7))));
}
