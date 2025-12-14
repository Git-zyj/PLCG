/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127641
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
    var_12 = max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 948675329)) ? (var_1) : (var_11)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * (var_5))))), ((-(min((((/* implicit */unsigned long long int) var_0)), (var_2))))));
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) (-(var_1)))) : (((((/* implicit */_Bool) 3560057907065469154LL)) ? (3605405139310060510ULL) : (((/* implicit */unsigned long long int) 3560057907065469127LL))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))) ? (max((var_9), (((/* implicit */long long int) var_11)))) : (-3560057907065469144LL))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) ((0ULL) & (((/* implicit */unsigned long long int) var_3))))))));
                    var_15 = 18446744073709551595ULL;
                }
                for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    var_16 -= var_7;
                    var_17 = ((/* implicit */long long int) var_4);
                    var_18 += (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) 3560057907065469127LL))))) ? (((/* implicit */unsigned long long int) -422406045431413574LL)) : (6968810551291409585ULL)))));
                }
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */int) arr_0 [i_1]))))) || ((!(((/* implicit */_Bool) 3560057907065469164LL))))));
                            var_20 = ((/* implicit */int) min((((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_0)), (var_11)))) : (var_2))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9)))))));
                            arr_16 [i_5] [i_5] [i_5] [i_4] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [1U] [(_Bool)1] [i_5])) ? (((/* implicit */long long int) (-(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)-465)))) : (((long long int) arr_13 [i_0] [i_1] [i_4] [13]))))));
                        }
                    } 
                } 
                arr_17 [i_0] [i_0] [i_0] &= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) | (min((3560057907065469145LL), (-3560057907065469127LL)))));
                arr_18 [(signed char)7] [(signed char)7] = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) -422406045431413574LL))) | (((/* implicit */int) ((signed char) var_10)))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) var_4))))) ? (max((var_3), (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) var_8)) * (656081375))))))))));
    var_22 = ((/* implicit */unsigned long long int) var_4);
}
