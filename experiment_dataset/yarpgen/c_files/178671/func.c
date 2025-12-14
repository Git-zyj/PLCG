/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178671
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
    var_15 ^= ((1891147837) << (((var_8) - (2167040411U))));
    var_16 &= ((/* implicit */unsigned short) ((max((min((524287U), (524295U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_4))))))) != ((((+(4294443001U))) << (((((131071) >> (((/* implicit */int) (_Bool)0)))) - (131050)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        var_17 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [(unsigned char)4])) ? (min((((/* implicit */unsigned int) (-(arr_1 [(unsigned char)2])))), (((4294443001U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-15588))))))) : (((/* implicit */unsigned int) 255))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */int) (-((~(4294443001U)))));
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */short) (!(((524293U) > (((/* implicit */unsigned int) 1986422295))))))), (var_14)));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned char) 4294443006U);
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        for (signed char i_4 = 1; i_4 < 12; i_4 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) min((arr_1 [i_5]), (((/* implicit */int) (unsigned char)96))))))));
                            var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)236)) | (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) (_Bool)1)))))))), (((unsigned int) max((((/* implicit */int) (_Bool)1)), (arr_1 [i_5]))))));
                            var_22 = arr_16 [i_3];
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1986422292)) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_1 [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)5312)))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)5311)) && ((_Bool)0))))) >= (((unsigned long long int) var_4))))) : (max(((~(((/* implicit */int) arr_2 [i_3])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3]))))))))))));
                        }
                    } 
                } 
                arr_17 [i_3] [i_4 + 4] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_3]))));
                var_24 = min((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_16 [i_3]))))), (((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_3] [(short)2] [14]))) : (var_2))))), (((/* implicit */unsigned long long int) ((arr_14 [i_3] [i_4 + 4] [i_4 + 1] [i_4 + 3]) - (((/* implicit */unsigned int) ((((/* implicit */int) (short)31)) - (-1986422321))))))));
                var_25 = (~(min((-724793488), ((-(((/* implicit */int) (signed char)-1)))))));
                var_26 = ((/* implicit */short) min((((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned char)3)) || (((/* implicit */_Bool) var_8))))))), (((((((/* implicit */int) (unsigned char)243)) << (((((/* implicit */int) (short)17382)) - (17374))))) ^ (arr_4 [i_3] [i_4] [i_4 + 1])))));
            }
        } 
    } 
}
