/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132325
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                var_12 ^= ((/* implicit */short) ((unsigned long long int) (unsigned char)206));
                var_13 = ((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)88))) & (arr_4 [i_1 - 1] [i_1 - 1]))), (((/* implicit */unsigned int) (+(arr_0 [i_0]))))));
                var_14 = ((((/* implicit */_Bool) (~(var_2)))) ? ((+(-2692896895882063548LL))) : (((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_5 [i_0])))) / (2692896895882063544LL))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) -169486254)), (2692896895882063547LL)))) ? (arr_0 [i_0]) : ((+(((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1])) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_0]))))))));
                var_16 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_0])))), (((var_10) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_0]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            {
                var_17 ^= ((/* implicit */long long int) arr_10 [i_2] [i_3]);
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        {
                            arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) arr_16 [i_2] [i_3] [i_5]);
                            var_18 ^= ((/* implicit */int) 2692896895882063549LL);
                            arr_20 [i_2] [i_3] [i_4] [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_8 [i_4]))) ? (((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) var_7))))) <= (max((-2692896895882063548LL), (((/* implicit */long long int) (unsigned char)15))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1LL)), (arr_12 [i_2] [i_2] [i_4] [i_2])))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) min((((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_3] [i_2])) ? (((/* implicit */long long int) min((((/* implicit */int) var_7)), (arr_15 [i_2] [i_3] [i_3] [i_3])))) : ((+(-3584949073784570350LL))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_2] [i_2])) ? (arr_10 [i_3] [i_3]) : (0U))), (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))))))))));
                var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)0))));
                arr_21 [i_2] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (((+(arr_7 [i_3] [i_2]))) != (((long long int) arr_18 [(_Bool)1] [i_2] [4U] [i_3] [4U] [i_3])))))) / ((~(((((/* implicit */long long int) -287905985)) & (arr_7 [i_2] [i_3])))))));
            }
        } 
    } 
}
