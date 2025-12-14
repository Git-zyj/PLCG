/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156798
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) (short)10685)) ? (((/* implicit */unsigned long long int) var_12)) : (661173048981789477ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((3472230655U), (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))) : (((min((((/* implicit */unsigned long long int) var_2)), (var_8))) - (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-10701)), (4294967284U))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_14 [i_2] [i_1] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) % (arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1]))) != (((/* implicit */unsigned long long int) ((arr_12 [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1 - 1]) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) ((_Bool) (signed char)21)))))));
                                var_17 |= ((/* implicit */_Bool) ((((unsigned int) (~(((/* implicit */int) (_Bool)1))))) ^ (((((/* implicit */_Bool) (~(((/* implicit */int) (short)10685))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)10690))))) : (((((/* implicit */_Bool) (short)-10686)) ? (858419662U) : (3472230660U)))))));
                                var_18 = ((/* implicit */unsigned short) 17785571024727762121ULL);
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65529))))) ? ((-(((/* implicit */int) arr_3 [i_1 + 1] [i_1])))) : ((-(((/* implicit */int) (short)-1))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned int i_7 = 1; i_7 < 14; i_7 += 3) 
                            {
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_13 [i_0] [i_0] [i_0] [i_1 + 1] [i_1]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3300175858U)))))))) ? (var_2) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3472230660U)) ? (((/* implicit */unsigned long long int) 235599111)) : (5524157192087077720ULL)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_14)))))));
                                var_21 = ((/* implicit */short) (((((-(((/* implicit */int) ((12922586881622473896ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_7 - 1] [(unsigned short)7] [i_1] [i_1] [i_0])))))))) + (2147483647))) << (((((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) arr_20 [i_7 - 1] [i_1] [i_1] [i_1 + 1]))))) - (255)))));
                            }
                            for (unsigned int i_8 = 0; i_8 < 16; i_8 += 1) 
                            {
                                var_22 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-31))))) ? (((/* implicit */int) ((-5429378920139403645LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-21686)))))));
                                var_23 = ((/* implicit */short) min((((/* implicit */long long int) min((((/* implicit */unsigned char) arr_17 [i_1] [i_1] [i_1] [i_6])), (arr_21 [(unsigned char)4] [i_5])))), (((((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1]))) ^ (-5429378920139403626LL))) & (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))))));
                            }
                            arr_26 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (min((var_12), (((/* implicit */unsigned int) (unsigned short)60820)))) : (((/* implicit */unsigned int) min(((((_Bool)1) ? (((/* implicit */int) (short)-10705)) : (((/* implicit */int) var_1)))), ((+(((/* implicit */int) (unsigned char)14)))))))));
                            var_24 ^= ((/* implicit */unsigned int) arr_6 [i_1 + 1] [(signed char)6] [i_5] [(_Bool)1]);
                            var_25 = ((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
                var_26 *= ((/* implicit */short) (unsigned short)60797);
            }
        } 
    } 
}
