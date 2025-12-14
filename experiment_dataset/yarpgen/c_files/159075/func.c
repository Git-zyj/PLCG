/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159075
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
    var_16 = ((/* implicit */short) max((((/* implicit */unsigned int) ((min((var_14), (((/* implicit */int) (unsigned short)58711)))) >> (((((((/* implicit */int) (short)-4017)) % (2147483647))) + (4044)))))), (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (98304U)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_7 [i_1] [i_0 + 1] [i_0 - 2] = ((/* implicit */unsigned long long int) (short)4024);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (int i_3 = 3; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_14 [i_3] [i_1] [i_3] = ((/* implicit */unsigned int) ((unsigned short) ((((unsigned long long int) (signed char)75)) >> (((((((/* implicit */_Bool) (signed char)-4)) ? (2147483647) : (((/* implicit */int) (short)4892)))) - (2147483592))))));
                            var_17 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((arr_11 [i_0 - 2] [i_0 - 2] [i_3 - 3] [i_3 - 3] [i_3 + 2]), (((/* implicit */short) ((_Bool) (unsigned char)152))))))));
                            arr_15 [i_0] [i_0] [i_3] = ((((/* implicit */_Bool) ((unsigned int) arr_8 [i_3] [i_3 - 1] [i_3 + 2] [i_3 + 2]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_3 + 2] [i_3 + 2] [i_0] [i_0])) ^ (((/* implicit */int) arr_8 [i_3 + 1] [i_3 + 2] [i_3 - 3] [i_1]))))) : (((9893440458242491683ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3 - 2] [i_3 - 2] [i_2] [i_2]))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */short) ((((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0]))))) * (((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)26)) * (((/* implicit */int) (signed char)126))))) / (((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) | (-4338774114429392649LL)))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_4 = 2; i_4 < 9; i_4 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_4] [i_4 + 1]))))), ((+(2199023255551LL))))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -5955378237602333613LL)) || (((_Bool) (_Bool)1))))))));
        arr_19 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 68719476735LL)) ? (((/* implicit */int) (signed char)-48)) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)228)))))))));
    }
    for (long long int i_5 = 4; i_5 < 19; i_5 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) 3988072927961050698ULL);
        var_21 = ((/* implicit */signed char) ((max((-146318616364892227LL), (((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_5] [i_5] [i_5 + 1]))))))) <= (((/* implicit */long long int) (-(-882646888))))));
    }
    var_22 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) max((2079561106U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 1732027164)))) : (((((/* implicit */unsigned long long int) 2147483647)) | (67108848ULL))))));
}
