/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141755
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) (~(12U)));
                var_21 -= ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) ((var_2) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254)))))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) min(((~(arr_6 [i_2 + 1] [i_2 + 1] [i_2 - 2]))), (((/* implicit */int) arr_9 [i_1] [i_1]))));
                            var_23 += ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_2 + 1] [i_0] [i_3])) ? (18446744073709551597ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(signed char)19] [i_0] [i_0] [i_1] [i_0] [(signed char)19]))))));
                            var_24 = ((/* implicit */short) (~(18446744073709551578ULL)));
                            arr_12 [i_3] [(unsigned short)11] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) arr_5 [(unsigned char)14] [(unsigned char)14])))), (((/* implicit */int) ((_Bool) arr_2 [i_0] [i_2] [i_2])))))) || (((/* implicit */_Bool) ((max((((/* implicit */long long int) arr_3 [i_0] [i_0] [i_3])), (-2605876659308420130LL))) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))))))));
                            var_25 = ((/* implicit */unsigned int) min((var_25), ((((!(((/* implicit */_Bool) 2777014393011061062LL)))) ? (((unsigned int) arr_8 [i_1 + 2] [i_3] [i_1 + 2] [i_1 + 2])) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)249)), ((short)-14506)))))))));
                        }
                    } 
                } 
                var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32750)) ? (((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) (unsigned short)65534)))) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) min((2862595328743479455ULL), (((/* implicit */unsigned long long int) (unsigned short)0))))) ? (arr_2 [i_1 - 1] [i_1 - 3] [i_1 + 4]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1 + 3] [i_1 + 3])) && (((/* implicit */_Bool) arr_8 [i_1 - 2] [(unsigned char)17] [i_0] [i_1 - 2])))))));
                var_27 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((_Bool) (unsigned char)24))), (((((3041023507U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) + (max((4294967295U), (((/* implicit */unsigned int) (_Bool)0))))))));
            }
        } 
    } 
    var_28 ^= ((/* implicit */int) var_12);
    var_29 = ((/* implicit */_Bool) (unsigned char)117);
}
