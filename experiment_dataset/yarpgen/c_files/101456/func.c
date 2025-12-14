/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101456
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [(unsigned char)10] [i_0] [i_2] [i_1] |= ((/* implicit */unsigned long long int) (short)24);
                            arr_13 [i_3] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */unsigned int) 2147483641)) != (var_17)))) : (((/* implicit */int) arr_7 [i_2] [i_2])))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1])))))));
                            var_19 = (short)50;
                            var_20 -= ((/* implicit */short) arr_9 [4]);
                            var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(var_8))))) >= (((arr_5 [(short)0] [i_2] [13U]) << (((arr_5 [i_3] [i_1] [i_1]) - (1408743795U)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 1; i_4 < 17; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        {
                            arr_19 [i_4] [i_5] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) ((arr_11 [i_4 + 1] [i_1] [i_0] [i_0] [i_0]) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)24))) < (arr_2 [(_Bool)1])))))))) : (((/* implicit */int) arr_8 [3U]))));
                            arr_20 [i_4] [i_4] [i_4] [i_5] = ((/* implicit */short) var_4);
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned char)0)) : (((((/* implicit */int) ((0U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))) % (((/* implicit */int) var_12))))));
                            var_23 = ((/* implicit */short) ((2147483622) + (((/* implicit */int) arr_3 [i_5]))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned int) (short)-9);
                arr_21 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) (((-2147483647 - 1)) + (((/* implicit */int) ((((/* implicit */unsigned long long int) 2147483647)) >= (0ULL))))))) <= ((((~(var_17))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32746))))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                var_26 = ((/* implicit */unsigned long long int) ((((((2147483647) >= (((/* implicit */int) arr_27 [i_6] [i_7] [i_6])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (arr_16 [i_6] [i_6]))) > (((/* implicit */unsigned int) ((/* implicit */int) ((arr_14 [i_6] [i_6] [i_7] [i_7]) > (((/* implicit */int) arr_7 [i_6] [(short)8]))))))));
                /* LoopNest 3 */
                for (unsigned int i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    for (long long int i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 13; i_10 += 3) 
                        {
                            {
                                arr_37 [i_7] [4U] [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) (short)32750))));
                                var_27 = ((/* implicit */short) 17U);
                            }
                        } 
                    } 
                } 
                var_28 = ((/* implicit */int) var_9);
            }
        } 
    } 
}
