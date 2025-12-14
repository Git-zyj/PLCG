/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137114
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
    var_11 = ((/* implicit */signed char) max(((-(((/* implicit */int) max((var_10), (var_2)))))), (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                var_12 -= ((/* implicit */_Bool) (+(min(((~(((/* implicit */int) arr_0 [i_1 + 1] [i_0])))), ((~(((/* implicit */int) arr_1 [i_0]))))))));
                arr_4 [(unsigned char)3] [i_1] [i_1] = ((short) ((arr_2 [i_1 - 1] [i_1 - 1]) - (((/* implicit */int) var_5))));
                arr_5 [i_0] = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_1 [i_1 + 1])))) - (((/* implicit */int) min((arr_0 [i_1 + 1] [i_1 + 1]), (((/* implicit */unsigned short) var_6)))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        arr_12 [i_3] [i_2] [i_1] [i_1] [17ULL] |= ((/* implicit */unsigned int) ((unsigned short) ((unsigned long long int) 4887156593399070116LL)));
                        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((unsigned int) ((((((/* implicit */int) var_0)) != (((/* implicit */int) arr_0 [i_1] [i_3])))) ? ((-(((/* implicit */int) arr_9 [i_3] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))))))));
                        arr_13 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (17606546289908559640ULL))))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_1))))) <= (((/* implicit */int) ((840197783800991994ULL) >= (17606546289908559615ULL))))))) : (((/* implicit */int) var_2))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8))))))))));
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_10))));
                        arr_17 [(signed char)4] [i_4] [i_2] [i_2] = ((/* implicit */long long int) min(((((_Bool)1) ? (((/* implicit */int) ((-2466224063277707604LL) > (((/* implicit */long long int) ((/* implicit */int) (short)7682)))))) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((var_2), (((/* implicit */signed char) var_6)))))));
                    }
                    arr_18 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 1514945430)))))) : (((var_4) + (((/* implicit */long long int) ((/* implicit */int) var_5)))))))) ? (max(((-(((/* implicit */int) var_6)))), (((/* implicit */int) var_6)))) : (max(((-(((/* implicit */int) var_10)))), (((var_8) ? (((/* implicit */int) var_8)) : (arr_2 [i_0] [6LL])))))));
                    var_16 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
                }
            }
        } 
    } 
}
